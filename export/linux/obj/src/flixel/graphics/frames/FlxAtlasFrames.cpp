// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_29_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",29,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_420_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",420,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_43_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",43,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_103_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",103,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_134_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",134,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_221_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",221,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_242_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",242,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_307_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",307,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_360_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",360,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_406_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",406,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_29_new)
HXDLIN(  29)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0163a3e9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0163a3e9;
	} else {
		return inClassId==(int)0x0564f3f4;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_420_addBorder)
HXLINE( 421)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 421)		point->_inPool = false;
HXDLIN( 421)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 421)		point1->_weak = true;
HXDLIN( 421)		 ::flixel::math::FlxPoint resultBorder = point1->addPoint(this->border)->addPoint(border);
HXLINE( 422)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 423)		if (hx::IsNotNull( atlasFrames )) {
HXLINE( 424)			return atlasFrames;
            		}
HXLINE( 426)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 428)		{
HXLINE( 428)			int _g = (int)0;
HXDLIN( 428)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 428)			while((_g < _g1->length)){
HXLINE( 428)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 428)				_g = (_g + (int)1);
HXLINE( 429)				atlasFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 431)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic Source, ::Dynamic Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_43_fromTexturePackerJson)
HXLINE(  44)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE(  45)		if (hx::IsNull( graphic )) {
HXLINE(  46)			return null();
            		}
HXLINE(  49)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  50)		if (hx::IsNotNull( frames )) {
HXLINE(  51)			return frames;
            		}
HXLINE(  53)		bool _hx_tmp;
HXDLIN(  53)		if (hx::IsNotNull( graphic )) {
HXLINE(  53)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE(  53)			_hx_tmp = true;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  54)			return null();
            		}
HXLINE(  56)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  58)		 ::Dynamic data;
HXLINE(  60)		if (::Std_obj::is(Description,hx::ClassOf< ::String >())) {
HXLINE(  62)			::String json = ( (::String)(Description) );
HXLINE(  64)			if (::openfl::utils::Assets_obj::exists(json,null())) {
HXLINE(  65)				json = ::openfl::utils::Assets_obj::getText(json);
            			}
HXLINE(  67)			data =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,json)->parseRec();
            		}
            		else {
HXLINE(  72)			data = Description;
            		}
HXLINE(  76)		if (::Std_obj::is( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)),hx::ArrayBase::__mClass)) {
HXLINE(  78)			int _g = (int)0;
HXDLIN(  78)			::Array< ::Dynamic> _g1 = ::Lambda_obj::array(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic));
HXDLIN(  78)			while((_g < _g1->length)){
HXLINE(  78)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  78)				_g = (_g + (int)1);
HXLINE(  80)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),hx::paccDynamic)) ),frame,frames);
            			}
            		}
            		else {
HXLINE(  86)			int _g2 = (int)0;
HXDLIN(  86)			::Array< ::String > _g11 = ::Reflect_obj::fields( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)));
HXDLIN(  86)			while((_g2 < _g11->length)){
HXLINE(  86)				::String frameName = _g11->__get(_g2);
HXDLIN(  86)				_g2 = (_g2 + (int)1);
HXLINE(  88)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,::Reflect_obj::field( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)),frameName),frames);
            			}
            		}
HXLINE(  92)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String FrameName, ::Dynamic FrameData, ::flixel::graphics::frames::FlxAtlasFrames Frames){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_103_texturePackerHelper)
HXLINE( 104)		bool rotated = ( (bool)(FrameData->__Field(HX_("rotated",a9,49,1d,f1),hx::paccDynamic)) );
HXLINE( 105)		::String name = FrameName;
HXLINE( 106)		Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN( 106)		Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN( 106)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 106)		point->_inPool = false;
HXDLIN( 106)		 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 107)		Float X1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN( 107)		Float Y1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN( 107)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 107)		point1->_inPool = false;
HXDLIN( 107)		 ::flixel::math::FlxPoint offset = point1;
HXLINE( 108)		int angle = (int)0;
HXLINE( 109)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 111)		if (rotated) {
HXLINE( 113)			Float X2 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN( 113)			Float Y2 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN( 113)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN( 113)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN( 113)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 113)			_this->x = X2;
HXDLIN( 113)			_this->y = Y2;
HXDLIN( 113)			_this->width = Width;
HXDLIN( 113)			_this->height = Height;
HXDLIN( 113)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 113)			rect->_inPool = false;
HXDLIN( 113)			frameRect = rect;
HXLINE( 114)			angle = (int)-90;
            		}
            		else {
HXLINE( 118)			Float X3 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
HXDLIN( 118)			Float Y3 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
HXDLIN( 118)			Float Width1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("w",77,00,00,00),hx::paccDynamic)) );
HXDLIN( 118)			Float Height1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic))->__Field(HX_("h",68,00,00,00),hx::paccDynamic)) );
HXDLIN( 118)			 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 118)			_this1->x = X3;
HXDLIN( 118)			_this1->y = Y3;
HXDLIN( 118)			_this1->width = Width1;
HXDLIN( 118)			_this1->height = Height1;
HXDLIN( 118)			 ::flixel::math::FlxRect rect1 = _this1;
HXDLIN( 118)			rect1->_inPool = false;
HXDLIN( 118)			frameRect = rect1;
            		}
HXLINE( 121)		Frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_134_fromLibGdx)
HXLINE( 135)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 136)		if (hx::IsNull( graphic )) {
HXLINE( 137)			return null();
            		}
HXLINE( 140)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 141)		if (hx::IsNotNull( frames )) {
HXLINE( 142)			return frames;
            		}
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (hx::IsNotNull( graphic )) {
HXLINE( 144)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			return null();
            		}
HXLINE( 147)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 149)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 150)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 152)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 153)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 156)		int repeatLine;
HXDLIN( 156)		if ((lines->__get((int)3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > (int)-1)) {
HXLINE( 156)			repeatLine = (int)3;
            		}
            		else {
HXLINE( 156)			repeatLine = (int)4;
            		}
HXLINE( 157)		lines->removeRange((int)0,(repeatLine + (int)1));
HXLINE( 159)		int numElementsPerImage = (int)7;
HXLINE( 160)		int numImages = ::Std_obj::_hx_int(((Float)lines->length / (Float)numElementsPerImage));
HXLINE( 161)		::Array< int > size = ::Array_obj< int >::__new(0);
HXLINE( 163)		{
HXLINE( 163)			int _g1 = (int)0;
HXDLIN( 163)			int _g = numImages;
HXDLIN( 163)			while((_g1 < _g)){
HXLINE( 163)				_g1 = (_g1 + (int)1);
HXDLIN( 163)				int i = (_g1 - (int)1);
HXLINE( 165)				int curIndex = (i * numElementsPerImage);
HXLINE( 167)				curIndex = (curIndex + (int)1);
HXDLIN( 167)				::String name = lines->__get((curIndex - (int)1));
HXLINE( 168)				curIndex = (curIndex + (int)1);
HXDLIN( 168)				bool rotated = (lines->__get((curIndex - (int)1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= (int)0);
HXLINE( 169)				int angle = (int)0;
HXLINE( 171)				curIndex = (curIndex + (int)1);
HXDLIN( 171)				::String tempString = lines->__get((curIndex - (int)1));
HXLINE( 172)				::Array< int > size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);
HXLINE( 174)				int imageX = size1->__get((int)0);
HXLINE( 175)				int imageY = size1->__get((int)1);
HXLINE( 177)				curIndex = (curIndex + (int)1);
HXDLIN( 177)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 178)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 180)				int imageWidth = size1->__get((int)0);
HXLINE( 181)				int imageHeight = size1->__get((int)1);
HXLINE( 183)				 ::flixel::math::FlxRect rect = null();
HXLINE( 184)				if (rotated) {
HXLINE( 186)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 186)					_this->x = imageX;
HXDLIN( 186)					_this->y = imageY;
HXDLIN( 186)					_this->width = imageHeight;
HXDLIN( 186)					_this->height = imageWidth;
HXDLIN( 186)					 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 186)					rect1->_inPool = false;
HXDLIN( 186)					rect = rect1;
HXLINE( 187)					angle = (int)90;
            				}
            				else {
HXLINE( 191)					 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 191)					_this1->x = imageX;
HXDLIN( 191)					_this1->y = imageY;
HXDLIN( 191)					_this1->width = imageWidth;
HXDLIN( 191)					_this1->height = imageHeight;
HXDLIN( 191)					 ::flixel::math::FlxRect rect2 = _this1;
HXDLIN( 191)					rect2->_inPool = false;
HXDLIN( 191)					rect = rect2;
            				}
HXLINE( 194)				curIndex = (curIndex + (int)1);
HXDLIN( 194)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 195)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 197)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get();
HXDLIN( 197)				 ::flixel::math::FlxPoint point1 = point->set(size1->__get((int)0),size1->__get((int)1));
HXDLIN( 197)				point1->_inPool = false;
HXDLIN( 197)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 199)				curIndex = (curIndex + (int)1);
HXDLIN( 199)				tempString = lines->__get((curIndex - (int)1));
HXLINE( 200)				size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size1);
HXLINE( 206)				Float sourceSize1 = sourceSize->y;
HXDLIN( 206)				Float Y = ((sourceSize1 - size1->__get((int)1)) - imageHeight);
HXDLIN( 206)				 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get();
HXDLIN( 206)				 ::flixel::math::FlxPoint point3 = point2->set(size1->__get((int)0),Y);
HXDLIN( 206)				point3->_inPool = false;
HXDLIN( 206)				 ::flixel::math::FlxPoint offset = point3;
HXLINE( 207)				frames->addAtlasFrame(rect,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 210)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

::Array< int > FlxAtlasFrames_obj::getDimensions(::String line,::Array< int > size){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_221_getDimensions)
HXLINE( 222)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 223)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 225)		size[(int)0] = ::Std_obj::parseInt(line.substring((colonPosition + (int)1),comaPosition));
HXLINE( 226)		size[(int)1] = ::Std_obj::parseInt(line.substring((comaPosition + (int)1),line.length));
HXLINE( 228)		return size;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_242_fromSparrow)
HXLINE( 243)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 244)		if (hx::IsNull( graphic )) {
HXLINE( 245)			return null();
            		}
HXLINE( 248)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 249)		if (hx::IsNotNull( frames )) {
HXLINE( 250)			return frames;
            		}
HXLINE( 252)		bool _hx_tmp;
HXDLIN( 252)		if (hx::IsNotNull( graphic )) {
HXLINE( 252)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 252)			_hx_tmp = true;
            		}
HXDLIN( 252)		if (_hx_tmp) {
HXLINE( 253)			return null();
            		}
HXLINE( 255)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 257)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 258)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 260)		 ::haxe::xml::Fast data =  ::haxe::xml::Fast_obj::__alloc( HX_CTX ,::Xml_obj::parse(Description)->firstElement());
HXLINE( 262)		{
HXLINE( 262)			 ::_List::ListNode _g_head = data->nodes->resolve(HX_("SubTexture",5b,7b,fb,11))->h;
HXDLIN( 262)			while(hx::IsNotNull( _g_head )){
HXLINE( 262)				 ::haxe::xml::Fast val = ( ( ::haxe::xml::Fast)(_g_head->item) );
HXDLIN( 262)				_g_head = _g_head->next;
HXDLIN( 262)				 ::haxe::xml::Fast texture = val;
HXLINE( 264)				::String name = texture->att->resolve(HX_("name",4b,72,ff,48));
HXLINE( 265)				bool trimmed = texture->has->resolve(HX_("frameX",8b,af,85,ac));
HXLINE( 266)				bool rotated;
HXDLIN( 266)				if (texture->has->resolve(HX_("rotated",a9,49,1d,f1))) {
HXLINE( 266)					rotated = (texture->att->resolve(HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 266)					rotated = false;
            				}
HXLINE( 267)				bool flipX;
HXDLIN( 267)				if (texture->has->resolve(HX_("flipX",0b,45,92,02))) {
HXLINE( 267)					flipX = (texture->att->resolve(HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 267)					flipX = false;
            				}
HXLINE( 268)				bool flipY;
HXDLIN( 268)				if (texture->has->resolve(HX_("flipY",0c,45,92,02))) {
HXLINE( 268)					flipY = (texture->att->resolve(HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 268)					flipY = false;
            				}
HXLINE( 270)				Float X = ::Std_obj::parseFloat(texture->att->resolve(HX_("x",78,00,00,00)));
HXDLIN( 270)				Float Y = ::Std_obj::parseFloat(texture->att->resolve(HX_("y",79,00,00,00)));
HXDLIN( 270)				Float Width = ::Std_obj::parseFloat(texture->att->resolve(HX_("width",06,b6,62,ca)));
HXDLIN( 270)				Float Height = ::Std_obj::parseFloat(texture->att->resolve(HX_("height",e7,07,4c,02)));
HXDLIN( 270)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 270)				_this->x = X;
HXDLIN( 270)				_this->y = Y;
HXDLIN( 270)				_this->width = Width;
HXDLIN( 270)				_this->height = Height;
HXDLIN( 270)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 270)				rect->_inPool = false;
HXDLIN( 270)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 273)				 ::openfl::geom::Rectangle size;
HXDLIN( 273)				if (trimmed) {
HXLINE( 275)					 ::Dynamic size1 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameX",8b,af,85,ac)));
HXDLIN( 275)					 ::Dynamic size2 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameY",8c,af,85,ac)));
HXLINE( 276)					 ::Dynamic size3 = ::Std_obj::parseInt(texture->att->resolve(HX_("frameWidth",99,ea,88,ad)));
HXLINE( 273)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(texture->att->resolve(HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 273)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,rect1->width,rect1->height);
            				}
HXLINE( 283)				int angle;
HXDLIN( 283)				if (rotated) {
HXLINE( 283)					angle = (int)-90;
            				}
            				else {
HXLINE( 283)					angle = (int)0;
            				}
HXLINE( 285)				Float X1 = -(size->get_left());
HXDLIN( 285)				Float Y1 = -(size->get_top());
HXDLIN( 285)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 285)				point->_inPool = false;
HXDLIN( 285)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 286)				Float X2 = size->width;
HXDLIN( 286)				Float Y2 = size->height;
HXDLIN( 286)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X2,Y2);
HXDLIN( 286)				point1->_inPool = false;
HXDLIN( 286)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 288)				bool _hx_tmp1;
HXDLIN( 288)				if (rotated) {
HXLINE( 288)					_hx_tmp1 = !(trimmed);
            				}
            				else {
HXLINE( 288)					_hx_tmp1 = false;
            				}
HXDLIN( 288)				if (_hx_tmp1) {
HXLINE( 289)					sourceSize->set(size->height,size->width);
            				}
HXLINE( 291)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY);
            			}
            		}
HXLINE( 294)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_307_fromTexturePackerXml)
HXLINE( 308)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE( 309)		if (hx::IsNull( graphic )) {
HXLINE( 310)			return null();
            		}
HXLINE( 313)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 314)		if (hx::IsNotNull( frames )) {
HXLINE( 315)			return frames;
            		}
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (hx::IsNotNull( graphic )) {
HXLINE( 317)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 317)			_hx_tmp = true;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 318)			return null();
            		}
HXLINE( 320)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 322)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 323)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 325)		 ::Xml xml = ::Xml_obj::parse(Description);
HXLINE( 327)		{
HXLINE( 327)			 ::Dynamic sprite = xml->firstElement()->elements();
HXDLIN( 327)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 327)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 329)				bool trimmed;
HXDLIN( 329)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 329)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 329)					trimmed = true;
            				}
HXLINE( 330)				bool rotated;
HXDLIN( 330)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 330)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 330)					rotated = false;
            				}
HXLINE( 331)				int angle;
HXDLIN( 331)				if (rotated) {
HXLINE( 331)					angle = (int)-90;
            				}
            				else {
HXLINE( 331)					angle = (int)0;
            				}
HXLINE( 332)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 333)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 333)				point->_inPool = false;
HXDLIN( 333)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 334)				Float X = ::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)));
HXDLIN( 334)				Float Y = ::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)));
HXDLIN( 334)				Float Width = ::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)));
HXDLIN( 334)				Float Height = ::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)));
HXDLIN( 334)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 334)				_this->x = X;
HXDLIN( 334)				_this->y = Y;
HXDLIN( 334)				_this->width = Width;
HXDLIN( 334)				_this->height = Height;
HXDLIN( 334)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 334)				rect->_inPool = false;
HXDLIN( 334)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 336)				Float X1 = rect1->width;
HXDLIN( 336)				Float Y1 = rect1->height;
HXDLIN( 336)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 336)				point1->_inPool = false;
HXDLIN( 336)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 338)				if (trimmed) {
HXLINE( 340)					 ::Dynamic _hx_tmp1 = ::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)));
HXDLIN( 340)					offset->set(_hx_tmp1,::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00))));
HXLINE( 341)					 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)));
HXDLIN( 341)					sourceSize->set(_hx_tmp2,::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00))));
            				}
HXLINE( 344)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 347)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_360_fromSpriteSheetPacker)
HXLINE( 361)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 362)		if (hx::IsNull( graphic )) {
HXLINE( 363)			return null();
            		}
HXLINE( 366)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 367)		if (hx::IsNotNull( frames )) {
HXLINE( 368)			return frames;
            		}
HXLINE( 370)		bool _hx_tmp;
HXDLIN( 370)		if (hx::IsNotNull( graphic )) {
HXLINE( 370)			_hx_tmp = hx::IsNull( Description );
            		}
            		else {
HXLINE( 370)			_hx_tmp = true;
            		}
HXDLIN( 370)		if (_hx_tmp) {
HXLINE( 371)			return null();
            		}
HXLINE( 373)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 375)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 376)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 378)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 379)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 381)		{
HXLINE( 381)			int _g1 = (int)0;
HXDLIN( 381)			int _g = lines->length;
HXDLIN( 381)			while((_g1 < _g)){
HXLINE( 381)				_g1 = (_g1 + (int)1);
HXDLIN( 381)				int i = (_g1 - (int)1);
HXLINE( 383)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 384)				::String name = ::StringTools_obj::trim(currImageData->__get((int)0));
HXLINE( 385)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get((int)1)).split(HX_(" ",20,00,00,00));
HXLINE( 387)				Float X = ::Std_obj::parseInt(currImageRegion->__get((int)0));
HXDLIN( 387)				Float Y = ::Std_obj::parseInt(currImageRegion->__get((int)1));
HXDLIN( 387)				Float Width = ::Std_obj::parseInt(currImageRegion->__get((int)2));
HXDLIN( 387)				Float Height = ::Std_obj::parseInt(currImageRegion->__get((int)3));
HXDLIN( 387)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 387)				_this->x = X;
HXDLIN( 387)				_this->y = Y;
HXDLIN( 387)				_this->width = Width;
HXDLIN( 387)				_this->height = Height;
HXDLIN( 387)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 387)				rect->_inPool = false;
HXDLIN( 387)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 389)				Float X1 = rect1->width;
HXDLIN( 389)				Float Y1 = rect1->height;
HXDLIN( 389)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 389)				point->_inPool = false;
HXDLIN( 389)				 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 390)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 390)				point1->_inPool = false;
HXDLIN( 390)				 ::flixel::math::FlxPoint offset = point1;
HXLINE( 392)				frames->addAtlasFrame(rect1,sourceSize,offset,name,(int)0,null(),null());
            			}
            		}
HXLINE( 395)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_406_findFrame)
HXLINE( 407)		if (hx::IsNull( border )) {
HXLINE( 408)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 408)			point->_inPool = false;
HXDLIN( 408)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 408)			point1->_weak = true;
HXDLIN( 408)			border = point1;
            		}
HXLINE( 410)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 410)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(::haxe::IMap_obj::get(graphic->frameCollections,type)) );
HXDLIN( 410)		if (hx::IsNull( collections )) {
HXLINE( 410)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 410)			::haxe::IMap_obj::set(graphic->frameCollections,type,collections);
            		}
HXDLIN( 410)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 412)		{
HXLINE( 412)			int _g = (int)0;
HXDLIN( 412)			while((_g < atlasFrames->length)){
HXLINE( 412)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 412)				_g = (_g + (int)1);
HXLINE( 413)				 ::flixel::math::FlxPoint _this = atlas->border;
HXDLIN( 413)				bool result;
HXDLIN( 413)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 413)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 413)					result = false;
            				}
HXDLIN( 413)				if (border->_weak) {
HXLINE( 413)					border->put();
            				}
HXDLIN( 413)				if (result) {
HXLINE( 414)					return atlas;
            				}
            			}
            		}
HXLINE( 416)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return hx::Val( addBorder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxAtlasFrames_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	::String(null()) };

static void FlxAtlasFrames_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAtlasFrames_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_HCSTRING("fromTexturePackerJson","\xbf","\xf0","\x7e","\xbe"),
	HX_HCSTRING("texturePackerHelper","\x0f","\x23","\xbd","\xb2"),
	HX_HCSTRING("fromLibGdx","\x80","\x06","\xdf","\x27"),
	HX_HCSTRING("getDimensions","\x83","\x1a","\x12","\x39"),
	HX_HCSTRING("fromSparrow","\xc2","\x9f","\xec","\x33"),
	HX_HCSTRING("fromTexturePackerXml","\x20","\xdf","\x27","\xfb"),
	HX_HCSTRING("fromSpriteSheetPacker","\xb6","\xb2","\xc0","\x5f"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	hx::Object *dummy = new FlxAtlasFrames_obj;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxAtlasFrames","\xd6","\x87","\xd5","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAtlasFrames_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAtlasFrames_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
