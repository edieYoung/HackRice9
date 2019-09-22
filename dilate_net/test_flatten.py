# System libs
import os
import argparse
from distutils.version import LooseVersion
# Numerical libs
import numpy as np
import torch
import torch.nn as nn
from scipy.io import loadmat
import csv
# Our libs
from dataset import TestDataset
from models import ModelBuilder, SegmentationModule
from utils import colorEncode, find_recursive, setup_logger
from lib.nn import user_scattered_collate, async_copy_to
from lib.utils import as_numpy
from PIL import Image
from tqdm import tqdm
from config import cfg
warm_list = ["Chair_3", "Chair_8", "CoffeTable_1"]
cold_list = ["Chair_4", "Chair_5", "CoffeTable_2", "Cooker_1", "Couch_3"]

big_list = ["CoffeTable_1", "CoffeTable_2", "Cooker_1", "Couch_3"]
small_list = ["Chair_3", "Chair_4", "Chair_5", "Chair_8"]

colors = loadmat('data/color150.mat')['colors']
names = {}
with open('data/object150_info.csv') as f:
    reader = csv.reader(f)
    next(reader)
    for row in reader:
        names[int(row[0])] = row[5].split(";")[0]

TEST_result = "./"
DIR = "ade20k-resnet50dilated-ppm_deepsup"
TEST_checkpoint = "epoch_20.pth"

def visualize_result(data, pred, cfg):
    (img, info) = data

    # print predictions in descending order
    pred = np.int32(pred)
    pixs = pred.size
    uniques, counts = np.unique(pred, return_counts=True)
    print("Predictions in [{}]:".format(info))
    for idx in np.argsort(counts)[::-1]:
        name = names[uniques[idx] + 1]
        ratio = counts[idx] / pixs * 100
        if ratio > 0.1:
            print("  {}: {:.2f}%".format(name, ratio))

    # colorize prediction
    pred_color = colorEncode(pred, colors).astype(np.uint8)

    # aggregate images and save
    im_vis = np.concatenate((img, pred_color), axis=1)

    img_name = info.split('/')[-1]
    Image.fromarray(im_vis).save(
        os.path.join(cfg.TEST.result, img_name.replace('.jpg', '.png')))


def test(segmentation_module, loader, gpu):
    segmentation_module.eval()

    pbar = tqdm(total=len(loader))
    for batch_data in loader:
        # process data
        batch_data = batch_data[0]
        segSize = (batch_data['img_ori'].shape[0],
                   batch_data['img_ori'].shape[1])
        img_resized_list = batch_data['img_data']

        with torch.no_grad():
            scores = torch.zeros(1, cfg.DATASET.num_class, segSize[0], segSize[1])
            scores = async_copy_to(scores, gpu)

            for img in img_resized_list:
                feed_dict = batch_data.copy()
                feed_dict['img_data'] = img
                del feed_dict['img_ori']
                del feed_dict['info']
                feed_dict = async_copy_to(feed_dict, gpu)

                # forward pass
                pred_tmp = segmentation_module(feed_dict, segSize=segSize)
                scores = scores + pred_tmp / len(cfg.DATASET.imgSizes)

            _, pred = torch.max(scores, dim=1)
            pred = as_numpy(pred.squeeze(0).cpu())

        # visualization
        visualize_result(
            (batch_data['img_ori'], batch_data['info']),
            pred,
            cfg
        )

        pbar.update(1)
        return pred


def main_run(cfg, gpu):
    torch.cuda.set_device(0)

    # Network Builders
    net_encoder = ModelBuilder.build_encoder(
        arch=cfg.MODEL.arch_encoder,
        fc_dim=cfg.MODEL.fc_dim,
        weights=cfg.MODEL.weights_encoder)
    net_decoder = ModelBuilder.build_decoder(
        arch=cfg.MODEL.arch_decoder,
        fc_dim=cfg.MODEL.fc_dim,
        num_class=cfg.DATASET.num_class,
        weights=cfg.MODEL.weights_decoder,
        use_softmax=True)

    crit = nn.NLLLoss(ignore_index=-1)

    segmentation_module = SegmentationModule(net_encoder, net_decoder, crit)

    # Dataset and Loader
    dataset_test = TestDataset(
        cfg.list_test,
        cfg.DATASET)
    loader_test = torch.utils.data.DataLoader(
        dataset_test,
        batch_size=cfg.TEST.batch_size,
        shuffle=False,
        collate_fn=user_scattered_collate,
        num_workers=5,
        drop_last=True)

    segmentation_module.cuda()

    # Main loop
    pred = test(segmentation_module, loader_test, gpu)

    print('Inference done!')
    return pred


def run():
    assert LooseVersion(torch.__version__) >= LooseVersion('0.4.0'), \
        'PyTorch>=0.4.0 is required'

    cfg.merge_from_file("config/ade20k-resnet50dilated-ppm_deepsup.yaml")
    cfg.merge_from_list(['DIR', 'ade20k-resnet50dilated-ppm_deepsup', 'TEST.result', './', 'TEST.checkpoint', 'epoch_20.pth'])
    # cfg.freeze()

    logger = setup_logger(distributed_rank=0)   # TODO
    logger.info("Loaded configuration file {}".format("config/ade20k-resnet50dilated-ppm_deepsup.yaml"))
    logger.info("Running with config:\n{}".format(cfg))

    cfg.MODEL.arch_encoder = cfg.MODEL.arch_encoder.lower()
    cfg.MODEL.arch_decoder = cfg.MODEL.arch_decoder.lower()

    # absolute paths of model weights
    cfg.MODEL.weights_encoder = os.path.join(
        cfg.DIR, 'encoder_' + cfg.TEST.checkpoint)
    cfg.MODEL.weights_decoder = os.path.join(
        cfg.DIR, 'decoder_' + cfg.TEST.checkpoint)

    assert os.path.exists(cfg.MODEL.weights_encoder) and \
        os.path.exists(cfg.MODEL.weights_decoder), "checkpoint does not exitst!"
    imgs = "/content/semantic-segmentation-pytorch/ADE_val_00001519.jpg"
    # generate testing image list
    if os.path.isdir(imgs):
        imgs = find_recursive(imgs)
    else:
        imgs = [imgs]
    assert len(imgs), "imgs should be a path to image (.jpg) or directory."
    cfg.list_test = [{'fpath_img': x} for x in imgs]

    if not os.path.isdir(cfg.TEST.result):
        os.makedirs(cfg.TEST.result)

    return main_run(cfg, 0)

pred = run()

import cv2
image = cv2.imread('./ADE_val_00001519.jpg')

furniture_ids = [8, 9, 11, 15, 16, 19, 20, 23, 24, 25, 28, 29, 
                 31, 32, 34, 36, 37, 38, 40, 54, 57, 58, 59, 63, 
                 65, 66, 70, 76, 90, 93, 113, 119, 123,125, 132, 
                 140, 143, 144, 149]


def sense_understanding(pred):
  """
  method to calculate the tone of the environment and the furnitures
  """
  
  furniture_total = 0
  furniture_warm = 0
  furniture_cold = 0
  furniture_nonde = 0

  env_total = 0
  env_warm = 0
  env_cold = 0

  cate = 0

  floor_count = 0
  total_count = 0
  
  for index, label in np.ndenumerate(pred):
    if label < 0: 
      continue
    else:
      if cate == 0:
        if label == 23:
          # living room
          cate = 1
        elif label == 24:
          # reading room / bed room
          cate = 2
        elif label == 47:
          # bathroom
          cate = 3
        elif label == 73:
          # kitchen
          cate = 4

      total_count += 1
      
      if label == 3:
        floor_count += 1
      
      red = image[(index[0], index[1], 0)]
      green = image[(index[0], index[1], 1)]
      blue = image[(index[0], index[1], 2)]
      if label + 1 in furniture_ids:
        furniture_total += 1
        if red >= 200:
          furniture_warm += 1
        elif blue >= 200:
          furniture_cold += 1
        elif green >= 170:
          furniture_warm += 1
      else:
        env_total += 1
        # it is the environment color
        if red >= 200:
          env_warm += 1
        elif blue >= 200:
          env_cold += 1
        elif green >= 170:
          env_warm += 1
  print("furniture_warm {}, furniture_cold {}".format(furniture_warm, furniture_cold))
  print("env_warm {}, env_cold {}".format(env_warm, env_cold))
  print("floor count {}".format(floor_count))
  print("floor count / total count {}".format(floor_count / (total_count + 0.1)))

  f_warm_ratio = furniture_warm / (furniture_warm + furniture_cold + 0.1)
  e_warm_ratio = env_warm / (env_warm + env_cold + 0.1)

  f_ration = furniture_warm / furniture_total
  e_ration = env_warm / env_total

  return ( f_warm_ratio + e_warm_ratio ) / 2 >= 0.5, floor_count / (total_count + 0.1) >= 0.15, cate

def recommend(is_warm, has_space, cate):
  if is_warm:
    for n in range(len(warm_list)):
      if has_space:
        if warm_list[n] in big_list:
          return warm_list[n]
      else:
        if warm_list[n] in small_list:
          return warm_list[n]
  else:
    for n in range(len(cold_list)):
      if has_space:
        if warm_list[n] in big_list:
          return warm_list[n]
      else:
        if warm_list[n] in small_list:
          return warm_list[n]

is_warm, has_space, cate = sense_understanding(pred)

name = recommend(is_warm, has_space, cate)


print("tone warm {}".format(is_warm))
print("has more space {}".format(has_space))
print("room category {}".format(cate))
print("recommended furniture " + name)