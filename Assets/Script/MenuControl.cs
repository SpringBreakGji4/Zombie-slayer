using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuControl : MonoBehaviour
{
    public GameObject pauseMenu;
    // public GameObject difficultyMenu;
    public bool isPaused = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape)){
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
        }
        else
        {
            pauseMenu.SetActive(false);
            isPaused = false;
            Time.timeScale = 1f;
        }
    }

    // public void ShowDifficulty()
    // {
    //     difficultyMenu.SetActive(true);
    // }

    // public void SelectDifficulty(int diff)
    // {
    //     if (diff == 0)
    //         Debug.Log("easy");
    //     if (diff == 1)
    //         Debug.Log("normal");
    //     if (diff == 2)
    //         Debug.Log("hard");
    //     difficultyMenu.SetActive(false);
    // }
}
