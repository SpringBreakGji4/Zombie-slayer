using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bullet : MonoBehaviour
{
    GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    void Update()
    {
        int numOfBullet = player.GetComponent<PlayerShoot>().numOfBullet;
        gameObject.GetComponent<Text>().text = player.GetComponent<PlayerShoot>().numOfBullet.ToString();
    }
}
