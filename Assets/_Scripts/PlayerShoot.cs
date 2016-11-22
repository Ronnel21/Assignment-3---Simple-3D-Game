using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PlayerShoot : MonoBehaviour {

    //Private Instances
    private GameController _gameController;
    private GameController _gameControllerObject;
    private GameObject _spawnPoint;
    private Transform _transform;

	// Public Instances
	public Transform FlashPoint;
	public GameObject MuzzleFlash;
	public GameObject Explosion;
	public GameObject BulletImpact;
	public AudioSource WeaponShotSound;
    public Transform PlayerCamera;    

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame (for Physics)
	void FixedUpdate () {
		if (Input.GetButtonDown ("Fire1")) {
			//Show the MuzzleFlash at the FlashPoint without rotating
			Instantiate (this.MuzzleFlash, this.FlashPoint.position, Quaternion.identity);

			//Variable to hold the location of our Raycast Hit
			RaycastHit hit;

			//If raycast hits an object
			if (Physics.Raycast (this.PlayerCamera.position, this.PlayerCamera.forward, out hit)) {
				if (hit.transform.gameObject.CompareTag ("Enemy"))
                {
					Instantiate (this.Explosion, hit.point, Quaternion.identity);
					Destroy (hit.transform.gameObject);
                    //this._gameController.ScoreLabel += 100; (Not enough time to fix)
				}
                else
                {
					Instantiate (this.BulletImpact, hit.point, Quaternion.identity);
				}
			}

			// Play Weapon Shot Sound
			this.WeaponShotSound.Play();
		}
	}

    private void _initialize()
    {
        this._transform = GetComponent<Transform>();
        this._spawnPoint = GameObject.FindWithTag("SpawnPoint");
        //this._gameControllerObject = GameObject.Find("GameController");  (not enough time to fix)
        this._gameController = this._gameControllerObject.GetComponent<GameController>() as GameController;        
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("Enemy"))
        {
            this._transform.position = this._spawnPoint.transform.position;
            //this._gameController.LivesValue -= 1; (not enough time to fix)
        }
    }

	void OnTriggerEnter(Collider other) {
		SceneManager.LoadScene ("Menu");	
	}

}
