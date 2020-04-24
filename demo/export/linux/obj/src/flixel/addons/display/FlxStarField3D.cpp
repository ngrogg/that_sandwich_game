// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxStarField3D
#include <flixel/addons/display/FlxStarField3D.h>
#endif
#ifndef INCLUDED_flixel_addons_display__FlxStarField_FlxStar
#include <flixel/addons/display/_FlxStarField/FlxStar.h>
#endif
#ifndef INCLUDED_flixel_addons_display__FlxStarField_FlxStarField
#include <flixel/addons/display/_FlxStarField/FlxStarField.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_17840d6ef48cbc6b_69_new,"flixel.addons.display.FlxStarField3D","new",0xfdd9332e,"flixel.addons.display.FlxStarField3D.new","flixel/addons/display/FlxStarField.hx",69,0xb2ef3fd2)
static const int _hx_array_data_9960c43c_1[] = {
	(int)-14079703,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_17840d6ef48cbc6b_77_destroy,"flixel.addons.display.FlxStarField3D","destroy",0xa9f00ec8,"flixel.addons.display.FlxStarField3D.destroy","flixel/addons/display/FlxStarField.hx",77,0xb2ef3fd2)
HX_LOCAL_STACK_FRAME(_hx_pos_17840d6ef48cbc6b_83_update,"flixel.addons.display.FlxStarField3D","update",0x59b357fb,"flixel.addons.display.FlxStarField3D.update","flixel/addons/display/FlxStarField.hx",83,0xb2ef3fd2)
namespace flixel{
namespace addons{
namespace display{

void FlxStarField3D_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
int StarAmount = __o_StarAmount.Default(300);
            	HX_STACKFRAME(&_hx_pos_17840d6ef48cbc6b_69_new)
HXLINE(  70)		super::__construct(X,Y,Width,Height,StarAmount);
HXLINE(  71)		Float X1 = ((Float)this->get_width() / (Float)(int)2);
HXDLIN(  71)		Float Y1 = ((Float)this->get_height() / (Float)(int)2);
HXDLIN(  71)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN(  71)		point->_inPool = false;
HXDLIN(  71)		this->center = point;
HXLINE(  72)		this->_depthColors = ::flixel::util::FlxGradient_obj::createGradientArray((int)1,(int)300,::Array_obj< int >::fromData( _hx_array_data_9960c43c_1,2),null(),null(),null());
HXLINE(  73)		this->setStarSpeed((int)0,(int)200);
            	}

Dynamic FlxStarField3D_obj::__CreateEmpty() { return new FlxStarField3D_obj; }

void *FlxStarField3D_obj::_hx_vtable = 0;

Dynamic FlxStarField3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxStarField3D_obj > _hx_result = new FlxStarField3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxStarField3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0f6125ae) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x0f6125ae;
			}
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x5492c7d8;
	}
}

void FlxStarField3D_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17840d6ef48cbc6b_77_destroy)
HXLINE(  78)		this->center = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->center)) );
HXLINE(  79)		this->super::destroy();
            	}


void FlxStarField3D_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_17840d6ef48cbc6b_83_update)
HXLINE(  84)		{
HXLINE(  84)			int _g = (int)0;
HXDLIN(  84)			::Array< ::Dynamic> _g1 = this->_stars;
HXDLIN(  84)			while((_g < _g1->length)){
HXLINE(  84)				 ::flixel::addons::display::_FlxStarField::FlxStar star = _g1->__get(_g).StaticCast<  ::flixel::addons::display::_FlxStarField::FlxStar >();
HXDLIN(  84)				_g = (_g + (int)1);
HXLINE(  86)				 ::flixel::addons::display::_FlxStarField::FlxStar star1 = star;
HXDLIN(  86)				star1->d = (star1->d * ((Float)1.1));
HXLINE(  87)				Float _hx_tmp = this->center->x;
HXDLIN(  87)				star->x = (_hx_tmp + (((::Math_obj::cos(star->r) * star->d) * star->speed) * elapsed));
HXLINE(  88)				Float _hx_tmp1 = this->center->y;
HXDLIN(  88)				star->y = (_hx_tmp1 + (((::Math_obj::sin(star->r) * star->d) * star->speed) * elapsed));
HXLINE(  90)				bool _hx_tmp2;
HXDLIN(  90)				bool _hx_tmp3;
HXDLIN(  90)				bool _hx_tmp4;
HXDLIN(  90)				if (!((star->x < (int)0))) {
HXLINE(  90)					Float star2 = star->x;
HXDLIN(  90)					_hx_tmp4 = (star2 > this->get_width());
            				}
            				else {
HXLINE(  90)					_hx_tmp4 = true;
            				}
HXDLIN(  90)				if (!(_hx_tmp4)) {
HXLINE(  90)					_hx_tmp3 = (star->y < (int)0);
            				}
            				else {
HXLINE(  90)					_hx_tmp3 = true;
            				}
HXDLIN(  90)				if (!(_hx_tmp3)) {
HXLINE(  90)					Float star3 = star->y;
HXDLIN(  90)					_hx_tmp2 = (star3 > this->get_height());
            				}
            				else {
HXLINE(  90)					_hx_tmp2 = true;
            				}
HXDLIN(  90)				if (_hx_tmp2) {
HXLINE(  92)					star->d = (int)1;
HXLINE(  93)					Float _hx_tmp5 = ::flixel::FlxG_obj::random->_hx_float(null(),null(),null());
HXDLIN(  93)					star->r = ((_hx_tmp5 * ::Math_obj::PI) * (int)2);
HXLINE(  94)					star->x = (int)0;
HXLINE(  95)					star->y = (int)0;
HXLINE(  96)					star->speed = ::flixel::FlxG_obj::random->_hx_float(this->_minSpeed,this->_maxSpeed,null());
HXLINE(  98)					this->_stars[star->index] = star;
            				}
            			}
            		}
HXLINE( 102)		this->super::update(elapsed);
            	}



hx::ObjectPtr< FlxStarField3D_obj > FlxStarField3D_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount) {
	hx::ObjectPtr< FlxStarField3D_obj > __this = new FlxStarField3D_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_StarAmount);
	return __this;
}

hx::ObjectPtr< FlxStarField3D_obj > FlxStarField3D_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount) {
	FlxStarField3D_obj *__this = (FlxStarField3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxStarField3D_obj), true, "flixel.addons.display.FlxStarField3D"));
	*(void **)__this = FlxStarField3D_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_StarAmount);
	return __this;
}

FlxStarField3D_obj::FlxStarField3D_obj()
{
}

void FlxStarField3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStarField3D);
	HX_MARK_MEMBER_NAME(center,"center");
	 ::flixel::addons::display::_FlxStarField::FlxStarField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxStarField3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(center,"center");
	 ::flixel::addons::display::_FlxStarField::FlxStarField_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxStarField3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return hx::Val( center ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxStarField3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStarField3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxStarField3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxStarField3D_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxStarField3D_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxStarField3D_obj_sMemberFields[] = {
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void FlxStarField3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStarField3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxStarField3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStarField3D_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStarField3D_obj::__mClass;

void FlxStarField3D_obj::__register()
{
	hx::Object *dummy = new FlxStarField3D_obj;
	FlxStarField3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.FlxStarField3D","\x3c","\xc4","\x60","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxStarField3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxStarField3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxStarField3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxStarField3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxStarField3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxStarField3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display