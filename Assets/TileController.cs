using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour {

	private Rigidbody2D rb2d;
	private int counter;
	private bool isSleepy;

	void FixedUpdate(){

		if (isSleepy)
			return;

		if (counter == 0) {
			float x = Random.Range ((float)-40, (float)40);
			float y = Random.Range ((float)-30, (float)30);
			Vector2 force = new Vector2 (x, y);
			rb2d.AddForce (force);
		}

		++counter;
		if (counter == 100)
			counter = 0;
	}

	public bool IsSleepy(){
		return isSleepy;
	}

	public void Sleep(){
		isSleepy = true;
		rb2d.Sleep ();
		rb2d.bodyType = RigidbodyType2D.Static;
	}

	public void WakeUp(){
		isSleepy = false;
		rb2d.WakeUp ();
		rb2d.bodyType = RigidbodyType2D.Dynamic;
	}

	// Use this for initialization
	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		counter = 0;
		isSleepy = false;
	}
}
