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
		TextHint.mode = 1;
		BoardManager.PlayMode = 1;
		TileController.speedScale = 1f;
		SceneManager.LoadScene(5);
	}

	void btnChanllenge()
	{
		Debug.Log ("button2");
		TextHint.mode = 2;
		BoardManager.PlayMode = 2;
		TileController.speedScale = 1f;
		SceneManager.LoadScene(5);
	}

	void btnCrazy()
	{
		Debug.Log ("button3");
		TextHint.mode = 3;
		BoardManager.PlayMode = 3;
		TileController.speedScale = 1f;
		SceneManager.LoadScene (5);
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
