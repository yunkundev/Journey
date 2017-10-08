using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardManager : MonoBehaviour {
	
	public static BoardManager instance;
	public List<Sprite> characters = new List<Sprite> ();
	public GameObject tile;
	public GameObject line;
	public int number;
	public float lenOfLine;


	private GameObject[] tiles;
	private int[] type;
	private Vector3 mousePos;
	private bool hasTiles;
	private int[] chosen;
	private int cnt;
	private List<GameObject> lines = new List<GameObject>();
	private int[] state; // the state of every tile, 0: active, 1: chosen but not removed, 2: removed

	// Use this for initialization
	void Start () {
		instance = GetComponent<BoardManager> ();
		init ();
	}

	void init(){
		tiles = new GameObject[number];
		type = new int[number];
		state = new int[number];
		chosen = new int[number + 5];
		for (int i = 0; i < number; ++i) {
			float x = (float)Random.Range ((float)-2.5, (float)2.5);
			float y = (float)Random.Range ((float)-1.7, (float)1.7);
			GameObject newTile = Instantiate (tile, new Vector3(x, y, 0), tile.transform.rotation);
			newTile.transform.parent = transform;
			int idx = Random.Range (0, characters.Count);
			Sprite newSprite = characters [idx];
			newTile.GetComponent<SpriteRenderer> ().sprite = newSprite;
			tiles [i] = newTile;
			type [i] = idx; 
			state [i] = 0;
			chosen [i] = 0;
		}
		tile.SetActive (false);
		line.SetActive (false);
		hasTiles = false;
		cnt = 0;
		lines.Clear ();
	}

	int GetTileIndex(){
		Vector3 pos = Camera.main.ScreenToWorldPoint (mousePos);
		pos.z = 0;
		for (int i = 0; i < number; ++i) {
			if (state [i] == 2)
				continue;
			CircleCollider2D cc = tiles [i].GetComponent<CircleCollider2D> ();
			if (cc.bounds.Contains(pos)) {
				return i;
			}
		}
		return -1;
	}

	void ChangeToStatic(int idx){
		TileController tc = tiles [idx].GetComponent<TileController> ();
		state [idx] = 1;
		if (!tc.IsSleepy ())
			tc.Sleep ();
	}

	void ChangeToDynamic(int idx){
		TileController tc = tiles [idx].GetComponent<TileController> ();
		state [idx] = 0;
		if (tc.IsSleepy ())
			tc.WakeUp ();
	}

	void RemoveAll(){
		hasTiles = false;
		if (cnt == 1) {
			ChangeToDynamic (chosen [0]);
		} else {
			for (int i = 0; i < cnt; ++i) {
				tiles [chosen [i]].SetActive (false);
				state [chosen [i]] = 2;
			}
		}
		cnt = 0;
		for (int i = 0; i < lines.Count; ++i) {
			lines [i].SetActive (false);
		}
	}

	bool InCircle(int idx, int st){
		float sum = 0;
		for (int i = st; i < cnt - 1; ++i) {
			Vector3 p1 = tiles [chosen [i]].GetComponent<CircleCollider2D> ().bounds.center;
			Vector3 p2 = tiles [chosen [i + 1]].GetComponent<CircleCollider2D> ().bounds.center;
			sum += p1.x * p2.y - p1.y * p2.x;
		}
		if (sum < 0)
			sum = -sum;
		Vector3 p = tiles [idx].GetComponent<CircleCollider2D> ().bounds.center;
		for (int i = st; i < cnt - 1; ++i) {
			Vector3 p1 = tiles [chosen [i]].GetComponent<CircleCollider2D> ().bounds.center - p;
			Vector3 p2 = tiles [chosen [i + 1]].GetComponent<CircleCollider2D> ().bounds.center - p;
			sum -= Mathf.Abs (p1.x * p2.y - p1.y * p2.x);
		}
		return Mathf.Abs (sum) < 1e-5;
	}

	void RemoveAllinCircle(int idx){
		int pos = -1;
		for (int i = 0; i < cnt; ++i) {
			if (idx == chosen [i]) {
				pos = i;
				break;
			}
		}
		for (int i = 0; i < number; ++i) {
			if (state [i] != 0)
				continue;
			if (InCircle (i, pos)) {
				tiles [i].SetActive (false);
				state [i] = 2;
			}
		}
	}

	void Update(){
		if (Input.GetMouseButtonDown (0)) {
			mousePos = Input.mousePosition;
			int idx = GetTileIndex ();
			if (idx != -1) {
				ChangeToStatic (idx);
				hasTiles = true;
				cnt = 0;
				chosen [cnt++] = idx;
				print ("2 : push " + idx);
				//print ("1: Push" + idx + "cnt = " + cnt);
				GameObject clone = Instantiate(line, tiles[idx].transform.position, transform.rotation);
				clone.transform.parent = transform;
				clone.transform.localScale = new Vector3 (0, 1, 1);
				clone.SetActive (true);
				lines.Add (clone);
			}
		}
		else if (Input.GetMouseButton (0)) {
			if (hasTiles) {
				mousePos = Input.mousePosition;

				int idx = GetTileIndex ();
				if (idx == -1) {
					//print ("1: Generate line " + lines.Count);
					GameObject l = lines [lines.Count - 1];

					Vector3 real = Camera.main.ScreenToWorldPoint (mousePos);
					Vector3 dir = (real - l.transform.position);
					dir.z = 0;
					dir = dir.normalized;
					l.transform.right = dir;
					Vector3 dt = new Vector3 (real.x - l.transform.position.x, real.y - l.transform.position.y, 0);
					float dis = Mathf.Sqrt (dt.x * dt.x + dt.y * dt.y);
					l.transform.localScale = new Vector3 (dis / lenOfLine, 1, 1);

				} else {
					print ("idx = " + idx);
					if (type [idx] != type [chosen [0]]) {//different types of tiles
						RemoveAll ();
					} else if (state [idx] == 1) {// has been chosen
						if(chosen[cnt - 1] == idx) return;
						chosen[cnt++] = idx;
						print ("3 : push " + idx);
						RemoveAllinCircle(idx);
						RemoveAll ();
					} else {
						ChangeToStatic (idx);
						GameObject l = lines [lines.Count - 1];
						Vector3 pos = tiles [idx].GetComponent<CircleCollider2D> ().bounds.center;

						Vector3 dt = new Vector3 (pos.x - l.transform.position.x, pos.y - l.transform.position.y, 0);
						float dis = Mathf.Sqrt (dt.x * dt.x + dt.y * dt.y);
						l.transform.localScale = new Vector3 (dis / lenOfLine, 1, 1);

						Vector3 dir = pos - l.transform.position;
						dir.z = 0;
						dir = dir.normalized;
						l.transform.right = dir;
					
						chosen [cnt++] = idx;
						print ("1 : push " + idx);
						GameObject clone = Instantiate(line, tiles[idx].transform.position, transform.rotation);
						clone.transform.parent = transform;
						clone.transform.localScale = new Vector3 (0, 1, 1);
						clone.SetActive (true);
						lines.Add (clone);

						//print ("3 : Init" + lr.GetPosition (0) + " " + lr.GetPosition (1));
					}
				}
			}
		}
		else if (Input.GetMouseButtonUp (0)) {
			RemoveAll ();
		}
	}

}
