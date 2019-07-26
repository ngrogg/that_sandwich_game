package;

import flixel.FlxG;
import flixel.addons.display.FlxStarField.FlxStarField2D;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.system.FlxSound;
//import haxe.Http;
//import haxe.Json;
//import js.Cookie;

/**
 * ...
 * Based on the FlxTeroid source code by @author Zaphod
 */

class MenuState extends FlxState
{
//	public static var Time = Date.now();
	public static var splash = new FlxSprite(640,480);
	// Thompson variable
	//public static var ArmUrl:String = "https://datadrivengame.science/sandwich/thompson_call.php";
	public static var Arm:Int;
	public static var ArmType:String;
	public static var ArmLog:String;
	public static var uid:String;

	override public function create():Void 
	{
		//ThompsonCall();
		//testCookies();
	// untested, should log when a player first starts the game and only that
		if(UpgradeState.newGame == 1)
		{
			UpgradeState._sequence += 1;	
			UpgradeState.newGame += 1;
			//PlayState.Generic_Logging("30");
		}
		
		//add(new FlxStarField2D());

		var t:FlxText;
		
		splash.x = 0;
		splash.y = 0;
		splash.loadGraphic("assets/splashscreen.png");
		add(splash);

		t = new FlxText(0,0, FlxG.width, "Version: " + UpgradeState._version);
		t.setFormat(null, 10, FlxColor.WHITE, RIGHT, OUTLINE);
		add(t);
		
		t = new FlxText(0, FlxG.height /2 + 190, FlxG.width, "Press D to visit the 'Deli'ary");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height /2 + 205, FlxG.width, "Press I to launch infinity mode");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height /2 + 220, FlxG.width, "Press P to start");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		// Play menu music
		FlxG.sound.playMusic("assets/Menu.ogg", 1, true);

	}
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.keys.justReleased.P)
		{
			// Pause Music
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}

			UpgradeState._sequence += 1;	

			// logging function for starting new game
			//PlayState.Generic_Logging("1");
			
			// Set FiniteState to 1
			UpgradeState.FiniteState = 1;

			//splash.kill();
			remove(splash);
//			FlxG.switchState(new PlayState());
			FlxG.switchState(new IntroCutscene());
		}

		if (FlxG.keys.justReleased.D)
		{
			// Pause Music
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}
			remove(splash);

				UpgradeState._sequence += 1;
			//Logging for Deliary
			//PlayState.Generic_Logging("27");

			FlxG.switchState(new Deliary());
		}
		
		if (FlxG.keys.justReleased.I)
		{
			// Set Max health to 2
			UpgradeState._max_bread = 5;

			// Set Max bullets to 3
			UpgradeState._num_bullets = 5;

			// Set Rotation speed to 200
			UpgradeState._rotation_speed = 350;

			// Set Score to 0
			UpgradeState._score = 0;
			
			// Set FiniteState to 0
			UpgradeState.FiniteState = 0;
			
			// Pause Music
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}
			
			remove(splash);
	
				UpgradeState._sequence += 1;
			//Logging for Deliary
			//PlayState.Generic_Logging("28");
	
			FlxG.switchState(new PlayState());
			
		}
		
	}
/*
	public static function testCookies()
		{
			var cookieName:String = "GUID";
	//		public static var uid:String = Cookie.get(cookieName);
			//uid = Cookie.get(cookieName);
	
			if (uid == null)
			{
				uid = Guid.generate();
				//Cookie.set(cookieName, uid);
				trace(" created new user id: " + uid);
			}
			else
			{
				trace(" existing user id is " + uid);
			}
		}
*/

/*
	// Thompson functions
	public static function ThompsonCall()
	{
		// String for cookie arm
		var cookieArm:String;

		// Set request to Thompson php url
		var request:Http = new Http(ArmUrl);
		
		// In the event a connection fails, assign "default" values
		request.onError = function (err)
		{
			trace("OnError = " + err);
			Arm = 0;
			cookieArm = "0";
			ArmType = "A";
		}
	
		// Set Arm	
		request.onData = function (data)
		{
			Arm = Json.parse(data);
			cookieArm = Json.parse(data);
			ArmType = "B";
		}

		request.request(true);
		
		// output arm to console
		trace("Arm = " + Arm);

		// Set arm to cookie
		var cookieName:String = "Arm";
		ArmLog = "" + Arm;	
		if (Arm == null)
		{
			Cookie.set(cookieName, cookieArm);
			trace("Arm set = " + cookieArm);
		}
		else
		{
			trace(" existing arm is " + cookieArm);
		}

		// Set arm values

		if (Arm == 1)
		{
			trace("Arm 1, faster enemies, increased spawn ");
			
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 125;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 1.5;
			
		}

		else if(Arm == 2)
		{
			trace("Arm 2, faster enemies, slower spawn");
	
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 125;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 2.5;

		}

		else if(Arm == 3)
		{
			trace("Arm 3, normal speed, smaller enemies");
	
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 100;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 1.5;

		}

		else if(Arm == 4)
		{
			trace("Arm 4, normal speed, larger enemies");
	
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 100;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 2.5;

		}

		else if(Arm == 5)
		{
			trace("Arm 5, slower enemies, smaller enemies");
	
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 75;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 1.5;

		}

		else if(Arm == 6)
		{
			trace("Arm 6, slower enemies, larger enemies");
	
			// Increase enemy speed, default 100
			Enemy.initial_velocity = 75;
			
			// Increase rate of enemy spawn, default 2
			PlayState.SpawnVar = 2.5;

		}

		else //(Arm == 0)
		{
			trace("Using default values");

		}
	}
*/
}
