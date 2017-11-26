using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class SettingSet : MonoBehaviour
{
	public Toggle toggle;
	public Button btn1;
	public Button btn2;
	public Slider slider;

	// Use this for initialization
	void Start () 
	{
		if (PlayerPrefs.HasKey ("music")) {
			if (PlayerPrefs.GetInt ("music") == 0)
				toggle.isOn = false;
			else
				toggle.isOn = true;
		} else
			toggle.isOn = true;
		
		if (PlayerPrefs.HasKey ("Volume")) {
			if (PlayerPrefs.GetInt ("music") == 0) {
				slider.value = 0.0f;
			} else {
				slider.value = PlayerPrefs.GetFloat ("Volume");
			}

		} else
			slider.value = 1.0f;
		
		btn1.onClick.AddListener (btnBack);
		btn2.onClick.AddListener (btnSave);
	}

	void btnBack()
	{
		
		Debug.Log("button1");
		SceneManager.LoadScene(0);
	}

	void btnSave()
	{
		if (toggle.isOn)
			PlayerPrefs.SetInt ("music", 1);
		else
			PlayerPrefs.SetInt ("music", 0);

		PlayerPrefs.SetFloat ("Volume", slider.value);
		Debug.Log("button2");
		Debug.Log(toggle.isOn);
		SceneManager.LoadScene(0);
	}

}
