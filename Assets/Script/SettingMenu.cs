using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SettingMenu : MonoBehaviour
{
    public GameObject bgm;
    public GameObject settingMenuUI;
    private string[] vol_arr = {"Muted", "Low", "Medium", "High"};
    private string[] se_arr = {"Muted", "Low", "Medium", "High"};
    private int vol_idx = 3;
    private int se_idx = 3;
    public GameObject volumeDownBtn, settingBtn;
    public GameObject gunContainer;
    public GameObject weapons;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        settingMenuUI.transform.Find("Panel/VolumeValue").GetComponent<TMPro.TextMeshProUGUI>().text = vol_arr[vol_idx];
        settingMenuUI.transform.Find("Panel/SoundEffectsValue").GetComponent<TMPro.TextMeshProUGUI>().text = se_arr[se_idx];
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

    public void SoundEffectsDown()
    {
        // Change the volume of all guns in weapons and the one player is holding
        int num_guns = weapons.transform.childCount;
        GameObject cur_gun = gunContainer.transform.GetChild(0).gameObject;
        GameObject[] guns = new GameObject[num_guns];

        for (int i = 0; i < num_guns; i++){
            guns[i] = weapons.transform.GetChild(i).gameObject;
        }

        if (se_idx == 0)
            return;
        else if (se_idx == 1){
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 0f;
            cur_gun.GetComponent<AudioSource>().volume = 0f;
            se_idx = 0;
        }
        else if (se_idx == 2){
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 0.2f;
            cur_gun.GetComponent<AudioSource>().volume = 0.2f;
            se_idx = 1;
        }
        else{
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 0.5f;
            cur_gun.GetComponent<AudioSource>().volume = 0.5f;
            se_idx = 2;
        }
        
    }

    public void SoundEffectsUp()
    {
        // Change the volume of all guns in weapons and the one player is holding
        int num_guns = weapons.transform.childCount;
        GameObject cur_gun = gunContainer.transform.GetChild(0).gameObject;
        GameObject[] guns = new GameObject[num_guns];

        for (int i = 0; i < num_guns; i++){
            guns[i] = weapons.transform.GetChild(i).gameObject;
        }

        if (se_idx == 3)
            return;
        else if (se_idx == 2){
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 1f;
            cur_gun.GetComponent<AudioSource>().volume = 1f;
            se_idx = 3;
        }
        else if (se_idx == 1){
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 0.5f;
            cur_gun.GetComponent<AudioSource>().volume = 0.5f;
            se_idx = 2;
        }
        else{
            foreach (GameObject g in guns)
                g.GetComponent<AudioSource>().volume = 0.2f;
            cur_gun.GetComponent<AudioSource>().volume = 0.2f;
            se_idx = 1;
        }
    }

    public void ShowSettingMenu()
    {
        settingMenuUI.SetActive(true);
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(volumeDownBtn);
    }

    public void CloseSettingMenu()
    {
        settingMenuUI.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(settingBtn);
    }
}
