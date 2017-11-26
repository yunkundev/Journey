using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CountDown : MonoBehaviour {
	
	Image number; 
	public Sprite[] imageList;

	void Awake(){
		print ("Awake");
		number = GetComponent<Image>();
		number.enabled = false;
	}

	void Start () {
		print ("Start count down");
		StartCoroutine(countdownDelay(3));  
	}

	IEnumerator countdownDelay(int time) {
		yield return new WaitForSeconds (time);
		number.enabled = true;
		StartCoroutine(StartCountdown());
	}

	int currCountdownValue;
	public IEnumerator StartCountdown(int countdownValue = 3)
	{
		currCountdownValue = countdownValue;
		while (currCountdownValue > 0)
		{
			number.sprite = imageList[currCountdownValue-1];
			yield return new WaitForSeconds(1.0f);
			currCountdownValue--;
			print ("count down " + currCountdownValue);
		}
		SceneManager.LoadScene (1);
	}

}
