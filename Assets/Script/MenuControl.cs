using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MenuControl : MonoBehaviour
{
    public GameObject pauseMenu;
    // public GameObject difficultyMenu;
    public bool isPaused = false;
    public GameObject resume;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("js11")){
            if (isPaused)
                Pause(false);
            else
                Pause(true);
        }
    }

    public void Pause(bool flag)
    {
        if (flag)
        {
            pauseMenu.SetActive(true);
            isPaused = true;
            Time.timeScale = 0f;
            EventSystem.current.SetSelectedGameObject(null);
            EventSystem.current.SetSelectedGameObject(resume);
        }
        else
        {
            pauseMenu.SetActive(false);
            isPaused = false;
            Time.timeScale = 1f;
        }
    }


}
