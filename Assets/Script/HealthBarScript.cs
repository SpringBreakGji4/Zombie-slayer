using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBarScript : MonoBehaviour
{
    public GameObject BloodFill;
    public GameObject HealthBarText;
    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float fill = player.GetComponent<PlayerShoot>().curHealth / player.GetComponent<PlayerShoot>().maxHealth;
        BloodFill.GetComponent<Image>().fillAmount = fill;
        HealthBarText.GetComponent<Text>().text = player.GetComponent<PlayerShoot>().curHealth + " / " + player.GetComponent<PlayerShoot>().maxHealth;
    }
}
