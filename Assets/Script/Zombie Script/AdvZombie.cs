using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class AdvZombie : MonoBehaviour
{
	public GameObject timer;
	private Animator anim;

	// Zombie attribute
	public int zombie_mode;
	private float walkSpeed;
	private float runSpeed;
 	private float attackRange;
	private float unsafeRange;
	private float detectRange;
	public int maxHealth;
	public int attack;
	private int defense;
	private float changeDirectionTime;
	private float reactTime;

	// Zombie behavior
	private bool isDead = false;
	private bool isAttacking = false;
	private bool isRage = true;
	private int attackCount = 0;
	
	// Player List
	//private Transform target;
	private List<Transform> target = new List<Transform>();
	private Transform curTarget;

	// Position variable
	private Vector3 direction;
	private Vector3 targetPosition;
	private Vector3 randomDirection;

	// Timer
	private float directionChangeTimer;
	private float zombieReactTimer;
	
	

    // Start is called before the first frame update
    void Start()
    {
		//target = GameObject.FindGameObjectWithTag("Player").transform;
        	GameObject[] playerObjs = GameObject.FindGameObjectsWithTag("Player");
		
		foreach (GameObject player in playerObjs){
			Debug.Log("Player is : "+player);
            target.Add(player.transform);
        }
		Debug.Log("Player number : "+target.Count);
		anim = GetComponentInChildren<Animator>();


		if(zombie_mode == 3){
			//walkSpeed = 2.2f;
			runSpeed = 5f;
			attackRange = 5f;
			detectRange = 30f;
			unsafeRange = 70f;
			maxHealth = 50;
			defense = 4;
			attack = 15;
			changeDirectionTime = 4f;
			reactTime = 0.5f;
		}
		else if(zombie_mode == 4){
			//walkSpeed = 2.2f;
			runSpeed = 5f;
			attackRange = 3f;
			detectRange = 30f;
			unsafeRange = 50f;
			maxHealth = 50;
			defense = 4;
			attack = 0;
			changeDirectionTime = 6f;
			reactTime = 0.5f;
		}
		else if(zombie_mode == 5){
			//walkSpeed = 2.2f;
			runSpeed = 8f;
			attackRange = 5f;
			detectRange = 50f;
			unsafeRange = 50f;
			maxHealth = 100;
			defense = 5;
			attack = 20;
			changeDirectionTime = 2f;
			reactTime = 0.5f;
		}


		directionChangeTimer = changeDirectionTime;
		zombieReactTimer = reactTime;
		//currentHealth = maxHealth;
    }

    // Update is called once per frame
    void Update()
    {
	    if (target.Count != PhotonNetwork.PlayerList.Length) ;
	    {
		    GameObject[] playerObjs = GameObject.FindGameObjectsWithTag("Player");

		    foreach (GameObject player in playerObjs)
		    {
			    Debug.Log("Player is : " + player);
			    target.Add(player.transform);
		    }
	    }

	    float curDistance = Mathf.Infinity;
        	foreach (Transform player in target){
            float distance = Vector3.Distance(transform.position, player.position);
            if (distance < curDistance){
                curDistance = distance;
                curTarget = player;
            }
        }
		
        //float distance = Vector3.Distance(transform.position, target.position);
		//Debug.Log(target.position);
		

		if(isDead){
				StartCoroutine(Die());
		}
		else if(!isAttacking){
			if(curDistance < unsafeRange){
				if(zombie_mode == 3){
					defense = 5;
					runSpeed = 7;
				}
				else if(zombie_mode == 4){
					defense = 6;
					runSpeed = 8;
				}
				if (curDistance < attackRange){
					isAttacking = true;
					if(zombie_mode == 3){
						StartCoroutine(Attack());
					}
					else if(zombie_mode == 5){
						if(isRage){
							attackCount++;
							if(attackCount == 3){
								StartCoroutine(Attack3());
								attackCount = 0;
							}
							else{
								StartCoroutine(Attack2());
							}
						}
						else{
							StartCoroutine(Attack());
						}
					}
					else{
						StartCoroutine(Wait());
					}
				}
				else if(curDistance < detectRange){
					/*zombieReactTimer -= Time.deltaTime;
					if(directionChangeTimer <= 0f){
						transform.LookAt(target);
						zombieReactTimer = reactTime;
					}*/
	
					transform.LookAt(curTarget);
					//anim.SetBool("isWalk",true);
					//anim.Play("walk", -1, 0f);
					anim.Play("walk");
					//anim.Play("Run");
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

	IEnumerator Attack2(){
		anim.Play("attack2");
		//Debug.Log(anim.GetCurrentAnimatorStateInfo(0).length);
		yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		isAttacking = false;
    }

	IEnumerator Attack3(){
		anim.Play("attack3");
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
	
	IEnumerator Rage(){
		anim.Play("Shout1");
        	yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		anim.Play("Shout2");
        	yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		isRage = true;
    	}

	IEnumerator Die(){
       		// Play death animation or sound
		anim.Play("Death");
        	//yield return new WaitForSeconds(3f);
        	yield return new WaitForSeconds(anim.GetCurrentAnimatorStateInfo(0).length);
		Destroy(gameObject);
    	}

	public void Damage(int damageAmount) {
		timer = GameObject.Find("Timer");
		Timer timerscript = timer.GetComponent<Timer>();
		detectRange = 200f;
		maxHealth -= (damageAmount-defense);
		Debug.Log("hit adv, remain blood: " + maxHealth);
		if(zombie_mode == 5 && maxHealth <= 50){
			defense = 8;
			attack = 30;
			runSpeed = 15;
			StartCoroutine(Rage());
		}
		if (maxHealth <= 0)
		{
			isDead = true;
			timerscript.zombieNum -= 1;
			//Destroy(gameObject);
		}
	}
}
