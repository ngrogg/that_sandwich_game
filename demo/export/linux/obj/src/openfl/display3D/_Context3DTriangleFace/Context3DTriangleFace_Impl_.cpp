// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_
#include <openfl/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_18_fromString,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","fromString",0x04ef1c93,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.fromString","openfl/display3D/Context3DTriangleFace.hx",18,0x186e7db4)
HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_32_toString,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","toString",0xd6ea2164,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.toString","openfl/display3D/Context3DTriangleFace.hx",32,0x186e7db4)
HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_11_boot,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","boot",0xb50218ea,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.boot","openfl/display3D/Context3DTriangleFace.hx",11,0x186e7db4)
HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_12_boot,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","boot",0xb50218ea,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.boot","openfl/display3D/Context3DTriangleFace.hx",12,0x186e7db4)
HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_13_boot,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","boot",0xb50218ea,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.boot","openfl/display3D/Context3DTriangleFace.hx",13,0x186e7db4)
HX_LOCAL_STACK_FRAME(_hx_pos_c6faaa6b9f0fc2b9_14_boot,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","boot",0xb50218ea,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.boot","openfl/display3D/Context3DTriangleFace.hx",14,0x186e7db4)
namespace openfl{
namespace display3D{
namespace _Context3DTriangleFace{

void Context3DTriangleFace_Impl__obj::__construct() { }

Dynamic Context3DTriangleFace_Impl__obj::__CreateEmpty() { return new Context3DTriangleFace_Impl__obj; }

void *Context3DTriangleFace_Impl__obj::_hx_vtable = 0;

Dynamic Context3DTriangleFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DTriangleFace_Impl__obj > _hx_result = new Context3DTriangleFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTriangleFace_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x218053dc;
}

 ::Dynamic Context3DTriangleFace_Impl__obj::BACK;

 ::Dynamic Context3DTriangleFace_Impl__obj::FRONT;

 ::Dynamic Context3DTriangleFace_Impl__obj::FRONT_AND_BACK;

 ::Dynamic Context3DTriangleFace_Impl__obj::NONE;

 ::Dynamic Context3DTriangleFace_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_18_fromString)
HXDLIN(  18)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("back",27,da,10,41)) ){
HXLINE(  20)			return (int)0;
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("front",a9,18,8e,06)) ){
HXLINE(  21)			return (int)1;
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("frontAndBack",f5,1e,63,ce)) ){
HXLINE(  22)			return (int)2;
HXDLIN(  22)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  23)			return (int)3;
HXDLIN(  23)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  24)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  18)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,fromString,return )

::String Context3DTriangleFace_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_32_toString)
HXDLIN(  32)		switch((int)(value)){
            			case (int)0: {
HXLINE(  34)				return HX_("back",27,da,10,41);
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				return HX_("front",a9,18,8e,06);
            			}
            			break;
            			case (int)2: {
HXLINE(  36)				return HX_("frontAndBack",f5,1e,63,ce);
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			default:{
HXLINE(  38)				return null();
            			}
            		}
HXLINE(  32)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,toString,return )


Context3DTriangleFace_Impl__obj::Context3DTriangleFace_Impl__obj()
{
}

bool Context3DTriangleFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DTriangleFace_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DTriangleFace_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DTriangleFace_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DTriangleFace_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#endif

hx::Class Context3DTriangleFace_Impl__obj::__mClass;

static ::String Context3DTriangleFace_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DTriangleFace_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DTriangleFace_Impl__obj;
	Context3DTriangleFace_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","\xb6","\x06","\xe6","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTriangleFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DTriangleFace_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DTriangleFace_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTriangleFace_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DTriangleFace_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTriangleFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTriangleFace_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTriangleFace_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_11_boot)
HXDLIN(  11)		BACK = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_12_boot)
HXDLIN(  12)		FRONT = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_13_boot)
HXDLIN(  13)		FRONT_AND_BACK = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c6faaa6b9f0fc2b9_14_boot)
HXDLIN(  14)		NONE = (int)3;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTriangleFace
