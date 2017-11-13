using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HomeFunction : MonoBehaviour {

//	public Button btn;
//	// Use this for initialization
//	void Start () {
//		btn.onClick.AddListener (func);
//		
//	}
	public void func()
	{
		print ("flag");
		SceneManager.LoadScene(0);
	}
	
//	// Update is called once per frame
//	void Update () {
//		
//	}
}
