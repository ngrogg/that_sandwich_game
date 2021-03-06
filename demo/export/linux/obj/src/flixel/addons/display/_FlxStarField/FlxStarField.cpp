// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display__FlxStarField_FlxStar
#include <flixel/addons/display/_FlxStarField/FlxStar.h>
#endif
#ifndef INCLUDED_flixel_addons_display__FlxStarField_FlxStarField
#include <flixel/addons/display/_FlxStarField/FlxStarField.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25ee677a18ba797e_106_new,"flixel.addons.display._FlxStarField.FlxStarField","new",0x0e13d0d6,"flixel.addons.display._FlxStarField.FlxStarField.new","flixel/addons/display/FlxStarField.hx",106,0xb2ef3fd2)
HX_LOCAL_STACK_FRAME(_hx_pos_25ee677a18ba797e_136_destroy,"flixel.addons.display._FlxStarField.FlxStarField","destroy",0x038ea070,"flixel.addons.display._FlxStarField.FlxStarField.destroy","flixel/addons/display/FlxStarField.hx",136,0xb2ef3fd2)
HX_LOCAL_STACK_FRAME(_hx_pos_25ee677a18ba797e_147_draw,"flixel.addons.display._FlxStarField.FlxStarField","draw",0x3cb092ce,"flixel.addons.display._FlxStarField.FlxStarField.draw","flixel/addons/display/FlxStarField.hx",147,0xb2ef3fd2)
HX_LOCAL_STACK_FRAME(_hx_pos_25ee677a18ba797e_172_setStarDepthColors,"flixel.addons.display._FlxStarField.FlxStarField","setStarDepthColors",0xcf6b9729,"flixel.addons.display._FlxStarField.FlxStarField.setStarDepthColors","flixel/addons/display/FlxStarField.hx",172,0xb2ef3fd2)
HX_LOCAL_STACK_FRAME(_hx_pos_25ee677a18ba797e_176_setStarSpeed,"flixel.addons.display._FlxStarField.FlxStarField","setStarSpeed",0x19190b1d,"flixel.addons.display._FlxStarField.FlxStarField.setStarSpeed","flixel/addons/display/FlxStarField.hx",176,0xb2ef3fd2)
namespace flixel{
namespace addons{
namespace display{
namespace _FlxStarField{

void FlxStarField_obj::__construct(int X,int Y,int Width,int Height,int StarAmount){
            	HX_GC_STACKFRAME(&_hx_pos_25ee677a18ba797e_106_new)
HXLINE( 108)		this->bgColor = (int)-16777216;
HXLINE( 117)		super::__construct(X,Y,null());
HXLINE( 118)		if ((Width <= (int)0)) {
HXLINE( 118)			Width = ::flixel::FlxG_obj::width;
            		}
            		else {
HXLINE( 118)			Width = Width;
            		}
HXLINE( 119)		if ((Height <= (int)0)) {
HXLINE( 119)			Height = ::flixel::FlxG_obj::height;
            		}
            		else {
HXLINE( 119)			Height = Height;
            		}
HXLINE( 120)		this->makeGraphic(Width,Height,this->bgColor,true,null());
HXLINE( 121)		this->_stars = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 123)		{
HXLINE( 123)			int _g1 = (int)0;
HXDLIN( 123)			int _g = StarAmount;
HXDLIN( 123)			while((_g1 < _g)){
HXLINE( 123)				_g1 = (_g1 + (int)1);
HXDLIN( 123)				int i = (_g1 - (int)1);
HXLINE( 125)				 ::flixel::addons::display::_FlxStarField::FlxStar star =  ::flixel::addons::display::_FlxStarField::FlxStar_obj::__alloc( HX_CTX );
HXLINE( 126)				star->index = i;
HXLINE( 127)				star->x = ::flixel::FlxG_obj::random->_hx_int((int)0,Width,null());
HXLINE( 128)				star->y = ::flixel::FlxG_obj::random->_hx_int((int)0,Height,null());
HXLINE( 129)				star->d = (int)1;
HXLINE( 130)				Float _hx_tmp = ::flixel::FlxG_obj::random->_hx_float(null(),null(),null());
HXDLIN( 130)				star->r = ((_hx_tmp * ::Math_obj::PI) * (int)2);
HXLINE( 131)				this->_stars->push(star);
            			}
            		}
            	}

Dynamic FlxStarField_obj::__CreateEmpty() { return new FlxStarField_obj; }

void *FlxStarField_obj::_hx_vtable = 0;

Dynamic FlxStarField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxStarField_obj > _hx_result = new FlxStarField_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxStarField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x5492c7d8;
	}
}

void FlxStarField_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_25ee677a18ba797e_136_destroy)
HXLINE( 137)		{
HXLINE( 137)			int _g = (int)0;
HXDLIN( 137)			::Array< ::Dynamic> _g1 = this->_stars;
HXDLIN( 137)			while((_g < _g1->length)){
HXLINE( 137)				 ::flixel::addons::display::_FlxStarField::FlxStar star = _g1->__get(_g).StaticCast<  ::flixel::addons::display::_FlxStarField::FlxStar >();
HXDLIN( 137)				_g = (_g + (int)1);
HXLINE( 139)				star = null();
            			}
            		}
HXLINE( 141)		this->_stars = null();
HXLINE( 142)		this->_depthColors = null();
HXLINE( 143)		this->super::destroy();
            	}


void FlxStarField_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_25ee677a18ba797e_147_draw)
HXLINE( 148)		this->get_pixels()->lock();
HXLINE( 149)		this->get_pixels()->fillRect(this->_flashRect,this->bgColor);
HXLINE( 151)		{
HXLINE( 151)			int _g = (int)0;
HXDLIN( 151)			::Array< ::Dynamic> _g1 = this->_stars;
HXDLIN( 151)			while((_g < _g1->length)){
HXLINE( 151)				 ::flixel::addons::display::_FlxStarField::FlxStar star = _g1->__get(_g).StaticCast<  ::flixel::addons::display::_FlxStarField::FlxStar >();
HXDLIN( 151)				_g = (_g + (int)1);
HXLINE( 153)				Float colorIndex = (star->speed - this->_minSpeed);
HXDLIN( 153)				int colorIndex1 = ::Std_obj::_hx_int((((Float)colorIndex / (Float)(this->_maxSpeed - this->_minSpeed)) * this->_depthColors->length));
HXLINE( 154)				 ::openfl::display::BitmapData _hx_tmp = this->get_pixels();
HXDLIN( 154)				int _hx_tmp1 = ::Std_obj::_hx_int(star->x);
HXDLIN( 154)				int _hx_tmp2 = ::Std_obj::_hx_int(star->y);
HXDLIN( 154)				_hx_tmp->setPixel32(_hx_tmp1,_hx_tmp2,this->_depthColors->__get(colorIndex1));
            			}
            		}
HXLINE( 157)		this->get_pixels()->unlock(null());
HXLINE( 158)		this->framePixels = this->get_pixels();
HXLINE( 159)		this->dirty = false;
HXLINE( 160)		this->super::draw();
            	}


void FlxStarField_obj::setStarDepthColors(int Depth,hx::Null< int >  __o_LowestColor,hx::Null< int >  __o_HighestColor){
int LowestColor = __o_LowestColor.Default(267933784);
int HighestColor = __o_HighestColor.Default(-723724);
            	HX_STACKFRAME(&_hx_pos_25ee677a18ba797e_172_setStarDepthColors)
HXDLIN( 172)		this->_depthColors = ::flixel::util::FlxGradient_obj::createGradientArray((int)1,Depth,::Array_obj< int >::__new(2)->init(0,LowestColor)->init(1,HighestColor),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxStarField_obj,setStarDepthColors,(void))

void FlxStarField_obj::setStarSpeed(int Min,int Max){
            	HX_STACKFRAME(&_hx_pos_25ee677a18ba797e_176_setStarSpeed)
HXLINE( 177)		this->_minSpeed = Min;
HXLINE( 178)		this->_maxSpeed = Max;
HXLINE( 180)		{
HXLINE( 180)			int _g = (int)0;
HXDLIN( 180)			::Array< ::Dynamic> _g1 = this->_stars;
HXDLIN( 180)			while((_g < _g1->length)){
HXLINE( 180)				 ::flixel::addons::display::_FlxStarField::FlxStar star = _g1->__get(_g).StaticCast<  ::flixel::addons::display::_FlxStarField::FlxStar >();
HXDLIN( 180)				_g = (_g + (int)1);
HXLINE( 182)				star->speed = ::flixel::FlxG_obj::random->_hx_float(Min,Max,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxStarField_obj,setStarSpeed,(void))


hx::ObjectPtr< FlxStarField_obj > FlxStarField_obj::__new(int X,int Y,int Width,int Height,int StarAmount) {
	hx::ObjectPtr< FlxStarField_obj > __this = new FlxStarField_obj();
	__this->__construct(X,Y,Width,Height,StarAmount);
	return __this;
}

hx::ObjectPtr< FlxStarField_obj > FlxStarField_obj::__alloc(hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height,int StarAmount) {
	FlxStarField_obj *__this = (FlxStarField_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxStarField_obj), true, "flixel.addons.display._FlxStarField.FlxStarField"));
	*(void **)__this = FlxStarField_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height,StarAmount);
	return __this;
}

FlxStarField_obj::FlxStarField_obj()
{
}

void FlxStarField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStarField);
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(_stars,"_stars");
	HX_MARK_MEMBER_NAME(_depthColors,"_depthColors");
	HX_MARK_MEMBER_NAME(_minSpeed,"_minSpeed");
	HX_MARK_MEMBER_NAME(_maxSpeed,"_maxSpeed");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxStarField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(_stars,"_stars");
	HX_VISIT_MEMBER_NAME(_depthColors,"_depthColors");
	HX_VISIT_MEMBER_NAME(_minSpeed,"_minSpeed");
	HX_VISIT_MEMBER_NAME(_maxSpeed,"_maxSpeed");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxStarField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { return hx::Val( _stars ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return hx::Val( bgColor ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minSpeed") ) { return hx::Val( _minSpeed ); }
		if (HX_FIELD_EQ(inName,"_maxSpeed") ) { return hx::Val( _maxSpeed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthColors") ) { return hx::Val( _depthColors ); }
		if (HX_FIELD_EQ(inName,"setStarSpeed") ) { return hx::Val( setStarSpeed_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStarDepthColors") ) { return hx::Val( setStarDepthColors_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxStarField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { _stars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minSpeed") ) { _minSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxSpeed") ) { _maxSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthColors") ) { _depthColors=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStarField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae"));
	outFields->push(HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0"));
	outFields->push(HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxStarField_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxStarField_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxStarField_obj,_stars),HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxStarField_obj,_depthColors),HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae")},
	{hx::fsFloat,(int)offsetof(FlxStarField_obj,_minSpeed),HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0")},
	{hx::fsFloat,(int)offsetof(FlxStarField_obj,_maxSpeed),HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxStarField_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxStarField_obj_sMemberFields[] = {
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae"),
	HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0"),
	HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("setStarDepthColors","\xdf","\xa2","\xf8","\x94"),
	HX_HCSTRING("setStarSpeed","\x53","\xca","\x85","\x3c"),
	::String(null()) };

static void FlxStarField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStarField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxStarField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStarField_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStarField_obj::__mClass;

void FlxStarField_obj::__register()
{
	hx::Object *dummy = new FlxStarField_obj;
	FlxStarField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display._FlxStarField.FlxStarField","\xe4","\x6d","\x41","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxStarField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxStarField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxStarField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxStarField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxStarField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxStarField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace _FlxStarField
