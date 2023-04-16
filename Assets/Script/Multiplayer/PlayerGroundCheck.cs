using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroundCheck : MonoBehaviour
{
    PlayerController player;
    
    void Awake()
    {
        player = GetComponentInParent<PlayerController>();
    }
    
    void OnTriggerEnter(Collider other)
    {
        if(other.gameObject == player.gameObject)
            return;

        player.SetGroundedState(true);
    }
    
    void OnTriggerExit(Collider other)
    {
        if(other.gameObject == player.gameObject)
            return;

        player.SetGroundedState(false);
    }
    
    void OnTriggerStay(Collider other)
    {
        if(other.gameObject == player.gameObject)
            return;

        player.SetGroundedState(true);
    }
}
