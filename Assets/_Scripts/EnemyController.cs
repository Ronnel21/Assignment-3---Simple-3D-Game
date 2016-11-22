using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour {

	//Public Instance
	public NavMeshAgent Agent;

	//Private Instance
	private Transform Player;

	// Use this for initialization
	void Start () {
		this.Player = GameObject.FindWithTag ("Player").transform;
	}
	
	// Update is called once per frame
	void Update () {
		this.Agent.SetDestination (this.Player.position);
	}
}
