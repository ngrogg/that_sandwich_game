package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
//import haxe.Http;
//import haxe.Json;
//import js.Cookie;

/**
 * ...
 * Based on the "FlxTeroid" source code by @author Zaphod
 */


class PlayState extends FlxState
{
	
	/* Class Variables */

	// Initialize sprites	
	public static var enemies:FlxTypedGroup<Enemy>;
	public static var bullets:FlxTypedGroup<FlxSprite>;
	public static var bullets2:FlxTypedGroup<FlxSprite>;
	
	// Initialize player
	private var _player:Player;
	private var playerlogged:Int;
	
	//background variable
	var _background:FlxBackdrop;
	
	// Initialize HUD elements
	private var _scoreText:FlxText;
	private var _timerText:FlxText;
	private var _healthText:FlxText;
	private var _levelText:FlxText;
	private var _helperText:FlxText;		

	// HUD variables
	private var _score:Int = UpgradeState._score;
	private var _timer:Int; // = 60;
	private var _health:Int = UpgradeState._max_bread;
	
	// Level variable
	public static var _level:Int; // = UpgradeState._level;
	
	// Logging variable
	//public static var serverUrl:String = "https://datadrivengame.science/sandwich/logging_input.php";

	// Enemy formation position variable, default value required
	public static var _position:Int = 1;

	// Sound variables
	private var snd_injured:FlxSound;
	private var snd_dead:FlxSound;
	private var snd_victory:FlxSound;

	// Timer variable
	public static var SpawnVar:Float = 2;

	/* Class Functions*/
	
	override public function create():Void 
	{

		// Play music
		FlxG.sound.playMusic("assets/GameplayMusicMixed.ogg", 1, true);

		if(UpgradeState.FiniteState == 1)
			_level = UpgradeState._level;
		if(UpgradeState.FiniteState == 0)
			_level = 6;
		if(UpgradeState.FiniteState == 1)
		{
			if(_level == 1)
				_timer = 45;

			else if(_level == 5)
				_timer = 75;

			else
				_timer = 60;
		}
		if(UpgradeState.FiniteState == 0)
			_timer = 0;

		
		// Load background
		if(_level == 1)
		{
			_background = new FlxBackdrop("assets/s1-1.png", 0, 0, false, false);
			add(_background);
		}
		if(_level == 2)
		{
			_background = new FlxBackdrop("assets/s1-2.png", 0, 0, false, false);
			add(_background);
		}

		if(_level == 3)
		{
			_background = new FlxBackdrop("assets/s1-3.png", 0, 0, false, false);
			add(_background);
		}

		if(_level == 4)
		{
			_background = new FlxBackdrop("assets/s1-4.png", 0, 0, false, false);
			add(_background);
		}

		if(_level == 5)
		{
			_background = new FlxBackdrop("assets/s1-5.png", 0, 0, false, false);
			add(_background);
		}
		if(_level == 6)
		{
			_background = new FlxBackdrop("assets/s1-6.png",0, 0, false, true);
			add(_background);
		}

		FlxG.mouse.visible = false;
		playerlogged = 1;

		// Spawn 4 enemies
		enemies = new FlxTypedGroup<Enemy>();
		add(enemies);
		
		for (i in 0...3)
		{
			spawnEnemy();
		}
		
		// Instantiate timers 
	
		if(UpgradeState.FiniteState == 1)
		{
			if(_level == 1)
			{
				new FlxTimer().start(45, levelTimer, 1);
				new FlxTimer().start(1, decreaseTimer, 45);
				new FlxTimer().start(SpawnVar, resetTimer, 21);
				new FlxTimer().start(4.9, formTimer, 8);	

			}
			else if(_level == 5)
			{	
				new FlxTimer().start(75, levelTimer, 1);
				new FlxTimer().start(1, decreaseTimer, 75);
				new FlxTimer().start(2, resetTimer, 34);
				new FlxTimer().start(4.9, formTimer, 14);	

			}
			else
			{
				new FlxTimer().start(60, levelTimer, 1);
				new FlxTimer().start(1, decreaseTimer, 60);
				new FlxTimer().start(2, resetTimer, 28);
				new FlxTimer().start(4.9, formTimer, 11);	

			}
		}

		if(UpgradeState.FiniteState == 0)
		{
			new FlxTimer().start(1, increaseTimer, 0);
			new FlxTimer().start(1.5, resetTimer, 0);
			new FlxTimer().start(30, inTimer, 0);
			new FlxTimer().start(3.9, formTimer, 0);	

		}
		// Create the player
		_player = new Player();
		add(_player);
		
		// Load sound variables
		snd_injured = FlxG.sound.load("assets/Injured.ogg");
		snd_dead = FlxG.sound.load("assets/MDK_theme.ogg");
		snd_victory = FlxG.sound.load("assets/Victory.ogg");		

		// Default weapon
		// Default value is 3 bullets
		var numBullets:Int = UpgradeState._num_bullets;
		bullets = new FlxTypedGroup<FlxSprite>(numBullets);

		var sprite:FlxSprite;

		for (i in 0...numBullets)
		{
			sprite = new FlxSprite( -100, -100);
			sprite.loadGraphic("assets/ketchup_rough.png");
			sprite.width = 10;
			sprite.height = 10;
			sprite.offset.set( -1, -4);
			sprite.exists = false;
			
			bullets.add(sprite);
		}
		
		// Secondary weapon
		var _bulletTotal2:Int = 1;
		var numBullets2:Int = _bulletTotal2;
		bullets2 = new FlxTypedGroup<FlxSprite>(numBullets2);

		var sprite2:FlxSprite;

		for (i in 0...numBullets2)
		{
			sprite2 = new FlxSprite( -100, -100);
			sprite2.loadGraphic("assets/mustard_2.png");
			sprite2.setGraphicSize(14, 100);
			sprite2.updateHitbox();
			sprite2.centerOffsets();
			sprite2.exists = false;

			bullets2.add(sprite2);
		}
	
		if (UpgradeState.FiniteState == 1) {
		// Text to display level
		_levelText = new FlxText(0,4, FlxG.width, "Level: " + _level);
		_levelText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_levelText);
		}

		if (UpgradeState.FiniteState == 0) {
		_levelText = new FlxText(0,4, FlxG.width, "Survive as long as you can" );
		_levelText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_levelText);

		}
		// Text to display the score
		_scoreText = new FlxText(0, 21, FlxG.width, "Score: " + _score);
		_scoreText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_scoreText);
		
		// Text for loop timer
		_timerText = new FlxText(0, 38, FlxG.width, "Timer: " + _timer);
		_timerText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_timerText);
		
		// Text for Health
		_healthText = new FlxText(0, 55, FlxG.width, "Bread: " + _health);
		_healthText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_healthText);
	
		// Helper text
		_helperText = new FlxText(0, 460, FlxG.width, "Esc to exit level");
		_helperText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_helperText);		
	
		// Create Bullets	
		add(bullets);
		add(bullets2);
		
		// Logging functions, currently inactive
		//testCookies();
		//testLogging();
	}
	// End of create function
	
	override public function destroy():Void
	{
		super.destroy();
		
		_player = null;
		bullets = null;
		enemies = null;
	}
	
	override public function update(elapsed:Float):Void 
	{
		// Escape to the menu
		if (FlxG.keys.pressed.ESCAPE)
		{
					
			// Stop music
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}
			
			// Set Max health to 2
			UpgradeState._max_bread = 2;

			// Set Max bullets to 3
			UpgradeState._num_bullets = 3;

			// Set Rotation speed to 200
			UpgradeState._rotation_speed = 200;

			// Set Score to 0
			UpgradeState._score = 0;

			// Set Level to 1
			UpgradeState._level = 1;
		
			UpgradeState._sequence += 1;	
			// Log that player exited game at level #
			/*
			if(_level == 1)
				Generic_Logging("13");
			if(_level == 2)
				Generic_Logging("14");
			if(_level == 3)
				Generic_Logging("15");
			if(_level == 4)
				Generic_Logging("16");
			if(_level == 5)
				Generic_Logging("17");
			*/
			if(UpgradeState.FiniteState == 0)
			{	
				UpgradeState._sequence += 1;
				//Generic_Logging("32");
				Enemy.velmod = 0;
			}
			// Exit Game to menu	
			FlxG.switchState(new MenuState());

		}

		super.update(elapsed);
		
		// Don't continue in case we lost
		if (!_player.alive)
		{
			playerlogged += 1;
			if (playerlogged == 2) 
			{
				UpgradeState._sequence += 1;
				// Log that player died on level #
				/*
				if(_level == 1)	
					Generic_Logging("8");
				if(_level == 2)	
					Generic_Logging("9");
				if(_level == 3)	
					Generic_Logging("10");
				if(_level == 4)	
					Generic_Logging("11");
				if(_level == 5)	
					Generic_Logging("12");
				*/	
				if(UpgradeState.FiniteState == 0)
				{	
					UpgradeState._sequence += 1;
					//Generic_Logging("31");
					Enemy.velmod = 0;
				}
			}
			// Stop level timer

			if (FlxG.keys.pressed.R)
			{
			if(UpgradeState.FiniteState == 1)
			{
				// Set Max health to 2
				UpgradeState._max_bread = 2;
	
				// Set Max bullets to 3
				UpgradeState._num_bullets = 3;
	
				// Set Rotation speed to 200
				UpgradeState._rotation_speed = 200;

				// Set Score to 0
				UpgradeState._score = 0;

				// Set Level to 1
				UpgradeState._level = 1;
					
				UpgradeState._sequence += 1;
				// Log that player started game over 
				//Generic_Logging("1");
				
				FlxG.resetState();
				FlxG.sound.playMusic("assets/GameplayMusicMixed.ogg", 1, true);
			}
			if(UpgradeState.FiniteState == 0)
			{
				// Set Max health to 5
				UpgradeState._max_bread = 5;
	
				// Set Max bullets to 3
				UpgradeState._num_bullets = 6;
	
				// Set Rotation speed to 200
				UpgradeState._rotation_speed = 350;

				// Set Score to 0
				UpgradeState._score = 0;

				// Set Level to 1
				UpgradeState._level = 5;
				
				UpgradeState._sequence += 1;	
				// Log that player started game over 
				//Generic_Logging("28");
				
				// Reset enemy initial velocity
				Enemy.velmod = 0;

				FlxG.resetState();
				FlxG.sound.playMusic("assets/GameplayMusicMixed.ogg", 1, true);

			}
			}

			return;
		}

		if (_timer == 0)
		{

			if(UpgradeState.FiniteState == 1)
			{
				if (_level == 5)
				{
					// Stop music
					if(FlxG.sound.music.active)
					{
						FlxG.sound.music.pause();
						FlxG.sound.music == null;
					}
	
					// Log that player beat game 
					//Generic_Logging("6");
					
					// Switch to EndState	
					UpgradeState._score += _score;
					FlxG.switchState(new OutroCutscene());
				}
	
				if(UpgradeState.FiniteState == 1)
				{
					// Stop music
					if(FlxG.sound.music.active)
					{
						FlxG.sound.music.pause();
						FlxG.sound.music == null;
					}
					
					// Play victory ditty
					snd_victory.play();
					
					playerlogged += 1;
					if (playerlogged == 2)
					{
						UpgradeState._sequence += 1;
						// Log that player beat level #
						/*
						if(_level == 1)
							Generic_Logging("2");
						if(_level == 2)
							Generic_Logging("3");
						if(_level == 3)
							Generic_Logging("4");
						if(_level == 4)
							Generic_Logging("5");
						if(_level == 5)
							Generic_Logging("6");
						*/ 
					}
				
					if (FlxG.keys.pressed.U)
					{
						// Replace with switchstate for upgrades
						UpgradeState._upgrades += 1;	
						playerlogged = 1;
						UpgradeState._score += _score;
						FlxG.switchState(new UpgradeState());
					}
				}
			}
			return;

		}
		
		// Overlap functions	
		FlxG.overlap(bullets, enemies, bulletHitsEnemy); 
		FlxG.overlap(bullets2, enemies, bulletHitsEnemy);
		FlxG.overlap(enemies, _player, enemyHitsPlayer);
		//FlxG.collide(enemies);
		
	}
	
	// Increase score
	private function increaseScore(Amount:Int = 10):Void
	{
		_score += Amount;
		_scoreText.text = "Score: " + _score;
		_scoreText.alpha = 0;
		FlxTween.tween(_scoreText, { alpha: 1 }, 0.5);
	}
	private function decreaseScore(Amount:Int = 30):Void
	{
		_score -= Amount;
		_scoreText.text = "Score: " + _score;
		_scoreText.alpha = 0;
		FlxTween.tween(_scoreText, { alpha: 1 }, 0.5);

	}

	// Decrease on-screen timer
	private function decreaseTimer(Timer:FlxTimer):Void
	{
		if (_player.alive)
		{
			_timer -= 1;
			_timerText.text = "Timer: " + _timer;
			_timerText.alpha = 0;
			FlxTween.tween(_timerText, { alpha: 1}, 0.5);
			}
	}

	// Increase on-screen timer
	private function increaseTimer(Timer:FlxTimer):Void
	{
		if (_player.alive)
		{
			_timer += 1;
			_timerText.text = "Timer: " + _timer;
			_timerText.alpha = 0;
			FlxTween.tween(_timerText, { alpha: 1}, 0.5);
			}
	}
	
	// Decrease Health
	private function decreaseHealth(Amount:Int = 1):Void
	{
		_health -= Amount;
		_healthText.text = "Bread: " + _health;
		_healthText.alpha = 0;
		FlxTween.tween(_healthText, { alpha: 1}, 0.5);
	}

	// Increase Level
	private function increaseLevel(Amount:Int = 1):Void
	{		
		if (_player.alive)
		{
		UpgradeState._level += Amount;
		_levelText.text = "Level completed, Press U to select an upgrade.";
		}
	}

	// Increase speed in infinte mode
	private function increaseSpeed(Amount:Int = 50):Void
	{
		Enemy.velmod += Amount;
	}
	
	private function bulletHitsEnemy(Object1:FlxObject, Object2:FlxObject):Void
	{
		if(Enemy._health == 1)
		{
			Object1.kill();
			Object2.kill();
			increaseScore();
		}
		else
		{
			Object1.kill();
			Enemy._health -= 1;
		}
	}
	
	private function enemyHitsPlayer(Object1:FlxObject, Object2:FlxObject):Void
	{
		if(_health > 1)
		{
			if(Enemy.Enemytype != 4)
			{
				Object1.kill();
				decreaseHealth();

				// Play injured sound
				snd_injured.play();
			}
			
			else
			{
				Object1.kill();
				decreaseScore();
				
				// Play injured sound
				snd_injured.play();

			}
			
		}
		
		else
		//if(_health == 1)
		{
			if(Enemy.Enemytype != 4)
			{
				Object1.kill();
				Object2.kill();
				bullets.kill();
				bullets2.kill();
				decreaseHealth();
	
				// Stop music
				if(FlxG.sound.music.active)
				{
					FlxG.sound.music.pause();
					FlxG.sound.music == null;
				}
	
				// Play death sound
				snd_dead.play(false, 0, 5100);
	
				_scoreText.text = "Game Over! Final score: " + _score + " - Press R to retry.";
			}
			else //enemytype == 4
			{
				Object1.kill();
				decreaseScore();
				
				// Play injured sound
				snd_injured.play();

			}
		}
	}
	
	private function resetTimer(Timer:FlxTimer):Void
	{
		// Spawn enemy randomly
		_position = 1;	
		spawnEnemy();
	}
	
	private function levelTimer(Timer:FlxTimer):Void
	{
		increaseLevel();
		
	}
	
	private function inTimer(Timer:FlxTimer):Void
	{
		increaseSpeed();
		//PlayState.Generic_Logging("29");
	}
			
	private function countdownTimer(Timer:FlxTimer):Void
	{
		Timer.start(1, countdownTimer);
		decreaseTimer(Timer);
	
	}
	
	private function formTimer(Timer:FlxTimer):Void
	{
		// Spawn enemy left of center
		_position = 2;
		spawnEnemy();

		// Spawn enemy in center
		_position = 3;
		spawnEnemy();

		// Spawn enemy right of center
		_position = 4;
		spawnEnemy();
	}

	private function spawnEnemy():Void
	{
		var enemy:Enemy = enemies.recycle(Enemy);
		enemy.init();
	}

/*	public static function testCookies()
	{
		var cookieName:String = "GUID";
//		public static var uid:String = Cookie.get(cookieName);
		uid = Cookie.get(cookieName);

		if (uid == null)
		{
			uid = Guid.generate();
			Cookie.set(cookieName, uid);
			trace(" created new user id: " + uid);
		}
		else
		{
			trace(" existing user id is " + uid);
		}
	}*/


	// Test Logging functions, not needed anymore	
	/*
	private function testLogging(EventID:String)
	{
		var request:Http = new Http(serverUrl);
		request.setParameter("aid", UpgradeState._GUID);
		request.setParameter("a_detail", EventID);
		request.onError = function (err)
		{
			trace("OnError= " + err);
		}
		request.onData = function (data)
		{
			var jData = Json.parse(data);
			trace("Got an aid of " + jData.aid);
			trace("Got a_detail: " + jData.a_detail);
		}
		request.request(true);
		trace("Sent request");
		
	}

	public static function Generic_Logging(EventID:String)
	{

		// Add int to string
		var sequence = "" + UpgradeState._sequence;

		var request:Http = new Http(serverUrl);
//		request.setParameter("GUID", UpgradeState._GUID);
		request.setParameter("GUID", MenuState.uid);
		request.setParameter("EventID", EventID);
//		request.setParameter("Timestamp", Date.now);
		request.setParameter("Version", UpgradeState._version);
		request.setParameter("Sequence", sequence);
		request.setParameter("Arm", MenuState.ArmLog);
		request.setParameter("ArmType", MenuState.ArmType);
		request.onError = function (err)
		{
			trace("OnError = " + err);
		}
		request.onData = function (data)
		{
			var jData = Json.parse(data);
			trace("Got a GUID of " + jData.GUID);
			trace("Got an EventID of " + jData.EventID);
//			trace("Got a Timestamp of " + jData.Timestamp);
			trace("Got a version of "+ jData.Version);
			trace("Got a sequence of " + jData.Sequence);
			trace("Got an arm of " + jData.Arm);
			trace("Got an arm type of " + jData.ArmType);
		}
		request.request(true);
		trace("Sent Request");

	}
	*/

}
