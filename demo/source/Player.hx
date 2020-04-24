package;

import flixel.FlxG;
import flixel.FlxG.mouse;
import flixel.FlxSprite;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;
import flixel.util.FlxPool;
import flixel.util.FlxSpriteUtil;
import flixel.system.FlxSound;

/**
 * ...
 * Based on the FlxTeroid source code by @author Zaphod
 */

class Player extends FlxSprite
{

	/* Sound Variables */

	private var snd_ketchup:FlxSound;
	private var snd_mustard:FlxSound;
	
	/* Class Functions */
	
	public function new() 
	{
		// Set position of sprite
		super(Math.floor(FlxG.width / 2 - 8), Math.floor(FlxG.height - 40));
		
		loadGraphic("assets/HeroSandwichUps.png");
		setGraphicSize(23, 33);
		updateHitbox();
		centerOffsets();
		snd_ketchup = FlxG.sound.load("assets/Ketchup.ogg");
		snd_mustard = FlxG.sound.load("assets/Mustard.ogg");
	}
	
	override public function update(elapsed:Float):Void 
	{
		angularVelocity = 0;
		
		// Rotate to the left
		if (FlxG.keys.anyPressed([A, LEFT]))
		{
			// Rotate Left
			angularVelocity -= UpgradeState._rotation_speed;
		}
		
		// Rotate to the right
		if (FlxG.keys.anyPressed([D, RIGHT]))
		{
			// Rotate Right
			angularVelocity += UpgradeState._rotation_speed;
		}
		
		// Fires primary weapon
		if (FlxG.mouse.justPressed)
		{
			// Recycle sprite, allows a limited number of sprites on screen at once
			var bullet:FlxSprite = PlayState.bullets.recycle();
			bullet.reset(x + (width - bullet.width) / 2, y + (height - bullet.height) / 2);
			bullet.angle = angle;
			
			bullet.velocity.set(200, 0);
			bullet.velocity.rotate(FlxPoint.weak(0, 0), bullet.angle);
			
			bullet.velocity.x *= 2;
			bullet.velocity.y *= 2;

			// Play ketchup cannon sound
			snd_ketchup.play(true);	
		}
		
		// Fires primary weapon	
		if (FlxG.keys.justPressed.J)
		{
			// Same function as mouse function, just triggered with key			
			var bullet:FlxSprite = PlayState.bullets.recycle();
			bullet.reset(x + (width - bullet.width) / 2, y + (height - bullet.height) / 2);
			bullet.angle = angle;
			
			bullet.velocity.set(200, 0);
			bullet.velocity.rotate(FlxPoint.weak(0, 0), bullet.angle);
			
			bullet.velocity.x *= 2;
			bullet.velocity.y *= 2;
			
			// Play ketchup cannon sound
			snd_ketchup.play(true);	

		}
		
		// Secondary weapon
		if (FlxG.keys.pressed.L)
		{
			// Fires secondary weapon
			var bullet2:FlxSprite = PlayState.bullets2.recycle();
			bullet2.reset(x + (width - bullet2.width) / 2, y + (height - bullet2.height) /2);
			bullet2.angle = angle + 90;

			// Play mustard sound
			snd_mustard.play(true, 0, 10);

		}

		// Destroys secondary weapon sprite when key is released	
		if (FlxG.keys.justReleased.L)
		{
			var bullet2:FlxSprite = PlayState.bullets2.recycle();
			bullet2.kill();	
		}	
		super.update(elapsed);
	}
}
