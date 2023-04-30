using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour
{
    public float maxHealth;
    public float curHealth;
    public int attack;
    public int numOfBullet;

    [SerializeField]
    GameObject _bulletSpark;

    [SerializeField]
    GameObject _blood;

    public GameObject playerBlood;

    // Start is called before the first frame update
    void Start()
    {
        maxHealth = 200;
        curHealth = maxHealth;
        attack = 3;
        numOfBullet = 20;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetButtonDown("OK"))
        {
            Shoot();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        NormalZombie normalZombie = other.gameObject.GetComponent<NormalZombie>();
        AdvZombie advZombie = other.gameObject.GetComponent<AdvZombie>();

        if (normalZombie != null) {
            StartCoroutine(ShowPlayerBlood(1));
            if (normalZombie.zombie_mode == 1) {
                Debug.Log("hit by normalZombie 1");
            } else if (normalZombie.zombie_mode == 2) {
                Debug.Log("hit by normalZombie 2");
            } 
            curHealth -= normalZombie.attack;
            // Debug.Log("player health: " + curHealth);
        }
        else if (advZombie != null) {
            StartCoroutine(ShowPlayerBlood(1));
            if (advZombie.zombie_mode == 3) {
                Debug.Log("hit by advZombie 3");
            } 
            // else if (advZombie.zombie_mode == 4) {
            //     Debug.Log("advZombie 4");
            // } 
            else if (advZombie.zombie_mode == 5) {
                Debug.Log("hit by advZombie 5");
            }
            curHealth -= advZombie.attack;
            // Debug.Log("player health: " + curHealth);
        }

        IEnumerator ShowPlayerBlood (int seconds){
            playerBlood.SetActive(true);
            yield return new WaitForSeconds(seconds);
            playerBlood.SetActive(false);
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

            if (normalZombie != null && normalZombie.maxHealth > 0){
                normalZombie.Damage(attack);
            }   

            if (advZombie != null && advZombie.maxHealth > 0){
                advZombie.Damage(attack);
            }      
            
        }
    }
}
