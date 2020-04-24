package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.system.FlxSound;
//import haxe.Http;
//import haxe.Json;

class OutroCutscene extends FlxState
{

	// Iterator
	public static var _it:Int;
	
	// Sprite for cutscene
	public static var cutscene = new FlxSprite(640, 480);
	
	override public function create():Void
	{
		// Play menu music
		FlxG.sound.playMusic("assets/ending.ogg", 1, true);

		// Initialize cutscene variables
		cutscene.x = 0;
		cutscene.y = 0;

		cutscene.loadGraphic("assets/cutscenes/outro/S1-1.png");
		add(cutscene);

		_it = 1;	

		var t:FlxText;
		t = new FlxText(0,FlxG.height-18,FlxG.width, "D to continue");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

	}
	
	override public function update(elapsed:Float):Void
	{
		if(FlxG.keys.justReleased.D)
		{
			// Increase iterator by one
			_it += 1;
			
			if(_it == 2)
			{
				cutscene.loadGraphic("assets/cutscenes/outro/S1-2.png");
			}

			else if(_it == 3)
			{
				cutscene.loadGraphic("assets/cutscenes/outro/S1-3.png");
			}

			else if(_it == 4)
			{
				cutscene.loadGraphic("assets/cutscenes/outro/S1-4.png");
			}

			else if(_it == 5)
			{
				cutscene.loadGraphic("assets/cutscenes/outro/S1-5.png");
			}

			else if(_it == 6)
			{
				cutscene.loadGraphic("assets/cutscenes/outro/S1-6.png");
			}

			else //Iterator greater than # of images in scene
			{
				// Pause Music
				if(FlxG.sound.music.active)
				{
					FlxG.sound.music.pause();
					FlxG.sound.music == null;
				}
				
				remove(cutscene);
				UpgradeState._sequence += 1;	
				// Logging function for new gane
				//PlayState.Generic_Logging("6");	
				FlxG.switchState(new EndState());
			}

		}
	}
}


