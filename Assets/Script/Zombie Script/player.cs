using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour
{
	public float speed = 10f;   // player movement speed
    	float horizontalMove = 0f;
   	float verticalMove = 0f;	
    	Vector3 previousPos;
	Vector3 currentPos;

	// Start is called before the first frame update
    	void Start(){
        
    	}

    	// Update is called once per frame
    	void Update(){
		previousPos = transform.position;
		if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.DownArrow) ||Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow)){
			horizontalMove = Input.GetAxis("Horizontal");
        		verticalMove = Input.GetAxis("Vertical");
			currentPos = new Vector3(horizontalMove, 0, verticalMove) * speed * Time.deltaTime;
			transform.LookAt(currentPos);
			GetComponent<Animation>().Play("Run");
			transform.Translate(currentPos);
		}
		else{
			GetComponent<Animation>().Play("Idle");	
			
		}
        	
	}
}
