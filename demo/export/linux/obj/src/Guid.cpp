// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Guid
#include <Guid.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0ff235cfe86e40d2_19_generate,"Guid","generate",0x1e33f69a,"Guid.generate","Guid.hx",19,0x0784a8b5)

void Guid_obj::__construct() { }

Dynamic Guid_obj::__CreateEmpty() { return new Guid_obj; }

void *Guid_obj::_hx_vtable = 0;

Dynamic Guid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Guid_obj > _hx_result = new Guid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Guid_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f4749a9;
}

::String Guid_obj::generate(){
            	HX_STACKFRAME(&_hx_pos_0ff235cfe86e40d2_19_generate)
HXLINE(  20)		::String result = HX_("",00,00,00,00);
HXLINE(  22)		{
HXLINE(  22)			int _g = (int)0;
HXDLIN(  22)			while((_g < (int)32)){
HXLINE(  22)				_g = (_g + (int)1);
HXDLIN(  22)				int j = (_g - (int)1);
HXLINE(  23)				bool _hx_tmp;
HXDLIN(  23)				bool _hx_tmp1;
HXDLIN(  23)				bool _hx_tmp2;
HXDLIN(  23)				if ((j != (int)8)) {
HXLINE(  23)					_hx_tmp2 = (j == (int)12);
            				}
            				else {
HXLINE(  23)					_hx_tmp2 = true;
            				}
HXDLIN(  23)				if (!(_hx_tmp2)) {
HXLINE(  23)					_hx_tmp1 = (j == (int)16);
            				}
            				else {
HXLINE(  23)					_hx_tmp1 = true;
            				}
HXDLIN(  23)				if (!(_hx_tmp1)) {
HXLINE(  23)					_hx_tmp = (j == (int)20);
            				}
            				else {
HXLINE(  23)					_hx_tmp = true;
            				}
HXDLIN(  23)				if (_hx_tmp) {
HXLINE(  24)					result = (result + HX_("-",2d,00,00,00));
            				}
HXLINE(  27)				result = (result + ::StringTools_obj::hex(::Math_obj::floor((::Math_obj::random() * (int)16)),null()));
            			}
            		}
HXLINE(  30)		return result.toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Guid_obj,generate,return )


Guid_obj::Guid_obj()
{
}

bool Guid_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { outValue = generate_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Guid_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Guid_obj_sStaticStorageInfo = 0;
#endif

static void Guid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Guid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Guid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Guid_obj::__mClass,"__mClass");
};

#endif

hx::Class Guid_obj::__mClass;

static ::String Guid_obj_sStaticFields[] = {
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	::String(null())
};

void Guid_obj::__register()
{
	hx::Object *dummy = new Guid_obj;
	Guid_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Guid","\xa9","\x49","\x47","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Guid_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Guid_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Guid_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Guid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Guid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Guid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Guid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
