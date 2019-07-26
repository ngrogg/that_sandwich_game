// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Guid
#include <Guid.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_UpgradeState
#include <UpgradeState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a844a3356cbcc100_12_new,"UpgradeState","new",0x8ab08767,"UpgradeState.new","UpgradeState.hx",12,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_66_create,"UpgradeState","create",0xcddf8e55,"UpgradeState.create","UpgradeState.hx",66,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_121_update,"UpgradeState","update",0xd8d5ad62,"UpgradeState.update","UpgradeState.hx",121,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_197_increaseBread,"UpgradeState","increaseBread",0xaf22df5d,"UpgradeState.increaseBread","UpgradeState.hx",197,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_211_increaseBullets,"UpgradeState","increaseBullets",0x2745d5d6,"UpgradeState.increaseBullets","UpgradeState.hx",211,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_226_increaseRotation,"UpgradeState","increaseRotation",0xb6cff7b9,"UpgradeState.increaseRotation","UpgradeState.hx",226,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_18_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",18,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_21_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",21,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_23_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",23,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_26_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",26,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_29_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",29,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_32_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",32,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_35_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",35,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_38_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",38,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_41_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",41,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_44_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",44,0x5ec1a1e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a844a3356cbcc100_47_boot,"UpgradeState","boot",0xc7def34b,"UpgradeState.boot","UpgradeState.hx",47,0x5ec1a1e9)

void UpgradeState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_12_new)
HXDLIN(  12)		super::__construct(MaxSize);
            	}

Dynamic UpgradeState_obj::__CreateEmpty() { return new UpgradeState_obj; }

void *UpgradeState_obj::_hx_vtable = 0;

Dynamic UpgradeState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UpgradeState_obj > _hx_result = new UpgradeState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool UpgradeState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x264a4e59 || inClassId==(int)0x3634c52c;
	}
}

void UpgradeState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a844a3356cbcc100_66_create)
HXLINE(  68)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/Upgradez.ogg",ab,f8,17,88),(int)1,true,null());
HXLINE(  69)		this->snd_error = ::flixel::FlxG_obj::sound->load(HX_("assets/Error.ogg",bd,c0,88,57),null(),null(),null(),null(),null(),null(),null());
HXLINE(  71)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  73)		 ::flixel::text::FlxText t =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)0,::flixel::FlxG_obj::width,HX_("UPGRADES!!!",4a,53,0f,65),null(),null());
HXLINE(  75)		t->setFormat(null(),(int)32,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  76)		this->add(t);
HXLINE(  79)		int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  79)		this->_pointsText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)40,_hx_tmp,(HX_("Upgrade Points: ",cd,e3,a3,b6) + ::UpgradeState_obj::_upgrades),null(),null());
HXLINE(  80)		this->_pointsText->setFormat(null(),(int)16,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  81)		this->add(this->_pointsText);
HXLINE(  84)		t =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)80,::flixel::FlxG_obj::width,HX_("Press P to increase Max Bread by one point",d7,51,4f,fb),null(),null());
HXLINE(  85)		t->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  86)		this->add(t);
HXLINE(  88)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  88)		this->_breadText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)100,_hx_tmp1,(HX_("Max Bread: ",a2,47,af,5b) + ::UpgradeState_obj::_max_bread),null(),null());
HXLINE(  89)		this->_breadText->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  90)		this->add(this->_breadText);
HXLINE(  93)		t =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)140,::flixel::FlxG_obj::width,HX_("Press O to increase Max Bullets by one point",1f,43,58,d8),null(),null());
HXLINE(  94)		t->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  95)		this->add(t);
HXLINE(  97)		int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN(  97)		this->_bulletText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)160,_hx_tmp2,(HX_("Max Bullets: ",1b,a4,60,0a) + ::UpgradeState_obj::_num_bullets),null(),null());
HXLINE(  98)		this->_bulletText->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  99)		this->add(this->_bulletText);
HXLINE( 103)		t =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)200,::flixel::FlxG_obj::width,HX_("Press I to increase rotation speed",72,c9,6c,b7),null(),null());
HXLINE( 104)		t->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE( 105)		this->add(t);
HXLINE( 107)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN( 107)		this->_spinText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)220,_hx_tmp3,(HX_("Spin speed: ",af,fd,97,3b) + ::UpgradeState_obj::_rotation_speed),null(),null());
HXLINE( 108)		this->_spinText->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE( 109)		this->add(this->_spinText);
HXLINE( 112)		this->_helperText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)460,::flixel::FlxG_obj::width,HX_("E to start next level",7f,7e,85,46),null(),null());
HXLINE( 113)		this->_helperText->setFormat(null(),(int)16,(int)-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE( 114)		this->add(this->_helperText);
            	}


void UpgradeState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a844a3356cbcc100_121_update)
HXLINE( 123)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 123)		if (_this->keyManager->checkStatus((int)69,_this->status)) {
HXLINE( 126)			if (::flixel::FlxG_obj::sound->music->active) {
HXLINE( 128)				::flixel::FlxG_obj::sound->music->pause();
            			}
HXLINE( 132)			{
HXLINE( 132)				 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN( 132)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 132)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 136)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 136)		if (_this1->keyManager->checkStatus((int)80,_this1->status)) {
HXLINE( 138)			bool _hx_tmp;
HXDLIN( 138)			if ((::UpgradeState_obj::_upgrades != (int)0)) {
HXLINE( 138)				_hx_tmp = (::UpgradeState_obj::_max_bread == (int)4);
            			}
            			else {
HXLINE( 138)				_hx_tmp = true;
            			}
HXDLIN( 138)			if (_hx_tmp) {
HXLINE( 141)				this->snd_error->play(true,null(),null());
            			}
            			else {
HXLINE( 146)				this->increaseBread(null());
HXLINE( 148)				 ::Dynamic _hx_tmp1 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 148)				::UpgradeState_obj::_sequence = (::UpgradeState_obj::_sequence + (int)1);
            			}
            		}
HXLINE( 155)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 155)		if (_this2->keyManager->checkStatus((int)79,_this2->status)) {
HXLINE( 157)			bool _hx_tmp2;
HXDLIN( 157)			if ((::UpgradeState_obj::_upgrades != (int)0)) {
HXLINE( 157)				_hx_tmp2 = (::UpgradeState_obj::_num_bullets == (int)5);
            			}
            			else {
HXLINE( 157)				_hx_tmp2 = true;
            			}
HXDLIN( 157)			if (_hx_tmp2) {
HXLINE( 160)				this->snd_error->play(true,null(),null());
            			}
            			else {
HXLINE( 165)				this->increaseBullets(null());
HXLINE( 167)				 ::Dynamic _hx_tmp3 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 167)				::UpgradeState_obj::_sequence = (::UpgradeState_obj::_sequence + (int)1);
            			}
            		}
HXLINE( 175)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 175)		if (_this3->keyManager->checkStatus((int)73,_this3->status)) {
HXLINE( 177)			bool _hx_tmp4;
HXDLIN( 177)			if ((::UpgradeState_obj::_upgrades != (int)0)) {
HXLINE( 177)				_hx_tmp4 = (::UpgradeState_obj::_rotation_speed == (int)300);
            			}
            			else {
HXLINE( 177)				_hx_tmp4 = true;
            			}
HXDLIN( 177)			if (_hx_tmp4) {
HXLINE( 180)				this->snd_error->play(true,null(),null());
            			}
            			else {
HXLINE( 185)				this->increaseRotation();
HXLINE( 187)				 ::Dynamic _hx_tmp5 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 187)				::UpgradeState_obj::_sequence = (::UpgradeState_obj::_sequence + (int)1);
            			}
            		}
            	}


void UpgradeState_obj::increaseBread(hx::Null< int >  __o_Amount){
int Amount = __o_Amount.Default(1);
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_197_increaseBread)
HXLINE( 198)		 ::Dynamic _hx_tmp = hx::ClassOf< ::UpgradeState >();
HXDLIN( 198)		::UpgradeState_obj::_upgrades = (::UpgradeState_obj::_upgrades - Amount);
HXLINE( 199)		 ::flixel::text::FlxText _hx_tmp1 = this->_pointsText;
HXDLIN( 199)		_hx_tmp1->set_text((HX_("Upgrade Points: ",cd,e3,a3,b6) + ::UpgradeState_obj::_upgrades));
HXLINE( 200)		this->_pointsText->set_alpha((int)0);
HXLINE( 201)		::flixel::tweens::FlxTween_obj::tween(this->_pointsText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
HXLINE( 203)		 ::Dynamic _hx_tmp2 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 203)		::UpgradeState_obj::_max_bread = (::UpgradeState_obj::_max_bread + Amount);
HXLINE( 204)		 ::flixel::text::FlxText _hx_tmp3 = this->_breadText;
HXDLIN( 204)		_hx_tmp3->set_text((HX_("Max Bread: ",a2,47,af,5b) + ::UpgradeState_obj::_max_bread));
HXLINE( 205)		this->_breadText->set_alpha((int)0);
HXLINE( 206)		::flixel::tweens::FlxTween_obj::tween(this->_breadText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(UpgradeState_obj,increaseBread,(void))

void UpgradeState_obj::increaseBullets(hx::Null< int >  __o_Amount){
int Amount = __o_Amount.Default(1);
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_211_increaseBullets)
HXLINE( 212)		 ::Dynamic _hx_tmp = hx::ClassOf< ::UpgradeState >();
HXDLIN( 212)		::UpgradeState_obj::_upgrades = (::UpgradeState_obj::_upgrades - Amount);
HXLINE( 213)		 ::flixel::text::FlxText _hx_tmp1 = this->_pointsText;
HXDLIN( 213)		_hx_tmp1->set_text((HX_("Upgrade Points: ",cd,e3,a3,b6) + ::UpgradeState_obj::_upgrades));
HXLINE( 214)		this->_pointsText->set_alpha((int)0);
HXLINE( 215)		::flixel::tweens::FlxTween_obj::tween(this->_pointsText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
HXLINE( 217)		 ::Dynamic _hx_tmp2 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 217)		::UpgradeState_obj::_num_bullets = (::UpgradeState_obj::_num_bullets + Amount);
HXLINE( 218)		 ::flixel::text::FlxText _hx_tmp3 = this->_bulletText;
HXDLIN( 218)		_hx_tmp3->set_text((HX_("Max Bullets: ",1b,a4,60,0a) + ::UpgradeState_obj::_num_bullets));
HXLINE( 219)		this->_bulletText->set_alpha((int)0);
HXLINE( 220)		::flixel::tweens::FlxTween_obj::tween(this->_bulletText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(UpgradeState_obj,increaseBullets,(void))

void UpgradeState_obj::increaseRotation(){
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_226_increaseRotation)
HXLINE( 227)		 ::Dynamic _hx_tmp = hx::ClassOf< ::UpgradeState >();
HXDLIN( 227)		::UpgradeState_obj::_upgrades = (::UpgradeState_obj::_upgrades - (int)1);
HXLINE( 228)		 ::flixel::text::FlxText _hx_tmp1 = this->_pointsText;
HXDLIN( 228)		_hx_tmp1->set_text((HX_("Upgrade Points: ",cd,e3,a3,b6) + ::UpgradeState_obj::_upgrades));
HXLINE( 229)		this->_pointsText->set_alpha((int)0);
HXLINE( 230)		::flixel::tweens::FlxTween_obj::tween(this->_pointsText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
HXLINE( 232)		 ::Dynamic _hx_tmp2 = hx::ClassOf< ::UpgradeState >();
HXDLIN( 232)		::UpgradeState_obj::_rotation_speed = (::UpgradeState_obj::_rotation_speed + (int)50);
HXLINE( 233)		 ::flixel::text::FlxText _hx_tmp3 = this->_spinText;
HXDLIN( 233)		_hx_tmp3->set_text((HX_("Spin Speed: ",8f,25,e9,08) + ::UpgradeState_obj::_rotation_speed));
HXLINE( 234)		this->_spinText->set_alpha((int)0);
HXLINE( 235)		::flixel::tweens::FlxTween_obj::tween(this->_spinText, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),(int)1)),((Float)0.5),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(UpgradeState_obj,increaseRotation,(void))

int UpgradeState_obj::FiniteState;

::String UpgradeState_obj::_version;

::String UpgradeState_obj::_GUID;

int UpgradeState_obj::_level;

int UpgradeState_obj::_rotation_speed;

int UpgradeState_obj::_num_bullets;

int UpgradeState_obj::_max_bread;

int UpgradeState_obj::_upgrades;

int UpgradeState_obj::newGame;

int UpgradeState_obj::_score;

int UpgradeState_obj::_sequence;


hx::ObjectPtr< UpgradeState_obj > UpgradeState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< UpgradeState_obj > __this = new UpgradeState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< UpgradeState_obj > UpgradeState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	UpgradeState_obj *__this = (UpgradeState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UpgradeState_obj), true, "UpgradeState"));
	*(void **)__this = UpgradeState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

UpgradeState_obj::UpgradeState_obj()
{
}

void UpgradeState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpgradeState);
	HX_MARK_MEMBER_NAME(_breadText,"_breadText");
	HX_MARK_MEMBER_NAME(_bulletText,"_bulletText");
	HX_MARK_MEMBER_NAME(_spinText,"_spinText");
	HX_MARK_MEMBER_NAME(_pointsText,"_pointsText");
	HX_MARK_MEMBER_NAME(_helperText,"_helperText");
	HX_MARK_MEMBER_NAME(snd_error,"snd_error");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UpgradeState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_breadText,"_breadText");
	HX_VISIT_MEMBER_NAME(_bulletText,"_bulletText");
	HX_VISIT_MEMBER_NAME(_spinText,"_spinText");
	HX_VISIT_MEMBER_NAME(_pointsText,"_pointsText");
	HX_VISIT_MEMBER_NAME(_helperText,"_helperText");
	HX_VISIT_MEMBER_NAME(snd_error,"snd_error");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val UpgradeState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_spinText") ) { return hx::Val( _spinText ); }
		if (HX_FIELD_EQ(inName,"snd_error") ) { return hx::Val( snd_error ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_breadText") ) { return hx::Val( _breadText ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bulletText") ) { return hx::Val( _bulletText ); }
		if (HX_FIELD_EQ(inName,"_pointsText") ) { return hx::Val( _pointsText ); }
		if (HX_FIELD_EQ(inName,"_helperText") ) { return hx::Val( _helperText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"increaseBread") ) { return hx::Val( increaseBread_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"increaseBullets") ) { return hx::Val( increaseBullets_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"increaseRotation") ) { return hx::Val( increaseRotation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool UpgradeState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_GUID") ) { outValue = ( _GUID ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { outValue = ( _level ); return true; }
		if (HX_FIELD_EQ(inName,"_score") ) { outValue = ( _score ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { outValue = ( newGame ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_version") ) { outValue = ( _version ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upgrades") ) { outValue = ( _upgrades ); return true; }
		if (HX_FIELD_EQ(inName,"_sequence") ) { outValue = ( _sequence ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_max_bread") ) { outValue = ( _max_bread ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FiniteState") ) { outValue = ( FiniteState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_num_bullets") ) { outValue = ( _num_bullets ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_speed") ) { outValue = ( _rotation_speed ); return true; }
	}
	return false;
}

hx::Val UpgradeState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_spinText") ) { _spinText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snd_error") ) { snd_error=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_breadText") ) { _breadText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bulletText") ) { _bulletText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointsText") ) { _pointsText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperText") ) { _helperText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UpgradeState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_GUID") ) { _GUID=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { _level=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_score") ) { _score=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { newGame=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_version") ) { _version=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upgrades") ) { _upgrades=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_sequence") ) { _sequence=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_max_bread") ) { _max_bread=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FiniteState") ) { FiniteState=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_num_bullets") ) { _num_bullets=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_speed") ) { _rotation_speed=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void UpgradeState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_breadText","\x46","\x55","\xfe","\x90"));
	outFields->push(HX_HCSTRING("_bulletText","\x2e","\xa1","\x10","\xe8"));
	outFields->push(HX_HCSTRING("_spinText","\xee","\xda","\x02","\xb4"));
	outFields->push(HX_HCSTRING("_pointsText","\x8f","\x25","\x02","\x8e"));
	outFields->push(HX_HCSTRING("_helperText","\x5a","\x92","\x41","\xba"));
	outFields->push(HX_HCSTRING("snd_error","\x32","\xab","\x92","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UpgradeState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeState_obj,_breadText),HX_HCSTRING("_breadText","\x46","\x55","\xfe","\x90")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeState_obj,_bulletText),HX_HCSTRING("_bulletText","\x2e","\xa1","\x10","\xe8")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeState_obj,_spinText),HX_HCSTRING("_spinText","\xee","\xda","\x02","\xb4")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeState_obj,_pointsText),HX_HCSTRING("_pointsText","\x8f","\x25","\x02","\x8e")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UpgradeState_obj,_helperText),HX_HCSTRING("_helperText","\x5a","\x92","\x41","\xba")},
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(UpgradeState_obj,snd_error),HX_HCSTRING("snd_error","\x32","\xab","\x92","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo UpgradeState_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UpgradeState_obj::FiniteState,HX_HCSTRING("FiniteState","\x42","\x92","\xc6","\x85")},
	{hx::fsString,(void *) &UpgradeState_obj::_version,HX_HCSTRING("_version","\x99","\x40","\xaa","\xb6")},
	{hx::fsString,(void *) &UpgradeState_obj::_GUID,HX_HCSTRING("_GUID","\x68","\x01","\x40","\xe2")},
	{hx::fsInt,(void *) &UpgradeState_obj::_level,HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e")},
	{hx::fsInt,(void *) &UpgradeState_obj::_rotation_speed,HX_HCSTRING("_rotation_speed","\x25","\xe7","\x35","\xa7")},
	{hx::fsInt,(void *) &UpgradeState_obj::_num_bullets,HX_HCSTRING("_num_bullets","\xb9","\x03","\x16","\xdc")},
	{hx::fsInt,(void *) &UpgradeState_obj::_max_bread,HX_HCSTRING("_max_bread","\x5e","\x85","\x6c","\x0b")},
	{hx::fsInt,(void *) &UpgradeState_obj::_upgrades,HX_HCSTRING("_upgrades","\xb6","\x4b","\xe2","\xaf")},
	{hx::fsInt,(void *) &UpgradeState_obj::newGame,HX_HCSTRING("newGame","\x72","\xa0","\x2b","\xf4")},
	{hx::fsInt,(void *) &UpgradeState_obj::_score,HX_HCSTRING("_score","\x93","\xba","\xc0","\x74")},
	{hx::fsInt,(void *) &UpgradeState_obj::_sequence,HX_HCSTRING("_sequence","\xa0","\x15","\x83","\x30")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String UpgradeState_obj_sMemberFields[] = {
	HX_HCSTRING("_breadText","\x46","\x55","\xfe","\x90"),
	HX_HCSTRING("_bulletText","\x2e","\xa1","\x10","\xe8"),
	HX_HCSTRING("_spinText","\xee","\xda","\x02","\xb4"),
	HX_HCSTRING("_pointsText","\x8f","\x25","\x02","\x8e"),
	HX_HCSTRING("_helperText","\x5a","\x92","\x41","\xba"),
	HX_HCSTRING("snd_error","\x32","\xab","\x92","\x03"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("increaseBread","\x96","\x79","\x06","\x95"),
	HX_HCSTRING("increaseBullets","\x4f","\x30","\xef","\x00"),
	HX_HCSTRING("increaseRotation","\x20","\xc7","\x55","\x51"),
	::String(null()) };

static void UpgradeState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpgradeState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::FiniteState,"FiniteState");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_version,"_version");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_GUID,"_GUID");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_level,"_level");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_rotation_speed,"_rotation_speed");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_num_bullets,"_num_bullets");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_max_bread,"_max_bread");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_upgrades,"_upgrades");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::newGame,"newGame");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_score,"_score");
	HX_MARK_MEMBER_NAME(UpgradeState_obj::_sequence,"_sequence");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UpgradeState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::FiniteState,"FiniteState");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_version,"_version");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_GUID,"_GUID");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_level,"_level");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_rotation_speed,"_rotation_speed");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_num_bullets,"_num_bullets");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_max_bread,"_max_bread");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_upgrades,"_upgrades");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::newGame,"newGame");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_score,"_score");
	HX_VISIT_MEMBER_NAME(UpgradeState_obj::_sequence,"_sequence");
};

#endif

hx::Class UpgradeState_obj::__mClass;

static ::String UpgradeState_obj_sStaticFields[] = {
	HX_HCSTRING("FiniteState","\x42","\x92","\xc6","\x85"),
	HX_HCSTRING("_version","\x99","\x40","\xaa","\xb6"),
	HX_HCSTRING("_GUID","\x68","\x01","\x40","\xe2"),
	HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"),
	HX_HCSTRING("_rotation_speed","\x25","\xe7","\x35","\xa7"),
	HX_HCSTRING("_num_bullets","\xb9","\x03","\x16","\xdc"),
	HX_HCSTRING("_max_bread","\x5e","\x85","\x6c","\x0b"),
	HX_HCSTRING("_upgrades","\xb6","\x4b","\xe2","\xaf"),
	HX_HCSTRING("newGame","\x72","\xa0","\x2b","\xf4"),
	HX_HCSTRING("_score","\x93","\xba","\xc0","\x74"),
	HX_HCSTRING("_sequence","\xa0","\x15","\x83","\x30"),
	::String(null())
};

void UpgradeState_obj::__register()
{
	hx::Object *dummy = new UpgradeState_obj;
	UpgradeState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UpgradeState","\xf5","\x47","\x19","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UpgradeState_obj::__GetStatic;
	__mClass->mSetStaticField = &UpgradeState_obj::__SetStatic;
	__mClass->mMarkFunc = UpgradeState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(UpgradeState_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UpgradeState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UpgradeState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UpgradeState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UpgradeState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UpgradeState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UpgradeState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_18_boot)
HXDLIN(  18)		FiniteState = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_21_boot)
HXDLIN(  21)		_version = HX_("1.0",b3,56,25,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_23_boot)
HXDLIN(  23)		_GUID = ::Guid_obj::generate();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_26_boot)
HXDLIN(  26)		_level = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_29_boot)
HXDLIN(  29)		_rotation_speed = (int)200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_32_boot)
HXDLIN(  32)		_num_bullets = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_35_boot)
HXDLIN(  35)		_max_bread = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_38_boot)
HXDLIN(  38)		_upgrades = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_41_boot)
HXDLIN(  41)		newGame = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_44_boot)
HXDLIN(  44)		_score = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a844a3356cbcc100_47_boot)
HXDLIN(  47)		_sequence = (int)1;
            	}
}

