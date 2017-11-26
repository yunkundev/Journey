using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bgm : MonoBehaviour {

	public AudioSource music;

	// Use this for initialization
	void Start () {

		float val = 1.0f;

		if (PlayerPrefs.HasKey ("Volume")) {
			if (PlayerPrefs.GetInt ("music") == 0) {
				val = 0.0f;
			} else {
				val = PlayerPrefs.GetFloat ("Volume");
			}

		}

		music.volume = val;
		music.Play ();

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
