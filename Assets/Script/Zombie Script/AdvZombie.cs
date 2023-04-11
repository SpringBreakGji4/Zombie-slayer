using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdvZombie : MonoBehaviour
{

	//public GameObject zombie;
	public int zombie_mode;

	private float walkSpeed;
	private float runSpeed;
 	private float attackRange;
	private float unsafeRange;
	private float detectRange;
	private int maxHealth;
	private int defense;
	private float changeDirectionTime;


	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	//private bool isRage = false;
	
	private Transform target;
	private Transform target_projector;
	private Vector3 ori;
	private Vector3 direction;
	private Vector3 targetPosition;
	private Vector3 randomDirection;
	private float directionChangeTimer;
	private Animator anim;
	private float zombieReactTimer;
	private float reactTimer;


    // Start is called before the first frame update
    void Start()
    {
		target = GameObject.FindGameObjectWithTag("Player").transform;
		//ori = transform.position;
        //target_projector = Instantiate(target, Vector3.zero, Quaternion.identity);
		//target_projector.position = new Vector3(target_projector.position.x,transform.position.y ,target_projector.position.z);

		anim = GetComponentInChildren<Animator>();
		if(zombie_mode == 3){
			//walkSpeed = 2.2f;
			runSpeed = 7f;
			attackRange = 5f;
			detectRange = 30f;
			unsafeRange = 40f;
			maxHealth = 50;
			defense = 4;
			changeDirectionTime = 4f;
			reactTimer = 0.5f;
		}
		else if(zombie_mode == 4){
			//walkSpeed = 2.2f;
			runSpeed = 10f;
			attackRange = 3f;
			detectRange = 30f;
			unsafeRange = 40f;
			maxHealth = 100;
			defense = 5;
			changeDirectionTime = 6f;
			reactTimer = 0.5f;
		}
		directionChangeTimer = changeDirectionTime;
		zombieReactTimer = reactTimer;
		currentHealth = maxHealth;
    }
//67
    // Update is called once per frame
    void Update()
    {
		//target_projector.position = new Vector3(target.position.x, transform.position.y,target.position.z);
		//target_projector.position.x = target.position.x;
		//target_projector.position.z = target.position.z;
        float distance = Vector3.Distance(transform.position, target.position);
		//float distance = Vector3.Distance(transform.position, targetPosition);
		//float distance = Vector3.Distance(transform.position, target_projector.position);
		if(isDead){
				StartCoroutine(Die());
		}
		else if(!isAttacking){
			if(distance < unsafeRange){
				if(zombie_mode == 3){
					defense = 6;
					runSpeed = 7;
				}
				else if(zombie_mode == 4){
					defense = 8;
					runSpeed = 8;
				}
				if (distance < attackRange){
					if(zombie_mode == 3){
						isAttacking = true;
						StartCoroutine(Attack());
					}
					else{
						StartCoroutine(Wait());
					}
				}
				else if(distance < detectRange){
					zombieReactTimer -= Time.deltaTime;
					if(zombieReactTimer <= 0f){
						transform.LookAt(target);
						zombieReactTimer = reactTimer;
					}
					
					//transform.LookAt(target_projector);
					//anim.SetBool("isWalk",true);
					//anim.Play("walk", -1, 0f);
					anim.Play("walk");
					transform.position += transform.forward * runSpeed * Time.deltaTime;
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
					targetPosition = transform.position+randomDirection*runSpeed;
					if(transform.position != targetPosition){
							transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(randomDirection), Time.deltaTime * runSpeed);
							transform.position = Vector3.MoveTowards(transform.position, targetPosition, runSpeed * Time.deltaTime);
						//anim.CrossFade("walk", 0.1f);
						anim.Play("walk");
					}
					else{
						//anim.Play("Idle1");
						anim.CrossFade("Idle1", 0.1f);
					}
				}
			}
			else{
				if(zombie_mode == 3){
					defense = 4;
					runSpeed = 3;
				}
				else if(zombie_mode == 4){
					defense = 5;
					runSpeed = 5;
				}
				directionChangeTimer -= Time.deltaTime;
				if(directionChangeTimer >0 && directionChangeTimer <= changeDirectionTime/2){
					randomDirection = new Vector3(0f, 0f, 0f).normalized;
				}
				else if(directionChangeTimer <= 0f){
					randomDirection = new Vector3(Random.Range(-1f, 1f), 0f, Random.Range(-1f, 1f)).normalized;
					directionChangeTimer = changeDirectionTime;
				}
				targetPosition = transform.position+randomDirection*runSpeed;
				if(transform.position != targetPosition){
						transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(randomDirection), Time.deltaTime * runSpeed);
						transform.position = Vector3.MoveTowards(transform.position, targetPosition, runSpeed * Time.deltaTime);
					//anim.CrossFade("walk", 0.1f);
					anim.Play("walk");
				}
				else{
					//anim.Play("Idle");
					anim.CrossFade("Idle", 0.1f);
				}
			}
			
		}		
		
    }
	
    IEnumerator Attack(){
		anim.Play("attack");
		//Debug.Log(anim.GetCurrentAnimatorStateInfo(0).length);
		yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		isAttacking = false;
    }
		
    IEnumerator Wait(){
		anim.Play("Idle");
		//Debug.Log(anim.GetCurrentAnimatorStateInfo(0).length);
		yield return new WaitForSeconds(5*anim.GetCurrentAnimatorStateInfo(0).length);
		isAttacking = false;
    }

	IEnumerator Die(){
       		// Play death animation or sound
		anim.Play("Death");
        	//yield return new WaitForSeconds(3f);
        	yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		Destroy(gameObject);
    	}

	public void Damage(int damageAmount) {
		maxHealth -= (damageAmount-defense);
		Debug.Log("hit adv, remain blood: " + maxHealth);
		if (maxHealth <= 0)
		{
			isDead = true;
			//Destroy(gameObject);
		}
	}
}
