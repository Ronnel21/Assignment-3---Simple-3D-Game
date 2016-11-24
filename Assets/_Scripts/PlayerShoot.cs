using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerShoot : MonoBehaviour {

    //Private Instances
    private GameController _gameController;
    private GameController _gameControllerObject;
    private GameObject _spawnPoint;
    private Transform _transform;
    private int _livesValue;
    private int _scoreValue;

	// Public Instances
	public Transform FlashPoint;
	public GameObject MuzzleFlash;
	public GameObject Explosion;
	public GameObject BulletImpact;
	public AudioSource WeaponShotSound;
    public Transform PlayerCamera;
    // UI Text
    public GameObject player;
    public Text GameOverLabel;
    public Text FinalScoreLabel;
    public Button RestartButton;

    [Header("UI Objects")]
    public Text LivesLabel;
    public Text ScoreLabel;
    public AudioSource gameOverSound;
    public AudioSource deathSound;

    //Public Methods
    public int LivesValue
    {
        get
        {
            return this._livesValue;
        }
        set
        {
            this._livesValue = value;
            if(this._livesValue <= 0)
            {
                this._endGame();
            }
            else
            {
                this.LivesLabel.text = "Lives: " + this._livesValue;
            }
        }
    }

    public int ScoreValue
    {
        get
        {
            return this._scoreValue;
        }
        set
        {
            this._scoreValue = value;
            this.ScoreLabel.text = "Score: " + this._scoreValue;
        }
    }

	// Use this for initialization
	void Start () {
        this.LivesValue = 3;
        this.ScoreValue = 0;

        //When Game is Done
        this.GameOverLabel.gameObject.SetActive(false);
        this.FinalScoreLabel.gameObject.SetActive(false);
        this.RestartButton.gameObject.SetActive(false);
	}
	
	// Update is called once per frame (for Physics)
	void FixedUpdate () {
		if (Input.GetButtonDown ("Fire1")) {
			//Show the MuzzleFlash at the FlashPoint without rotating
			Instantiate (this.MuzzleFlash, this.FlashPoint.position, Quaternion.identity);

			//Variable to hold the location of our Raycast Hit
			RaycastHit hit;

			//If raycast hits an object
			if (Physics.Raycast (this.PlayerCamera.position, this.PlayerCamera.forward, out hit))
            {
				if (hit.transform.gameObject.CompareTag ("Enemy"))
                {
					Instantiate (this.Explosion, hit.point, Quaternion.identity);
					Destroy (hit.transform.gameObject);
                    this.ScoreValue += 100; //(Not enough time to fix)
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

    private void _endGame()
    {
        this.player.SetActive(false);
        this.LivesLabel.gameObject.SetActive(false);
        this.ScoreLabel.gameObject.SetActive(false);
        this.gameOverSound.Play();
        this.GameOverLabel.gameObject.SetActive(false);
        this.FinalScoreLabel.gameObject.SetActive(false);
        this.FinalScoreLabel.text = "Final Score: " + this.ScoreValue;
        this.RestartButton.gameObject.SetActive(true);
    }

    private void _initialize()
    {
        this._transform = GetComponent<Transform>();
        this._spawnPoint = GameObject.FindWithTag("SpawnPoint");
                
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("Enemy"))
        {
            this._transform.position = this._spawnPoint.transform.position;
            this.deathSound.Play();
            this.LivesValue -= 1; //(not enough time to fix)
        }

        if (other.gameObject.CompareTag("Exit"))
        {
            this._endGame();
        }

        if (other.gameObject.CompareTag("DeathPlane"))
        {
            this._transform.position = this._spawnPoint.transform.position;
            this.deathSound.Play();
            this.LivesValue -= 1;
        }
    }    

	public void RestartButton_Click()
    {
        SceneManager.LoadScene("Menu");
    }

}
