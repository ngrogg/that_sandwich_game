// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fcae3222e31e2270_6_new,"flixel.tweens.motion.CubicMotion","new",0x5990902e,"flixel.tweens.motion.CubicMotion.new","flixel/tweens/motion/CubicMotion.hx",6,0x44d248a3)
HX_LOCAL_STACK_FRAME(_hx_pos_fcae3222e31e2270_34_setMotion,"flixel.tweens.motion.CubicMotion","setMotion",0x132089c6,"flixel.tweens.motion.CubicMotion.setMotion","flixel/tweens/motion/CubicMotion.hx",34,0x44d248a3)
HX_LOCAL_STACK_FRAME(_hx_pos_fcae3222e31e2270_49_update,"flixel.tweens.motion.CubicMotion","update",0x63341afb,"flixel.tweens.motion.CubicMotion.update","flixel/tweens/motion/CubicMotion.hx",49,0x44d248a3)
namespace flixel{
namespace tweens{
namespace motion{

void CubicMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_6_new)
HXLINE(  18)		this->_tt = ((Float)0);
HXLINE(  17)		this->_ttt = ((Float)0);
HXLINE(  16)		this->_bY = ((Float)0);
HXLINE(  15)		this->_bX = ((Float)0);
HXLINE(  14)		this->_aY = ((Float)0);
HXLINE(  13)		this->_aX = ((Float)0);
HXLINE(  12)		this->_toY = ((Float)0);
HXLINE(  11)		this->_toX = ((Float)0);
HXLINE(  10)		this->_fromY = ((Float)0);
HXLINE(   9)		this->_fromX = ((Float)0);
HXLINE(   6)		super::__construct(Options,manager);
            	}

Dynamic CubicMotion_obj::__CreateEmpty() { return new CubicMotion_obj; }

void *CubicMotion_obj::_hx_vtable = 0;

Dynamic CubicMotion_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubicMotion_obj > _hx_result = new CubicMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CubicMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x123505a1) {
		if (inClassId<=(int)0x06e61a46) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06e61a46;
		} else {
			return inClassId==(int)0x123505a1;
		}
	} else {
		return inClassId==(int)0x726fe8d0;
	}
}

 ::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion(Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_34_setMotion)
HXLINE(  35)		this->x = (this->_fromX = fromX);
HXLINE(  36)		this->y = (this->_fromY = fromY);
HXLINE(  37)		this->_aX = aX;
HXLINE(  38)		this->_aY = aY;
HXLINE(  39)		this->_bX = bX;
HXLINE(  40)		this->_bY = bY;
HXLINE(  41)		this->_toX = toX;
HXLINE(  42)		this->_toY = toY;
HXLINE(  43)		this->duration = duration;
HXLINE(  44)		this->start();
HXLINE(  45)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC9(CubicMotion_obj,setMotion,return )

void CubicMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_49_update)
HXLINE(  50)		this->super::update(elapsed);
HXLINE(  51)		Float _hx_tmp = ((this->scale * this->scale) * this->scale);
HXDLIN(  51)		Float _hx_tmp1 = this->_toX;
HXDLIN(  51)		Float _hx_tmp2 = (_hx_tmp * ((_hx_tmp1 + ((int)3 * (this->_aX - this->_bX))) - this->_fromX));
HXDLIN(  51)		Float _hx_tmp3 = (((int)3 * this->scale) * this->scale);
HXDLIN(  51)		Float _hx_tmp4 = this->_fromX;
HXDLIN(  51)		Float _hx_tmp5 = (_hx_tmp2 + (_hx_tmp3 * ((_hx_tmp4 - ((int)2 * this->_aX)) + this->_bX)));
HXDLIN(  51)		Float _hx_tmp6 = ((int)3 * this->scale);
HXDLIN(  51)		this->x = ((_hx_tmp5 + (_hx_tmp6 * (this->_aX - this->_fromX))) + this->_fromX);
HXLINE(  52)		Float _hx_tmp7 = ((this->scale * this->scale) * this->scale);
HXDLIN(  52)		Float _hx_tmp8 = this->_toY;
HXDLIN(  52)		Float _hx_tmp9 = (_hx_tmp7 * ((_hx_tmp8 + ((int)3 * (this->_aY - this->_bY))) - this->_fromY));
HXDLIN(  52)		Float _hx_tmp10 = (((int)3 * this->scale) * this->scale);
HXDLIN(  52)		Float _hx_tmp11 = this->_fromY;
HXDLIN(  52)		Float _hx_tmp12 = (_hx_tmp9 + (_hx_tmp10 * ((_hx_tmp11 - ((int)2 * this->_aY)) + this->_bY)));
HXDLIN(  52)		Float _hx_tmp13 = ((int)3 * this->scale);
HXDLIN(  52)		this->y = ((_hx_tmp12 + (_hx_tmp13 * (this->_aY - this->_fromY))) + this->_fromY);
HXLINE(  53)		if (this->finished) {
HXLINE(  55)			this->postUpdate();
            		}
            	}



hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	hx::ObjectPtr< CubicMotion_obj > __this = new CubicMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	CubicMotion_obj *__this = (CubicMotion_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CubicMotion_obj), true, "flixel.tweens.motion.CubicMotion"));
	*(void **)__this = CubicMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

CubicMotion_obj::CubicMotion_obj()
{
}

hx::Val CubicMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { return hx::Val( _aX ); }
		if (HX_FIELD_EQ(inName,"_aY") ) { return hx::Val( _aY ); }
		if (HX_FIELD_EQ(inName,"_bX") ) { return hx::Val( _bX ); }
		if (HX_FIELD_EQ(inName,"_bY") ) { return hx::Val( _bY ); }
		if (HX_FIELD_EQ(inName,"_tt") ) { return hx::Val( _tt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return hx::Val( _toX ); }
		if (HX_FIELD_EQ(inName,"_toY") ) { return hx::Val( _toY ); }
		if (HX_FIELD_EQ(inName,"_ttt") ) { return hx::Val( _ttt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return hx::Val( _fromX ); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return hx::Val( _fromY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return hx::Val( setMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CubicMotion_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CubicMotion_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toX),HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toY),HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aX),HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aY),HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bX),HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bY),HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_ttt),HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_tt),HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CubicMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String CubicMotion_obj_sMemberFields[] = {
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"),
	HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"),
	HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"),
	HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"),
	HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"),
	HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"),
	HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"),
	HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void CubicMotion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubicMotion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	hx::Object *dummy = new CubicMotion_obj;
	CubicMotion_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.CubicMotion","\x3c","\xa1","\xe5","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubicMotion_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubicMotion_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicMotion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubicMotion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicMotion_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
