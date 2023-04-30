using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MapBlueToothKey : MonoBehaviour
{
    private static readonly int key_count = 15;
    private readonly string[] js_buttons = new string[key_count];
    public GameObject jsKeyText;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < js_buttons.Length; i++)
        {
            js_buttons[i] = string.Format("js{0}", i);
        }
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.anyKey)
        {
            //Debug.Log("Bluetooth Key detected");
            TextMeshPro tm = jsKeyText.GetComponent<TextMeshPro>();
            tm.text = "Bluetooth Key:\n";
            for (int i = 0; i < js_buttons.Length; i++)
            {
                if (Input.GetButton(js_buttons[i]))
                {
                    tm.text += string.Format("joystick button {0}\n", js_buttons[i]); ;
                }

                
            }
            if (Input.GetButton("Submit"))
            {
                tm.text += string.Format("Submit \n"); ;
            }
            if (Input.GetButton("Cancel"))
            {
                tm.text += string.Format("Cancel \n"); ;
            }

            if (Input.GetButton("Jump"))
            {
                tm.text += string.Format("Jump \n"); ;
            }

            if(Input.GetAxis("Joystick Axis 1") != 0)
            {
                tm.text += string.Format("Joystick Axis 1: {0}\n", Input.GetAxis("Joystick Axis 1")); ;
            }

            if (Input.GetAxis("Joystick Axis 2") != 0)
            {
                tm.text += string.Format("Joystick Axis 2: {0}\n", Input.GetAxis("Joystick Axis 2")); ;
            }
        }

    }
}
