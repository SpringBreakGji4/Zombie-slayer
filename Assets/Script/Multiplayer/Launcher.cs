using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;
using Photon.Realtime;
using System.Linq;
using UnityEngine.EventSystems;

public class Launcher : MonoBehaviourPunCallbacks
{
    public static Launcher Instance;
    
    [SerializeField] TMP_InputField roomNameInputField;
    [SerializeField] TMP_Text errorText;
    [SerializeField] TMP_Text roomNameText;
    [SerializeField] Transform roomListContent;
    [SerializeField] GameObject roomListItemPrefab;
    [SerializeField] Transform playerListContent;
    [SerializeField] GameObject PlayerListItemPrefab;
    [SerializeField] GameObject startGameButton;
    private string _randomRoomName;
    [SerializeField] TMP_Text text;
    [SerializeField] GameObject e;
    [SerializeField] GameObject soloBtn;

    /// <summary>
    /// The maximum number of players per room. When a room is full, it can't be joined by new players, and so new room will be created.
    /// </summary>
    [Tooltip("The maximum number of players per room. When a room is full, it can't be joined by new players, and so new room will be created")]
    [SerializeField]
    private byte maxPlayersPerRoom = 3;
    
    void Awake()
    {
        Instance = this;
    }
    
    void Start()
    {
        Debug.Log("Connecting to the master");
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master");
        PhotonNetwork.JoinLobby();
        Debug.Log("We are now connected to the " + PhotonNetwork.CloudRegion + " server!");
        PhotonNetwork.AutomaticallySyncScene = true; // Automatically load scene for all the client but not just host loaded 
    }

    public override void OnJoinedLobby()
    {
        MenuManager.Instance.OpenMenu("title");
        Debug.Log("Joined Lobby");
        PhotonNetwork.NickName = "Player " + Random.Range(0, 1000).ToString("0000"); //random generate username
        Debug.Log("User Name: " + PhotonNetwork.NickName);
        text.text = PhotonNetwork.NickName;
    }

    public void CreateRoom()
    {
        _randomRoomName = "Room" + Random.Range(1, 999).ToString();
        /*
        if (string.IsNullOrEmpty(roomNameInputField.text))
        {
            return;
        }*/
        PhotonNetwork.CreateRoom(_randomRoomName, new RoomOptions { MaxPlayers = maxPlayersPerRoom });
        MenuManager.Instance.OpenMenu("loading");
    }

    public override void OnJoinedRoom()
    {
        MenuManager.Instance.OpenMenu("room");
        roomNameText.text = PhotonNetwork.CurrentRoom.Name;
        
        Player[] players = PhotonNetwork.PlayerList;
        
        foreach(Transform child in playerListContent)
        {
            Destroy(child.gameObject);
        }
        
        for (int i = 0; i < players.Count(); i++)
        {
            Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerListItem>().SetUp(players[i]);
        }
        
        startGameButton.SetActive(PhotonNetwork.IsMasterClient); // Let only host can start the game but other clients cannot start the game
    }
    
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        startGameButton.SetActive(PhotonNetwork.IsMasterClient); // In case the master leave the room, photon will reassign a master role to one of client randomly
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        errorText.text = "Room Creation Failed: " + message;
        Debug.Log("Room Creation Failed: " + message);
        MenuManager.Instance.OpenMenu("error");
    }
    
    public void StartGame()
    {
        PhotonNetwork.LoadLevel(1); //use "1" as the parameter because 1 is the build index of our game scene as we set it in the build settings
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        MenuManager.Instance.OpenMenu("loading");
    }
    
    public void JoinRoom(RoomInfo info)
    {
        PhotonNetwork.JoinRoom(info.Name);
        MenuManager.Instance.OpenMenu("loading");
    }

    public override void OnLeftRoom()
    {
        MenuManager.Instance.OpenMenu("title");
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
        foreach(Transform trans in roomListContent)
        {
            Destroy(trans.gameObject);
        }
        
        for(int i = 0; i < roomList.Count; i++)
        {
            if(roomList[i].RemovedFromList)
                continue;
            Instantiate(roomListItemPrefab, roomListContent).GetComponent<RoomListItem>().SetUp(roomList[i]);
        }
	}
    
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Instantiate(PlayerListItemPrefab, playerListContent).GetComponent<PlayerListItem>().SetUp(newPlayer);
    }

}
