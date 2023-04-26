using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Hashtable = ExitGames.Client.Photon.Hashtable;

public class PlayerController : MonoBehaviour
{
    
    [SerializeField] float mouseSensitivity, sprintSpeed, walkSpeed, jumpForce, smoothTime;
    float verticalLookRotation;
    bool grounded;
    Vector3 smoothMoveVelocity;
    Vector3 moveAmount;
    [SerializeField] GameObject ui;
    
    
    
    Rigidbody rb;
    
    //Photon part
    PhotonView PV;
    //Photon part end
    
    void Awake()
    {
        rb = GetComponent<Rigidbody>();
        //Photon part
        PV = GetComponent<PhotonView>();
        //Photon part end
    }

    void Start()
    {
        //Photon part
        if(!PV.IsMine)
        {
            Debug.Log("Destroy");
            Destroy(GetComponentInChildren<Camera>().gameObject); //without this, player will below the ground
            Destroy(rb);
            Destroy(ui);
        }
    }

    void Update()
    {
        //photon part
        if(!PV.IsMine)
            return;
        //photon part end
        //transform.Rotate(Vector3.up * Input.GetAxisRaw("Mouse X") * mouseSensitivity);
    }
    
    public void SetGroundedState(bool _grounded)
    {
        grounded = _grounded;
    }

    void FixedUpdate()
    {
        if(!PV.IsMine)
            return;
        rb.MovePosition(rb.position + transform.TransformDirection(moveAmount) * Time.fixedDeltaTime);
    }
}
