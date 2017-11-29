using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextHint : MonoBehaviour {

	Text instruction;
	public static int mode = 1;

	// Use this for initialization
	void Start () {
		Time.timeScale = 1.0f;
		instruction = GetComponent<Text>();
		if(mode == 1){
			instruction.text = "Using the pick-ups to earn more!";
		} else if(mode == 2) {
			instruction.text = "Reach the score limit and you will have more time!";
		} else {
			instruction.text = "Eliminate the bombs in time!";
		}
		StartCoroutine(textDelay());  
	}

	IEnumerator textDelay() {
		yield return new WaitForSeconds (3);
		print ("text over");
		instruction.text = "";
	}
		 
}
