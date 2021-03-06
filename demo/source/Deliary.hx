package;

import flixel.addons.display.FlxBackdrop;
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

class Deliary extends FlxState
{
	// Variable used to load the sprite
	public static var type:Int;
	public static var bio = new FlxSprite(300,300);
	private var snd_deliary:FlxSound;
	
	// background variable
	var _background:FlxBackdrop;

	override public function create():Void
	{
		// Play Deliary music
		//snd_deliary = FlxG.sound.load("assets/deliary.ogg");
		//snd_deliary.play();
		
		// Play Deliary music
		FlxG.sound.playMusic("assets/deliary.ogg", 1, true);
		
		_background = new FlxBackdrop("assets/deliary.png", 0, 0, false, false);
		add(_background);

		var t:FlxText;
		bio.x = (FlxG.width/4);
		bio.y = (FlxG.height/4);
		bio.loadGraphic("assets/bile-bio.png");
		add(bio);

		t = new FlxText(0,0,FlxG.width, "The Deliary");
		t.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
		
		t = new FlxText(0, 40, FlxG.width, "View an overview of the enemies you'll encounter");
		t.setFormat(null, 14, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
		
		t = new FlxText(0, FlxG.height/2 - 24 , FlxG.width, "Q: Bile Burger");
		t.setFormat(null, 10, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);	

		t = new FlxText(0, FlxG.height/2 - 12, FlxG.width, "W: Pink Slime Burger");
		t.setFormat(null, 10, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);	
		
		t = new FlxText(0, FlxG.height/2, FlxG.width, "E: The Worst Wurst");
		t.setFormat(null, 10, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);
		
		t = new FlxText(0, FlxG.height/2 + 12, FlxG.width, "R: Baguette Bandit");
		t.setFormat(null, 10, FlxColor.WHITE, LEFT, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height - 34, FlxG.width, "Press Escape to return to the menu");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);

		t = new FlxText(0, FlxG.height - 20, FlxG.width, "Press F to exit Deliary and fire off a new game");
		t.setFormat(null, 12, FlxColor.WHITE, CENTER, OUTLINE);
		add(t);
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justReleased.Q)
		{
			bio.loadGraphic("assets/bile-bio.png");
		}
		if (FlxG.keys.justReleased.W)
		{
			bio.loadGraphic("assets/slime-bio.png");
		}
		if (FlxG.keys.justReleased.E)
		{
			bio.loadGraphic("assets/wurst-bio.png");
		}
		if (FlxG.keys.justReleased.R)
		{
			bio.loadGraphic("assets/bag-bio.png");
		}
		if (FlxG.keys.justReleased.F)
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

			remove(bio);
			
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

			UpgradeState.FiniteState = 1;

	                FlxG.switchState(new IntroCutscene());
	                		}
		
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
			
			remove(bio);
			
			// Exit Game to menu	
			FlxG.switchState(new MenuState());

		}


	}
}


