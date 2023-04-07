using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingMenu : MonoBehaviour
{
    public GameObject bgm;
    public GameObject settingMenuUI;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        settingMenuUI.transform.Find("Panel/VolumeValue").GetComponent<TMPro.TextMeshProUGUI>().text = Mathf.Ceil(bgm.GetComponent<UnityEngine.AudioSource>().volume * 10).ToString();
    }
    
    public void VolumeDown()
    {
        float val = bgm.GetComponent<UnityEngine.AudioSource>().volume;
        if (val == 0)
            return;
        bgm.GetComponent<UnityEngine.AudioSource>().volume = val - 0.1f;
    }

    public void VolumeUp()
    {
        float val = bgm.GetComponent<UnityEngine.AudioSource>().volume;
        if (val == 1)
            return;
        bgm.GetComponent<UnityEngine.AudioSource>().volume = val + 0.1f;
    }

}
