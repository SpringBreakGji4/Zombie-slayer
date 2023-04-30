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
            attack = 5;
            numOfBullet = 10;
        } else if (type == GunType.M4) {
            attack = 6;
            numOfBullet = 20;
        } else if (type == GunType.M79) {
            attack = 7;
            numOfBullet = 25;
        } else if (type == GunType.Pistol) {
            attack = 8;
            numOfBullet = 5;
        } else if (type == GunType.RailGun) {
            attack = 9;
            numOfBullet = 7;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void PointerEnter()
    {
        var outline = GetComponent<Outline>();
        outline.enabled = true;

        if (Input.GetMouseButtonDown(0))
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

    public void PointerExit()
    {
        var outline = GetComponent<Outline>();
        outline.enabled = false;

        pickup = false; 
    }
}
