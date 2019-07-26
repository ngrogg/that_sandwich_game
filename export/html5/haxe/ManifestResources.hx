package;


import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end

		}

		Assets.defaultRootPath = rootPath;

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei2400235y4:typey5:MUSICy2:idy20:assets%2Fdeliary.oggy9:pathGroupaR4hy7:preloadtgoy4:pathy20:assets%2Fdeliary.pngR0i48073R1y5:IMAGER3R8R6tgoR7y22:assets%2Fwurstmove.pngR0i23276R1R9R3R10R6tgoR0i1054154R1R2R3y17:assets%2FMenu.oggR5aR11hR6tgoR7y22:assets%2Fslime-bio.pngR0i3961R1R9R3R12R6tgoR0i164011R1y5:SOUNDR3y20:assets%2FVictory.oggR5aR14hR6tgoR7y17:assets%2Fs1-1.pngR0i591431R1R9R3R15R6tgoR7y29:assets%2Fog_assets%2Fs1-1.pngR0i474399R1R9R3R16R6tgoR7y37:assets%2Fog_assets%2Fsplashscreen.pngR0i66166R1R9R3R17R6tgoR7y29:assets%2Fog_assets%2Fs1-5.pngR0i549173R1R9R3R18R6tgoR7y29:assets%2Fog_assets%2Fs1-2.pngR0i336483R1R9R3R19R6tgoR7y29:assets%2Fog_assets%2Fs1-3.pngR0i729448R1R9R3R20R6tgoR7y29:assets%2Fog_assets%2Fs1-4.pngR0i696723R1R9R3R21R6tgoR7y22:assets%2Fwurst-bio.pngR0i4470R1R9R3R22R6tgoR7y20:assets%2Fbag-bio.pngR0i5420R1R9R3R23R6tgoR0i15748R1R13R3y18:assets%2FError.oggR5aR24hR6tgoR0i276813R1R13R3y21:assets%2FUpgradez.oggR5aR25hR6tgoR7y25:assets%2Fsplashscreen.pngR0i159495R1R9R3R26R6tgoR7y17:assets%2Fs1-5.pngR0i627235R1R9R3R27R6tgoR7y24:assets%2Fworst_Wurst.pngR0i2575R1R9R3R28R6tgoR7y21:assets%2Fbile-bio.pngR0i5395R1R9R3R29R6tgoR7y28:assets%2FHeroSandwichUps.pngR0i2306R1R9R3R30R6tgoR7y22:assets%2Fmustard_2.pngR0i394R1R9R3R31R6tgoR0i847433R1R13R3y22:assets%2FMDK_theme.oggR5aR32hR6tgoR0i1525865R1R2R3y31:assets%2FGameplayMusicMixed.oggR5aR33hR6tgoR7y23:assets%2Fpink_slime.pngR0i2126R1R9R3R34R6tgoR0i37656R1R13R3y20:assets%2FKetchup.oggR5aR35hR6tgoR7y24:assets%2Fbile_burger.pngR0i3423R1R9R3R36R6tgoR7y25:assets%2Fpinkslimmove.pngR0i5923R1R9R3R37R6tgoR7y22:assets%2Fbagbandit.pngR0i2936R1R9R3R38R6tgoR7y22:assets%2Fmustard_1.pngR0i405R1R9R3R39R6tgoR7y27:assets%2Fstickyprincess.pngR0i1444R1R9R3R40R6tgoR7y17:assets%2Fs1-2.pngR0i465427R1R9R3R41R6tgoR7y16:assets%2Fmdk.pngR0i5133R1R9R3R42R6tgoR0i1365477R1R2R3y19:assets%2Fending.oggR5aR43hR6tgoR7y26:assets%2Fketchup_rough.pngR0i240R1R9R3R44R6tgoR7y17:assets%2Fs1-6.pngR0i214518R1R9R3R45R6tgoR0i19154R1R13R3y20:assets%2FInjured.oggR5aR46hR6tgoR0i89545R1R13R3y20:assets%2FMustard.oggR5aR47hR6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-2.pngR0i451327R1R9R3R48R6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-1.pngR0i453764R1R9R3R49R6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-4.pngR0i72686R1R9R3R50R6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-5.pngR0i29688R1R9R3R51R6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-3.pngR0i452769R1R9R3R52R6tgoR7y37:assets%2Fcutscenes%2Foutro%2FS1-6.pngR0i23948R1R9R3R53R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-2.pngR0i501497R1R9R3R54R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-1.pngR0i871685R1R9R3R55R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-4.pngR0i72327R1R9R3R56R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-5.pngR0i502593R1R9R3R57R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-3.pngR0i6341R1R9R3R58R6tgoR7y37:assets%2Fcutscenes%2Fintro%2FS1-6.pngR0i555166R1R9R3R59R6tgoR7y17:assets%2Fs1-3.pngR0i863412R1R9R3R60R6tgoR7y26:assets%2Fbileburgermov.pngR0i7922R1R9R3R61R6tgoR7y17:assets%2Fs1-4.pngR0i806791R1R9R3R62R6tgoR7y27:assets%2FHeroSandwichUp.pngR0i18714R1R9R3R63R6tgoR0i2114R1R2R3y26:flixel%2Fsounds%2Fbeep.mp3R5aR64y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR0i39706R1R2R3y28:flixel%2Fsounds%2Fflixel.mp3R5aR66y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR0i33629R1R13R3R67R5aR66R67hgoR0i5794R1R13R3R65R5aR64R65hgoR0i15744R1y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR3y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR0i29724R1R68R69y36:__ASSET__flixel_fonts_monsterrat_ttfR3y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR7y33:flixel%2Fimages%2Fui%2Fbutton.pngR0i519R1R9R3R74R6tgoR7y36:flixel%2Fimages%2Flogo%2Fdefault.pngR0i3280R1R9R3R75R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_deliary_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_deliary_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_wurstmove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_menu_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_slime_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_victory_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_splashscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_wurst_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bag_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_error_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_upgradez_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_splashscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_worst_wurst_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bile_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_herosandwichups_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mdk_theme_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_gameplaymusicmixed_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_pink_slime_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_ketchup_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_bile_burger_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_pinkslimmove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bagbandit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_stickyprincess_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mdk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_ending_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_ketchup_rough_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_injured_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bileburgermov_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_herosandwichup_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/deliary.ogg") #if display private #end class __ASSET__assets_deliary_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/deliary.png") #if display private #end class __ASSET__assets_deliary_png extends lime.graphics.Image {}
@:keep @:image("assets/wurstmove.png") #if display private #end class __ASSET__assets_wurstmove_png extends lime.graphics.Image {}
@:keep @:file("assets/Menu.ogg") #if display private #end class __ASSET__assets_menu_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/slime-bio.png") #if display private #end class __ASSET__assets_slime_bio_png extends lime.graphics.Image {}
@:keep @:file("assets/Victory.ogg") #if display private #end class __ASSET__assets_victory_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/s1-1.png") #if display private #end class __ASSET__assets_s1_1_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/s1-1.png") #if display private #end class __ASSET__assets_og_assets_s1_1_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/splashscreen.png") #if display private #end class __ASSET__assets_og_assets_splashscreen_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/s1-5.png") #if display private #end class __ASSET__assets_og_assets_s1_5_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/s1-2.png") #if display private #end class __ASSET__assets_og_assets_s1_2_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/s1-3.png") #if display private #end class __ASSET__assets_og_assets_s1_3_png extends lime.graphics.Image {}
@:keep @:image("assets/og_assets/s1-4.png") #if display private #end class __ASSET__assets_og_assets_s1_4_png extends lime.graphics.Image {}
@:keep @:image("assets/wurst-bio.png") #if display private #end class __ASSET__assets_wurst_bio_png extends lime.graphics.Image {}
@:keep @:image("assets/bag-bio.png") #if display private #end class __ASSET__assets_bag_bio_png extends lime.graphics.Image {}
@:keep @:file("assets/Error.ogg") #if display private #end class __ASSET__assets_error_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/Upgradez.ogg") #if display private #end class __ASSET__assets_upgradez_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/splashscreen.png") #if display private #end class __ASSET__assets_splashscreen_png extends lime.graphics.Image {}
@:keep @:image("assets/s1-5.png") #if display private #end class __ASSET__assets_s1_5_png extends lime.graphics.Image {}
@:keep @:image("assets/worst_Wurst.png") #if display private #end class __ASSET__assets_worst_wurst_png extends lime.graphics.Image {}
@:keep @:image("assets/bile-bio.png") #if display private #end class __ASSET__assets_bile_bio_png extends lime.graphics.Image {}
@:keep @:image("assets/HeroSandwichUps.png") #if display private #end class __ASSET__assets_herosandwichups_png extends lime.graphics.Image {}
@:keep @:image("assets/mustard_2.png") #if display private #end class __ASSET__assets_mustard_2_png extends lime.graphics.Image {}
@:keep @:file("assets/MDK_theme.ogg") #if display private #end class __ASSET__assets_mdk_theme_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/GameplayMusicMixed.ogg") #if display private #end class __ASSET__assets_gameplaymusicmixed_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/pink_slime.png") #if display private #end class __ASSET__assets_pink_slime_png extends lime.graphics.Image {}
@:keep @:file("assets/Ketchup.ogg") #if display private #end class __ASSET__assets_ketchup_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/bile_burger.png") #if display private #end class __ASSET__assets_bile_burger_png extends lime.graphics.Image {}
@:keep @:image("assets/pinkslimmove.png") #if display private #end class __ASSET__assets_pinkslimmove_png extends lime.graphics.Image {}
@:keep @:image("assets/bagbandit.png") #if display private #end class __ASSET__assets_bagbandit_png extends lime.graphics.Image {}
@:keep @:image("assets/mustard_1.png") #if display private #end class __ASSET__assets_mustard_1_png extends lime.graphics.Image {}
@:keep @:image("assets/stickyprincess.png") #if display private #end class __ASSET__assets_stickyprincess_png extends lime.graphics.Image {}
@:keep @:image("assets/s1-2.png") #if display private #end class __ASSET__assets_s1_2_png extends lime.graphics.Image {}
@:keep @:image("assets/mdk.png") #if display private #end class __ASSET__assets_mdk_png extends lime.graphics.Image {}
@:keep @:file("assets/ending.ogg") #if display private #end class __ASSET__assets_ending_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/ketchup_rough.png") #if display private #end class __ASSET__assets_ketchup_rough_png extends lime.graphics.Image {}
@:keep @:image("assets/s1-6.png") #if display private #end class __ASSET__assets_s1_6_png extends lime.graphics.Image {}
@:keep @:file("assets/Injured.ogg") #if display private #end class __ASSET__assets_injured_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/Mustard.ogg") #if display private #end class __ASSET__assets_mustard_ogg extends haxe.io.Bytes {}
@:keep @:image("assets/cutscenes/outro/S1-2.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_2_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/outro/S1-1.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_1_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/outro/S1-4.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_4_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/outro/S1-5.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_5_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/outro/S1-3.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_3_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/outro/S1-6.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_6_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-2.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_2_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-1.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_1_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-4.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_4_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-5.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_5_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-3.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_3_png extends lime.graphics.Image {}
@:keep @:image("assets/cutscenes/intro/S1-6.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_6_png extends lime.graphics.Image {}
@:keep @:image("assets/s1-3.png") #if display private #end class __ASSET__assets_s1_3_png extends lime.graphics.Image {}
@:keep @:image("assets/bileburgermov.png") #if display private #end class __ASSET__assets_bileburgermov_png extends lime.graphics.Image {}
@:keep @:image("assets/s1-4.png") #if display private #end class __ASSET__assets_s1_4_png extends lime.graphics.Image {}
@:keep @:image("assets/HeroSandwichUp.png") #if display private #end class __ASSET__assets_herosandwichup_png extends lime.graphics.Image {}
@:keep @:file("/usr/lib/haxe/lib/flixel/4,6,0/assets/sounds/beep.mp3") #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("/usr/lib/haxe/lib/flixel/4,6,0/assets/sounds/flixel.mp3") #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("/usr/lib/haxe/lib/flixel/4,6,0/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:file("/usr/lib/haxe/lib/flixel/4,6,0/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("/usr/lib/haxe/lib/flixel/4,6,0/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("/usr/lib/haxe/lib/flixel/4,6,0/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
