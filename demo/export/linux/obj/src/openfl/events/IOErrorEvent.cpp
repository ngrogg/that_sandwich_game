// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_62_new,"openfl.events.IOErrorEvent","new",0x69722dc1,"openfl.events.IOErrorEvent.new","openfl/events/IOErrorEvent.hx",62,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_67_clone,"openfl.events.IOErrorEvent","clone",0xfbdc4afe,"openfl.events.IOErrorEvent.clone","openfl/events/IOErrorEvent.hx",67,0x9ba976af)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_80_toString,"openfl.events.IOErrorEvent","toString",0xfbbd53ab,"openfl.events.IOErrorEvent.toString","openfl/events/IOErrorEvent.hx",80,0x9ba976af)
static const ::String _hx_array_data_1ffe394f_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c1a0d6ee9eb05388_32_boot,"openfl.events.IOErrorEvent","boot",0xd28edbb1,"openfl.events.IOErrorEvent.boot","openfl/events/IOErrorEvent.hx",32,0x9ba976af)
namespace openfl{
namespace events{

void IOErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id){
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_62_new)
HXDLIN(  62)		super::__construct(type,bubbles,cancelable,text,id);
            	}

Dynamic IOErrorEvent_obj::__CreateEmpty() { return new IOErrorEvent_obj; }

void *IOErrorEvent_obj::_hx_vtable = 0;

Dynamic IOErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IOErrorEvent_obj > _hx_result = new IOErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool IOErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31935cfb) {
		if (inClassId<=(int)0x28b734a1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x28b734a1;
		} else {
			return inClassId==(int)0x31935cfb;
		}
	} else {
		return inClassId==(int)0x3243040d || inClassId==(int)0x70c909a0;
	}
}

 ::openfl::events::Event IOErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_67_clone)
HXLINE(  69)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->text,this->errorID);
HXLINE(  70)		event->target = this->target;
HXLINE(  71)		event->currentTarget = this->currentTarget;
HXLINE(  72)		event->eventPhase = this->eventPhase;
HXLINE(  73)		return event;
            	}


::String IOErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_80_toString)
HXDLIN(  80)		return this->_hx___formatToString(HX_("IOErrorEvent",b8,16,b3,65),::Array_obj< ::String >::fromData( _hx_array_data_1ffe394f_3,5));
            	}


::String IOErrorEvent_obj::IO_ERROR;


hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id) {
	hx::ObjectPtr< IOErrorEvent_obj > __this = new IOErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id) {
	IOErrorEvent_obj *__this = (IOErrorEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IOErrorEvent_obj), true, "openfl.events.IOErrorEvent"));
	*(void **)__this = IOErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return __this;
}

IOErrorEvent_obj::IOErrorEvent_obj()
{
}

hx::Val IOErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IOErrorEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo IOErrorEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &IOErrorEvent_obj::IO_ERROR,HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String IOErrorEvent_obj_sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void IOErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IOErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#endif

hx::Class IOErrorEvent_obj::__mClass;

static ::String IOErrorEvent_obj_sStaticFields[] = {
	HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11"),
	::String(null())
};

void IOErrorEvent_obj::__register()
{
	hx::Object *dummy = new IOErrorEvent_obj;
	IOErrorEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.IOErrorEvent","\x4f","\x39","\xfe","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IOErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(IOErrorEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IOErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IOErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IOErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IOErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IOErrorEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void IOErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c1a0d6ee9eb05388_32_boot)
HXDLIN(  32)		IO_ERROR = HX_("ioError",02,fe,41,76);
            	}
}

} // end namespace openfl
} // end namespace events
