using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	public GameObject timer;
	private Animation anim;

	// Zombie attribute
	public int zombie_mode;
	private float walkSpeed;
	private float runSpeed;
    private float attackRange;
	private float detectRange;
	public int maxHealth;
	public int attack;
	private int defense;
	private float changeDirectionTime;

	// Zombie behavior
	private bool isDead = false;
	private bool isAttacking = false;

	// Player List
	//private Transform target;
	private List<Transform> target  = new List<Transform>();
	private Transform curTarget;

	// Position variable	
	private Vector3 direction;
	private Vector3 targetPosition;
	private Vector3 randomDirection;

	// Timer
	private float directionChangeTimer;



    	// Start is called before the first frame update
    	void Start(){
        	//target = GameObject.FindGameObjectWithTag("Player").transform;


		GameObject[] playerObjs = GameObject.FindGameObjectsWithTag("Player");
		foreach (GameObject player in playerObjs)
        {
            target.Add(player.transform);
        }


		anim = GetComponent<Animation>();

		if(zombie_mode == 1){
			walkSpeed = 3f;
			runSpeed = 3f;
			attackRange = 3f;
			detectRange = 30f;
			maxHealth = 50;
			defense = 2;
			attack = 5;
			changeDirectionTime = 6f;
		}
		else if(zombie_mode == 2){
			walkSpeed = 2.2f;
			runSpeed = 7f;
			attackRange = 3f;
			detectRange = 40f;
			maxHealth = 50;
			defense = 3;
			attack = 8;
			changeDirectionTime = 6f;
		}

		directionChangeTimer = changeDirectionTime;
    	}

    	// Update is called once per frame
    	void Update(){
		//float distance = Vector3.Distance(transform.position, target.position);
		if (target.Count != PhotonNetwork.PlayerList.Length) ;
		{
			GameObject[] playerObjs = GameObject.FindGameObjectsWithTag("Player");

			foreach (GameObject player in playerObjs)
			{
				// Debug.Log("Player is : " + player);
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

		if(isDead){
				StartCoroutine(Die());
		}
		else if(!isAttacking){
			if(curDistance < detectRange){
				if (curDistance < attackRange){
					if (!isAttacking){
						isAttacking = true;
					}
					StartCoroutine(Attack());
				}
				else{
					transform.LookAt(curTarget);
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
		timer = GameObject.Find("Timer");
		Timer timerscript = timer.GetComponent<Timer>();
		detectRange = 100f;
		maxHealth -= (damageAmount-defense);
		Debug.Log("hit normal, remain blood: " + maxHealth);
		if (maxHealth <= 0)
		{
			isDead = true;
			timerscript.zombieNum -= 1;
			//Destroy(gameObject);
		}
	}


}
