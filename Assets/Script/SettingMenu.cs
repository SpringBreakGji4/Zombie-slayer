using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingMenu : MonoBehaviour
{
    public GameObject bgm;
    public GameObject settingMenuUI;
    private string[] vol_arr = {"Muted", "Low", "Medium", "High"};
    private int vol_idx = 3;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        settingMenuUI.transform.Find("Panel/VolumeValue").GetComponent<TMPro.TextMeshProUGUI>().text = vol_arr[vol_idx];
    }
    
    public void VolumeDown()
    {
        if (vol_idx == 0)
            return;
        else if (vol_idx == 1){
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 0f;
            vol_idx = 0;
        }
        else if (vol_idx == 2){
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 0.2f;
            vol_idx = 1;
        }
        else{
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 0.5f;
            vol_idx = 2;
        }
        
    }

    public void VolumeUp()
    {
        if (vol_idx == 3)
            return;
        else if (vol_idx == 2){
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 1f;
            vol_idx = 3;
        }
        else if (vol_idx == 1){
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 0.5f;
            vol_idx = 2;
        }
        else{
            bgm.GetComponent<UnityEngine.AudioSource>().volume = 0.2f;
            vol_idx = 1;
        }
    }

}
