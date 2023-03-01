using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	public float moveSpeed = 2f;
	public float runSpeed = 4f;
    public float attackRange = 2f;
	public float attackCooldown = 2f;
	public int maxHealth = 100;
	public int defense = 10;
	public GameObject zombie;	


	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	private bool isWalking = false;
	private bool isRunning = true;
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
		if(!isDead){
        	float distance = Vector3.Distance(transform.position, target.position);
			if (distance < attackRange)
            {
                	if (!isAttacking)
                	{
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
    }
	IEnumerator Attack()
    {
        	isAttacking = true;
		GetComponent<Animation>().Play("Idle");
        	yield return new WaitForSeconds(attackCooldown);
		//GetComponent<Animation>().Play("Attack1");
        	if (!isDead)
        	{
            	//target.GetComponent<Player>().TakeDamage(Random.Range(5, 15));
        	}
        	isAttacking = false;
    }

	IEnumerator Die()
    {
        // Play death animation or sound
        yield return new WaitForSeconds(3f);
        Destroy(gameObject);
    }
}
