using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
using Unity.Networking.Transport;
using UnityEngine;
using UnityEngine.Networking;

public class CustomManager : MonoBehaviour
{
    public NetworkManager NetworkManager;
    public UnityTransport Transport;
    
    public void StartServer()
    {
        NetworkManager.StartServer();
    }

    public void StartHost()
    {
        NetworkManager.StartHost();
    }

    public void StartClient()
    {
        NetworkManager.StartClient();
    }
    
}