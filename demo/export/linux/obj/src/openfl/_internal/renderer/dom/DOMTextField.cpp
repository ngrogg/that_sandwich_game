// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#include <openfl/_internal/renderer/dom/DOMTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_30_clear,"openfl._internal.renderer.dom.DOMTextField","clear",0xe9f6fef1,"openfl._internal.renderer.dom.DOMTextField.clear","openfl/_internal/renderer/dom/DOMTextField.hx",30,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_45_measureText,"openfl._internal.renderer.dom.DOMTextField","measureText",0x2926ab8f,"openfl._internal.renderer.dom.DOMTextField.measureText","openfl/_internal/renderer/dom/DOMTextField.hx",45,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_88_render,"openfl._internal.renderer.dom.DOMTextField","render",0xcba99572,"openfl._internal.renderer.dom.DOMTextField.render","openfl/_internal/renderer/dom/DOMTextField.hx",88,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_376___getAttributeMatch,"openfl._internal.renderer.dom.DOMTextField","__getAttributeMatch",0x294ef003,"openfl._internal.renderer.dom.DOMTextField.__getAttributeMatch","openfl/_internal/renderer/dom/DOMTextField.hx",376,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_23_boot,"openfl._internal.renderer.dom.DOMTextField","boot",0x0065af4e,"openfl._internal.renderer.dom.DOMTextField.boot","openfl/_internal/renderer/dom/DOMTextField.hx",23,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_24_boot,"openfl._internal.renderer.dom.DOMTextField","boot",0x0065af4e,"openfl._internal.renderer.dom.DOMTextField.boot","openfl/_internal/renderer/dom/DOMTextField.hx",24,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_25_boot,"openfl._internal.renderer.dom.DOMTextField","boot",0x0065af4e,"openfl._internal.renderer.dom.DOMTextField.boot","openfl/_internal/renderer/dom/DOMTextField.hx",25,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_26_boot,"openfl._internal.renderer.dom.DOMTextField","boot",0x0065af4e,"openfl._internal.renderer.dom.DOMTextField.boot","openfl/_internal/renderer/dom/DOMTextField.hx",26,0xc9b27f2c)
HX_LOCAL_STACK_FRAME(_hx_pos_584059f88c62c757_27_boot,"openfl._internal.renderer.dom.DOMTextField","boot",0x0065af4e,"openfl._internal.renderer.dom.DOMTextField.boot","openfl/_internal/renderer/dom/DOMTextField.hx",27,0xc9b27f2c)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMTextField_obj::__construct() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return new DOMTextField_obj; }

void *DOMTextField_obj::_hx_vtable = 0;

Dynamic DOMTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMTextField_obj > _hx_result = new DOMTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73afdbda;
}

 ::EReg DOMTextField_obj::_hx___regexColor;

 ::EReg DOMTextField_obj::_hx___regexFace;

 ::EReg DOMTextField_obj::_hx___regexFont;

 ::EReg DOMTextField_obj::_hx___regexCloseFont;

 ::EReg DOMTextField_obj::_hx___regexSize;

void DOMTextField_obj::clear( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_584059f88c62c757_30_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,clear,(void))

void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
            	HX_STACKFRAME(&_hx_pos_584059f88c62c757_45_measureText)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

void DOMTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_584059f88c62c757_88_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))

::String DOMTextField_obj::_hx___getAttributeMatch( ::EReg regex){
            	HX_STACKFRAME(&_hx_pos_584059f88c62c757_376___getAttributeMatch)
HXDLIN( 376)		if (hx::IsNotNull( regex->matched((int)2) )) {
HXDLIN( 376)			return regex->matched((int)2);
            		}
            		else {
HXDLIN( 376)			return regex->matched((int)3);
            		}
HXDLIN( 376)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,_hx___getAttributeMatch,return )


DOMTextField_obj::DOMTextField_obj()
{
}

bool DOMTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = ( _hx___regexFace ); return true; }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { outValue = ( _hx___regexFont ); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = ( _hx___regexSize ); return true; }
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = ( _hx___regexColor ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { outValue = ( _hx___regexCloseFont ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = _hx___getAttributeMatch_dyn(); return true; }
	}
	return false;
}

bool DOMTextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { _hx___regexFace=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { _hx___regexFont=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { _hx___regexSize=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { _hx___regexColor=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { _hx___regexCloseFont=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DOMTextField_obj_sMemberStorageInfo = 0;
static hx::StaticInfo DOMTextField_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::_hx___regexColor,HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::_hx___regexFace,HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::_hx___regexFont,HX_HCSTRING("__regexFont","\x16","\x71","\x71","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::_hx___regexCloseFont,HX_HCSTRING("__regexCloseFont","\x00","\x89","\x6f","\x88")},
	{hx::fsObject /*::EReg*/ ,(void *) &DOMTextField_obj::_hx___regexSize,HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void DOMTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexFont,"__regexFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexCloseFont,"__regexCloseFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexSize,"__regexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexFont,"__regexFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexCloseFont,"__regexCloseFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexSize,"__regexSize");
};

#endif

hx::Class DOMTextField_obj::__mClass;

static ::String DOMTextField_obj_sStaticFields[] = {
	HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56"),
	HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12"),
	HX_HCSTRING("__regexFont","\x16","\x71","\x71","\x12"),
	HX_HCSTRING("__regexCloseFont","\x00","\x89","\x6f","\x88"),
	HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("__getAttributeMatch","\x9f","\x3b","\x2c","\x45"),
	::String(null())
};

void DOMTextField_obj::__register()
{
	hx::Object *dummy = new DOMTextField_obj;
	DOMTextField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMTextField","\xd2","\x0a","\x72","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &DOMTextField_obj::__SetStatic;
	__mClass->mMarkFunc = DOMTextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMTextField_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMTextField_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_584059f88c62c757_23_boot)
HXDLIN(  23)		_hx___regexColor =  ::EReg_obj::__alloc( HX_CTX ,HX_("color=(\"#([^\"]+)\"|'#([^']+)')",36,15,0f,76),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_584059f88c62c757_24_boot)
HXDLIN(  24)		_hx___regexFace =  ::EReg_obj::__alloc( HX_CTX ,HX_("face=(\"([^\"]+)\"|'([^']+)')",1e,00,2b,89),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_584059f88c62c757_25_boot)
HXDLIN(  25)		_hx___regexFont =  ::EReg_obj::__alloc( HX_CTX ,HX_("<font ([^>]+)>",eb,24,d0,0a),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_584059f88c62c757_26_boot)
HXDLIN(  26)		_hx___regexCloseFont =  ::EReg_obj::__alloc( HX_CTX ,HX_("</font>",3c,82,5f,8e),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_584059f88c62c757_27_boot)
HXDLIN(  27)		_hx___regexSize =  ::EReg_obj::__alloc( HX_CTX ,HX_("size=(\"([^\"]+)\"|'([^']+)')",42,27,be,87),HX_("i",69,00,00,00));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
