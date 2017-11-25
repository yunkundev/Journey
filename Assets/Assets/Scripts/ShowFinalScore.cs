using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShowFinalScore : MonoBehaviour {

	public static int score;
	public Text mytext;
	public Button btn1;
	public Button btn2;
	public Button btn3;


	// Use this for initialization
	void Start () 
	{

		mytext.text = " " + score;

		btn1.onClick.AddListener (btnMainMenu);
		btn2.onClick.AddListener (btnReplace);
		btn3.onClick.AddListener (btnScores);
	}

	void btnMainMenu()
	{
		Debug.Log ("button1");
		SceneManager.LoadScene (0);
	}

	void btnReplace()
	{
		Debug.Log ("button2");
		SceneManager.LoadScene (1);
	}

	void btnScores()
	{
		Debug.Log ("button3");
	}

}
