using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	public float moveSpeed = 2f;
	public float runSpeed = 4f;
    	public float attackRange = 1.5f;
	public float attackCooldown = 2f;
	public float detectRange = 10f;
	public int maxHealth = 100;
	public int defense = 10;
	public GameObject zombie;	
	public LayerMask obstacleMask;

	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	private bool isWalking = false;
	private bool isRunning = true;
	private Transform target;
	private Vector3 direction;
	private Rigidbody rb; 

    	// Start is called before the first frame update
    	void Start(){
        	currentHealth = maxHealth;
        	target = GameObject.FindGameObjectWithTag("Player").transform;
		rb = GetComponent<Rigidbody>();
    	}

    	// Update is called once per frame
    	void Update(){
		float distance = Vector3.Distance(transform.position, target.position);
		if(!isDead && distance < detectRange){
			if (distance < attackRange){
				if (!isAttacking){
					StartCoroutine(Attack());
				}
				GetComponent<Animation>().Play("Attack1");
			}
			else{
				transform.LookAt(target);
				if(isWalking){
					GetComponent<Animation>().Play("Walk");
					transform.position += transform.forward * moveSpeed * Time.deltaTime;
				}
				else if(isRunning){
					GetComponent<Animation>().Play("Run");
					transform.position += transform.forward * runSpeed * Time.deltaTime;
				}
				
			}		
        	}
		else{
			if(isDead){
				GetComponent<Animation>().Play("Death");
			}
			else{
				GetComponent<Animation>().Play("Idle");
			}
		}
    	}
	IEnumerator Attack(){
        	isAttacking = true;
		GetComponent<Animation>().Play("Idle");
        	yield return new WaitForSeconds(attackCooldown);
		//GetComponent<Animation>().Play("Attack1");
        	if (!isDead){
            		//target.GetComponent<Player>().TakeDamage(Random.Range(5, 15));
        	}
        	isAttacking = false;
    	}

	IEnumerator Die(){
       		// Play death animation or sound
        	yield return new WaitForSeconds(3f);
        	Destroy(gameObject);
    	}
}
