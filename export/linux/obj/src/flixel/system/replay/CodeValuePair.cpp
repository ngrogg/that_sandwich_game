// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0db6d6d8b03f35eb_11_new,"flixel.system.replay.CodeValuePair","new",0x0170ef56,"flixel.system.replay.CodeValuePair.new","flixel/system/replay/CodeValuePair.hx",11,0xc7f270bb)
namespace flixel{
namespace _hx_system{
namespace replay{

void CodeValuePair_obj::__construct(int code,int value){
            	HX_STACKFRAME(&_hx_pos_0db6d6d8b03f35eb_11_new)
HXLINE(  12)		this->code = code;
HXLINE(  13)		this->value = value;
            	}

Dynamic CodeValuePair_obj::__CreateEmpty() { return new CodeValuePair_obj; }

void *CodeValuePair_obj::_hx_vtable = 0;

Dynamic CodeValuePair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CodeValuePair_obj > _hx_result = new CodeValuePair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CodeValuePair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x263af5ac;
}


CodeValuePair_obj::CodeValuePair_obj()
{
}

hx::Val CodeValuePair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return hx::Val( code ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CodeValuePair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CodeValuePair_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CodeValuePair_obj,code),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{hx::fsInt,(int)offsetof(CodeValuePair_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CodeValuePair_obj_sStaticStorageInfo = 0;
#endif

static ::String CodeValuePair_obj_sMemberFields[] = {
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void CodeValuePair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CodeValuePair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

#endif

hx::Class CodeValuePair_obj::__mClass;

void CodeValuePair_obj::__register()
{
	hx::Object *dummy = new CodeValuePair_obj;
	CodeValuePair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.replay.CodeValuePair","\x64","\x4c","\x0d","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CodeValuePair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CodeValuePair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CodeValuePair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CodeValuePair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CodeValuePair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CodeValuePair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
