using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseMenu : MonoBehaviour
{

    public GameObject[] btnArr = new GameObject[4];
    public int idx = 0;
    public GameObject pauseMenuUI;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        btnArr[idx].GetComponent<UnityEngine.UI.Selectable>().Select();
        
        // if (Input.GetButtonDown("js0"))
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            idx = 0;
            pauseMenuUI.SetActive(false);
            Time.timeScale = 1f;
        }
        // if (Input.GetAxis("Horizontal") > 0)
        if (Input.GetKeyDown(KeyCode.S))
        {
            idx = (idx + 1) % 4;
        }
        // if (Input.GetAxis("Horizontal") < 0)
        if (Input.GetKeyDown(KeyCode.W))
        {
            if (idx == 0)
                idx = 3;
            else
                idx--;
        }
        // if (Input.GetButtonDown("js5"))
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (idx == 0)
            {
                idx = 0;
                Time.timeScale = 1f;
                pauseMenuUI.SetActive(false);
            }
            if (idx == 1)
            {
                
            }
            if (idx == 2)
            {
                
            }
            if (idx == 3)
            {
                Application.Quit();
            }
        }
    }
}
