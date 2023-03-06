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
	//public GameObject Plane;
	public LayerMask obstacleMask;

	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	private bool isWalking = false;
	private bool isRunning = true;
	private Transform target;
	private Vector3 direction;
	//private Vector3 WorldPlane;
	private Vector3 targetPosition;
	private Rigidbody rb; 
	private Animation anim;

    	// Start is called before the first frame update
    	void Start(){
        	currentHealth = maxHealth;
        	target = GameObject.FindGameObjectWithTag("Player").transform;
		//WorldPlane = Plane.position;
		rb = GetComponent<Rigidbody>();
		anim = GetComponent<Animation>();
    	}

    	// Update is called once per frame
    	void Update(){
		//targetPosition = 
		targetPosition = target.position;
		targetPosition.y -= 1f;
		float distance = Vector3.Distance(transform.position, targetPosition);
		if(!isAttacking){
			if(!isDead && distance < detectRange){
				if (distance < attackRange){
					if (!isAttacking){
						isAttacking = true;
					}
					StartCoroutine(Attack());
				}
				else{
					transform.LookAt(target);
					if(isWalking){
						anim.Play("Walk");
						transform.position += transform.forward * moveSpeed * Time.deltaTime;
					}
					else if(isRunning){
						anim.Play("Run");
						transform.position += transform.forward * runSpeed * Time.deltaTime;
					}
					
				}		
        		}
			else{
				if(isDead){
					anim.Play("Death");
				}
				else{
					anim.Play("Idle");
				}
			}
    		}
	}
	IEnumerator Attack(){
		anim.Play("Attack1");
		//while(anim.isPlaying){
		yield return new WaitForSeconds(anim.GetClip("Attack1").length);
		isAttacking = false;
		
		//yield return new WaitForSeconds(attackCooldown);
        	//if (!isDead){
            		//target.GetComponent<Player>().TakeDamage(Random.Range(5, 15));
        	//}
    	}

	IEnumerator Die(){
       		// Play death animation or sound
        	yield return new WaitForSeconds(3f);
        	Destroy(gameObject);
    	}
}
