using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Menu : MonoBehaviour
{
    public string menuName;
    public bool open;
    public GameObject e;
    public GameObject defaultBtn;

    public void Open()
    {
        open = true;
        gameObject.SetActive(true);
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(defaultBtn);
    }

    public void Close()
    {
        open = false;
        gameObject.SetActive(false);
    }
}
