using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalZombie : MonoBehaviour
{
	public float moveSpeed = 2f;
    public float attackRange = 1.5f;
	public float attackCooldown = 2f;
	public int maxHealth = 100;
	public int defense = 10;
	public GameObject zombie;	


	private int currentHealth;
	private bool isDead = false;
	private bool isAttacking = false;
	private bool isWalking = true;
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
                    //StartCoroutine(Attack());
                }
            }
			else{
				transform.LookAt(target);
				if(isWalking){
					GetComponent<Animation>().Play("Walk");
				}
				transform.position += transform.forward * moveSpeed * Time.deltaTime;
			}
			
			
        }
    }
	IEnumerator Attack()
    {
        isAttacking = true;
        yield return new WaitForSeconds(attackCooldown);
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
