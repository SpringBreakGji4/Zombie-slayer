using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class StartMenu : MonoBehaviour
{
    public GameObject e;

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
}
