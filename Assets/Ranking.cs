using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Ranking : MonoBehaviour {

	public Button btn1;
	public Button btn2;



	// Use this for initialization
	void Start () 
	{


		btn1.onClick.AddListener (btnMainMenu);
		btn2.onClick.AddListener (btnReplace);

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


}
