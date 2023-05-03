using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class network_normal_object_movement : NetworkBehaviour
{
	public float speed = 10f;   // player movement speed
    	float horizontalMove = 0f;
   	float verticalMove = 0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
	horizontalMove = Input.GetAxis("Horizontal");
        verticalMove = Input.GetAxis("Vertical");
        transform.Translate(new Vector3(horizontalMove, 0, verticalMove) * speed * Time.deltaTime);
    }
}
