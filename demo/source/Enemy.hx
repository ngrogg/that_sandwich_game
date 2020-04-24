package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.animation.FlxAnimation;
import flixel.math.FlxRandom;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxVelocity;
import flixel.math.FlxPoint;

/**
 * ...
 * Based on the FlxTeroid source code by @author Zaphod
 */

	//Enemy
class Enemy extends FlxSprite
{

// Bile burger is the slowest and weakest
// Worst Wurst is the strongest (3 hitpoints, same speed)
// Pink Slime burger is the fastest (moves twice as fast)

/* Class Variables */

public static var initial_velocity:Int;
public static var velmod:Int;
public static var _health:Int;
private var StateSpawn:Int = PlayState._level;
private var Rspawn:Int;
public static var Enemytype:Int = 1;

// Position variable
// PlayState._position
public static var position:Int = PlayState._position;

// Animation variable
//var EnemyAm:FlxSprite;
		
/* Class Functions */

	public function new() 
	{
		super();
		
		// Causes enemies to bounce off each other on collision
		//elasticity = 1; 

		// Smooth rotations
		//antialiasing = true; 
		
	}

	
	public function init(X:Int = 0, Y:Int = 0, VelocityX:Float = 0, VelocityY:Float = 0, ?Size:String):Enemy
	{
		
		// Enemy properties
		exists = true;
		visible = true;
		active = true;
		solid = true;
		
		// RNG variables
		//If Playstate == 1, only allow bile
		if (StateSpawn == 1)
		{	
			Rspawn = 1;
		}

		//If Playstate == 2, only allow slime and bile
		if (StateSpawn == 2)
		{
			Rspawn = FlxG.random.int(1, 2);
		}

		// If Playstate 3 or greater, allow all enemies
		if (StateSpawn >= 3)	
		{
			Rspawn = FlxG.random.int(1, 4);
		}
			
		
		// Use RNG to create enemies
		if (Rspawn == 1)
		{
			
			loadGraphic((Size == null) ? "assets/bile_burger.png" : Size);

/*
			// Define Animation
			var EnemyAm:FlxSprite = new FlxSprite();

			// Load animation grapic
			EnemyAm.loadGraphic("assets/bileburgermov.png", true, 58, 44);
		
			// Define Animation order
			EnemyAm.animation.add("bileMove", [0, 1, 0, 2], 5, true);
			
			// Play animation
			EnemyAm.animation.play("bileMove");
*/
			centerOffsets();
			_health = 1;
			Enemytype = 1;
		}
		
		if (Rspawn == 2 && position == 1)
		{
			
			loadGraphic((Size == null) ? "assets/pink_slime.png" : Size);

/*	
			// Define Animation
			var EnemyAm = new FlxSprite();
			
			// Load animation graphic
			EnemyAm.loadGraphic("assets/pinkslimmove.png", true, 59, 41);			

			// Define Animation order
			EnemyAm.animation.add("slimeMove", [0, 1, 2, 1], 5, true);	

			// Play animation
			EnemyAm.animation.play("slimeMove");
*/
			centerOffsets();
			_health = 1;
			Enemytype = 2;
		}
		
		if (Rspawn == 3 && position == 1)
		{

			loadGraphic((Size == null) ? "assets/worst_Wurst.png" : Size);

/*	
			// Define Animation
			var EnemyAm = new FlxSprite();
		
			// Load animation graphic
			EnemyAm.loadGraphic("assets/wurstmove.png", true, 94, 71);		
		
			// Define Animation order
			EnemyAm.animation.add("wurstMove", [0, 1, 0, 2], 5, true);
	
			// Play animation
			EnemyAm.animation.play("wurstMove");
*/
			centerOffsets();
			_health = 3;
			Enemytype = 3;
		}

		if (Rspawn == 4 && position == 1)
		{
			loadGraphic((Size == null) ? "assets/bagbandit.png" : Size);
			
			centerOffsets();
			_health = 3;
			Enemytype = 4;
		}
		
		if ((X != 0) || (Y != 0))
		{
			x = X;
			y = Y;
			velocity.x = VelocityX;
			velocity.y = VelocityY;
			angularVelocity = (Math.abs(velocity.x) + Math.abs(velocity.y));
			
			return this;
		}
		
		//public static var initial_velocity:Int = 100;
		initial_velocity = 100;
		velmod = 0;
		//Enemy.initial_velocity += 50
		// Pink slime moves faster
		if (Rspawn == 2)
		{
			initial_velocity+=50;
		}

		// If position == 1, use random trajectories
		
		if (position == 1)
		{	
			// Bile and Slime move in direct lines	
			if(Rspawn != 3)
			{	
				// Appears on the left
				if (FlxG.random.float() < 0.5)	
				{
					x = - 64 + offset.x;
					velocity.x = (initial_velocity + velmod) / (2 + FlxG.random.int(15, 20) * initial_velocity);
				}
	
				// Appears on the right
				else
				{
					x = FlxG.width + offset.x;
					velocity.x = -initial_velocity + velmod/ 2 - FlxG.random.int(15, 20) * initial_velocity;

				}
				
				// Set position to prevent enemy spawning in lower half
				y = FlxG.random.int(0, 200);
				velocity.y = FlxG.random.float(0.7, 1.2) * initial_velocity * 2 - initial_velocity;
			}

			// Worst Wurst moves erratically
			else
			{
				// Appears on the left
				if (FlxG.random.float() < 0.5)	
				{
					x = - 64 + offset.x;
					velocity.x = initial_velocity  + velmod/ 2 + FlxG.random.int(1, 10) * initial_velocity;
				}
	
				// Appears on the right
				else
				{
					x = FlxG.width + offset.x;
					velocity.x = -initial_velocity  + velmod/ 2 - FlxG.random.int(1, 10) * initial_velocity;
				}
					
				// Set position to prevent enemy spawning in lower half
				y = FlxG.random.int(0, 200);
				velocity.y = FlxG.random.float(0.7, 1.2) * initial_velocity * 2 - initial_velocity;
			}
		}

		//else if position == 2, create one slightly left of center
		if(position == 2)
		{
			x = (FlxG.width/2) - 40;
			y = (FlxG.height) + 40;
			velocity.x = initial_velocity / 2 + FlxG.random.int(15, 20) * initial_velocity;
			velocity.y = FlxG.random.float(0.7, 1.2) * initial_velocity * 2 - initial_velocity;

		}

		//else if position == 3, create one on center
		if(position == 3)
		{
			x = (FlxG.width/2);
			y = (FlxG.height) + 40;
			velocity.x = initial_velocity / 2 + FlxG.random.int(15, 20) * initial_velocity;
			velocity.y = FlxG.random.float(0.7, 1.2) * initial_velocity * 2 - initial_velocity;

		}

		//else create on right off center
		if(position == 4)	
		{
			x = (FlxG.width/2) + 40;
			y = (FlxG.height) + 40;
			velocity.x = -initial_velocity / 2 + FlxG.random.int(15, 20) * initial_velocity;
			velocity.y = FlxG.random.float(0.7, 1.2) * initial_velocity * 2 - initial_velocity;


		}
	
		// Trajectories for enemies 
		
		var pt:FlxPoint = new FlxPoint();
		pt.add(Math.floor(FlxG.width / 2 - 8), Math.floor(FlxG.height - 40));
		FlxVelocity.moveTowardsPoint(this, pt, ((Math.abs(velocity.y)) +1)*2 );
		
		return this;
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (justTouched(FlxObject.ANY))
		{
			angularVelocity = (Math.abs(velocity.x) + Math.abs(velocity.y));
		}
		
		super.update(elapsed);
		
	}
	
	override public function kill():Void 
	{
		super.kill();
		
		if (frameWidth <= 32)
		{
			return;
		}
		
		var initial_velocity:Int = 25;
		var slot:Int;
		var size:String;
	}

	public function decreaseHealth(Amount:Int = 1):Void
	{
		_health -= Amount;
	}
		
}
