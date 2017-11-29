using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BoardManager : MonoBehaviour {

	private const int capacity = 100;
	private const int number = 20;
	private const int ScoreForSameColor = 150;
	private const int Normal = 1;
	private const int Challenge = 2;
	private const int Crazy = 3;

	public static bool isPracticeMode;
	public static BoardManager instance;
	public static int PlayMode;

	public Sprite frozen_bg, normal_bg;
	public GameObject white_bg;

	public GameObject ResumeButton, HomeButton;

	public List<GameObject> Bugs = new List<GameObject> ();
	public List<Sprite> Deads = new List<Sprite> ();
	public List<Sprite> BonusesSprites = new List<Sprite> ();

	private GameObject[] bugs;
	private List<int>[] freebugs;
	private List<int> activeBugs = new List<int> ();
	private List<int> chosenBugs = new List<int> ();
	//the state of every bug, 0: inactive, 1: totally active, 2: chosen
	private int[] state;
	private int counterForNewBugs;

	public GameObject line;
	public float lenOfLine;
	private GameObject[] lines;

	public List<Sprite> NumbersForTime = new List<Sprite>();
	public GameObject time_ten, time_one;
	private int restTime;

	public GameObject TemplateForScore, TemplateForChange, Slash;
	public List<Sprite> NumberForScore = new List<Sprite> ();
	private List<GameObject> digitsOfScore = new List<GameObject> ();
	private List<GameObject> changeOfScore = new List<GameObject> ();
	private int score, prev, cntForChange, valForChange;
	// Use this for initialization

	public GameObject TimerMask, TimerWarpper, TimerInner;
	private float totalDis;
	private bool isTouching;
	private int stateOfTimer;
	private Vector3 init_pos;

	public List<GameObject> bonuses = new List<GameObject> ();
	private int countForBonus, prev_score, bonus_idx, bonus_level, same_color;
	private bool hasBonus, canChangeToSameColor;

	private int level;
	public List<int> TargetScore = new List<int> ();
	private List<GameObject> targetScores = new List<GameObject> ();
	public GameObject TemplateForTargetScore;

	public GameObject Punish;
	private int counterForPunish;
	private int timeForRemovePunish;
	private bool punishExist;

	private bool isPaused;

	void delete_bonus(){
		if (bonus_idx == -1)
			return;
		bonuses [bonus_idx].GetComponent<BonusController> ().MoveOut ();
	}

	void create_bonus(int idx = -1){
		if (idx != -1)
			bonus_idx = idx;
		else
			bonus_idx = Random.Range (0, bonuses.Count);
		bonuses [bonus_idx].GetComponent<BonusController> ().WakeUp ();
		Invoke ("delete_bonus", 12);
	}

	void recover(){
		for (int i = 0; i < activeBugs.Count; ++i) {
			int idx = activeBugs [i];
			bugs [idx].GetComponent<TileController> ().Recover ();
		}
		GetComponent<SpriteRenderer> ().sprite = normal_bg;
		reset_bonus ();
	}

	void exit_same_color(){
		bonus_idx = -1;
		same_color = -1;
	}

	void gain_bonus(){
		if (bonus_idx == 0) {
			bonuses [bonus_idx].GetComponent<BonusController> ().Init ();

			for (int i = 0; i < activeBugs.Count; ++i) {
				int idx = activeBugs [i];
				bugs [idx].GetComponent<TileController> ().Frozen ();
			}
			GetComponent<SpriteRenderer> ().sprite = frozen_bg;
			Invoke ("recover", 8);
		} else if(bonus_idx == 1) {
			bonuses [1].GetComponent<BonusController> ().Init ();
			change_to_same_color ();
			Invoke ("exit_same_color", 5);
		}
	}

	void change_to_same_color(){
		if (bonus_idx != 1)
			return;
		List<Vector3> rc = new List<Vector3> ();
		List<int> tmp = new List<int> ();
		for (int i = 0; i < activeBugs.Count; ++i) {
			tmp.Add (activeBugs [i]);
		}

		for (int i = 0; i < tmp.Count; ++i) {
			int idx = tmp [i];
			rc.Add (bugs [idx].transform.position);
			remove_bug (idx, true, false);
		}
		//print ("active size " + activeBugs.Count);
		int n = rc.Count;
		int kind = Random.Range(0, Bugs.Count);
		for (int i = 0; i < n; ++i) {
			int idx = freebugs [kind] [0];
			freebugs [kind].Remove (idx);
			activeBugs.Add (idx);
			bugs [idx].SetActive (true);
			bugs [idx].transform.position = rc [i];
			state [idx] = 1;
			bugs [idx].GetComponent<TileController> ().SuddernOccur ();
			bugs [idx].GetComponent<Animator> ().enabled = true;
		}
		//print ("active size " + activeBugs.Count);
		same_color = kind;
	}

	void check_bonus(){
		if (PlayMode == Crazy)
			return;
		
		++countForBonus;
		if (PlayMode == Normal) {
			if (bonus_level == 2)
				return;
			int tmp;
			if (countForBonus >= 1800 && bonus_level == 1) {
				tmp = Random.Range (0, 2400 - countForBonus);
				if (tmp == 0) {
					create_bonus (1);
					++bonus_level;
				}
			} else if (countForBonus >= 600 && bonus_level == 0) {
				tmp = Random.Range (0, 900 - countForBonus);
				if (tmp == 0) {
					create_bonus (0);
					++bonus_level;
				}
			}
		} else {
			if (bonus_level == 1)
				return;
			int tmp;
			if (countForBonus >= 900) {
				tmp = Random.Range (0, 1200 - countForBonus);
				if (tmp == 0) {
					create_bonus ();
					++bonus_level;
				}
			}
		}
	}

	void reset_bonus(){
		bonus_idx = -1;
	}

	void generate_bug(bool first){
		int kind = Random.Range (0, Bugs.Count);
		if (same_color >= 0) {
			kind = same_color;
		}
		int idx = freebugs [kind] [0];
		freebugs [kind].Remove (idx);
		activeBugs.Add (idx);
		if (first) {
			float x = Random.Range (-8.25f, 8.25f);
			float y = Random.Range (-4.4f, 3.5f);
			bugs [idx].SetActive (true);
			bugs [idx].transform.position = new Vector3 (x, y, 0);
		} else {
			//print ("create " + idx);
			bugs [idx].SetActive (true);
			bugs [idx].GetComponent<TileController> ().init ();
			bugs [idx].GetComponent<Animator> ().enabled = true;
			bugs [idx].GetComponent<Animator> ().SetBool ("isDead", false);
		}
		//print ("gen " + idx);
		state[idx] = 1;
	}

	void init_bugs(){
		counterForNewBugs = 0;
		int kinds = Bugs.Count;
		bugs = new GameObject[capacity];
		state = new int[capacity];
		freebugs = new List<int>[5];
		for (int i = 0; i < kinds; ++i) {
			freebugs[i] = new List<int>();
			for (int j = 0; j < number; ++j) {
				//print ("init " + (i * number + j));
				bugs [i * number + j] = Instantiate (Bugs [i], new Vector3(0, 0, 0), Bugs[i].transform.rotation);
				bugs [i * number + j].SetActive (false);
				freebugs [i].Add (i * number + j);
			}
			Bugs [i].SetActive (false);
		}
		for (int i = 0; i < capacity; ++i)
			state [i] = 0;
		activeBugs.Clear ();
		for (int i = 0; i < number; ++i) {
			generate_bug (true);
		}
	}

	void init_lines(){
		lines = new GameObject[number];
		for (int i = 0; i < number; ++i) {
			lines [i] = Instantiate (line, new Vector3 (0, 0, 0), line.transform.rotation);
			lines [i].SetActive (false);
		}
		line.SetActive (false);
	}

	void show_time(){
		if (restTime < 0) {
			end_game ();
			return;
		}
		int x = restTime / 10;
		int y = restTime % 10;
		time_ten.GetComponent<SpriteRenderer> ().sprite = NumbersForTime [x];
		time_one.GetComponent<SpriteRenderer> ().sprite = NumbersForTime [y];
		--restTime;
		if (PlayMode != Crazy || punishExist) {
			Invoke ("show_time", 1);
		}
	}

	void init_time(){
		if (PlayMode == Normal)
			restTime = 60;
		else if (PlayMode == Challenge)
			restTime = 30;
		else
			restTime = timeForRemovePunish;
		show_time ();
	}

	void show_change_of_score(){
		int dt = valForChange;
		if (dt == 0)
			return;
		if (cntForChange == 8) {
			List<int> rc = new List<int> ();
			while (dt > 0) {
				rc.Add (dt % 10);
				dt /= 10;
			}
			changeOfScore [0].SetActive (true);
			for (int i = rc.Count - 1, j = 1; i >= 0; --i, ++j) {
				changeOfScore [j].GetComponent<SpriteRenderer> ().sprite = NumberForScore [rc [i]];
				changeOfScore [j].SetActive (true);
			}
		} 
		Color cc = changeOfScore [0].GetComponent<SpriteRenderer> ().color;
		cc.a = 0.125f * cntForChange;
		for (int i = 0; i < changeOfScore.Count; ++i) {
			changeOfScore [i].GetComponent<SpriteRenderer> ().color = cc;
		}
		if (cntForChange > 0) {
			--cntForChange;
			Invoke ("show_change_of_score", 0.125f);
		} else {
			for (int i = 0; i < changeOfScore.Count; ++i) {
				changeOfScore [i].SetActive (false);
			}
		}
	}

	void show_score(bool first){
		if (prev == score && !first)
			return;
		int tmp = score;
		digitsOfScore [0].GetComponent<SpriteRenderer> ().sprite = NumbersForTime [tmp % 10];
		tmp /= 10;
		for (int i = 1; i < digitsOfScore.Count; ++i) {
			if (tmp > 0) {
				digitsOfScore [i].GetComponent<SpriteRenderer> ().sprite = NumbersForTime [tmp % 10];
				digitsOfScore [i].SetActive (true);
				tmp /= 10;
			} else {
				digitsOfScore [i].SetActive (false);
			}
		}
		cntForChange = 8;
		valForChange = score - prev;
		show_change_of_score ();
		prev = score;
	}

	void show_target_score(){
		if (PlayMode != 2)
			return;
		if (level == -1 || score >= TargetScore [level]) {
			++level;
			countForBonus = 0;
			bonus_level = 0;
			if (level != 0) {
				TileController.speedScale *= 1.1f;
				restTime += 30;
				//print ("level up");
			}
			int tmp = TargetScore [level];
			int[] X = new int[10];
			int len = 0;
			while (tmp != 0) {
				X [len++] = tmp % 10;
				tmp /= 10;
			}
//			for (int i = 3; i >= 0; --i) {
//				targetScores [i].GetComponent<SpriteRenderer> ().sprite = NumbersForTime [tmp % 10];
//				tmp /= 10;
//			}

			for (int i = len - 1, j = 0; j < targetScores.Count; --i, ++j) {
				if (i >= 0) {
					targetScores [j].GetComponent<SpriteRenderer> ().sprite = NumbersForTime [X [i]];
					targetScores [j].SetActive (true);
				} else {
					targetScores [j].SetActive (false);
				}
					
			}

		}
	}

	void init_score(){
		score = 0;
		prev = 0;
		digitsOfScore.Add (TemplateForScore);
		float dt = TemplateForScore.GetComponent<SpriteRenderer> ().bounds.size.x * 0.6f;
		//TemplateForScore.GetComponent<SpriteMask>().transform.localScale
		Vector3 pos = TemplateForScore.transform.position;
		for (int i = 1; i < 5; ++i) {
			pos.x -= dt;
			GameObject tmp = Instantiate (TemplateForScore, pos, TemplateForScore.transform.rotation);
			digitsOfScore.Add (tmp);
		}
		changeOfScore.Add (TemplateForChange);
		TemplateForChange.SetActive (false);
		dt = TemplateForChange.GetComponent<SpriteRenderer> ().bounds.size.x * 0.8f;
		pos = TemplateForChange.transform.position;
		for (int i = 1; i < 5; ++i) {
			pos.x += dt;
			GameObject tmp = Instantiate (TemplateForChange, pos, TemplateForChange.transform.rotation);
			tmp.SetActive (false);
			changeOfScore.Add (tmp);
		}
		targetScores.Add (TemplateForTargetScore);
		pos = TemplateForTargetScore.transform.position;
		dt = TemplateForTargetScore.GetComponent<SpriteRenderer> ().bounds.size.x * 0.6f;
		for (int i = 1; i < 5; ++i) {
			pos.x += dt;
			GameObject tmp = Instantiate (TemplateForTargetScore, pos, TemplateForTargetScore.transform.rotation);
			targetScores.Add (tmp);
		}
		if (PlayMode != Challenge) {
			print ("Slash set inactive");
			Slash.SetActive (false);
			for (int i = 0; i < targetScores.Count; ++i) {
				targetScores [i].SetActive (false);
			}
		}
		show_score (true);
		level = -1;
		show_target_score ();
	}

	void init_timer(){
		init_pos = TimerInner.transform.position;
		init_pos.x = init_pos.x - TimerInner.GetComponent<SpriteRenderer> ().bounds.size.x / 2 +
		TimerMask.GetComponent<SpriteMask> ().bounds.size.x / 2;
		
		TimerMask.transform.position = init_pos;
		totalDis = TimerInner.transform.position.x + TimerMask.GetComponent<SpriteMask> ().bounds.size.x / 2;
		totalDis += TimerInner.GetComponent<SpriteRenderer> ().bounds.size.x / 2;
		totalDis -= init_pos.x;
	}

	void init_bonus(){
		for (int i = 0; i < bonuses.Count; ++i) {
			bonuses [i].GetComponent<BonusController> ().Init ();
		}
		bonus_level = 0;
		same_color = -1;
		reset_bonus ();
	}

	void init_punish(){
		if (PlayMode != Crazy) {
			punishExist = false;
			return;
		}
		TileController.speedScale = 1.5f;
		counterForPunish = 0;
		Punish.GetComponent<BonusController> ().Init ();
		punishExist = false;
		timeForRemovePunish = 30;
	}

	void Start () {
		instance = GetComponent<BoardManager> ();

		GetComponent<SpriteRenderer> ().sprite = normal_bg;

		TileController.speedScale = 1.0f;

		isPaused = false;
		white_bg.SetActive (false);
		ResumeButton.SetActive (false);
		HomeButton.SetActive (false);

		Time.timeScale = 1;

		init_bonus ();

		init_bugs ();

		init_punish ();

		init_lines ();

		init_time ();

		init_score ();

		init_timer ();

		//init_score ();
		//ShowTime ();
		//init_bonus ();
		//init_effects ();
	}

	void handle_user_input(){
		if (Input.GetMouseButtonDown (0)) {
			//print ("Down");
			Vector3 pos = Input.mousePosition;
			pos = Camera.main.ScreenToWorldPoint (pos);
			pos.z = 0;
			//print (pos);
			int idx = get_bug_index (pos);
			if (idx != -1) {
				change_to_static (idx);
				chosenBugs.Add (idx);
				draw_line_at (0, bugs[idx].transform.position, true);
				timer_start ();
			}
		} else if (Input.GetMouseButton (0) && chosenBugs.Count > 0) {
			Vector3 pos = Input.mousePosition;
			pos = Camera.main.ScreenToWorldPoint (pos);
			pos.z = 0;
			int idx = get_bug_index (pos);
			if (idx != -1 && idx / number == chosenBugs [0] / number) {

				if (state [idx] == 1) {
					change_to_static (idx);
					draw_line_at (chosenBugs.Count - 1, bugs[idx].transform.position, false);
					chosenBugs.Add (idx);
					draw_line_at (chosenBugs.Count - 1, bugs[idx].transform.position, true);
				} else if(idx != chosenBugs[chosenBugs.Count - 1]){
					remove_in_circle (idx);
					remove_all ();
				}
			} else {
				draw_line_at (chosenBugs.Count - 1, pos, false);
			}
		} else if (Input.GetMouseButtonUp (0) && chosenBugs.Count > 0) {
			remove_all ();
		}
	}

	void push_new_bugs(){
		++counterForNewBugs;
		if (counterForNewBugs >= 60 || activeBugs.Count < number / 2) {
			counterForNewBugs = 0;
			if (activeBugs.Count == number)
				return;
			int n = number - activeBugs.Count;
			int flag = 0;
			if (n < number / 2) {
				flag = 1;
			} else if (n < number * 2 / 3) {
				flag = Random.Range (0, 2) == 0 ? 1 : 0;
			} else if (n < number * 3 / 4) {
				flag = Random.Range (0, 3) == 0 ? 1 : 0;
			} else if (n < number * 4 / 5) {
				flag = Random.Range (0, 4) == 0 ? 1 : 0;
			} else {
				flag = Random.Range (0, 5) == 0 ? 1 : 0;
			}
			if (flag == 1) {
				for (int i = activeBugs.Count; i < number; ++i) {
					generate_bug (false);
				}
			}
		}
	}

	void punish_boom(){
		if (!punishExist)
			return;
		else
			end_game ();
//		Vector3 qq = Punish.GetComponent<CircleCollider2D> ().bounds.center;
//		//print ("qq = " + qq);
//		float r = 49;
//		List<int> tmp = new List<int> ();
//		for (int i = 0; i < activeBugs.Count; ++i) {
//			int idx = activeBugs [i];
//			Vector3 pp = bugs [idx].transform.position;
//			//print ("pp = " + pp);
//			if ((pp.x - qq.x) * (pp.x - qq.x) + (pp.y - qq.y) * (pp.y - qq.y) <= r) {
//				tmp.Add (idx);
//			}
//		}
//		print (tmp.Count);
//		for (int i = 0; i < tmp.Count; ++i) {
//			remove_bug (tmp [i], true, false);
//		}
//		punishExist = false;
//		Punish.GetComponent<BonusController> ().Init ();
//		Invoke ("reset_punish_allowed", 20);
	}

	void create_punish(){
		Punish.GetComponent<BonusController> ().WakeUp ();
		punishExist = true;
		counterForPunish = 0;
		show_time ();
	}

	void check_punish(){
		if (PlayMode != Crazy)
			return;
		if (!punishExist) {
			++counterForPunish;
			if (counterForPunish >= 300) {
				create_punish ();
				Invoke ("punish_boom", timeForRemovePunish);
				if (timeForRemovePunish > 10)
					timeForRemovePunish -= 5;
				else
					--timeForRemovePunish;
			}
		}
	}

	void Update(){
		handle_user_input ();
	}
		
	void FixedUpdate(){

		if (isPaused)
			return;

		push_new_bugs ();

		show_score (false);

		show_target_score ();

		update_timer ();

		check_bonus ();

		check_punish ();

	}

	void timer_start(){
		//print ("timer start");
		isTouching = true;
		stateOfTimer = 0;
		Vector3 pos = init_pos;
		pos.x += totalDis;
		TimerMask.transform.position = pos;
	}

	void timer_end(){
		//print ("timer end");
		isTouching = false;
		TimerMask.transform.position = init_pos;
	}

	void update_timer(){
		if (!isTouching)
			return;
		if (stateOfTimer < 300) {
			Vector3 pos = TimerMask.transform.position;
			pos.x -= totalDis / 300;
			TimerMask.transform.position = pos;
		} else {
			remove_all_lines ();
			timer_end ();
		}
		++stateOfTimer;
	}

	void remove_all_lines(){
		int n = chosenBugs.Count;
		for (int i = 0; i < n; ++i) {
			lines [i].SetActive (false);
		}
		for (int i = 0; i < n; ++i) {
			int idx = chosenBugs [i];
			change_to_dynamic (idx);
		}
		chosenBugs.Clear ();
	}

	bool in_circle(Vector3 pos, List<Vector3> points){
		int num = 0;
		float d1, d2, k;
		for (int i = 0; i + 1 < points.Count; ++i) {
			Vector3 v1 = points [i + 1] - points [i];
			Vector3 v2 = pos - points [i];
			k = v1.x * v2.y - v1.y * v2.x;
			d1 = points [i].y - pos.y;
			d2 = points [i + 1].y - pos.y;
			if (k > 0 && d1 <= 0 && d2 > 0)
				++num;
			if (k < 0 && d2 <= 0 && d1 > 0)
				--num;
		}
		return num != 0;
	}	

	void reset_punish(){
		counterForPunish = 0;
		punishExist = false;
		restTime = timeForRemovePunish;
		CancelInvoke ("punish_boom");
		CancelInvoke ("show_time");
		show_time ();
	}

	void remove_punish(){
		if (punishExist) {
			Punish.GetComponent<BonusController> ().Init ();
			reset_punish ();
		}
	}

	void remove_in_circle(int idx){
		//print ("Remove in circle");
		int st = 0;
		while (st < chosenBugs.Count && chosenBugs[st] != idx) {
			++st;
		}
		List<Vector3> points = new List<Vector3> ();
		for (int i = st; i < chosenBugs.Count; ++i) {
			points.Add (bugs [chosenBugs [i]].GetComponent<CircleCollider2D> ().bounds.center);
		}
		points.Add (points[0]);
		for (int i = 0; i < capacity; ++i) {
			if (state [i] == 1 && in_circle (bugs [i].GetComponent<CircleCollider2D> ().bounds.center, points)) {
				remove_bug (i, false, true);
			}
		}
		if (bonus_idx != -1 && in_circle (bonuses [bonus_idx].GetComponent<CircleCollider2D> ().bounds.center, points)) {
			gain_bonus ();
		}
		if (punishExist && in_circle (Punish.GetComponent<CircleCollider2D> ().bounds.center, points)) {
			remove_punish ();
		}
	}

	void remove_all(){

		for (int i = 0; i < chosenBugs.Count; ++i) {
			lines [i].SetActive (false);
		}

		if (chosenBugs.Count == 1) {
			change_to_dynamic (chosenBugs [0]);
		} else {
			for (int i = 0; i < chosenBugs.Count; ++i) {
				remove_bug (chosenBugs [i], true, true);
			}
		}
		chosenBugs.Clear ();
		timer_end ();
	}

	IEnumerator set_inactive(int idx, float s){
		yield return new WaitForSeconds (s);
		freebugs [idx / number].Add (idx);
		activeBugs.Remove (idx);
		bugs [idx].SetActive (false);
	}

	void remove_bug(int idx, bool isChosen, bool valid){
		//print ("remove " + idx);
		//bugs [idx].SetActive (false);
		state [idx] = 0;
		if (!valid) {
			freebugs [idx / number].Add (idx);
			activeBugs.Remove (idx);
			bugs [idx].SetActive (false);
			return;
		}
		if (isChosen)
			score += 10;
		else
			score += 20;
		bugs [idx].GetComponent<Animator> ().enabled = true;
		bugs [idx].GetComponent<Animator> ().SetBool ("isDead", true);
		//bugs [idx].GetComponent<Animator> ().transform.localScale = new Vector3 (1.2f, 1.2f, 1);
		StartCoroutine (set_inactive (idx, 0.5f));
	}

	void draw_line_at(int idx, Vector3 pos, bool _init){
		//print ("idx = " + idx);
		if (_init) {
			if (idx != 0)
				lines [idx - 1].GetComponentInChildren<BoxCollider2D> ().enabled = true;
			lines [idx].transform.position = pos;
			lines [idx].transform.localScale = new Vector3 (0, 1, 1);
			lines [idx].GetComponentInChildren<BoxCollider2D> ().enabled = false;
			lines [idx].SetActive (true);
		} else {
			GameObject l = lines [idx];
			Vector3 dir = (pos - l.transform.position);
			dir.z = 0;
			dir = dir.normalized;
			l.transform.right = dir;
			Vector3 dt = new Vector3 (pos.x - l.transform.position.x, pos.y - l.transform.position.y, 0);
			float dis = Mathf.Sqrt (dt.x * dt.x + dt.y * dt.y);
			l.transform.localScale = new Vector3 (dis / lenOfLine, 1, 1);
		}
	}

	void change_to_dynamic(int idx){
		state [idx] = 1;
		bugs [idx].GetComponent<TileController> ().WakeUp ();
		bugs [idx].GetComponent<Animator> ().enabled = true;
	}

	void change_to_static(int idx){
		//print ("static " + idx);
		state [idx] = 2;
		bugs [idx].GetComponent<TileController> ().Sleep ();
		int kind = idx / number;
		bugs [idx].GetComponent<Animator> ().enabled = false;
		bugs [idx].GetComponent<SpriteRenderer> ().sprite = Deads [kind];
	}

	int get_bug_index(Vector3 pos){
		for (int i = 0; i < activeBugs.Count; ++i) {
			int idx = activeBugs [i];
			//print (bugs [idx].GetComponent<CircleCollider2D> ().bounds);
			if (bugs [idx].GetComponent<CircleCollider2D> ().bounds.Contains (pos)) {
				if (state [idx] != 0)
					return idx;
				else
					break;
			}
		}
		return -1;
	}

	public void exit_game(){
		SceneManager.LoadScene (0);
		//SceneManager.LoadScene (0);
	}

	public void end_game(){
		ShowFinalScore.score = score;
		SceneManager.LoadScene (2);
	}

	public void pause_game(){
		isPaused = true;
		Time.timeScale = 0;
		white_bg.SetActive (true);
		ResumeButton.SetActive (true);
		HomeButton.SetActive (true);
	}

	public void resume_game(){
		isPaused = false;
		Time.timeScale = 1;
		white_bg.SetActive (false);
		ResumeButton.SetActive (false);
		HomeButton.SetActive (false);
	}

}
