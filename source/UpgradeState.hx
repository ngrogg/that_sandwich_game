package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.system.FlxSound;
import flixel.tweens.FlxTween;
//import haxe.Http;
//import haxe.Json;

class UpgradeState extends FlxState
{

/* Game Variables */

// Infinite state
public static var FiniteState:Int = 1;

// Version
public static var _version:String = "1.0";

public static var _GUID:String = Guid.generate();

// Level variable
public static var _level:Int = 1;

// Variable for the players rotational speed
public static var _rotation_speed:Int = 200;

// Variable for the maximum number of bullets possible
public static var _num_bullets:Int = 3;

// Variable for the maximum amount of health the player can have
public static var _max_bread:Int = 2;

// Variable for the amount of upgrades the player can do
public static var _upgrades:Int = 0;

// Variable for first play
public static var newGame:Int = 1;

// Variable to hold the score
public static var _score:Int = 0;

// Sequence variable
public static var _sequence:Int = 1;

/* Class Variables  */

// Upgrade display variables
private var _breadText:FlxText;
private var _bulletText:FlxText;
private var _spinText:FlxText;
private var _pointsText:FlxText;
private var _helperText:FlxText;

// Sound variable
private var snd_error:FlxSound;

// Music Variable

/* Class Functions  */

	override public function create():Void
	{

		FlxG.sound.playMusic("assets/Upgradez.ogg", 1, true);
		snd_error = FlxG.sound.load("assets/Error.ogg");

		FlxG.mouse.visible = false;

		var t:FlxText;
		t = new FlxText(0, 0, FlxG.width, "UPGRADES!!!");
		t.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		// Text to display points
		_pointsText = new FlxText(0, 40, FlxG.width, "Upgrade Points: " + _upgrades);
		_pointsText.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
		add(_pointsText);
		
		// Display bread upgrade
		t = new FlxText(0, 80, FlxG.width, "Press P to increase Max Bread by one point");
		t.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);
		
		_breadText = new FlxText(0, 100, FlxG.width, "Max Bread: " + _max_bread);
		_breadText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_breadText);

		// Display bullet num upgrade
		t = new FlxText(0, 140, FlxG.width, "Press O to increase Max Bullets by one point");
		t.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);
	
		_bulletText = new FlxText(0, 160, FlxG.width, "Max Bullets: " + _num_bullets);
		_bulletText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_bulletText);


		// Display rotation speed upgrade
		t  = new FlxText(0, 200, FlxG.width, "Press I to increase rotation speed");
		t.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);

		_spinText = new FlxText(0, 220, FlxG.width, "Spin speed: " + _rotation_speed);
		_spinText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_spinText);
		
		// Helper text
		_helperText = new FlxText(0, 460, FlxG.width, "E to start next level");
		_helperText.setFormat(null, 16, FlxColor.WHITE, LEFT, OUTLINE);
		add(_helperText);		


	}

	// Update function, move to next level if N is pressed
	override public function update(elapsed:Float):Void 
	{
		// Start next level
		if (FlxG.keys.pressed.E)
		{
			// Stop playing song
			if(FlxG.sound.music.active)
			{
				FlxG.sound.music.pause();
				FlxG.sound.music == null;
			}
	
			FlxG.switchState(new PlayState());
		}
		
		// Increase bread
		if (FlxG.keys.pressed.P)
		{
			if (_upgrades == 0 || _max_bread == 4)
			{
				// Error sound
				snd_error.play(true);
			}
			else
			{
				//UpgradeState.increaseBread();
				increaseBread();
			
				_sequence += 1;	
				// Log that player increased bread to #
				//PlayState.Generic_Logging("17");
			}
		}

		// Increase bullets
		if (FlxG.keys.pressed.O)
		{
			if (_upgrades == 0 || _num_bullets == 5)
			{
				// Error sound
				snd_error.play(true);

			}
			else
			{
				increaseBullets();

				_sequence += 1;
				// Log that player increase number of bullets to #
				//PlayState.Generic_Logging("20");

			}
		}

		// Increase rotation speed
		if (FlxG.keys.pressed.I)	
		{
			if (_upgrades == 0 ||  _rotation_speed == 300)
			{
				// Error sound
				snd_error.play(true);

			}
			else
			{
				increaseRotation();

				_sequence += 1;
				// Log that player increased rotation speed to #
				//PlayState.Generic_Logging("23");
			}
		}
	}

	// Increase Bread

	private function increaseBread(Amount:Int = 1):Void
	{
		_upgrades -= Amount;
		_pointsText.text = "Upgrade Points: " + _upgrades;
		_pointsText.alpha = 0;
		FlxTween.tween(_pointsText, { alpha: 1}, 0.5);
		
		_max_bread += Amount;
		_breadText.text = "Max Bread: " + _max_bread;
		_breadText.alpha = 0;
		FlxTween.tween(_breadText, { alpha: 1}, 0.5);
	}

	// Increase Max Bullets
	private function increaseBullets(Amount:Int = 1):Void
	{
		_upgrades -= Amount;
		_pointsText.text = "Upgrade Points: " + _upgrades;
		_pointsText.alpha = 0;
		FlxTween.tween(_pointsText, { alpha: 1}, 0.5);

		_num_bullets += Amount;
		_bulletText.text = "Max Bullets: " + _num_bullets;
		_bulletText.alpha = 0;
		FlxTween.tween(_bulletText, { alpha: 1}, 0.5);

	}

	// Increase Rotation speed
	private function increaseRotation():Void
	{
		_upgrades -= 1;
		_pointsText.text = "Upgrade Points: " + _upgrades;
		_pointsText.alpha = 0;
		FlxTween.tween(_pointsText, { alpha: 1}, 0.5);

		_rotation_speed += 50;
		_spinText.text = "Spin Speed: " + _rotation_speed;
		_spinText.alpha = 0;
		FlxTween.tween(_spinText, { alpha: 1}, 0.5);

	}
	
}
