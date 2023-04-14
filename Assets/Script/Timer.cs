using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Timer : MonoBehaviour
{
    public float timeValue;
    public Text timeText, result, zombieText;
    public int zombieNum;
    public GameObject e;
    public GameObject restartMenu, restart;
    public GameObject gameinfo;

    // Start is called before the first frame update
    void Start()
    {
        zombieNum = 20;
        //timeValue = 90;
	timeValue = 300;
    }

    // Update is called once per frame
    void Update()
    {
        if (timeValue > 0) {
             timeValue -= Time.deltaTime;
        }
        else {
            if (zombieNum > 0)
            {
                // Debug.Log("Lose!");
                result.text = "You Lose!";
            } else 
            {
                // Debug.Log("Win!");
                result.text = "You Win!";
            }

            gameinfo.SetActive(false);
            EndGame();
            zombieNum = 11;
        }

        if (zombieNum <= 0)
        {
            // Debug.Log("Win!");
            result.text = "You Win!";
            gameinfo.SetActive(false);
            EndGame();
            zombieNum = 11;
        }

        timeText.text = ((int)timeValue).ToString();
        zombieText.text = zombieNum.ToString();
        // Debug.Log(timeValue);
    }

    public void EndGame()
    {
        restartMenu.SetActive(true);
        Time.timeScale = 0f;
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(restart);
        e.GetComponent<StandaloneInputModule>().enabled = true;
        e.GetComponent<XRCardboardInputModule>().enabled = false;
    }

}
