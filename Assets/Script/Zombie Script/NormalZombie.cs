using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	public float moveSpeed = 2f;
    public float attackRange = 1.5f;
	public int maxHealth = 100;
	public int defense = 10;
	public GameObject zombie;	


	private int currentHealth;
	private bool isDead = false;
	private Transform target;


    // Start is called before the first frame update
    void Start()
    {
        currentHealth = maxHealth;
        target = GameObject.FindGameObjectWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
