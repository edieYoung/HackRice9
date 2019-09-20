using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;


public class ARTapToPlaceObject : MonoBehaviour
{
    private ARSessionOrigin arOrigin;
    private Pose placementPose;
    private bool placementPoseValid = false;
    // Start is called before the first frame update
    public GameObject placementIndicator;

    public GameObject placeObject;
    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
    }

    // Update is called once per frame
    void Update()
    {
        updatePlacementPose();
        updatePlacementIndicator();

        if (placementPoseValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
            placeMyObject();
        }
    }

    private void placeMyObject() {
        Instantiate(placeObject, placementPose.position, placementPose.rotation);
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
}
