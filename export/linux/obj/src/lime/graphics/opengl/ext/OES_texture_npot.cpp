// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_npot
#include <lime/graphics/opengl/ext/OES_texture_npot.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_578f4a5a87663fe9_7_new,"lime.graphics.opengl.ext.OES_texture_npot","new",0xdcb64861,"lime.graphics.opengl.ext.OES_texture_npot.new","lime/graphics/opengl/ext/OES_texture_npot.hx",7,0xaf3862cd)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_texture_npot_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_578f4a5a87663fe9_7_new)
            	}

Dynamic OES_texture_npot_obj::__CreateEmpty() { return new OES_texture_npot_obj; }

void *OES_texture_npot_obj::_hx_vtable = 0;

Dynamic OES_texture_npot_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_texture_npot_obj > _hx_result = new OES_texture_npot_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_texture_npot_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41b4a5ff;
}


OES_texture_npot_obj::OES_texture_npot_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OES_texture_npot_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OES_texture_npot_obj_sStaticStorageInfo = 0;
#endif

static void OES_texture_npot_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_texture_npot_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_texture_npot_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_texture_npot_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_texture_npot_obj::__mClass;

void OES_texture_npot_obj::__register()
{
	hx::Object *dummy = new OES_texture_npot_obj;
	OES_texture_npot_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_texture_npot","\xef","\x83","\x38","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_texture_npot_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OES_texture_npot_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_texture_npot_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_texture_npot_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_texture_npot_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
