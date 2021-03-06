package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		
		#end
		
		#if flash
		
		className.set ("assets/s1-3.png", __ASSET__assets_s1_3_png);
		type.set ("assets/s1-3.png", AssetType.IMAGE);
		className.set ("assets/s1-5.png", __ASSET__assets_s1_5_png);
		type.set ("assets/s1-5.png", AssetType.IMAGE);
		className.set ("assets/wurst-bio.png", __ASSET__assets_wurst_bio_png);
		type.set ("assets/wurst-bio.png", AssetType.IMAGE);
		className.set ("assets/Victory.ogg", __ASSET__assets_victory_ogg);
		type.set ("assets/Victory.ogg", AssetType.SOUND);
		className.set ("assets/bile-bio.png", __ASSET__assets_bile_bio_png);
		type.set ("assets/bile-bio.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-6.png", __ASSET__assets_cutscenes_intro_s1_6_png);
		type.set ("assets/cutscenes/intro/S1-6.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-3.png", __ASSET__assets_cutscenes_intro_s1_3_png);
		type.set ("assets/cutscenes/intro/S1-3.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-4.png", __ASSET__assets_cutscenes_intro_s1_4_png);
		type.set ("assets/cutscenes/intro/S1-4.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-2.png", __ASSET__assets_cutscenes_intro_s1_2_png);
		type.set ("assets/cutscenes/intro/S1-2.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-1.png", __ASSET__assets_cutscenes_intro_s1_1_png);
		type.set ("assets/cutscenes/intro/S1-1.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/intro/S1-5.png", __ASSET__assets_cutscenes_intro_s1_5_png);
		type.set ("assets/cutscenes/intro/S1-5.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-6.png", __ASSET__assets_cutscenes_outro_s1_6_png);
		type.set ("assets/cutscenes/outro/S1-6.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-3.png", __ASSET__assets_cutscenes_outro_s1_3_png);
		type.set ("assets/cutscenes/outro/S1-3.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-4.png", __ASSET__assets_cutscenes_outro_s1_4_png);
		type.set ("assets/cutscenes/outro/S1-4.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-2.png", __ASSET__assets_cutscenes_outro_s1_2_png);
		type.set ("assets/cutscenes/outro/S1-2.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-1.png", __ASSET__assets_cutscenes_outro_s1_1_png);
		type.set ("assets/cutscenes/outro/S1-1.png", AssetType.IMAGE);
		className.set ("assets/cutscenes/outro/S1-5.png", __ASSET__assets_cutscenes_outro_s1_5_png);
		type.set ("assets/cutscenes/outro/S1-5.png", AssetType.IMAGE);
		className.set ("assets/pink_slime.png", __ASSET__assets_pink_slime_png);
		type.set ("assets/pink_slime.png", AssetType.IMAGE);
		className.set ("assets/Menu.ogg", __ASSET__assets_menu_ogg);
		type.set ("assets/Menu.ogg", AssetType.MUSIC);
		className.set ("assets/stickyprincess.png", __ASSET__assets_stickyprincess_png);
		type.set ("assets/stickyprincess.png", AssetType.IMAGE);
		className.set ("assets/Injured.ogg", __ASSET__assets_injured_ogg);
		type.set ("assets/Injured.ogg", AssetType.SOUND);
		className.set ("assets/Upgradez.ogg", __ASSET__assets_upgradez_ogg);
		type.set ("assets/Upgradez.ogg", AssetType.SOUND);
		className.set ("assets/HeroSandwichUp.png", __ASSET__assets_herosandwichup_png);
		type.set ("assets/HeroSandwichUp.png", AssetType.IMAGE);
		className.set ("assets/worst_Wurst.png", __ASSET__assets_worst_wurst_png);
		type.set ("assets/worst_Wurst.png", AssetType.IMAGE);
		className.set ("assets/deliary.ogg", __ASSET__assets_deliary_ogg);
		type.set ("assets/deliary.ogg", AssetType.MUSIC);
		className.set ("assets/splashscreen.png", __ASSET__assets_splashscreen_png);
		type.set ("assets/splashscreen.png", AssetType.IMAGE);
		className.set ("assets/s1-4.png", __ASSET__assets_s1_4_png);
		type.set ("assets/s1-4.png", AssetType.IMAGE);
		className.set ("assets/s1-1.png", __ASSET__assets_s1_1_png);
		type.set ("assets/s1-1.png", AssetType.IMAGE);
		className.set ("assets/bileburgermov.png", __ASSET__assets_bileburgermov_png);
		type.set ("assets/bileburgermov.png", AssetType.IMAGE);
		className.set ("assets/slime-bio.png", __ASSET__assets_slime_bio_png);
		type.set ("assets/slime-bio.png", AssetType.IMAGE);
		className.set ("assets/bagbandit.png", __ASSET__assets_bagbandit_png);
		type.set ("assets/bagbandit.png", AssetType.IMAGE);
		className.set ("assets/ketchup_rough.png", __ASSET__assets_ketchup_rough_png);
		type.set ("assets/ketchup_rough.png", AssetType.IMAGE);
		className.set ("assets/deliary.png", __ASSET__assets_deliary_png);
		type.set ("assets/deliary.png", AssetType.IMAGE);
		className.set ("assets/MDK_theme.ogg", __ASSET__assets_mdk_theme_ogg);
		type.set ("assets/MDK_theme.ogg", AssetType.SOUND);
		className.set ("assets/s1-2.png", __ASSET__assets_s1_2_png);
		type.set ("assets/s1-2.png", AssetType.IMAGE);
		className.set ("assets/HeroSandwichUps.png", __ASSET__assets_herosandwichups_png);
		type.set ("assets/HeroSandwichUps.png", AssetType.IMAGE);
		className.set ("assets/Error.ogg", __ASSET__assets_error_ogg);
		type.set ("assets/Error.ogg", AssetType.SOUND);
		className.set ("assets/bile_burger.png", __ASSET__assets_bile_burger_png);
		type.set ("assets/bile_burger.png", AssetType.IMAGE);
		className.set ("assets/s1-6.png", __ASSET__assets_s1_6_png);
		type.set ("assets/s1-6.png", AssetType.IMAGE);
		className.set ("assets/Mustard.ogg", __ASSET__assets_mustard_ogg);
		type.set ("assets/Mustard.ogg", AssetType.SOUND);
		className.set ("assets/mdk.png", __ASSET__assets_mdk_png);
		type.set ("assets/mdk.png", AssetType.IMAGE);
		className.set ("assets/GameplayMusicMixed.ogg", __ASSET__assets_gameplaymusicmixed_ogg);
		type.set ("assets/GameplayMusicMixed.ogg", AssetType.MUSIC);
		className.set ("assets/mustard_2.png", __ASSET__assets_mustard_2_png);
		type.set ("assets/mustard_2.png", AssetType.IMAGE);
		className.set ("assets/bag-bio.png", __ASSET__assets_bag_bio_png);
		type.set ("assets/bag-bio.png", AssetType.IMAGE);
		className.set ("assets/Ketchup.ogg", __ASSET__assets_ketchup_ogg);
		type.set ("assets/Ketchup.ogg", AssetType.SOUND);
		className.set ("assets/ending.ogg", __ASSET__assets_ending_ogg);
		type.set ("assets/ending.ogg", AssetType.MUSIC);
		className.set ("assets/mustard_1.png", __ASSET__assets_mustard_1_png);
		type.set ("assets/mustard_1.png", AssetType.IMAGE);
		className.set ("assets/pinkslimmove.png", __ASSET__assets_pinkslimmove_png);
		type.set ("assets/pinkslimmove.png", AssetType.IMAGE);
		className.set ("assets/og_assets/s1-3.png", __ASSET__assets_og_assets_s1_3_png);
		type.set ("assets/og_assets/s1-3.png", AssetType.IMAGE);
		className.set ("assets/og_assets/s1-5.png", __ASSET__assets_og_assets_s1_5_png);
		type.set ("assets/og_assets/s1-5.png", AssetType.IMAGE);
		className.set ("assets/og_assets/splashscreen.png", __ASSET__assets_og_assets_splashscreen_png);
		type.set ("assets/og_assets/splashscreen.png", AssetType.IMAGE);
		className.set ("assets/og_assets/s1-4.png", __ASSET__assets_og_assets_s1_4_png);
		type.set ("assets/og_assets/s1-4.png", AssetType.IMAGE);
		className.set ("assets/og_assets/s1-1.png", __ASSET__assets_og_assets_s1_1_png);
		type.set ("assets/og_assets/s1-1.png", AssetType.IMAGE);
		className.set ("assets/og_assets/s1-2.png", __ASSET__assets_og_assets_s1_2_png);
		type.set ("assets/og_assets/s1-2.png", AssetType.IMAGE);
		className.set ("assets/wurstmove.png", __ASSET__assets_wurstmove_png);
		type.set ("assets/wurstmove.png", AssetType.IMAGE);
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/s1-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/s1-5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/wurst-bio.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Victory.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/bile-bio.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/intro/S1-5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cutscenes/outro/S1-5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/pink_slime.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Menu.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/stickyprincess.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Injured.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/Upgradez.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/HeroSandwichUp.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/worst_Wurst.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/deliary.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/splashscreen.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/s1-4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/s1-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bileburgermov.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/slime-bio.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bagbandit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/ketchup_rough.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/deliary.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/MDK_theme.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/s1-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/HeroSandwichUps.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Error.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/bile_burger.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/s1-6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Mustard.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/mdk.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/GameplayMusicMixed.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/mustard_2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/bag-bio.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Ketchup.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/ending.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/mustard_1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/pinkslimmove.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/s1-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/s1-5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/splashscreen.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/s1-4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/s1-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/og_assets/s1-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/wurstmove.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "flixel/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "flixel/images/logo/default.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/s1-3.png", __ASSET__assets_s1_3_png);
		type.set ("assets/s1-3.png", AssetType.IMAGE);
		
		className.set ("assets/s1-5.png", __ASSET__assets_s1_5_png);
		type.set ("assets/s1-5.png", AssetType.IMAGE);
		
		className.set ("assets/wurst-bio.png", __ASSET__assets_wurst_bio_png);
		type.set ("assets/wurst-bio.png", AssetType.IMAGE);
		
		className.set ("assets/Victory.ogg", __ASSET__assets_victory_ogg);
		type.set ("assets/Victory.ogg", AssetType.SOUND);
		
		className.set ("assets/bile-bio.png", __ASSET__assets_bile_bio_png);
		type.set ("assets/bile-bio.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-6.png", __ASSET__assets_cutscenes_intro_s1_6_png);
		type.set ("assets/cutscenes/intro/S1-6.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-3.png", __ASSET__assets_cutscenes_intro_s1_3_png);
		type.set ("assets/cutscenes/intro/S1-3.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-4.png", __ASSET__assets_cutscenes_intro_s1_4_png);
		type.set ("assets/cutscenes/intro/S1-4.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-2.png", __ASSET__assets_cutscenes_intro_s1_2_png);
		type.set ("assets/cutscenes/intro/S1-2.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-1.png", __ASSET__assets_cutscenes_intro_s1_1_png);
		type.set ("assets/cutscenes/intro/S1-1.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/intro/S1-5.png", __ASSET__assets_cutscenes_intro_s1_5_png);
		type.set ("assets/cutscenes/intro/S1-5.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-6.png", __ASSET__assets_cutscenes_outro_s1_6_png);
		type.set ("assets/cutscenes/outro/S1-6.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-3.png", __ASSET__assets_cutscenes_outro_s1_3_png);
		type.set ("assets/cutscenes/outro/S1-3.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-4.png", __ASSET__assets_cutscenes_outro_s1_4_png);
		type.set ("assets/cutscenes/outro/S1-4.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-2.png", __ASSET__assets_cutscenes_outro_s1_2_png);
		type.set ("assets/cutscenes/outro/S1-2.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-1.png", __ASSET__assets_cutscenes_outro_s1_1_png);
		type.set ("assets/cutscenes/outro/S1-1.png", AssetType.IMAGE);
		
		className.set ("assets/cutscenes/outro/S1-5.png", __ASSET__assets_cutscenes_outro_s1_5_png);
		type.set ("assets/cutscenes/outro/S1-5.png", AssetType.IMAGE);
		
		className.set ("assets/pink_slime.png", __ASSET__assets_pink_slime_png);
		type.set ("assets/pink_slime.png", AssetType.IMAGE);
		
		className.set ("assets/Menu.ogg", __ASSET__assets_menu_ogg);
		type.set ("assets/Menu.ogg", AssetType.MUSIC);
		
		className.set ("assets/stickyprincess.png", __ASSET__assets_stickyprincess_png);
		type.set ("assets/stickyprincess.png", AssetType.IMAGE);
		
		className.set ("assets/Injured.ogg", __ASSET__assets_injured_ogg);
		type.set ("assets/Injured.ogg", AssetType.SOUND);
		
		className.set ("assets/Upgradez.ogg", __ASSET__assets_upgradez_ogg);
		type.set ("assets/Upgradez.ogg", AssetType.SOUND);
		
		className.set ("assets/HeroSandwichUp.png", __ASSET__assets_herosandwichup_png);
		type.set ("assets/HeroSandwichUp.png", AssetType.IMAGE);
		
		className.set ("assets/worst_Wurst.png", __ASSET__assets_worst_wurst_png);
		type.set ("assets/worst_Wurst.png", AssetType.IMAGE);
		
		className.set ("assets/deliary.ogg", __ASSET__assets_deliary_ogg);
		type.set ("assets/deliary.ogg", AssetType.MUSIC);
		
		className.set ("assets/splashscreen.png", __ASSET__assets_splashscreen_png);
		type.set ("assets/splashscreen.png", AssetType.IMAGE);
		
		className.set ("assets/s1-4.png", __ASSET__assets_s1_4_png);
		type.set ("assets/s1-4.png", AssetType.IMAGE);
		
		className.set ("assets/s1-1.png", __ASSET__assets_s1_1_png);
		type.set ("assets/s1-1.png", AssetType.IMAGE);
		
		className.set ("assets/bileburgermov.png", __ASSET__assets_bileburgermov_png);
		type.set ("assets/bileburgermov.png", AssetType.IMAGE);
		
		className.set ("assets/slime-bio.png", __ASSET__assets_slime_bio_png);
		type.set ("assets/slime-bio.png", AssetType.IMAGE);
		
		className.set ("assets/bagbandit.png", __ASSET__assets_bagbandit_png);
		type.set ("assets/bagbandit.png", AssetType.IMAGE);
		
		className.set ("assets/ketchup_rough.png", __ASSET__assets_ketchup_rough_png);
		type.set ("assets/ketchup_rough.png", AssetType.IMAGE);
		
		className.set ("assets/deliary.png", __ASSET__assets_deliary_png);
		type.set ("assets/deliary.png", AssetType.IMAGE);
		
		className.set ("assets/MDK_theme.ogg", __ASSET__assets_mdk_theme_ogg);
		type.set ("assets/MDK_theme.ogg", AssetType.SOUND);
		
		className.set ("assets/s1-2.png", __ASSET__assets_s1_2_png);
		type.set ("assets/s1-2.png", AssetType.IMAGE);
		
		className.set ("assets/HeroSandwichUps.png", __ASSET__assets_herosandwichups_png);
		type.set ("assets/HeroSandwichUps.png", AssetType.IMAGE);
		
		className.set ("assets/Error.ogg", __ASSET__assets_error_ogg);
		type.set ("assets/Error.ogg", AssetType.SOUND);
		
		className.set ("assets/bile_burger.png", __ASSET__assets_bile_burger_png);
		type.set ("assets/bile_burger.png", AssetType.IMAGE);
		
		className.set ("assets/s1-6.png", __ASSET__assets_s1_6_png);
		type.set ("assets/s1-6.png", AssetType.IMAGE);
		
		className.set ("assets/Mustard.ogg", __ASSET__assets_mustard_ogg);
		type.set ("assets/Mustard.ogg", AssetType.SOUND);
		
		className.set ("assets/mdk.png", __ASSET__assets_mdk_png);
		type.set ("assets/mdk.png", AssetType.IMAGE);
		
		className.set ("assets/GameplayMusicMixed.ogg", __ASSET__assets_gameplaymusicmixed_ogg);
		type.set ("assets/GameplayMusicMixed.ogg", AssetType.MUSIC);
		
		className.set ("assets/mustard_2.png", __ASSET__assets_mustard_2_png);
		type.set ("assets/mustard_2.png", AssetType.IMAGE);
		
		className.set ("assets/bag-bio.png", __ASSET__assets_bag_bio_png);
		type.set ("assets/bag-bio.png", AssetType.IMAGE);
		
		className.set ("assets/Ketchup.ogg", __ASSET__assets_ketchup_ogg);
		type.set ("assets/Ketchup.ogg", AssetType.SOUND);
		
		className.set ("assets/ending.ogg", __ASSET__assets_ending_ogg);
		type.set ("assets/ending.ogg", AssetType.MUSIC);
		
		className.set ("assets/mustard_1.png", __ASSET__assets_mustard_1_png);
		type.set ("assets/mustard_1.png", AssetType.IMAGE);
		
		className.set ("assets/pinkslimmove.png", __ASSET__assets_pinkslimmove_png);
		type.set ("assets/pinkslimmove.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/s1-3.png", __ASSET__assets_og_assets_s1_3_png);
		type.set ("assets/og_assets/s1-3.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/s1-5.png", __ASSET__assets_og_assets_s1_5_png);
		type.set ("assets/og_assets/s1-5.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/splashscreen.png", __ASSET__assets_og_assets_splashscreen_png);
		type.set ("assets/og_assets/splashscreen.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/s1-4.png", __ASSET__assets_og_assets_s1_4_png);
		type.set ("assets/og_assets/s1-4.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/s1-1.png", __ASSET__assets_og_assets_s1_1_png);
		type.set ("assets/og_assets/s1-1.png", AssetType.IMAGE);
		
		className.set ("assets/og_assets/s1-2.png", __ASSET__assets_og_assets_s1_2_png);
		type.set ("assets/og_assets/s1-2.png", AssetType.IMAGE);
		
		className.set ("assets/wurstmove.png", __ASSET__assets_wurstmove_png);
		type.set ("assets/wurstmove.png", AssetType.IMAGE);
		
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_wurst_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_victory_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_bile_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_intro_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cutscenes_outro_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_pink_slime_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_menu_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_stickyprincess_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_injured_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_upgradez_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_herosandwichup_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_worst_wurst_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_deliary_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_splashscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bileburgermov_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_slime_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bagbandit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_ketchup_rough_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_deliary_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mdk_theme_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_herosandwichups_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_error_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_bile_burger_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_s1_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mdk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_gameplaymusicmixed_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_bag_bio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_ketchup_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_ending_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mustard_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_pinkslimmove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_splashscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_og_assets_s1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_wurstmove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5


























































@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 




#else



#if (windows || mac || linux || cpp)


@:image("assets/s1-3.png") #if display private #end class __ASSET__assets_s1_3_png extends lime.graphics.Image {}
@:image("assets/s1-5.png") #if display private #end class __ASSET__assets_s1_5_png extends lime.graphics.Image {}
@:image("assets/wurst-bio.png") #if display private #end class __ASSET__assets_wurst_bio_png extends lime.graphics.Image {}
@:file("assets/Victory.ogg") #if display private #end class __ASSET__assets_victory_ogg extends lime.utils.Bytes {}
@:image("assets/bile-bio.png") #if display private #end class __ASSET__assets_bile_bio_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-6.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_6_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-3.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_3_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-4.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_4_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-2.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_2_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-1.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_1_png extends lime.graphics.Image {}
@:image("assets/cutscenes/intro/S1-5.png") #if display private #end class __ASSET__assets_cutscenes_intro_s1_5_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-6.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_6_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-3.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_3_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-4.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_4_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-2.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_2_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-1.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_1_png extends lime.graphics.Image {}
@:image("assets/cutscenes/outro/S1-5.png") #if display private #end class __ASSET__assets_cutscenes_outro_s1_5_png extends lime.graphics.Image {}
@:image("assets/pink_slime.png") #if display private #end class __ASSET__assets_pink_slime_png extends lime.graphics.Image {}
@:file("assets/Menu.ogg") #if display private #end class __ASSET__assets_menu_ogg extends lime.utils.Bytes {}
@:image("assets/stickyprincess.png") #if display private #end class __ASSET__assets_stickyprincess_png extends lime.graphics.Image {}
@:file("assets/Injured.ogg") #if display private #end class __ASSET__assets_injured_ogg extends lime.utils.Bytes {}
@:file("assets/Upgradez.ogg") #if display private #end class __ASSET__assets_upgradez_ogg extends lime.utils.Bytes {}
@:image("assets/HeroSandwichUp.png") #if display private #end class __ASSET__assets_herosandwichup_png extends lime.graphics.Image {}
@:image("assets/worst_Wurst.png") #if display private #end class __ASSET__assets_worst_wurst_png extends lime.graphics.Image {}
@:file("assets/deliary.ogg") #if display private #end class __ASSET__assets_deliary_ogg extends lime.utils.Bytes {}
@:image("assets/splashscreen.png") #if display private #end class __ASSET__assets_splashscreen_png extends lime.graphics.Image {}
@:image("assets/s1-4.png") #if display private #end class __ASSET__assets_s1_4_png extends lime.graphics.Image {}
@:image("assets/s1-1.png") #if display private #end class __ASSET__assets_s1_1_png extends lime.graphics.Image {}
@:image("assets/bileburgermov.png") #if display private #end class __ASSET__assets_bileburgermov_png extends lime.graphics.Image {}
@:image("assets/slime-bio.png") #if display private #end class __ASSET__assets_slime_bio_png extends lime.graphics.Image {}
@:image("assets/bagbandit.png") #if display private #end class __ASSET__assets_bagbandit_png extends lime.graphics.Image {}
@:image("assets/ketchup_rough.png") #if display private #end class __ASSET__assets_ketchup_rough_png extends lime.graphics.Image {}
@:image("assets/deliary.png") #if display private #end class __ASSET__assets_deliary_png extends lime.graphics.Image {}
@:file("assets/MDK_theme.ogg") #if display private #end class __ASSET__assets_mdk_theme_ogg extends lime.utils.Bytes {}
@:image("assets/s1-2.png") #if display private #end class __ASSET__assets_s1_2_png extends lime.graphics.Image {}
@:image("assets/HeroSandwichUps.png") #if display private #end class __ASSET__assets_herosandwichups_png extends lime.graphics.Image {}
@:file("assets/Error.ogg") #if display private #end class __ASSET__assets_error_ogg extends lime.utils.Bytes {}
@:image("assets/bile_burger.png") #if display private #end class __ASSET__assets_bile_burger_png extends lime.graphics.Image {}
@:image("assets/s1-6.png") #if display private #end class __ASSET__assets_s1_6_png extends lime.graphics.Image {}
@:file("assets/Mustard.ogg") #if display private #end class __ASSET__assets_mustard_ogg extends lime.utils.Bytes {}
@:image("assets/mdk.png") #if display private #end class __ASSET__assets_mdk_png extends lime.graphics.Image {}
@:file("assets/GameplayMusicMixed.ogg") #if display private #end class __ASSET__assets_gameplaymusicmixed_ogg extends lime.utils.Bytes {}
@:image("assets/mustard_2.png") #if display private #end class __ASSET__assets_mustard_2_png extends lime.graphics.Image {}
@:image("assets/bag-bio.png") #if display private #end class __ASSET__assets_bag_bio_png extends lime.graphics.Image {}
@:file("assets/Ketchup.ogg") #if display private #end class __ASSET__assets_ketchup_ogg extends lime.utils.Bytes {}
@:file("assets/ending.ogg") #if display private #end class __ASSET__assets_ending_ogg extends lime.utils.Bytes {}
@:image("assets/mustard_1.png") #if display private #end class __ASSET__assets_mustard_1_png extends lime.graphics.Image {}
@:image("assets/pinkslimmove.png") #if display private #end class __ASSET__assets_pinkslimmove_png extends lime.graphics.Image {}
@:image("assets/og_assets/s1-3.png") #if display private #end class __ASSET__assets_og_assets_s1_3_png extends lime.graphics.Image {}
@:image("assets/og_assets/s1-5.png") #if display private #end class __ASSET__assets_og_assets_s1_5_png extends lime.graphics.Image {}
@:image("assets/og_assets/splashscreen.png") #if display private #end class __ASSET__assets_og_assets_splashscreen_png extends lime.graphics.Image {}
@:image("assets/og_assets/s1-4.png") #if display private #end class __ASSET__assets_og_assets_s1_4_png extends lime.graphics.Image {}
@:image("assets/og_assets/s1-1.png") #if display private #end class __ASSET__assets_og_assets_s1_1_png extends lime.graphics.Image {}
@:image("assets/og_assets/s1-2.png") #if display private #end class __ASSET__assets_og_assets_s1_2_png extends lime.graphics.Image {}
@:image("assets/wurstmove.png") #if display private #end class __ASSET__assets_wurstmove_png extends lime.graphics.Image {}
@:file("/home/oddone9139/haxelib/flixel/4,3,0/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends lime.utils.Bytes {}
@:file("/home/oddone9139/haxelib/flixel/4,3,0/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends lime.utils.Bytes {}
@:font("/home/oddone9139/haxelib/flixel/4,3,0/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("/home/oddone9139/haxelib/flixel/4,3,0/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("/home/oddone9139/haxelib/flixel/4,3,0/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:image("/home/oddone9139/haxelib/flixel/4,3,0/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end