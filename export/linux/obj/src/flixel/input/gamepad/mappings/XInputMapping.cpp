// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#include <flixel/input/gamepad/id/XInputID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84c975cfdc90262d_6_new,"flixel.input.gamepad.mappings.XInputMapping","new",0x0bf6dd68,"flixel.input.gamepad.mappings.XInputMapping.new","flixel/input/gamepad/mappings/XInputMapping.hx",6,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_20_initValues,"flixel.input.gamepad.mappings.XInputMapping","initValues",0xac18830a,"flixel.input.gamepad.mappings.XInputMapping.initValues","flixel/input/gamepad/mappings/XInputMapping.hx",20,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_27_getID,"flixel.input.gamepad.mappings.XInputMapping","getID",0x15a6f0f9,"flixel.input.gamepad.mappings.XInputMapping.getID","flixel/input/gamepad/mappings/XInputMapping.hx",27,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_65_getRawID,"flixel.input.gamepad.mappings.XInputMapping","getRawID",0x00062545,"flixel.input.gamepad.mappings.XInputMapping.getRawID","flixel/input/gamepad/mappings/XInputMapping.hx",65,0x442329e6)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void XInputMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic XInputMapping_obj::__CreateEmpty() { return new XInputMapping_obj; }

void *XInputMapping_obj::_hx_vtable = 0;

Dynamic XInputMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XInputMapping_obj > _hx_result = new XInputMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool XInputMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12065d74) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12065d74;
	} else {
		return inClassId==(int)0x5f3facff;
	}
}

void XInputMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_20_initValues)
HXLINE(  21)		this->leftStick = ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK;
HXLINE(  22)		this->rightStick = ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK;
            	}


int XInputMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_27_getID)
HXDLIN(  27)		switch((int)(rawID)){
            			case (int)-1: {
HXLINE(  34)				return (int)10;
            			}
            			break;
            			case (int)4: {
HXLINE(  44)				return (int)17;
            			}
            			break;
            			case (int)5: {
HXLINE(  45)				return (int)18;
            			}
            			break;
            			case (int)6: {
HXLINE(  29)				return (int)0;
            			}
            			break;
            			case (int)7: {
HXLINE(  30)				return (int)1;
            			}
            			break;
            			case (int)8: {
HXLINE(  31)				return (int)2;
            			}
            			break;
            			case (int)9: {
HXLINE(  32)				return (int)3;
            			}
            			break;
            			case (int)10: {
HXLINE(  33)				return (int)6;
            			}
            			break;
            			case (int)12: {
HXLINE(  35)				return (int)7;
            			}
            			break;
            			case (int)13: {
HXLINE(  36)				return (int)8;
            			}
            			break;
            			case (int)14: {
HXLINE(  37)				return (int)9;
            			}
            			break;
            			case (int)15: {
HXLINE(  38)				return (int)4;
            			}
            			break;
            			case (int)16: {
HXLINE(  39)				return (int)5;
            			}
            			break;
            			case (int)17: {
HXLINE(  47)				return (int)11;
            			}
            			break;
            			case (int)18: {
HXLINE(  48)				return (int)12;
            			}
            			break;
            			case (int)19: {
HXLINE(  49)				return (int)13;
            			}
            			break;
            			case (int)20: {
HXLINE(  50)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  51)				int id = rawID;
HXDLIN(  51)				if ((id == this->leftStick->rawUp)) {
HXLINE(  51)					return (int)34;
            				}
            				else {
HXLINE(  52)					int id1 = rawID;
HXDLIN(  52)					if ((id1 == this->leftStick->rawDown)) {
HXLINE(  52)						return (int)36;
            					}
            					else {
HXLINE(  53)						int id2 = rawID;
HXDLIN(  53)						if ((id2 == this->leftStick->rawLeft)) {
HXLINE(  53)							return (int)37;
            						}
            						else {
HXLINE(  54)							int id3 = rawID;
HXDLIN(  54)							if ((id3 == this->leftStick->rawRight)) {
HXLINE(  54)								return (int)35;
            							}
            							else {
HXLINE(  55)								int id4 = rawID;
HXDLIN(  55)								if ((id4 == this->rightStick->rawUp)) {
HXLINE(  55)									return (int)38;
            								}
            								else {
HXLINE(  56)									int id5 = rawID;
HXDLIN(  56)									if ((id5 == this->rightStick->rawDown)) {
HXLINE(  56)										return (int)40;
            									}
            									else {
HXLINE(  57)										int id6 = rawID;
HXDLIN(  57)										if ((id6 == this->rightStick->rawLeft)) {
HXLINE(  57)											return (int)41;
            										}
            										else {
HXLINE(  58)											int id7 = rawID;
HXDLIN(  58)											if ((id7 == this->rightStick->rawRight)) {
HXLINE(  58)												return (int)39;
            											}
            											else {
HXLINE(  59)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  27)		return null();
            	}


int XInputMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_65_getRawID)
HXDLIN(  65)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  67)				return (int)6;
            			}
            			break;
            			case (int)1: {
HXLINE(  68)				return (int)7;
            			}
            			break;
            			case (int)2: {
HXLINE(  69)				return (int)8;
            			}
            			break;
            			case (int)3: {
HXLINE(  70)				return (int)9;
            			}
            			break;
            			case (int)4: {
HXLINE(  76)				return (int)15;
            			}
            			break;
            			case (int)5: {
HXLINE(  77)				return (int)16;
            			}
            			break;
            			case (int)6: {
HXLINE(  71)				return (int)10;
            			}
            			break;
            			case (int)7: {
HXLINE(  73)				return (int)12;
            			}
            			break;
            			case (int)8: {
HXLINE(  74)				return (int)13;
            			}
            			break;
            			case (int)9: {
HXLINE(  75)				return (int)14;
            			}
            			break;
            			case (int)10: {
HXLINE(  72)				return (int)-1;
            			}
            			break;
            			case (int)11: {
HXLINE(  78)				return (int)17;
            			}
            			break;
            			case (int)12: {
HXLINE(  79)				return (int)18;
            			}
            			break;
            			case (int)13: {
HXLINE(  80)				return (int)19;
            			}
            			break;
            			case (int)14: {
HXLINE(  81)				return (int)20;
            			}
            			break;
            			case (int)17: {
HXLINE(  82)				return (int)4;
            			}
            			break;
            			case (int)18: {
HXLINE(  83)				return (int)5;
            			}
            			break;
            			case (int)34: {
HXLINE(  88)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  91)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  89)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  90)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  92)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  95)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  93)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  94)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  96)				return (int)-1;
            			}
            		}
HXLINE(  65)		return (int)0;
            	}



hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	hx::ObjectPtr< XInputMapping_obj > __this = new XInputMapping_obj();
	__this->__construct(attachment);
	return __this;
}

hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	XInputMapping_obj *__this = (XInputMapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(XInputMapping_obj), true, "flixel.input.gamepad.mappings.XInputMapping"));
	*(void **)__this = XInputMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

XInputMapping_obj::XInputMapping_obj()
{
}

hx::Val XInputMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *XInputMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *XInputMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String XInputMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	::String(null()) };

static void XInputMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XInputMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class XInputMapping_obj::__mClass;

void XInputMapping_obj::__register()
{
	hx::Object *dummy = new XInputMapping_obj;
	XInputMapping_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.XInputMapping","\x76","\x49","\x9a","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XInputMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XInputMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XInputMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XInputMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XInputMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XInputMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
