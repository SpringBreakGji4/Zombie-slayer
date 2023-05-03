using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using Photon.Pun;
using Photon.Realtime;


public class network_normal_object_movement : NetworkBehaviour
{
	public float speed = 10f;   // player movement speed
    	float horizontalMove = 0f;
   	float verticalMove = 0f;
	[SerializeField] private PhotonView PV;
    // Start is called before the first frame update
    void Start()
    {
		//PV = GetComponentInChildren<PhotonView>();
		PV = GetComponent<PhotonView>();
	
		/*Camera[] allCameras = FindObjectsOfType<Camera>();

        // Loop through each camera
        foreach (Camera camera in allCameras)
        {
            // Get the PhotonView component on the camera
            PhotonView view = camera.GetComponent<PhotonView>();

            // If the PhotonView exists and does not belong to the local player, destroy the camera
            if (view != null && !view.IsMine)
			{
				Debug.Log("destroy camera ...");
                Destroy(camera.gameObject);
            }
        }*/
    }

    // Update is called once per frame
    void Update()
    {
		
		if(!PV.IsMine)
        {
            Debug.Log("Destroy");
           
		}
	

	horizontalMove = Input.GetAxis("Horizontal");
        verticalMove = Input.GetAxis("Vertical");
        transform.Translate(new Vector3(horizontalMove, 0, verticalMove) * speed * Time.deltaTime);
    }
}
