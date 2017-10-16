using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShowFinalScore : MonoBehaviour {

	public static int score;
	public Text mytext;
	// Use this for initialization
	void Start () 
	{

		mytext.text = "Final Score: " + score;
		
	}


	// Update is called once per frame
	void Update () 
	{
		
	}
}
