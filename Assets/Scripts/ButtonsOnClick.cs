using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonsOnClick : MonoBehaviour {

	public Button btn1;
	public Button btn2;
	public Button btn3;
	// Use this for initialization
	void Start () 
	{
		
		btn1.onClick.AddListener (btnPractice);
		btn2.onClick.AddListener (btnChanllenge);
		btn3.onClick.AddListener (btnSettings);
	}

	void btnPractice()
	{
		//Debug.Log("button1");
		BoardManager.isPracticeMode = true;
		SceneManager.LoadScene(1);
	}

	void btnChanllenge()
	{
		//Debug.Log ("button2");
		BoardManager.isPracticeMode = false;
		SceneManager.LoadScene(1);
	}

	void btnSettings()
	{
		//Debug.Log ("button3");
	}


	// Update is called once per frame
	void Update () {
		
	}
}
