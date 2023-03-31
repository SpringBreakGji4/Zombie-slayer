using UnityEngine;

[CreateAssetMenu(fileName = "XRCardboardInputSettings", menuName = "Google Cardboard/Cardboard Input Settings")]
public class XRCardboardInputSettings : ScriptableObject
{
    public string ClickInput => clickInputName;
    public bool ClickOnHover => clickOnHover;
    public float GazeTime => gazeTimeInSeconds;


    [SerializeField]
    string clickInputName = "Submit";
    [SerializeField]
    bool clickOnHover = false;
    [SerializeField, Range(.5f, 5)]
    float gazeTimeInSeconds = 2f;
}