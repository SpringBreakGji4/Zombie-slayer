using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	
	public GameObject zombie;
	//public GameObject Plane;
	public LayerMask obstacleLayer;
	public int zombie_mode = 1;

	private float walkSpeed;
	private float runSpeed;
    	private float attackRange;
	private float detectRange;
	private int maxHealth;
	private int defense;
	private float changeDirectionTime;

	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	private Transform target;
	private Transform tem_target;
	private Vector3 direction;
	private Vector3 targetPosition;
	private Rigidbody rb; 
	private Animation anim;
	private Vector3 randomDirection;
	private float directionChangeTimer;
	private BoxCollider boxCollider;

    	// Start is called before the first frame update
    	void Start(){
        	target = GameObject.FindGameObjectWithTag("Player").transform;
		//tem_target = Instantiate(target, target.position, target.rotation);
		anim = GetComponent<Animation>();
		boxCollider = GetComponent<BoxCollider>();

		if(zombie_mode == 1){
			walkSpeed = 1.5f;
			runSpeed = 1.5f;
			attackRange = 3f;
			detectRange = 20f;
			maxHealth = 100;
			defense = 2;
			changeDirectionTime = 6f;
		}
		else if(zombie_mode == 2){
			walkSpeed = 2.2f;
			runSpeed = 6f;
			attackRange = 3f;
			detectRange = 20f;
			maxHealth = 100;
			defense = 3;
			changeDirectionTime = 6f;
		}
		/*else if(zombie_mode == 3){
			walkSpeed = 3f;
			runSpeed = 12f;
			attackRange = 3f;
			detectRange = 20f;
			maxHealth = 500;
			defense = 100;
			changeDirectionTime = 3f;
			transform.localScale *= 2;
			boxCollider.size *= 2;
			boxCollider.center *= 2;
		}*/

		directionChangeTimer = changeDirectionTime;
		currentHealth = maxHealth;
    	}

    	// Update is called once per frame
    	void Update(){
		//targetPosition.y -= 1f;
		//float distance = Vector3.Distance(transform.position, targetPosition);
		float distance = Vector3.Distance(transform.position, target.position);
		if(isDead){
				StartCoroutine(Die());
		}
		else if(!isAttacking){
			if(distance < detectRange){
				if (distance < attackRange){
					if (!isAttacking){
						isAttacking = true;
					}
					StartCoroutine(Attack());
				}
				else{
					transform.LookAt(target);
					if(zombie_mode == 1){
						anim.Play("Walk");
						transform.position += transform.forward * runSpeed * Time.deltaTime;
					}
					else if(zombie_mode == 2){
						anim.Play("Run");
						transform.position += transform.forward * runSpeed * Time.deltaTime;
					}
					
				}
				directionChangeTimer = changeDirectionTime;	
        		}
			else{
				directionChangeTimer -= Time.deltaTime;
				if(directionChangeTimer >0 && directionChangeTimer <= changeDirectionTime/2){
					randomDirection = new Vector3(0f, 0f, 0f).normalized;
				}
				else if(directionChangeTimer <= 0f){
					randomDirection = new Vector3(Random.Range(-1f, 1f), 0f, Random.Range(-1f, 1f)).normalized;
					directionChangeTimer = changeDirectionTime;
				}
				targetPosition = transform.position+randomDirection*walkSpeed;
				if(zombie_mode == 1){
					anim.Play("Idle");
				}
				else if(zombie_mode == 2){
					if(transform.position != targetPosition){
						transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(randomDirection), Time.deltaTime * walkSpeed);
						transform.position = Vector3.MoveTowards(transform.position, targetPosition, walkSpeed * Time.deltaTime);
						anim.Play("Walk");
					}
					else{
						anim.Play("Idle");
					}
				}
				else if(zombie_mode == 3){
					if(transform.position != targetPosition){
						transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(randomDirection), Time.deltaTime * walkSpeed);
						transform.position = Vector3.MoveTowards(transform.position, targetPosition, walkSpeed * Time.deltaTime);
						anim.Play("Walk");
					}
					else{
						anim.Play("Idle");
					}
				}
				
			}
    		}
	}

	IEnumerator Attack(){
		if(zombie_mode == 1){
			anim.Play("Attack1");
		//while(anim.isPlaying){
			yield return new WaitForSeconds(anim.GetClip("Attack1").length);
		}
		else if(zombie_mode == 2){
			anim.Play("Attack2");
		//while(anim.isPlaying){
			yield return new WaitForSeconds(anim.GetClip("Attack2").length);
		}
		isAttacking = false;
		
		//yield return new WaitForSeconds(attackCooldown);
        	//if (!isDead){
            		//target.GetComponent<Player>().TakeDamage(Random.Range(5, 15));
        	//}
    	}

	IEnumerator Die(){
       		// Play death animation or sound
		anim.Play("Death");
        	//yield return new WaitForSeconds(3f);
        	yield return new WaitForSeconds(anim.GetClip("Death").length);
		Destroy(gameObject);
    	}

	public void Damage(int damageAmount) {
		maxHealth -= (damageAmount-defense);
		Debug.Log("hit normal, remain blood: " + maxHealth);
		if (maxHealth <= 0)
		{
			isDead = true;
			//Destroy(gameObject);
		}
	}


}
