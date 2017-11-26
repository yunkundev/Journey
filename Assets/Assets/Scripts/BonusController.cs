using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusController : MonoBehaviour {

	public float xMin, xMax, yMin, yMax;

	private int state;
	private int valid, counter;
	private Rigidbody2D rb2d;
	private float X, Y;
	private bool isLimited;

	// Use this for initialization

	void Start(){
		rb2d = GetComponent<Rigidbody2D> ();
		Init ();
	}

	public void Init(){
		valid = 0;
		state = Random.Range (0, 3) + 2;
		float x, y;
		float r = 1.0f;
		rb2d = GetComponent<Rigidbody2D> ();
		if (state == 1) {
			x = Random.Range (xMin + r, xMax - r);
			y = yMax + r * 2;
		} else if (state == 2) {
			x = Random.Range (xMin + r, xMax - r);
			y = yMin - r * 2;
		} else if (state == 3) {
			y = Random.Range (yMin + r, yMax - r);
			x = xMin - r * 2;
		} else {
			y = Random.Range (yMin + r, yMax - r);
			x = xMax + r * 2;
		}
		//print ("init at " + x + " " + y);
		transform.position = new Vector3 (x, y, 0);
		//print ("hehe");
		rb2d.bodyType = RigidbodyType2D.Static;
	}

	public void WakeUp(){
		valid = 1;
		rb2d.bodyType = RigidbodyType2D.Dynamic;
	}

	public void NormalMove(){
		state = 0;
		isLimited = true;
	}

	public void MoveOut(){
		isLimited = false;
	}

	// Update is called once per frame
	void FixedUpdate () {
		if (valid == 0) {
			//transform.position = new Vector3 (X, Y, 0);
			return;
		}
		if (state != 0) {
			Vector3 pos = transform.position;
			float speed = 2.0f;
			float x = 0, y = 0;
			if (state == 1) {
				y = -speed;
			} else if (state == 2) {
				y = speed;
			} else if (state == 3) {
				x = speed;
			} else {
				x = -speed;
			}
			//rb2d.AddForce (new Vector2 (x, y));
			rb2d.velocity = new Vector2(x, y);
			return;
		}

		if (counter == 0) {
			float x = Random.Range (-80.0f, 80.0f);
			float y = Random.Range (-45.0f, 45.0f);
			if (isLimited) {
				int flag = Random.Range (0, 10);
				if (flag >= 4 || transform.position.x >= xMax - 0.1 || transform.position.x <= xMin + 0.1
				    || transform.position.y >= yMax - 0.1 || transform.position.y <= yMin + 0.1) {
					if (transform.position.x > 0)
						x = -Mathf.Abs (x);
					else
						x = Mathf.Abs (x);
					if (transform.position.y > 0)
						y = -Mathf.Abs (y);
					else
						y = Mathf.Abs (y);
				}
			} else {
				if (transform.position.x < 0)
					x = -Mathf.Abs (x);
				else
					x = Mathf.Abs (x);
				y = -Mathf.Abs (y);
			}
			Vector2 force = new Vector2 (x, y);
			rb2d.AddForce (force);
		}
		if (isLimited) {
			transform.position = new Vector3 (
				Mathf.Clamp (transform.position.x, xMin, xMax),
				Mathf.Clamp (transform.position.y, yMin, yMax),
				0
			);
		} else {
			if (transform.position.x > xMax + 2 || transform.position.x < xMin - 2 || transform.position.y < yMin - 2)
				Init ();
		}

		++counter;
		if (counter == 50)
			counter = 0;
	}
}
