// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5991393b6edf960d_122_new,"flixel.system.debug.TooltipOverlay","new",0x36d00ee7,"flixel.system.debug.TooltipOverlay.new","flixel/system/debug/Tooltip.hx",122,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_155_destroy,"flixel.system.debug.TooltipOverlay","destroy",0xdc11bb01,"flixel.system.debug.TooltipOverlay.destroy","flixel/system/debug/Tooltip.hx",155,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_176_resize,"flixel.system.debug.TooltipOverlay","resize",0x5bf5a9cd,"flixel.system.debug.TooltipOverlay.resize","flixel/system/debug/Tooltip.hx",176,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_189_reposition,"flixel.system.debug.TooltipOverlay","reposition",0xd7a41fb5,"flixel.system.debug.TooltipOverlay.reposition","flixel/system/debug/Tooltip.hx",189,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_196_setVisible,"flixel.system.debug.TooltipOverlay","setVisible",0x28454d49,"flixel.system.debug.TooltipOverlay.setVisible","flixel/system/debug/Tooltip.hx",196,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_212_setText,"flixel.system.debug.TooltipOverlay","setText",0xca099b76,"flixel.system.debug.TooltipOverlay.setText","flixel/system/debug/Tooltip.hx",212,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_220_toggleVisible,"flixel.system.debug.TooltipOverlay","toggleVisible",0xd0a20885,"flixel.system.debug.TooltipOverlay.toggleVisible","flixel/system/debug/Tooltip.hx",220,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_225_putOnTop,"flixel.system.debug.TooltipOverlay","putOnTop",0x10f53180,"flixel.system.debug.TooltipOverlay.putOnTop","flixel/system/debug/Tooltip.hx",225,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_228_update,"flixel.system.debug.TooltipOverlay","update",0xda7fd5e2,"flixel.system.debug.TooltipOverlay.update","flixel/system/debug/Tooltip.hx",228,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_234_updateSize,"flixel.system.debug.TooltipOverlay","updateSize",0x374a3bc3,"flixel.system.debug.TooltipOverlay.updateSize","flixel/system/debug/Tooltip.hx",234,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_245_ensureOnScreen,"flixel.system.debug.TooltipOverlay","ensureOnScreen",0xbc6422a2,"flixel.system.debug.TooltipOverlay.ensureOnScreen","flixel/system/debug/Tooltip.hx",245,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_262_handleMouseEvents,"flixel.system.debug.TooltipOverlay","handleMouseEvents",0x22de651d,"flixel.system.debug.TooltipOverlay.handleMouseEvents","flixel/system/debug/Tooltip.hx",262,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_62_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",62,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_67_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",67,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_72_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",72,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_77_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",77,0x5d425da4)
namespace flixel{
namespace _hx_system{
namespace debug{

void TooltipOverlay_obj::__construct( ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5991393b6edf960d_122_new)
HXLINE( 123)		super::__construct();
HXLINE( 125)		this->owner = target;
HXLINE( 127)		this->maxSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,width,height);
HXLINE( 129)		this->_shadow =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)2,true,(int)-16777216),null(),null());
HXLINE( 130)		this->_background =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)1,true,(int)-12961222),null(),null());
HXLINE( 132)		this->textField = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((int)2,(int)1,null(),null());
HXLINE( 133)		this->textField->set_alpha(((Float)0.8));
HXLINE( 134)		this->textField->set_text(text);
HXLINE( 135)		this->textField->set_wordWrap(true);
HXLINE( 137)		this->addChild(this->_shadow);
HXLINE( 138)		this->addChild(this->_background);
HXLINE( 139)		this->addChild(this->textField);
HXLINE( 141)		this->updateSize();
HXLINE( 142)		this->setVisible(false);
HXLINE( 144)		if (hx::IsNotNull( this->owner )) {
HXLINE( 146)			this->owner->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->handleMouseEvents_dyn(),null(),null(),null());
HXLINE( 147)			this->owner->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->handleMouseEvents_dyn(),null(),null(),null());
            		}
            	}

Dynamic TooltipOverlay_obj::__CreateEmpty() { return new TooltipOverlay_obj; }

void *TooltipOverlay_obj::_hx_vtable = 0;

Dynamic TooltipOverlay_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TooltipOverlay_obj > _hx_result = new TooltipOverlay_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TooltipOverlay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x4e3cd7b1;
		}
	}
}

void TooltipOverlay_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_155_destroy)
HXLINE( 156)		this->_shadow = ( ( ::openfl::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_shadow)) );
HXLINE( 157)		this->_background = ( ( ::openfl::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_background)) );
HXLINE( 158)		this->textField = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->textField)) );
HXLINE( 159)		this->maxSize = null();
HXLINE( 161)		if (hx::IsNotNull( this->owner )) {
HXLINE( 163)			this->owner->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->handleMouseEvents_dyn(),null());
HXLINE( 164)			this->owner->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->handleMouseEvents_dyn(),null());
            		}
HXLINE( 166)		this->owner = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,destroy,(void))

void TooltipOverlay_obj::resize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_176_resize)
HXLINE( 177)		this->maxSize->x = ::Std_obj::_hx_int(::Math_obj::abs(Width));
HXLINE( 178)		this->maxSize->y = ::Std_obj::_hx_int(::Math_obj::abs(Height));
HXLINE( 179)		this->updateSize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,resize,(void))

void TooltipOverlay_obj::reposition(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_189_reposition)
HXLINE( 190)		this->set_x(X);
HXLINE( 191)		this->set_y(Y);
HXLINE( 192)		this->ensureOnScreen();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,reposition,(void))

void TooltipOverlay_obj::setVisible(bool Value){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_196_setVisible)
HXLINE( 197)		this->set_visible(Value);
HXLINE( 199)		if (this->get_visible()) {
HXLINE( 201)			this->parent->addChild(hx::ObjectPtr<OBJ_>(this));
HXLINE( 202)			this->ensureOnScreen();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,setVisible,(void))

void TooltipOverlay_obj::setText(::String Text){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_212_setText)
HXLINE( 213)		this->textField->set_text(Text);
HXLINE( 214)		this->updateSize();
HXLINE( 215)		this->ensureOnScreen();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,setText,(void))

void TooltipOverlay_obj::toggleVisible(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_220_toggleVisible)
HXDLIN( 220)		this->setVisible(!(this->get_visible()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,toggleVisible,(void))

void TooltipOverlay_obj::putOnTop(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_225_putOnTop)
HXDLIN( 225)		this->parent->addChild(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,putOnTop,(void))

void TooltipOverlay_obj::update(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_228_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,update,(void))

void TooltipOverlay_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_234_updateSize)
HXLINE( 235)		Float _hx_tmp;
HXDLIN( 235)		if ((this->maxSize->x <= (int)0)) {
HXLINE( 235)			_hx_tmp = this->textField->get_textWidth();
            		}
            		else {
HXLINE( 235)			_hx_tmp = ::Math_obj::abs(this->maxSize->x);
            		}
HXDLIN( 235)		this->_width = (::Std_obj::_hx_int(_hx_tmp) + (int)8);
HXLINE( 236)		Float _hx_tmp1;
HXDLIN( 236)		if ((this->maxSize->y <= (int)0)) {
HXLINE( 236)			_hx_tmp1 = this->textField->get_textHeight();
            		}
            		else {
HXLINE( 236)			_hx_tmp1 = ::Math_obj::abs(this->maxSize->y);
            		}
HXDLIN( 236)		this->_height = (::Std_obj::_hx_int(_hx_tmp1) + (int)8);
HXLINE( 237)		this->_background->set_scaleX(this->_width);
HXLINE( 238)		this->_background->set_scaleY(this->_height);
HXLINE( 239)		this->_shadow->set_scaleX(this->_width);
HXLINE( 240)		this->_shadow->set_y(this->_height);
HXLINE( 241)		this->textField->set_width(this->_width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,updateSize,(void))

void TooltipOverlay_obj::ensureOnScreen(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_245_ensureOnScreen)
HXLINE( 248)		Float _hx_tmp;
HXDLIN( 248)		if ((this->get_x() < (int)0)) {
HXLINE( 248)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 248)			_hx_tmp = this->get_x();
            		}
HXDLIN( 248)		this->set_x(_hx_tmp);
HXLINE( 249)		Float _hx_tmp1;
HXDLIN( 249)		if ((this->get_y() < (int)0)) {
HXLINE( 249)			_hx_tmp1 = (int)0;
            		}
            		else {
HXLINE( 249)			_hx_tmp1 = this->get_y();
            		}
HXDLIN( 249)		this->set_y(_hx_tmp1);
HXLINE( 253)		Float offsetX;
HXDLIN( 253)		Float offsetX1 = this->get_x();
HXDLIN( 253)		Float offsetX2 = (offsetX1 + this->get_width());
HXDLIN( 253)		if ((offsetX2 >= ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE( 253)			int offsetX3 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 253)			Float offsetX4 = this->get_x();
HXDLIN( 253)			offsetX = (offsetX3 - (offsetX4 + this->get_width()));
            		}
            		else {
HXLINE( 253)			offsetX = (int)0;
            		}
HXLINE( 254)		Float offsetY;
HXDLIN( 254)		Float offsetY1 = this->get_y();
HXDLIN( 254)		Float offsetY2 = (offsetY1 + this->get_height());
HXDLIN( 254)		if ((offsetY2 >= ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE( 254)			int offsetY3 = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXDLIN( 254)			Float offsetY4 = this->get_y();
HXDLIN( 254)			offsetY = (offsetY3 - (offsetY4 + this->get_height()));
            		}
            		else {
HXLINE( 254)			offsetY = (int)0;
            		}
HXLINE( 256)		{
HXLINE( 256)			 ::flixel::_hx_system::debug::TooltipOverlay _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)			_g->set_x((_g->get_x() + offsetX));
            		}
HXLINE( 257)		{
HXLINE( 257)			 ::flixel::_hx_system::debug::TooltipOverlay _g1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 257)			_g1->set_y((_g1->get_y() + offsetY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,ensureOnScreen,(void))

void TooltipOverlay_obj::handleMouseEvents( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_262_handleMouseEvents)
HXDLIN( 262)		bool _hx_tmp;
HXDLIN( 262)		if ((event->type == HX_("mouseOver",19,4a,0d,f6))) {
HXDLIN( 262)			_hx_tmp = !(this->get_visible());
            		}
            		else {
HXDLIN( 262)			_hx_tmp = false;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 264)			this->set_x((event->stageX + (int)10));
HXLINE( 265)			this->set_y((event->stageY + ((Float)10)));
HXLINE( 267)			this->setVisible(true);
            		}
            		else {
HXLINE( 269)			if ((event->type == HX_("mouseOut",69,e7,1d,a4))) {
HXLINE( 270)				this->setVisible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,handleMouseEvents,(void))

int TooltipOverlay_obj::BG_COLOR;

Float TooltipOverlay_obj::TEXT_ALPHA;

int TooltipOverlay_obj::MARGIN_X;

Float TooltipOverlay_obj::MARGIN_Y;


hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__new( ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
	hx::ObjectPtr< TooltipOverlay_obj > __this = new TooltipOverlay_obj();
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
	TooltipOverlay_obj *__this = (TooltipOverlay_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TooltipOverlay_obj), true, "flixel.system.debug.TooltipOverlay"));
	*(void **)__this = TooltipOverlay_obj::_hx_vtable;
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

TooltipOverlay_obj::TooltipOverlay_obj()
{
}

void TooltipOverlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TooltipOverlay);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TooltipOverlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TooltipOverlay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return hx::Val( owner ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return hx::Val( _shadow ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setText") ) { return hx::Val( setText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return hx::Val( putOnTop_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { return hx::Val( textField ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reposition") ) { return hx::Val( reposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return hx::Val( setVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return hx::Val( _background ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return hx::Val( toggleVisible_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ensureOnScreen") ) { return hx::Val( ensureOnScreen_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleMouseEvents") ) { return hx::Val( handleMouseEvents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TooltipOverlay_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TooltipOverlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"));
	outFields->push(HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TooltipOverlay_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TooltipOverlay_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(TooltipOverlay_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(TooltipOverlay_obj,_background),HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(TooltipOverlay_obj,_shadow),HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TooltipOverlay_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(TooltipOverlay_obj,owner),HX_HCSTRING("owner","\x33","\x98","\x76","\x38")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(TooltipOverlay_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TooltipOverlay_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TooltipOverlay_obj::BG_COLOR,HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b")},
	{hx::fsFloat,(void *) &TooltipOverlay_obj::TEXT_ALPHA,HX_HCSTRING("TEXT_ALPHA","\xec","\xfa","\x4e","\xdd")},
	{hx::fsInt,(void *) &TooltipOverlay_obj::MARGIN_X,HX_HCSTRING("MARGIN_X","\xc7","\x56","\x52","\x9e")},
	{hx::fsFloat,(void *) &TooltipOverlay_obj::MARGIN_Y,HX_HCSTRING("MARGIN_Y","\xc8","\x56","\x52","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TooltipOverlay_obj_sMemberFields[] = {
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"),
	HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("owner","\x33","\x98","\x76","\x38"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("putOnTop","\x67","\x79","\x64","\x2e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("ensureOnScreen","\xc9","\xd1","\xe0","\x10"),
	HX_HCSTRING("handleMouseEvents","\x56","\x68","\x00","\x8a"),
	::String(null()) };

static void TooltipOverlay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TooltipOverlay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#endif

hx::Class TooltipOverlay_obj::__mClass;

static ::String TooltipOverlay_obj_sStaticFields[] = {
	HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b"),
	HX_HCSTRING("TEXT_ALPHA","\xec","\xfa","\x4e","\xdd"),
	HX_HCSTRING("MARGIN_X","\xc7","\x56","\x52","\x9e"),
	HX_HCSTRING("MARGIN_Y","\xc8","\x56","\x52","\x9e"),
	::String(null())
};

void TooltipOverlay_obj::__register()
{
	hx::Object *dummy = new TooltipOverlay_obj;
	TooltipOverlay_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.TooltipOverlay","\x75","\x0f","\xff","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TooltipOverlay_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TooltipOverlay_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TooltipOverlay_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TooltipOverlay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TooltipOverlay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TooltipOverlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TooltipOverlay_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TooltipOverlay_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_62_boot)
HXDLIN(  62)		BG_COLOR = (int)-12961222;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_67_boot)
HXDLIN(  67)		TEXT_ALPHA = ((Float)0.8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_72_boot)
HXDLIN(  72)		MARGIN_X = (int)10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_77_boot)
HXDLIN(  77)		MARGIN_Y = ((Float)10);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug