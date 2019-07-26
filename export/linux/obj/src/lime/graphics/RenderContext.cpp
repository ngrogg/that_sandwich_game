// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_96059818be203dd4_96_new,"lime.graphics.RenderContext","new",0xb60c3ce1,"lime.graphics.RenderContext.new","lime/graphics/RenderContext.hx",96,0xd99af18f)
namespace lime{
namespace graphics{

void RenderContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_96059818be203dd4_96_new)
            	}

Dynamic RenderContext_obj::__CreateEmpty() { return new RenderContext_obj; }

void *RenderContext_obj::_hx_vtable = 0;

Dynamic RenderContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderContext_obj > _hx_result = new RenderContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18d736cd;
}


RenderContext_obj::RenderContext_obj()
{
}

void RenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderContext);
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(canvas2D,"canvas2D");
	HX_MARK_MEMBER_NAME(dom,"dom");
	HX_MARK_MEMBER_NAME(flash,"flash");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(gles2,"gles2");
	HX_MARK_MEMBER_NAME(gles3,"gles3");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(webgl,"webgl");
	HX_MARK_MEMBER_NAME(webgl2,"webgl2");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(canvas2D,"canvas2D");
	HX_VISIT_MEMBER_NAME(dom,"dom");
	HX_VISIT_MEMBER_NAME(flash,"flash");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(gles2,"gles2");
	HX_VISIT_MEMBER_NAME(gles3,"gles3");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(webgl,"webgl");
	HX_VISIT_MEMBER_NAME(webgl2,"webgl2");
	HX_VISIT_MEMBER_NAME(window,"window");
}

hx::Val RenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dom") ) { return hx::Val( dom ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return hx::Val( cairo ); }
		if (HX_FIELD_EQ(inName,"flash") ) { return hx::Val( flash ); }
		if (HX_FIELD_EQ(inName,"gles2") ) { return hx::Val( gles2 ); }
		if (HX_FIELD_EQ(inName,"gles3") ) { return hx::Val( gles3 ); }
		if (HX_FIELD_EQ(inName,"webgl") ) { return hx::Val( webgl ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"webgl2") ) { return hx::Val( webgl2 ); }
		if (HX_FIELD_EQ(inName,"window") ) { return hx::Val( window ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canvas2D") ) { return hx::Val( canvas2D ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return hx::Val( attributes ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RenderContext_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dom") ) { dom=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flash") ) { flash=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gles2") ) { gles2=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gles3") ) { gles3=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"webgl") ) { webgl=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"webgl2") ) { webgl2=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canvas2D") ) { canvas2D=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("canvas2D","\xaa","\x66","\x23","\x0d"));
	outFields->push(HX_HCSTRING("dom","\x82","\x42","\x4c","\x00"));
	outFields->push(HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("gles2","\xff","\xd2","\xf5","\x95"));
	outFields->push(HX_HCSTRING("gles3","\x00","\xd3","\xf5","\x95"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("webgl","\xb9","\x4b","\xbc","\xc7"));
	outFields->push(HX_HCSTRING("webgl2","\x59","\xf6","\x05","\xfd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RenderContext_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderContext_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(RenderContext_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderContext_obj,canvas2D),HX_HCSTRING("canvas2D","\xaa","\x66","\x23","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderContext_obj,dom),HX_HCSTRING("dom","\x82","\x42","\x4c","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderContext_obj,flash),HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(int)offsetof(RenderContext_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(int)offsetof(RenderContext_obj,gles2),HX_HCSTRING("gles2","\xff","\xd2","\xf5","\x95")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(int)offsetof(RenderContext_obj,gles3),HX_HCSTRING("gles3","\x00","\xd3","\xf5","\x95")},
	{hx::fsString,(int)offsetof(RenderContext_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(RenderContext_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(int)offsetof(RenderContext_obj,webgl),HX_HCSTRING("webgl","\xb9","\x4b","\xbc","\xc7")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(int)offsetof(RenderContext_obj,webgl2),HX_HCSTRING("webgl2","\x59","\xf6","\x05","\xfd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(RenderContext_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RenderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderContext_obj_sMemberFields[] = {
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("canvas2D","\xaa","\x66","\x23","\x0d"),
	HX_HCSTRING("dom","\x82","\x42","\x4c","\x00"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("gles2","\xff","\xd2","\xf5","\x95"),
	HX_HCSTRING("gles3","\x00","\xd3","\xf5","\x95"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("webgl","\xb9","\x4b","\xbc","\xc7"),
	HX_HCSTRING("webgl2","\x59","\xf6","\x05","\xfd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	::String(null()) };

static void RenderContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderContext_obj::__mClass;

void RenderContext_obj::__register()
{
	hx::Object *dummy = new RenderContext_obj;
	RenderContext_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.RenderContext","\x6f","\x38","\x5a","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics