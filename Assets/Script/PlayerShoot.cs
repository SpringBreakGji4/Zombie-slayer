using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour
{
    [SerializeField]
    GameObject _bulletSpark;

    [SerializeField]
    GameObject _blood;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("OK"))
        {
            Shoot();
        }
    }

    void Shoot()
    {
        Vector3 screenCentre = new Vector3(.5f, .5f, 0);
        Ray ray = Camera.main.ViewportPointToRay(screenCentre);
        RaycastHit hit;

        if(Physics.Raycast(ray, out hit))
        {
            if (hit.collider.tag != "Zombie") {
                GameObject go = Instantiate(_bulletSpark, hit.point, Quaternion.identity);
                Destroy(go, 1);
            }
            else {
                GameObject go = Instantiate(_blood, hit.point, Quaternion.identity);
                Destroy(go, 1);
            }

            NormalZombie normalZombie = hit.transform.GetComponent<NormalZombie>();
            AdvZombie advZombie = hit.transform.GetComponent<AdvZombie>();       

            if (normalZombie != null){
                normalZombie.Damage(10);
            }   

            if (advZombie != null){
                advZombie.Damage(10);
            }      
            
        }
    }
}
