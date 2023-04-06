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
	private Vector3 direction;
	private Vector3 targetPosition;
	private Vector3 randomDirection;
	private float directionChangeTimer;
	private Animator anim;

    // Start is called before the first frame update
    void Start()
    {
		target = GameObject.FindGameObjectWithTag("Player").transform;
        anim = GetComponentInChildren<Animator>();
		if(zombie_mode == 3){
			//walkSpeed = 2.2f;
			runSpeed = 7f;
			attackRange = 3f;
			detectRange = 10f;
			unsafeRange = 20f;
			maxHealth = 100;
			defense = 10;
			changeDirectionTime = 4f;
		}
		else if(zombie_mode == 4){
			//walkSpeed = 2.2f;
			runSpeed = 10f;
			attackRange = 3f;
			detectRange = 15f;
			unsafeRange = 30f;
			maxHealth = 200;
			defense = 10;
			changeDirectionTime = 6f;
		}
		directionChangeTimer = changeDirectionTime;
		currentHealth = maxHealth;
    }

    // Update is called once per frame
    void Update()
    {
        float distance = Vector3.Distance(transform.position, target.position);
		if(isDead){
				//anim.Play("Death");
		}
		else if(!isAttacking){
			if(distance < unsafeRange){
				if(zombie_mode == 3){
					defense = 20;
					runSpeed = 7;
				}
				else if(zombie_mode == 4){
					defense = 40;
					runSpeed = 10;
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
					transform.LookAt(target);
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
					defense = 20;
					runSpeed = 3;
				}
				else if(zombie_mode == 4){
					defense = 40;
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
}
