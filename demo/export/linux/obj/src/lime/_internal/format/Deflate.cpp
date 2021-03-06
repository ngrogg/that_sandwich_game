// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_Deflate
#include <lime/_internal/format/Deflate.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_eb00e02a6b98bd42_27_compress,"lime._internal.format.Deflate","compress",0xbe9cd2d1,"lime._internal.format.Deflate.compress","lime/_internal/format/Deflate.hx",27,0xb5ff7ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_eb00e02a6b98bd42_67_decompress,"lime._internal.format.Deflate","decompress",0xafce7d12,"lime._internal.format.Deflate.decompress","lime/_internal/format/Deflate.hx",67,0xb5ff7ebe)
namespace lime{
namespace _internal{
namespace format{

void Deflate_obj::__construct() { }

Dynamic Deflate_obj::__CreateEmpty() { return new Deflate_obj; }

void *Deflate_obj::_hx_vtable = 0;

Dynamic Deflate_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Deflate_obj > _hx_result = new Deflate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Deflate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f5e40ed;
}

 ::haxe::io::Bytes Deflate_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_eb00e02a6b98bd42_27_compress)
HXDLIN(  27)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN(  27)		 ::haxe::io::Bytes _hx_tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  27)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_deflate_compress(hx::DynamicPtr(bytes),hx::DynamicPtr(_hx_tmp1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Deflate_obj,compress,return )

 ::haxe::io::Bytes Deflate_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_eb00e02a6b98bd42_67_decompress)
HXDLIN(  67)		 ::Dynamic _hx_tmp = hx::ClassOf< ::lime::_internal::backend::native::NativeCFFI >();
HXDLIN(  67)		 ::haxe::io::Bytes _hx_tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  67)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_deflate_decompress(hx::DynamicPtr(bytes),hx::DynamicPtr(_hx_tmp1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Deflate_obj,decompress,return )


Deflate_obj::Deflate_obj()
{
}

bool Deflate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Deflate_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Deflate_obj_sStaticStorageInfo = 0;
#endif

static void Deflate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Deflate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Deflate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Deflate_obj::__mClass,"__mClass");
};

#endif

hx::Class Deflate_obj::__mClass;

static ::String Deflate_obj_sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	::String(null())
};

void Deflate_obj::__register()
{
	hx::Object *dummy = new Deflate_obj;
	Deflate_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.format.Deflate","\x1f","\xf7","\x30","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Deflate_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Deflate_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Deflate_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Deflate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Deflate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Deflate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Deflate_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
