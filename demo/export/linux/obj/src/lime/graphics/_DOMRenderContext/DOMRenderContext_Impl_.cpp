// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__DOMRenderContext_DOMRenderContext_Impl_
#include <lime/graphics/_DOMRenderContext/DOMRenderContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2f3df008938fcd18_47_fromRenderContext,"lime.graphics._DOMRenderContext.DOMRenderContext_Impl_","fromRenderContext",0xc0c4271a,"lime.graphics._DOMRenderContext.DOMRenderContext_Impl_.fromRenderContext","lime/graphics/DOMRenderContext.hx",47,0x5950199d)
namespace lime{
namespace graphics{
namespace _DOMRenderContext{

void DOMRenderContext_Impl__obj::__construct() { }

Dynamic DOMRenderContext_Impl__obj::__CreateEmpty() { return new DOMRenderContext_Impl__obj; }

void *DOMRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic DOMRenderContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMRenderContext_Impl__obj > _hx_result = new DOMRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x735c104d;
}

 ::Dynamic DOMRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_2f3df008938fcd18_47_fromRenderContext)
HXDLIN(  47)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_Impl__obj,fromRenderContext,return )


DOMRenderContext_Impl__obj::DOMRenderContext_Impl__obj()
{
}

bool DOMRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DOMRenderContext_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DOMRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

static void DOMRenderContext_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMRenderContext_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderContext_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DOMRenderContext_Impl__obj::__mClass;

static ::String DOMRenderContext_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromRenderContext","\x6f","\x19","\xd4","\xba"),
	::String(null())
};

void DOMRenderContext_Impl__obj::__register()
{
	hx::Object *dummy = new DOMRenderContext_Impl__obj;
	DOMRenderContext_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics._DOMRenderContext.DOMRenderContext_Impl_","\x59","\x57","\x4d","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMRenderContext_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMRenderContext_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMRenderContext_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _DOMRenderContext
