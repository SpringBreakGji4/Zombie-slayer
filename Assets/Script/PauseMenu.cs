using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;
using Photon.Realtime;

public class PauseMenu : MonoBehaviour
{

    public GameObject[] btnArr = new GameObject[4];
    public int idx = 0;
    public GameObject pauseMenuUI;
    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Restart()
    {
        Debug.Log("restart");
        PhotonNetwork.LoadLevel(0);
    }

    public void Quit()
    {
        Debug.Log("quit");
        Application.Quit();
    }
}
