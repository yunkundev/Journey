using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonsOnClick : MonoBehaviour {

	public Button btn1;
	public Button btn2;
	public Button btn3;
	public Button btn4;

	// Use this for initialization
	void Start () 
	{
		
		btn1.onClick.AddListener (btnNormal);
		btn2.onClick.AddListener (btnChanllenge);
		btn3.onClick.AddListener (btnCrazy);
		btn4.onClick.AddListener (btnSettings);
	}

	void btnNormal()
	{
		Debug.Log("button1");
		BoardManager.isPracticeMode = true;
		TileController.speedScale = 1f;
		SceneManager.LoadScene(1);
	}

	void btnChanllenge()
	{
		Debug.Log ("button2");
		BoardManager.isPracticeMode = false;
		TileController.speedScale = 1.5f;
		SceneManager.LoadScene(1);
	}

	void btnCrazy()
	{
		Debug.Log ("button3");
		BoardManager.isPracticeMode = false;
		TileController.speedScale = 1.5f;
		SceneManager.LoadScene (1);
	}

	void btnSettings()
	{
		Debug.Log ("button4");
		SceneManager.LoadScene (3);
	}


	// Update is called once per frame
	void Update () {
		
	}
}
