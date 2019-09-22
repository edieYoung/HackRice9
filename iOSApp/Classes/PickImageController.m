//
//  PickImageController.m
//  Unity-iPhone
//
//  Created by edie.young on 9/21/19.
//

#import <Foundation/Foundation.h>
#import "PickImageController.h"
#import <Photos/Photos.h>



@implementation PickImageController



- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info
{
    NSString *type = [info objectForKey:UIImagePickerControllerMediaType];
    //当选择的类型是图片
    if ([type isEqualToString:@"public.image"])
    {
        //先把图片转成NSData
        UIImage* image = [info objectForKey:@"UIImagePickerControllerOriginalImage"];
     
//        NSData *data1;
//        if (UIImagePNGRepresentation(image) == nil)
//        {
//            data1 = UIImageJPEGRepresentation(image, 1);
//        }
//        else
//        {
//            data1 = UIImagePNGRepresentation(image);
//        }
//        //图片保存的路径
//        //这里将图片放在沙盒的documents文件夹中
//        NSString * DocumentsPath = [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"];
//        //文件管理器
//        NSFileManager *fileManager = [NSFileManager defaultManager];
//        //把刚刚图片转换的data对象拷贝至沙盒中 并保存为image.png
//        [fileManager createDirectoryAtPath:DocumentsPath withIntermediateDirectories:YES attributes:nil error:nil];
//        [fileManager createFileAtPath:[DocumentsPath stringByAppendingString:@"/image.png"] contents:data1 attributes:nil];
//        //得到选择后沙盒中图片的完整路径
//        NSString *filePath = [[NSString alloc]initWithFormat:@"%@%@",DocumentsPath,  @"/image.png"];
        
        NSString *objectName = [self imageUpload:image];
        NSLog(objectName);
        //关闭相册界面
        [picker dismissViewControllerAnimated:YES completion:^{
            NSString *okMessage = [NSString stringWithFormat:@"Image uploaded with url:%@,\nClick Start and place the recommended item now!", objectName];
            UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"Success!"
                                                                               message:okMessage
                                                                        preferredStyle:UIAlertControllerStyleAlert];
                
            UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                                      handler:^(UIAlertAction * action) {
                                                                          NSLog(@"action = %@", action);
                                                                      }];
            UIAlertAction* cancelAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault
                                                                      handler:^(UIAlertAction * action) {
                                                                          NSLog(@"action = %@", action);
                                                                      }];
             
            [alert addAction:defaultAction];
            [alert addAction:cancelAction];
            [self presentViewController:alert animated:YES completion:nil];
            NSLog(@"Image Uploaded");
            [self.view removeFromSuperview];
            
        }];
        
    }
}


- (void) imagePickerControllerDidCancel: (UIImagePickerController *)picker

{
    NSLog(@"cancel picking");
    [self dismissViewControllerAnimated:YES completion:nil];
}


- (NSString *) imageUpload:(UIImage *) image{

    //Compress image
            NSData *imageData = UIImageJPEGRepresentation(image, 0.001);
            
            NSString *url = @"http://35.227.174.6/upload";
            
            NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:url]
                                                                   cachePolicy:NSURLRequestReloadIgnoringLocalCacheData
                                                               timeoutInterval:30];
            request.HTTPMethod = @"POST";
            //分界线的标识符
            NSString *TWITTERFON_FORM_BOUNDARY = @"AaB03x";
            
            //分界线 --AaB03x
            NSString *MPboundary=[[NSString alloc]initWithFormat:@"--%@",TWITTERFON_FORM_BOUNDARY];
            //结束符 AaB03x--
            NSString *endMPboundary=[[NSString alloc]initWithFormat:@"%@--",MPboundary];
            
            /*
             上传格图片格式：
             --AaB03x
             Content-Disposition: form-data; name="file"; filename="currentImage.png"
             Content-Type: image/png
             */
            //http body的字符串
            NSMutableString *body=[[NSMutableString alloc]init];
            //    //添加分界线，换行
            //    [body appendFormat:@"%@\r\n",MPboundary];
            //添加分界线，换行
            [body appendFormat:@"%@\r\n",MPboundary];
            //声明file字段，文件名为currentImage.png
            NSDateFormatter *formatter=[[NSDateFormatter alloc]init];
            formatter.dateFormat=@"yyyyMMddHHmmss";
            NSString *str=[formatter stringFromDate:[NSDate date]];
            NSString *fileName=[NSString stringWithFormat:@"%@.jpg",str];
            [body appendFormat:@"%@", [NSString stringWithFormat:@"Content-Disposition: form-data; name=\"file\"; filename=\"%@\"\r\n",fileName]];
            //声明上传文件的格式
            [body appendFormat:@"Content-Type: image/jpg\r\n\r\n"];
            
            NSLog(@"网络请求body:%@",body);
            //声明结束符：--AaB03x--
            NSString *end=[[NSString alloc]initWithFormat:@"\r\n%@",endMPboundary];
            //声明myRequestData，用来放入http body
            NSMutableData *myRequestData=[NSMutableData data];
            //将body字符串转化为UTF8格式的二进制
            [myRequestData appendData:[body dataUsingEncoding:NSUTF8StringEncoding]];
            //将image的data加入
            [myRequestData appendData:imageData];
            //加入结束符--AaB03x--
            [myRequestData appendData:[end dataUsingEncoding:NSUTF8StringEncoding]];
            
            //设置HTTPHeader中Content-Type的值
            NSString *content=[[NSString alloc]initWithFormat:@"multipart/form-data; boundary=%@",TWITTERFON_FORM_BOUNDARY];
            //设置HTTPHeader
            [request setValue:content forHTTPHeaderField:@"Content-Type"];
            //设置Content-Length
            [request setValue:[NSString stringWithFormat:@"%lu", (unsigned long)[myRequestData length]] forHTTPHeaderField:@"Content-Length"];
            //设置http body
            [request setHTTPBody:myRequestData];
            
    __block NSString *responseStr = @"a";
    //        NSURLSession *session = [NSURLSession sharedSession];
            NSURLSessionConfiguration *sessionConfig = [NSURLSessionConfiguration defaultSessionConfiguration];
            NSURLSession *session = [NSURLSession sessionWithConfiguration:sessionConfig delegate:self delegateQueue:nil];
            NSURLSessionDataTask *task = [session dataTaskWithRequest:request completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
                //网络请求失败
                if (error != nil) {
                    return;
                }
                //成功进行解析
                NSMutableDictionary * dic = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
                responseStr = dic[@"res"];
                NSLog(@"%@--%@",dic, response);
                
            }];
            
            [task resume];
    NSLog(responseStr);
    return responseStr;
}

@end

