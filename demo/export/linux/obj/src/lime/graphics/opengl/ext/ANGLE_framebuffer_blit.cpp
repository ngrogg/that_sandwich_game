// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_blit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7378ebc94440c0ad_6_new,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit","new",0x6745fce7,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit.new","lime/graphics/opengl/ext/ANGLE_framebuffer_blit.hx",6,0xfaf96b87)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_framebuffer_blit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7378ebc94440c0ad_6_new)
HXLINE(  12)		this->READ_FRAMEBUFFER_BINDING_ANGLE = (int)36010;
HXLINE(  11)		this->DRAW_FRAMEBUFFER_BINDING_ANGLE = (int)36006;
HXLINE(  10)		this->DRAW_FRAMEBUFFER_ANGLE = (int)36009;
HXLINE(   9)		this->READ_FRAMEBUFFER_ANGLE = (int)36008;
            	}

Dynamic ANGLE_framebuffer_blit_obj::__CreateEmpty() { return new ANGLE_framebuffer_blit_obj; }

void *ANGLE_framebuffer_blit_obj::_hx_vtable = 0;

Dynamic ANGLE_framebuffer_blit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ANGLE_framebuffer_blit_obj > _hx_result = new ANGLE_framebuffer_blit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_framebuffer_blit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e0d49a1;
}


ANGLE_framebuffer_blit_obj::ANGLE_framebuffer_blit_obj()
{
}

hx::Val ANGLE_framebuffer_blit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_ANGLE") ) { return hx::Val( READ_FRAMEBUFFER_ANGLE ); }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_ANGLE") ) { return hx::Val( DRAW_FRAMEBUFFER_ANGLE ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_ANGLE") ) { return hx::Val( DRAW_FRAMEBUFFER_BINDING_ANGLE ); }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_ANGLE") ) { return hx::Val( READ_FRAMEBUFFER_BINDING_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ANGLE_framebuffer_blit_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_ANGLE") ) { READ_FRAMEBUFFER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_ANGLE") ) { DRAW_FRAMEBUFFER_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_ANGLE") ) { DRAW_FRAMEBUFFER_BINDING_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_ANGLE") ) { READ_FRAMEBUFFER_BINDING_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_framebuffer_blit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_ANGLE","\x18","\x41","\x27","\x92"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_ANGLE","\x46","\xe5","\x8b","\xbb"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_ANGLE","\x6c","\x40","\x90","\xbe"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_BINDING_ANGLE","\x3e","\xbe","\x86","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ANGLE_framebuffer_blit_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,READ_FRAMEBUFFER_ANGLE),HX_HCSTRING("READ_FRAMEBUFFER_ANGLE","\x18","\x41","\x27","\x92")},
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,DRAW_FRAMEBUFFER_ANGLE),HX_HCSTRING("DRAW_FRAMEBUFFER_ANGLE","\x46","\xe5","\x8b","\xbb")},
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,DRAW_FRAMEBUFFER_BINDING_ANGLE),HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_ANGLE","\x6c","\x40","\x90","\xbe")},
	{hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,READ_FRAMEBUFFER_BINDING_ANGLE),HX_HCSTRING("READ_FRAMEBUFFER_BINDING_ANGLE","\x3e","\xbe","\x86","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ANGLE_framebuffer_blit_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_framebuffer_blit_obj_sMemberFields[] = {
	HX_HCSTRING("READ_FRAMEBUFFER_ANGLE","\x18","\x41","\x27","\x92"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_ANGLE","\x46","\xe5","\x8b","\xbb"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_ANGLE","\x6c","\x40","\x90","\xbe"),
	HX_HCSTRING("READ_FRAMEBUFFER_BINDING_ANGLE","\x3e","\xbe","\x86","\x02"),
	::String(null()) };

static void ANGLE_framebuffer_blit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_framebuffer_blit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ANGLE_framebuffer_blit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_framebuffer_blit_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_framebuffer_blit_obj::__mClass;

void ANGLE_framebuffer_blit_obj::__register()
{
	hx::Object *dummy = new ANGLE_framebuffer_blit_obj;
	ANGLE_framebuffer_blit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_framebuffer_blit","\x75","\xfd","\x65","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ANGLE_framebuffer_blit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ANGLE_framebuffer_blit_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_framebuffer_blit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ANGLE_framebuffer_blit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_framebuffer_blit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_framebuffer_blit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
