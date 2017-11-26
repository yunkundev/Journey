using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Ranking : MonoBehaviour {

	public Button btn1;
	public Button btn2;
	public Text text1;
	public Text text2;
	public Text text3;
	public Text text4;
	public Text text5;
	public Text text6;


	// Use this for initialization
	void Start () 
	{
		text1.text = PlayerPrefs.GetInt ("Rank1").ToString();
		text2.text = PlayerPrefs.GetInt ("Rank2").ToString();
		text3.text = PlayerPrefs.GetInt ("Rank3").ToString();
		text4.text = PlayerPrefs.GetInt ("Rank4").ToString();
		text5.text = PlayerPrefs.GetInt ("Rank5").ToString();
		text6.text = PlayerPrefs.GetInt ("Rank6").ToString();

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
