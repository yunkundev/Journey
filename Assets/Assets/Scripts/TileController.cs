using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour {

	public static float speedScale = 1;

	public float xMin, xMax, yMin, yMax;

	private Rigidbody2D rb2d;
	private int counter;
	private bool isSleepy;
	private int state; // 0: in boundary, 1: out and up, 2: out and down, 3: out and left, 4: out and right
	private float scale;

	public void Frozen(){
		scale = 0.4f;
		if(rb2d.bodyType == RigidbodyType2D.Dynamic) rb2d.velocity *= 0.2f;
	}

	public void Recover(){
		scale = 1.0f;
		rb2d.velocity *= 2;
	}

	void FixedUpdate(){

		if (isSleepy)
			return;

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
			rb2d.velocity = new Vector2(x * scale, y * scale);
			return;
		}

		if (counter == 0) {
			float x = Random.Range (-80.0f, 80.0f);
			float y = Random.Range (-45.0f, 45.0f);
			int flag = Random.Range (0, 10);
			if (flag >= 4 && (transform.position.x >= xMax - 0.1 || transform.position.x <= xMin + 0.1
				|| transform.position.y >= yMax - 0.1 || transform.position.y <= yMin + 0.1)) {
				if (transform.position.x > 0)
					x = -Mathf.Abs (x);
				else
					x = Mathf.Abs (x);
				if (transform.position.y > 0)
					y = -Mathf.Abs (y);
				else
					y = Mathf.Abs (y);
			}
			Vector2 force = new Vector2 (x * speedScale * scale, y * speedScale * scale);
			rb2d.AddForce (force);
			if (rb2d.velocity.magnitude >= 2.0f * scale * speedScale)
				rb2d.velocity *= 0.5f;

//			Vector2 vv = rb2d.velocity.normalized;
//			if (rb2d.velocity.magnitude == 0) {
//				float angle = transform.rotation.eulerAngles.z / 180f * Mathf.PI;
//				vv.x = -Mathf.Sin (angle);
//				vv.y = Mathf.Cos (angle);
//			}
//			float x = Random.Range(0f, 90f);
//
//			Vector2 force = vv * x;
//			print (force);
//			rb2d.AddForce (force);
		}

		transform.position = new Vector3 (
			Mathf.Clamp(transform.position.x, xMin, xMax),
			Mathf.Clamp(transform.position.y, yMin, yMax),
			0
		);

		++counter;
		if (counter == 50)
			counter = 0;
	}

	public void NormalMove(){
		if (state == 0)
			return;
		state = 0;
		counter = 0;
		rb2d.Sleep ();
	}

	public void init(){
		state = Random.Range (0, 3) + 2;
		rb2d = GetComponent<Rigidbody2D> ();
		float x, y;
		float r = 1.0f;
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
		WakeUp ();
	}

	public void SuddernOccur(){
		state = 0;
		rb2d = GetComponent<Rigidbody2D> ();
		WakeUp ();
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
		rb2d.bodyType = RigidbodyType2D.Dynamic;
		rb2d.WakeUp ();
	}

	// Use this for initialization
	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		counter = 0;
		isSleepy = false;
		scale = 1;
		//BoardManager.isPracticeMode = true;
	}
}
