using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdvZombie : MonoBehaviour
{

	public GameObject zombie;
	public int zombie_mode = 1;

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
			attackRange = 1.5f;
			detectRange = 10f;
			unsafeRange = 20f;
			maxHealth = 100;
			//defense = 10;
			changeDirectionTime = 6f;
		}
		else if(zombie_mode == 4){
			//walkSpeed = 2.2f;
			runSpeed = 10f;
			attackRange = 1.5f;
			detectRange = 10f;
			//unsafeRange = 20f;
			maxHealth = 100;
			//defense = 10;
			changeDirectionTime = 6f;
		}
		directionChangeTimer = changeDirectionTime;
		currentHealth = maxHealth;
    }

    // Update is called once per frame
    void Update()
    {
        float distance = Vector3.Distance(transform.position, target.position);
		if(!isAttacking){
			if(isDead){
				//anim.Play("Death");
			}
			else if(distance < unsafeRange){
				if (distance < attackRange){
					isAttacking = true;
					//anim.Play("attack");
					//isAttacking = false;
					StartCoroutine(Attack());
				}
				else if(distance < detectRange){
					transform.LookAt(target);
					if(zombie_mode == 3){
						//anim.SetBool("isWalk",true);
						//anim.Play("walk", -1, 0f);
						anim.Play("walk");
						transform.position += transform.forward * runSpeed * Time.deltaTime;
					}
					directionChangeTimer = changeDirectionTime;	
        		}
				else{
					anim.CrossFade("Idle1", 0.1f);
				}
			}
			else{
				anim.CrossFade("Idle", 0.1f);
			}
		}		
		
    }
	
	IEnumerator Attack(){
		anim.Play("attack");
		//Debug.Log(anim.GetCurrentAnimatorStateInfo(0).length);
		yield return new WaitForSeconds(2*anim.GetCurrentAnimatorStateInfo(0).length);
		isAttacking = false;
    }
}
