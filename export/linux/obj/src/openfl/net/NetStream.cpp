// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d6908cd6c18c638_103_new,"openfl.net.NetStream","new",0xb09a57e0,"openfl.net.NetStream.new","openfl/net/NetStream.hx",103,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_140_close,"openfl.net.NetStream","close",0x7cfa7f38,"openfl.net.NetStream.close","openfl/net/NetStream.hx",140,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_154_dispose,"openfl.net.NetStream","dispose",0xd22cc81f,"openfl.net.NetStream.dispose","openfl/net/NetStream.hx",154,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_167_pause,"openfl.net.NetStream","pause",0xf1ef3e76,"openfl.net.NetStream.pause","openfl/net/NetStream.hx",167,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_176_play,"openfl.net.NetStream","play",0xd7ca3674,"openfl.net.NetStream.play","openfl/net/NetStream.hx",176,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_197_requestVideoStatus,"openfl.net.NetStream","requestVideoStatus",0xbba0537e,"openfl.net.NetStream.requestVideoStatus","openfl/net/NetStream.hx",197,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_228_resume,"openfl.net.NetStream","resume",0xd867922d,"openfl.net.NetStream.resume","openfl/net/NetStream.hx",228,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_237_seek,"openfl.net.NetStream","seek",0xd9c08df8,"openfl.net.NetStream.seek","openfl/net/NetStream.hx",237,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_264_togglePause,"openfl.net.NetStream","togglePause",0x12789642,"openfl.net.NetStream.togglePause","openfl/net/NetStream.hx",264,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_283___playStatus,"openfl.net.NetStream","__playStatus",0x66bf7be6,"openfl.net.NetStream.__playStatus","openfl/net/NetStream.hx",283,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_320_video_onCanPlay,"openfl.net.NetStream","video_onCanPlay",0x94edae41,"openfl.net.NetStream.video_onCanPlay","openfl/net/NetStream.hx",320,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_327_video_onCanPlayThrough,"openfl.net.NetStream","video_onCanPlayThrough",0x89a17c04,"openfl.net.NetStream.video_onCanPlayThrough","openfl/net/NetStream.hx",327,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_334_video_onDurationChanged,"openfl.net.NetStream","video_onDurationChanged",0xa779991d,"openfl.net.NetStream.video_onDurationChanged","openfl/net/NetStream.hx",334,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_339_video_onEnd,"openfl.net.NetStream","video_onEnd",0x9fb90978,"openfl.net.NetStream.video_onEnd","openfl/net/NetStream.hx",339,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_348_video_onError,"openfl.net.NetStream","video_onError",0xc9d832a5,"openfl.net.NetStream.video_onError","openfl/net/NetStream.hx",348,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_356_video_onLoadMetaData,"openfl.net.NetStream","video_onLoadMetaData",0x5972de98,"openfl.net.NetStream.video_onLoadMetaData","openfl/net/NetStream.hx",356,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_384_video_onLoadStart,"openfl.net.NetStream","video_onLoadStart",0x03aa59b9,"openfl.net.NetStream.video_onLoadStart","openfl/net/NetStream.hx",384,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_391_video_onPause,"openfl.net.NetStream","video_onPause",0x14063dd3,"openfl.net.NetStream.video_onPause","openfl/net/NetStream.hx",391,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_396_video_onPlaying,"openfl.net.NetStream","video_onPlaying",0xb653a78b,"openfl.net.NetStream.video_onPlaying","openfl/net/NetStream.hx",396,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_404_video_onSeeking,"openfl.net.NetStream","video_onSeeking",0xaaedda87,"openfl.net.NetStream.video_onSeeking","openfl/net/NetStream.hx",404,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_414_video_onStalled,"openfl.net.NetStream","video_onStalled",0x5d59679c,"openfl.net.NetStream.video_onStalled","openfl/net/NetStream.hx",414,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_427_video_onTimeUpdate,"openfl.net.NetStream","video_onTimeUpdate",0x9b0d65f9,"openfl.net.NetStream.video_onTimeUpdate","openfl/net/NetStream.hx",427,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_434_video_onWaiting,"openfl.net.NetStream","video_onWaiting",0x0b6381aa,"openfl.net.NetStream.video_onWaiting","openfl/net/NetStream.hx",434,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_451_get_speed,"openfl.net.NetStream","get_speed",0x8a341b5e,"openfl.net.NetStream.get_speed","openfl/net/NetStream.hx",451,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_462_set_speed,"openfl.net.NetStream","set_speed",0x6d85076a,"openfl.net.NetStream.set_speed","openfl/net/NetStream.hx",462,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_473_get___seeking,"openfl.net.NetStream","get___seeking",0x7eef4ea1,"openfl.net.NetStream.get___seeking","openfl/net/NetStream.hx",473,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_484_set___seeking,"openfl.net.NetStream","set___seeking",0xc3f530ad,"openfl.net.NetStream.set___seeking","openfl/net/NetStream.hx",484,0x9cb99312)
namespace openfl{
namespace net{

void NetStream_obj::__construct( ::openfl::net::NetConnection connection,::String peerID){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_103_new)
HXLINE( 105)		super::__construct(null());
HXLINE( 107)		this->_hx___connection = connection;
            	}

Dynamic NetStream_obj::__CreateEmpty() { return new NetStream_obj; }

void *NetStream_obj::_hx_vtable = 0;

Dynamic NetStream_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NetStream_obj > _hx_result = new NetStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NetStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38daf0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c38daf0;
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

void NetStream_obj::close(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_140_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,close,(void))

void NetStream_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_154_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,dispose,(void))

void NetStream_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_167_pause)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,pause,(void))

void NetStream_obj::play(::String url, ::Dynamic _, ::Dynamic _1, ::Dynamic _2, ::Dynamic _3, ::Dynamic _4){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_176_play)
            	}


HX_DEFINE_DYNAMIC_FUNC6(NetStream_obj,play,(void))

void NetStream_obj::requestVideoStatus(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_197_requestVideoStatus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,requestVideoStatus,(void))

void NetStream_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_228_resume)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,resume,(void))

void NetStream_obj::seek(Float time){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_237_seek)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,seek,(void))

void NetStream_obj::togglePause(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_264_togglePause)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,togglePause,(void))

void NetStream_obj::_hx___playStatus(::String code){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_283___playStatus)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,_hx___playStatus,(void))

void NetStream_obj::video_onCanPlay( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_320_video_onCanPlay)
HXDLIN( 320)		this->_hx___playStatus(HX_("NetStream.Play.canplay",1b,cc,cb,cb));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlay,(void))

void NetStream_obj::video_onCanPlayThrough( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_327_video_onCanPlayThrough)
HXDLIN( 327)		this->_hx___playStatus(HX_("NetStream.Play.canplaythrough",8a,05,15,a9));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlayThrough,(void))

void NetStream_obj::video_onDurationChanged( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_334_video_onDurationChanged)
HXDLIN( 334)		this->_hx___playStatus(HX_("NetStream.Play.durationchanged",37,45,91,e1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onDurationChanged,(void))

void NetStream_obj::video_onEnd( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_339_video_onEnd)
HXLINE( 341)		 ::openfl::net::NetConnection _hx_tmp = this->_hx___connection;
HXDLIN( 341)		_hx_tmp->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetStream.Play.Stop",ab,15,72,a7)))));
HXLINE( 342)		 ::openfl::net::NetConnection _hx_tmp1 = this->_hx___connection;
HXDLIN( 342)		_hx_tmp1->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetStream.Play.Complete",e2,ae,0c,40)))));
HXLINE( 343)		this->_hx___playStatus(HX_("NetStream.Play.Complete",e2,ae,0c,40));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onEnd,(void))

void NetStream_obj::video_onError( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_348_video_onError)
HXLINE( 350)		 ::openfl::net::NetConnection _hx_tmp = this->_hx___connection;
HXDLIN( 350)		_hx_tmp->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetStream.Play.Stop",ab,15,72,a7)))));
HXLINE( 351)		this->_hx___playStatus(HX_("NetStream.Play.error",1f,2a,47,38));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onError,(void))

void NetStream_obj::video_onLoadMetaData( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_356_video_onLoadMetaData)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadMetaData,(void))

void NetStream_obj::video_onLoadStart( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_384_video_onLoadStart)
HXDLIN( 384)		this->_hx___playStatus(HX_("NetStream.Play.loadstart",53,26,16,e6));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadStart,(void))

void NetStream_obj::video_onPause( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_391_video_onPause)
HXDLIN( 391)		this->_hx___playStatus(HX_("NetStream.Play.pause",4d,35,75,82));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPause,(void))

void NetStream_obj::video_onPlaying( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_396_video_onPlaying)
HXLINE( 398)		 ::openfl::net::NetConnection _hx_tmp = this->_hx___connection;
HXDLIN( 398)		_hx_tmp->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetStream.Play.Start",99,42,56,dc)))));
HXLINE( 399)		this->_hx___playStatus(HX_("NetStream.Play.playing",85,f1,0a,d8));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPlaying,(void))

void NetStream_obj::video_onSeeking( ::Dynamic event){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_404_video_onSeeking)
HXLINE( 406)		this->_hx___playStatus(HX_("NetStream.Play.seeking",81,24,a5,cc));
HXLINE( 408)		 ::openfl::net::NetConnection _hx_tmp = this->_hx___connection;
HXDLIN( 408)		_hx_tmp->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetStream.Seek.Complete",de,46,79,c4)))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onSeeking,(void))

void NetStream_obj::video_onStalled( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_414_video_onStalled)
HXDLIN( 414)		this->_hx___playStatus(HX_("NetStream.Play.stalled",96,b1,10,7f));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onStalled,(void))

void NetStream_obj::video_onTimeUpdate( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_427_video_onTimeUpdate)
HXDLIN( 427)		this->_hx___playStatus(HX_("NetStream.Play.timeupdate",1f,a0,f4,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onTimeUpdate,(void))

void NetStream_obj::video_onWaiting( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_434_video_onWaiting)
HXDLIN( 434)		this->_hx___playStatus(HX_("NetStream.Play.waiting",a4,cb,1a,2d));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onWaiting,(void))

Float NetStream_obj::get_speed(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_451_get_speed)
HXDLIN( 451)		return (int)1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_speed,return )

Float NetStream_obj::set_speed(Float value){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_462_set_speed)
HXDLIN( 462)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set_speed,return )

bool NetStream_obj::get___seeking(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_473_get___seeking)
HXDLIN( 473)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get___seeking,return )

bool NetStream_obj::set___seeking(bool value){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_484_set___seeking)
HXDLIN( 484)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set___seeking,return )


hx::ObjectPtr< NetStream_obj > NetStream_obj::__new( ::openfl::net::NetConnection connection,::String peerID) {
	hx::ObjectPtr< NetStream_obj > __this = new NetStream_obj();
	__this->__construct(connection,peerID);
	return __this;
}

hx::ObjectPtr< NetStream_obj > NetStream_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::net::NetConnection connection,::String peerID) {
	NetStream_obj *__this = (NetStream_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NetStream_obj), true, "openfl.net.NetStream"));
	*(void **)__this = NetStream_obj::_hx_vtable;
	__this->__construct(connection,peerID);
	return __this;
}

NetStream_obj::NetStream_obj()
{
}

void NetStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStream);
	HX_MARK_MEMBER_NAME(audioCodec,"audioCodec");
	HX_MARK_MEMBER_NAME(bufferLength,"bufferLength");
	HX_MARK_MEMBER_NAME(bufferTime,"bufferTime");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_MARK_MEMBER_NAME(liveDelay,"liveDelay");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(soundTransform,"soundTransform");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(videoCode,"videoCode");
	HX_MARK_MEMBER_NAME(_hx___closed,"__closed");
	HX_MARK_MEMBER_NAME(_hx___connection,"__connection");
	HX_MARK_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioCodec,"audioCodec");
	HX_VISIT_MEMBER_NAME(bufferLength,"bufferLength");
	HX_VISIT_MEMBER_NAME(bufferTime,"bufferTime");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_VISIT_MEMBER_NAME(liveDelay,"liveDelay");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(soundTransform,"soundTransform");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(videoCode,"videoCode");
	HX_VISIT_MEMBER_NAME(_hx___closed,"__closed");
	HX_VISIT_MEMBER_NAME(_hx___connection,"__connection");
	HX_VISIT_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val NetStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return hx::Val( seek_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_speed() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return hx::Val( client ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return hx::Val( _hx___timer ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { return hx::Val( _hx___closed ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { return hx::Val( liveDelay ); }
		if (HX_FIELD_EQ(inName,"videoCode") ) { return hx::Val( videoCode ); }
		if (HX_FIELD_EQ(inName,"get_speed") ) { return hx::Val( get_speed_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return hx::Val( set_speed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { return hx::Val( audioCodec ); }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return hx::Val( bufferTime ); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return hx::Val( currentFPS ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"togglePause") ) { return hx::Val( togglePause_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onEnd") ) { return hx::Val( video_onEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { return hx::Val( bufferLength ); }
		if (HX_FIELD_EQ(inName,"__connection") ) { return hx::Val( _hx___connection ); }
		if (HX_FIELD_EQ(inName,"__playStatus") ) { return hx::Val( _hx___playStatus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { return hx::Val( decodedFrames ); }
		if (HX_FIELD_EQ(inName,"video_onError") ) { return hx::Val( video_onError_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onPause") ) { return hx::Val( video_onPause_dyn() ); }
		if (HX_FIELD_EQ(inName,"get___seeking") ) { return hx::Val( get___seeking_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___seeking") ) { return hx::Val( set___seeking_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return hx::Val( objectEncoding ); }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return hx::Val( soundTransform ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return hx::Val( checkPolicyFile ); }
		if (HX_FIELD_EQ(inName,"video_onCanPlay") ) { return hx::Val( video_onCanPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onPlaying") ) { return hx::Val( video_onPlaying_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onSeeking") ) { return hx::Val( video_onSeeking_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onStalled") ) { return hx::Val( video_onStalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onWaiting") ) { return hx::Val( video_onWaiting_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"video_onLoadStart") ) { return hx::Val( video_onLoadStart_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requestVideoStatus") ) { return hx::Val( requestVideoStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onTimeUpdate") ) { return hx::Val( video_onTimeUpdate_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"video_onLoadMetaData") ) { return hx::Val( video_onLoadMetaData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"video_onCanPlayThrough") ) { return hx::Val( video_onCanPlayThrough_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"video_onDurationChanged") ) { return hx::Val( video_onDurationChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val NetStream_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_speed(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { _hx___timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { _hx___closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { liveDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videoCode") ) { videoCode=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { audioCodec=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { bufferLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__connection") ) { _hx___connection=inValue.Cast<  ::openfl::net::NetConnection >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { decodedFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9"));
	outFields->push(HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3"));
	outFields->push(HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"));
	outFields->push(HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"));
	outFields->push(HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67"));
	outFields->push(HX_HCSTRING("__closed","\xcc","\x14","\x81","\xb6"));
	outFields->push(HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NetStream_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NetStream_obj,audioCodec),HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,bufferLength),HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,bufferTime),HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsBool,(int)offsetof(NetStream_obj,checkPolicyFile),HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetStream_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,currentFPS),HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7")},
	{hx::fsInt,(int)offsetof(NetStream_obj,decodedFrames),HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,liveDelay),HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a")},
	{hx::fsInt,(int)offsetof(NetStream_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(NetStream_obj,soundTransform),HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(NetStream_obj,videoCode),HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67")},
	{hx::fsBool,(int)offsetof(NetStream_obj,_hx___closed),HX_HCSTRING("__closed","\xcc","\x14","\x81","\xb6")},
	{hx::fsObject /*::openfl::net::NetConnection*/ ,(int)offsetof(NetStream_obj,_hx___connection),HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(NetStream_obj,_hx___timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *NetStream_obj_sStaticStorageInfo = 0;
#endif

static ::String NetStream_obj_sMemberFields[] = {
	HX_HCSTRING("audioCodec","\xe0","\x85","\xaf","\xe9"),
	HX_HCSTRING("bufferLength","\x06","\x86","\xdc","\xa3"),
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"),
	HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"),
	HX_HCSTRING("liveDelay","\xf7","\x90","\xcd","\x6a"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("videoCode","\x48","\x4b","\x7d","\x67"),
	HX_HCSTRING("__closed","\xcc","\x14","\x81","\xb6"),
	HX_HCSTRING("__connection","\x3e","\x1b","\xa6","\x2d"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("requestVideoStatus","\xfe","\x6a","\x62","\x2f"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5"),
	HX_HCSTRING("__playStatus","\x66","\xf3","\x52","\xe5"),
	HX_HCSTRING("video_onCanPlay","\xc1","\xe6","\x39","\x31"),
	HX_HCSTRING("video_onCanPlayThrough","\x84","\x53","\x05","\xf1"),
	HX_HCSTRING("video_onDurationChanged","\x9d","\x51","\x72","\xb7"),
	HX_HCSTRING("video_onEnd","\xf8","\x01","\x5f","\x72"),
	HX_HCSTRING("video_onError","\x25","\x4b","\x4d","\x0c"),
	HX_HCSTRING("video_onLoadMetaData","\x18","\xd6","\x89","\xd3"),
	HX_HCSTRING("video_onLoadStart","\x39","\xb2","\xd5","\x75"),
	HX_HCSTRING("video_onPause","\x53","\x56","\x7b","\x56"),
	HX_HCSTRING("video_onPlaying","\x0b","\xe0","\x9f","\x52"),
	HX_HCSTRING("video_onSeeking","\x07","\x13","\x3a","\x47"),
	HX_HCSTRING("video_onStalled","\x1c","\xa0","\xa5","\xf9"),
	HX_HCSTRING("video_onTimeUpdate","\x79","\x7d","\xcf","\x0e"),
	HX_HCSTRING("video_onWaiting","\x2a","\xba","\xaf","\xa7"),
	HX_HCSTRING("get_speed","\xde","\xf3","\x12","\xc5"),
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	HX_HCSTRING("get___seeking","\x21","\x67","\x64","\xc1"),
	HX_HCSTRING("set___seeking","\x2d","\x49","\x6a","\x06"),
	::String(null()) };

static void NetStream_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetStream_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
};

#endif

hx::Class NetStream_obj::__mClass;

void NetStream_obj::__register()
{
	hx::Object *dummy = new NetStream_obj;
	NetStream_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.NetStream","\xee","\x27","\x61","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NetStream_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NetStream_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetStream_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetStream_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetStream_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
