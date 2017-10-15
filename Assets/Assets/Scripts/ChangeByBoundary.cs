using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeByBoundary : MonoBehaviour {
	void OnTriggerEnter2D(Collider2D other){
		if (other.CompareTag ("tiles")) {
			other.GetComponent<TileController> ().NormalMove ();
		}
	}
}
