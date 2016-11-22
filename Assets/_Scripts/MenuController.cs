using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour {

    //Public Instance
    public Button StartButton;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    //Public Method
    public void StartButton_Click()
    {
        SceneManager.LoadScene("Main");
    }
}
