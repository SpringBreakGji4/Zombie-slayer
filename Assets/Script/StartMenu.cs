using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class StartMenu : MonoBehaviour
{
    public GameObject e;
    public GameObject createRoomBtn;
    public GameObject startBtn;
    public GameObject soloBtn;

    void Start()
    {
        StartCoroutine(ChangeControlMode());
    }

    IEnumerator ChangeControlMode()
    {
        yield return new WaitForSeconds(1);
        e.GetComponent<StandaloneInputModule>().enabled = true;
        e.GetComponent<XRCardboardInputModule>().enabled = false;
    }

    public void ShowIntro()
    {
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(startBtn);
    }

    public void BackToStartMenu()
    {
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(soloBtn);
    }

    public void StartSolo()
    {
        SceneManager.LoadScene(1);
    }

    public void StartCoop()
    {
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(createRoomBtn);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
