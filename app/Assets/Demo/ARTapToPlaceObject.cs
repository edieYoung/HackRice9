using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;


public class ARTapToPlaceObject : MonoBehaviour
{
    private ARSessionOrigin arOrigin;
    private Pose placementPose;
    private bool placementPoseValid = false;
    // Start is called before the first frame update
    public GameObject placementIndicator;

    private GameObject placeObject;

    private bool objectPlaced;
    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
        placeObject = Instantiate(Resources.Load("Couch_3", typeof(GameObject))) as GameObject;
        objectPlaced = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!objectPlaced) {
            updatePlacementPose();
            updatePlacementIndicator();
            if (placementPoseValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
                placeMyObject();
            }
        }
    }

    private void placeMyObject() {
        Instantiate(placeObject, placementPose.position, placementPose.rotation);
        objectPlaced = true;
    }

    private void updatePlacementPose() {
        var originPosition = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        arOrigin.Raycast(originPosition, hits, TrackableType.Planes);
        placementPoseValid = hits.Count > 0;
        if (placementPoseValid) {
            placementPose = hits[0].pose;
        }
    }

    private void updatePlacementIndicator() {
        if (placementPoseValid) {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
            var carmeraForward = Camera.current.transform.forward;
            var carmeraBearing = new Vector3(carmeraForward.x, 0, carmeraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(carmeraBearing);
        } else {
            placementIndicator.SetActive(false);
        }
    }

    IEnumerator GetAssetBundle() {
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle("https://storage.googleapis.com/adrop/model.cube");
        yield return www.SendWebRequest();
        
        if(www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        }
        else {
            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);
            Debug.Log("get bundle content successfully");
            UnityEngine.Object[] temp = bundle.LoadAllAssets();
            placeObject = (GameObject) temp[0];
            Debug.Log("convert to placeObject successfully");
            if (placementPoseValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
                placeMyObject();
            }
        }
    }
}
