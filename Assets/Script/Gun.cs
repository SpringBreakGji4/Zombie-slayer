using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GunType
{
    Shotgun,
    M4,
    M79,
    Pistol,
    RailGun
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
        var outline = GetComponent<Outline>();
        outline.OutlineMode = Outline.Mode.OutlineVisible;
        outline.enabled = false;

        pickup = false;

        if (type == GunType.Shotgun) {
            attack = 30;
            numOfBullet = 3;
        } else if (type == GunType.M4) {
            attack = 10;
            numOfBullet = 10;
        } else if (type == GunType.M79) {
            attack = 15;
            numOfBullet = 7;
        } else if (type == GunType.Pistol) {
            attack = 5;
            numOfBullet = 20;
        } else if (type == GunType.RailGun) {
            attack = 20;
            numOfBullet = 9;
        }
    }

    // Update is called once per frame
    void Update()
    {
        var outline = GetComponent<Outline>();
        if (outline.enabled) {
            if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("js0"))
            {
                // Debug.Log("pick up");
                GameObject player = GameObject.FindGameObjectWithTag("Player");
                PlayerShoot playershoot = player.GetComponent<PlayerShoot>();
                playershoot.attack = attack;
                playershoot.numOfBullet = numOfBullet;
                pickup = true;

                if (gunContainer.GetChild(0).gameObject != null) {
                    Destroy(gunContainer.GetChild(0).gameObject);
                }
                
                transform.SetParent(gunContainer);
                transform.localPosition = Vector3.zero;
                transform.localRotation = Quaternion.Euler(Vector3.zero);
                transform.localScale = Vector3.one;
                
            }   
        } 
    }

    public void PointerEnter()
    {
        var outline = GetComponent<Outline>();
        outline.enabled = true;
        // Debug.Log("PointerEnter"); 
    }

    public void PointerExit()
    {
        // Debug.Log("PointerExit");
        var outline = GetComponent<Outline>();
        outline.enabled = false;

        pickup = false; 
    }
}
