using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GunType
{
    Shotgun,
    M4
}

public class Gun : MonoBehaviour
{
    public bool pickup;
    public GunType type = GunType.Shotgun;
    public int attack;
    public int numOfBullet;
    public Transform gunContainer;
    
    // Start is called before the first frame update
    void Start()
    {
        pickup = false;

        if (type == GunType.Shotgun) {
            attack = 5;
            numOfBullet = 10;
        } else if (type == GunType.M4) {
            attack = 3;
            numOfBullet = 20;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void PointerEnter()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject player = GameObject.FindGameObjectWithTag("Player");
            GameObject playerWeapon = GameObject.Find("M4(Player)");
            PlayerShoot playershoot = player.GetComponent<PlayerShoot>();
            playershoot.attack = attack;
            playershoot.numOfBullet = numOfBullet;
            pickup = true;
            
            if (playerWeapon != null) {
                playerWeapon.SetActive(false);
            }

            
        }   
    }

    void PointerExit()
    {
        pickup = false; 
    }
}
