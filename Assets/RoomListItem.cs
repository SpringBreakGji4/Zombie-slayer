using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RoomListItem : MonoBehaviour
{
    [SerializeField] TMP_Text text;
    
    RoomInfo info;
    
    public void SetUp(RoomInfo _info)
    {
        info = _info;
        text.text = _info.Name;
    }
    
    public void OnClick()
    {
        
    }
}
