using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;

public class ARTapAssetBundleTest : MonoBehaviour
{
    private ARSessionOrigin arOrigin;
    private bool placementPoseValid = false;
    private Pose placementPose;
    private GameObject placeObject;
    // Start is called before the first frame update
    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
        StartCoroutine(GetAssetBundle());
    }

    void Update()
    {
        updatePlacementPose();
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
    // Update is called once per frame
    IEnumerator GetAssetBundle() {
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle("https://storage.googleapis.com/adrop/model.cube");
        yield return www.SendWebRequest();
        
        if(www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        }
        else {
            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);
            Debug.Log("get bundle content successfully");
            // UnityEngine.Object[] temp = bundle.LoadAllAssets();
            // placeObject = (GameObject) temp[0];
            // Debug.Log("convert to placeObject successfully");
            // Instantiate(temp[0], placementPose.position, placementPose.rotation);

            AssetBundleRequest request = bundle.LoadAssetAsync ("model.cube", typeof(GameObject));
            Debug.Log("begin load request");
            // Wait for completion
            yield return request;

            GameObject obj = request.asset as GameObject;
            Debug.Log("transform to obj successfully");
            Instantiate(obj, placementPose.position, placementPose.rotation);
            Debug.Log("Instantiate successfully");

        }
    }
}
