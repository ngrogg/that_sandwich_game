package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.system.FlxSound;
//import haxe.Http;
//import haxe.Json;

class EndState extends FlxState
{

	private var _scoreText:FlxText;
	private var snd_ending:FlxSound;

	override public function create():Void 
	{
		// Play ending music
		snd_ending = FlxG.sound.load("assets/ending.ogg");
		snd_ending.play();

		// Output that player wins
		var t:FlxText;
		t = new FlxText(0, (FlxG.height / 2), FlxG.width, "You Win!");
		t.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
		
		// Output final score
		_scoreText = new FlxText(0, (FlxG.height / 2) - 50, FlxG.width, "Final Score: " + UpgradeState._score);
		_scoreText.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(_scoreText);

		t = new FlxText(0, (FlxG.height / 2) - 70, FlxG.width, "Try the Infinite mode!");
		t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		// Press Space to start over
		t = new FlxText(0, (FlxG.height / 2) - 90, FlxG.width, "Press P to start the game over");
		t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
		
		// Press ESC to quit
		t = new FlxText(0, (FlxG.height / 2) - 110, FlxG.width, "Press Escape to quit to menu");
		t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

	}
	
	override public function update(elapsed:Float):Void 
	{
		// Start over
		if (FlxG.keys.justReleased.P)
		{
			// Reset all variables to base values
			
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

			// Stop Music
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}

			FlxG.switchState(new PlayState());
			
				UpgradeState._sequence += 1;
			// log that player started new game
			//PlayState.Generic_Logging("7");

		}

		// Exit to menu
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
			
			// Exit Game to menu	
			FlxG.switchState(new MenuState());

		}
	}
}
