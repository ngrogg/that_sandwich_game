// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_65_wrapAngle,"flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",65,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_87_asDegrees,"flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",87,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_99_asRadians,"flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",99,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_112_angleBetween,"flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",112,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_132_angleBetweenPoint,"flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",132,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_154_angleBetweenMouse,"flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",154,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_208_angleFromFacing,"flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",208,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_233_getCartesianCoords,"flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",233,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_252_getPolarCoords,"flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",252,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_264_get_TO_DEG,"flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",264,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_269_get_TO_RAD,"flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",269,0x32e99189)
namespace flixel{
namespace math{

void FlxAngle_obj::__construct() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return new FlxAngle_obj; }

void *FlxAngle_obj::_hx_vtable = 0;

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxAngle_obj > _hx_result = new FlxAngle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAngle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0071e2b9;
}

Float FlxAngle_obj::wrapAngle(Float angle){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_65_wrapAngle)
HXLINE(  66)		if ((angle > (int)180)) {
HXLINE(  68)			angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle - (int)360));
            		}
            		else {
HXLINE(  70)			if ((angle < (int)-180)) {
HXLINE(  72)				angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle + (int)360));
            			}
            		}
HXLINE(  75)		return angle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::asDegrees(Float radians){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_87_asDegrees)
HXDLIN(  87)		return (radians * ((Float)(int)180 / (Float)::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians(Float degrees){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_99_asRadians)
HXDLIN(  99)		return (degrees * ((Float)::Math_obj::PI / (Float)(int)180));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_112_angleBetween)
HXLINE( 113)		Float dx = (SpriteB->x + SpriteB->origin->x);
HXDLIN( 113)		Float dx1 = (dx - (SpriteA->x + SpriteA->origin->x));
HXLINE( 114)		Float dy = (SpriteB->y + SpriteB->origin->y);
HXDLIN( 114)		Float dy1 = (dy - (SpriteA->y + SpriteA->origin->y));
HXLINE( 116)		if (AsDegrees) {
HXLINE( 117)			return (::Math_obj::atan2(dy1,dx1) * ((Float)(int)180 / (Float)::Math_obj::PI));
            		}
            		else {
HXLINE( 119)			return ::Math_obj::atan2(dy1,dx1);
            		}
HXLINE( 116)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_132_angleBetweenPoint)
HXLINE( 133)		Float Target1 = Target->x;
HXDLIN( 133)		Float dx = (Target1 - (Sprite->x + Sprite->origin->x));
HXLINE( 134)		Float Target2 = Target->y;
HXDLIN( 134)		Float dy = (Target2 - (Sprite->y + Sprite->origin->y));
HXLINE( 136)		if (Target->_weak) {
HXLINE( 136)			Target->put();
            		}
HXLINE( 138)		if (AsDegrees) {
HXLINE( 139)			return (::Math_obj::atan2(dy,dx) * ((Float)(int)180 / (Float)::Math_obj::PI));
            		}
            		else {
HXLINE( 141)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 138)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_154_angleBetweenMouse)
HXLINE( 156)		if (hx::IsNull( Object )) {
HXLINE( 157)			return (int)0;
            		}
HXLINE( 159)		 ::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());
HXLINE( 161)		Float dx = (::flixel::FlxG_obj::mouse->screenX - p->x);
HXLINE( 162)		Float dy = (::flixel::FlxG_obj::mouse->screenY - p->y);
HXLINE( 164)		p->put();
HXLINE( 166)		if (AsDegrees) {
HXLINE( 167)			return (::Math_obj::atan2(dy,dx) * ((Float)(int)180 / (Float)::Math_obj::PI));
            		}
            		else {
HXLINE( 169)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 166)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleFromFacing(int FacingBitmask,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_208_angleFromFacing)
HXLINE( 209)		int degrees;
HXDLIN( 209)		switch((int)(FacingBitmask)){
            			case (int)1: {
HXLINE( 209)				degrees = (int)180;
            			}
            			break;
            			case (int)16: {
HXLINE( 209)				degrees = (int)0;
            			}
            			break;
            			case (int)256: {
HXLINE( 209)				degrees = (int)-90;
            			}
            			break;
            			case (int)4096: {
HXLINE( 209)				degrees = (int)90;
            			}
            			break;
            			default:{
HXLINE( 215)				int f = FacingBitmask;
HXDLIN( 215)				if ((f == (int)257)) {
HXLINE( 209)					degrees = (int)-135;
            				}
            				else {
HXLINE( 216)					int f1 = FacingBitmask;
HXDLIN( 216)					if ((f1 == (int)272)) {
HXLINE( 209)						degrees = (int)-45;
            					}
            					else {
HXLINE( 217)						int f2 = FacingBitmask;
HXDLIN( 217)						if ((f2 == (int)4097)) {
HXLINE( 209)							degrees = (int)135;
            						}
            						else {
HXLINE( 218)							int f3 = FacingBitmask;
HXDLIN( 218)							if ((f3 == (int)4112)) {
HXLINE( 209)								degrees = (int)45;
            							}
            							else {
HXLINE( 209)								degrees = (int)0;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 221)		if (AsDegrees) {
HXLINE( 221)			return degrees;
            		}
            		else {
HXLINE( 221)			return (degrees * ((Float)::Math_obj::PI / (Float)(int)180));
            		}
HXDLIN( 221)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

 ::flixel::math::FlxPoint FlxAngle_obj::getCartesianCoords(Float Radius,Float Angle, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_233_getCartesianCoords)
HXLINE( 234)		 ::flixel::math::FlxPoint p = point;
HXLINE( 235)		if (hx::IsNull( p )) {
HXLINE( 236)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 236)			point1->_inPool = false;
HXDLIN( 236)			p = point1;
            		}
HXLINE( 238)		p->set_x((Radius * ::Math_obj::cos((Angle * ((Float)::Math_obj::PI / (Float)(int)180)))));
HXLINE( 239)		p->set_y((Radius * ::Math_obj::sin((Angle * ((Float)::Math_obj::PI / (Float)(int)180)))));
HXLINE( 240)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

 ::flixel::math::FlxPoint FlxAngle_obj::getPolarCoords(Float X,Float Y, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_252_getPolarCoords)
HXLINE( 253)		 ::flixel::math::FlxPoint p = point;
HXLINE( 254)		if (hx::IsNull( p )) {
HXLINE( 255)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 255)			point1->_inPool = false;
HXDLIN( 255)			p = point1;
            		}
HXLINE( 257)		p->set_x(::Math_obj::sqrt(((X * X) + (Y * Y))));
HXLINE( 258)		Float _hx_tmp = ::Math_obj::atan2(Y,X);
HXDLIN( 258)		p->set_y((_hx_tmp * ((Float)(int)180 / (Float)::Math_obj::PI)));
HXLINE( 259)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_264_get_TO_DEG)
HXDLIN( 264)		return ((Float)(int)180 / (Float)::Math_obj::PI);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_269_get_TO_RAD)
HXDLIN( 269)		return ((Float)::Math_obj::PI / (Float)(int)180);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

bool FlxAngle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_TO_DEG() ); return true; } }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_TO_RAD() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { outValue = wrapAngle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { outValue = asDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asRadians") ) { outValue = asRadians_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { outValue = get_TO_DEG_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { outValue = get_TO_RAD_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { outValue = getPolarCoords_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { outValue = angleFromFacing_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { outValue = angleBetweenPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { outValue = angleBetweenMouse_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { outValue = getCartesianCoords_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxAngle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxAngle_obj_sStaticStorageInfo = 0;
#endif

static void FlxAngle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAngle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAngle_obj::__mClass;

static ::String FlxAngle_obj_sStaticFields[] = {
	HX_HCSTRING("wrapAngle","\xa9","\xbd","\x58","\xc6"),
	HX_HCSTRING("asDegrees","\xd5","\x18","\xce","\xa6"),
	HX_HCSTRING("asRadians","\xa0","\x7b","\x63","\x93"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("angleBetweenPoint","\xdb","\x9d","\x50","\x15"),
	HX_HCSTRING("angleBetweenMouse","\xb0","\xff","\x25","\x5b"),
	HX_HCSTRING("angleFromFacing","\xd7","\xb1","\xc0","\xdc"),
	HX_HCSTRING("getCartesianCoords","\x50","\x26","\xde","\x33"),
	HX_HCSTRING("getPolarCoords","\x86","\xbd","\xd4","\x74"),
	HX_HCSTRING("get_TO_DEG","\x6b","\xad","\x28","\x42"),
	HX_HCSTRING("get_TO_RAD","\x7a","\x49","\x33","\x42"),
	::String(null())
};

void FlxAngle_obj::__register()
{
	hx::Object *dummy = new FlxAngle_obj;
	FlxAngle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxAngle","\xf5","\x97","\xd6","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAngle_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAngle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxAngle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAngle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAngle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAngle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAngle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
