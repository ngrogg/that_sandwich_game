// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_
#include <openfl/display/_LineScaleMode/LineScaleMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_49_fromInt,"openfl.display._LineScaleMode.LineScaleMode_Impl_","fromInt",0x4a6a68e6,"openfl.display._LineScaleMode.LineScaleMode_Impl_.fromInt","openfl/display/LineScaleMode.hx",49,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_56_fromString,"openfl.display._LineScaleMode.LineScaleMode_Impl_","fromString",0x5d04613a,"openfl.display._LineScaleMode.LineScaleMode_Impl_.fromString","openfl/display/LineScaleMode.hx",56,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_71_toInt,"openfl.display._LineScaleMode.LineScaleMode_Impl_","toInt",0x2c0c4735,"openfl.display._LineScaleMode.LineScaleMode_Impl_.toInt","openfl/display/LineScaleMode.hx",71,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_78_toString,"openfl.display._LineScaleMode.LineScaleMode_Impl_","toString",0x67991e4b,"openfl.display._LineScaleMode.LineScaleMode_Impl_.toString","openfl/display/LineScaleMode.hx",78,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_20_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",20,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_26_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",26,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_33_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",33,0x274c8551)
HX_LOCAL_STACK_FRAME(_hx_pos_ea842eab153a573b_44_boot,"openfl.display._LineScaleMode.LineScaleMode_Impl_","boot",0xe0c8d651,"openfl.display._LineScaleMode.LineScaleMode_Impl_.boot","openfl/display/LineScaleMode.hx",44,0x274c8551)
namespace openfl{
namespace display{
namespace _LineScaleMode{

void LineScaleMode_Impl__obj::__construct() { }

Dynamic LineScaleMode_Impl__obj::__CreateEmpty() { return new LineScaleMode_Impl__obj; }

void *LineScaleMode_Impl__obj::_hx_vtable = 0;

Dynamic LineScaleMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineScaleMode_Impl__obj > _hx_result = new LineScaleMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineScaleMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39628e2d;
}

 ::Dynamic LineScaleMode_Impl__obj::HORIZONTAL;

 ::Dynamic LineScaleMode_Impl__obj::NONE;

 ::Dynamic LineScaleMode_Impl__obj::NORMAL;

 ::Dynamic LineScaleMode_Impl__obj::VERTICAL;

 ::Dynamic LineScaleMode_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_49_fromInt)
HXDLIN(  49)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,fromInt,return )

 ::Dynamic LineScaleMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_56_fromString)
HXDLIN(  56)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("horizontal",e4,fc,c3,15)) ){
HXLINE(  58)			return (int)0;
HXDLIN(  58)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  59)			return (int)1;
HXDLIN(  59)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  60)			return (int)2;
HXDLIN(  60)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("vertical",76,bc,15,6a)) ){
HXLINE(  61)			return (int)3;
HXDLIN(  61)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  62)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  56)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,fromString,return )

 ::Dynamic LineScaleMode_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_71_toInt)
HXDLIN(  71)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,toInt,return )

::String LineScaleMode_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_78_toString)
HXDLIN(  78)		switch((int)(value)){
            			case (int)0: {
HXLINE(  80)				return HX_("horizontal",e4,fc,c3,15);
            			}
            			break;
            			case (int)1: {
HXLINE(  81)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			case (int)2: {
HXLINE(  82)				return HX_("normal",27,72,69,30);
            			}
            			break;
            			case (int)3: {
HXLINE(  83)				return HX_("vertical",76,bc,15,6a);
            			}
            			break;
            			default:{
HXLINE(  84)				return null();
            			}
            		}
HXLINE(  78)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,toString,return )


LineScaleMode_Impl__obj::LineScaleMode_Impl__obj()
{
}

bool LineScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineScaleMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo LineScaleMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LineScaleMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineScaleMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#endif

hx::Class LineScaleMode_Impl__obj::__mClass;

static ::String LineScaleMode_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void LineScaleMode_Impl__obj::__register()
{
	hx::Object *dummy = new LineScaleMode_Impl__obj;
	LineScaleMode_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._LineScaleMode.LineScaleMode_Impl_","\xaf","\x42","\x46","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineScaleMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineScaleMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineScaleMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineScaleMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineScaleMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineScaleMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LineScaleMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_20_boot)
HXDLIN(  20)		HORIZONTAL = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_26_boot)
HXDLIN(  26)		NONE = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_33_boot)
HXDLIN(  33)		NORMAL = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ea842eab153a573b_44_boot)
HXDLIN(  44)		VERTICAL = (int)3;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _LineScaleMode