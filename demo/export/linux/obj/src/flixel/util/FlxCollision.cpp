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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_48_pixelPerfectCheck,"flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",48,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_223_pixelPerfectPointCheck,"flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",223,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_260_createCameraWall,"flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",260,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_25_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",25,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_26_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",26,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_27_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",27,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_28_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",28,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_29_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",29,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_30_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",30,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_31_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",31,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_32_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",32,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_33_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",33,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_34_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",34,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_35_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",35,0x8c8a7b84)
namespace flixel{
namespace util{

void FlxCollision_obj::__construct() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return new FlxCollision_obj; }

void *FlxCollision_obj::_hx_vtable = 0;

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxCollision_obj > _hx_result = new FlxCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxCollision_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x234dd71e;
}

 ::flixel::math::FlxPoint FlxCollision_obj::pointA;

 ::flixel::math::FlxPoint FlxCollision_obj::pointB;

 ::flixel::math::FlxPoint FlxCollision_obj::centerA;

 ::flixel::math::FlxPoint FlxCollision_obj::centerB;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixA;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixB;

 ::flixel::math::FlxMatrix FlxCollision_obj::testMatrix;

 ::flixel::math::FlxRect FlxCollision_obj::boundsA;

 ::flixel::math::FlxRect FlxCollision_obj::boundsB;

 ::flixel::math::FlxRect FlxCollision_obj::intersect;

 ::openfl::geom::Rectangle FlxCollision_obj::flashRect;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact, ::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance, ::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_48_pixelPerfectCheck)
HXLINE(  50)		bool considerRotation;
HXDLIN(  50)		if ((Contact->angle == (int)0)) {
HXLINE(  50)			considerRotation = (Target->angle != (int)0);
            		}
            		else {
HXLINE(  50)			considerRotation = true;
            		}
HXLINE(  52)		if (hx::IsNotNull( Camera )) {
HXLINE(  52)			Camera = Camera;
            		}
            		else {
HXLINE(  52)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::math::FlxPoint this1 = ::flixel::util::FlxCollision_obj::pointA;
HXDLIN(  54)			Float Contact1 = Contact->x;
HXDLIN(  54)			Float x = (Contact1 - ::Std_obj::_hx_int((Camera->scroll->x * Contact->scrollFactor->x)));
HXDLIN(  54)			this1->set_x((x - Contact->offset->x));
            		}
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::math::FlxPoint this2 = ::flixel::util::FlxCollision_obj::pointA;
HXDLIN(  55)			Float Contact2 = Contact->y;
HXDLIN(  55)			Float y = (Contact2 - ::Std_obj::_hx_int((Camera->scroll->y * Contact->scrollFactor->y)));
HXDLIN(  55)			this2->set_y((y - Contact->offset->y));
            		}
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::math::FlxPoint this3 = ::flixel::util::FlxCollision_obj::pointB;
HXDLIN(  57)			Float Target1 = Target->x;
HXDLIN(  57)			Float x1 = (Target1 - ::Std_obj::_hx_int((Camera->scroll->x * Target->scrollFactor->x)));
HXDLIN(  57)			this3->set_x((x1 - Target->offset->x));
            		}
HXLINE(  58)		{
HXLINE(  58)			 ::flixel::math::FlxPoint this4 = ::flixel::util::FlxCollision_obj::pointB;
HXDLIN(  58)			Float Target2 = Target->y;
HXDLIN(  58)			Float y1 = (Target2 - ::Std_obj::_hx_int((Camera->scroll->y * Target->scrollFactor->y)));
HXDLIN(  58)			this4->set_y((y1 - Target->offset->y));
            		}
HXLINE(  60)		if (considerRotation) {
HXLINE(  63)			Contact->origin->copyTo(::flixel::util::FlxCollision_obj::centerA);
HXLINE(  64)			Target->origin->copyTo(::flixel::util::FlxCollision_obj::centerB);
HXLINE(  67)			 ::flixel::math::FlxPoint this5 = ::flixel::util::FlxCollision_obj::centerA;
HXDLIN(  67)			Float lengthA = (this5->x * this5->x);
HXDLIN(  67)			Float lengthA1 = ::Math_obj::sqrt((lengthA + (this5->y * this5->y)));
HXLINE(  68)			::flixel::util::FlxCollision_obj::boundsA->x = ((::flixel::util::FlxCollision_obj::pointA->x + ::flixel::util::FlxCollision_obj::centerA->x) - lengthA1);
HXLINE(  69)			::flixel::util::FlxCollision_obj::boundsA->y = ((::flixel::util::FlxCollision_obj::pointA->y + ::flixel::util::FlxCollision_obj::centerA->y) - lengthA1);
HXLINE(  70)			::flixel::util::FlxCollision_obj::boundsA->width = (lengthA1 * (int)2);
HXLINE(  71)			::flixel::util::FlxCollision_obj::boundsA->height = ::flixel::util::FlxCollision_obj::boundsA->width;
HXLINE(  73)			 ::flixel::math::FlxPoint this6 = ::flixel::util::FlxCollision_obj::centerB;
HXDLIN(  73)			Float lengthB = (this6->x * this6->x);
HXDLIN(  73)			Float lengthB1 = ::Math_obj::sqrt((lengthB + (this6->y * this6->y)));
HXLINE(  74)			::flixel::util::FlxCollision_obj::boundsB->x = ((::flixel::util::FlxCollision_obj::pointB->x + ::flixel::util::FlxCollision_obj::centerB->x) - lengthB1);
HXLINE(  75)			::flixel::util::FlxCollision_obj::boundsB->y = ((::flixel::util::FlxCollision_obj::pointB->y + ::flixel::util::FlxCollision_obj::centerB->y) - lengthB1);
HXLINE(  76)			::flixel::util::FlxCollision_obj::boundsB->width = (lengthB1 * (int)2);
HXLINE(  77)			::flixel::util::FlxCollision_obj::boundsB->height = ::flixel::util::FlxCollision_obj::boundsB->width;
            		}
            		else {
HXLINE(  81)			::flixel::util::FlxCollision_obj::boundsA->x = ::flixel::util::FlxCollision_obj::pointA->x;
HXLINE(  82)			::flixel::util::FlxCollision_obj::boundsA->y = ::flixel::util::FlxCollision_obj::pointA->y;
HXLINE(  83)			::flixel::util::FlxCollision_obj::boundsA->width = Contact->frameWidth;
HXLINE(  84)			::flixel::util::FlxCollision_obj::boundsA->height = Contact->frameHeight;
HXLINE(  86)			::flixel::util::FlxCollision_obj::boundsB->x = ::flixel::util::FlxCollision_obj::pointB->x;
HXLINE(  87)			::flixel::util::FlxCollision_obj::boundsB->y = ::flixel::util::FlxCollision_obj::pointB->y;
HXLINE(  88)			::flixel::util::FlxCollision_obj::boundsB->width = Target->frameWidth;
HXLINE(  89)			::flixel::util::FlxCollision_obj::boundsB->height = Target->frameHeight;
            		}
HXLINE(  92)		 ::flixel::math::FlxRect _hx_tmp = ::flixel::util::FlxCollision_obj::boundsA;
HXDLIN(  92)		 ::flixel::math::FlxRect _hx_tmp1 = ::flixel::util::FlxCollision_obj::boundsB;
HXDLIN(  92)		 ::flixel::math::FlxRect _this = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  92)		_this->x = (int)0;
HXDLIN(  92)		_this->y = (int)0;
HXDLIN(  92)		_this->width = (int)0;
HXDLIN(  92)		_this->height = (int)0;
HXDLIN(  92)		_hx_tmp->intersection(_hx_tmp1,_this);
HXLINE(  94)		bool _hx_tmp2;
HXDLIN(  94)		bool _hx_tmp3;
HXDLIN(  94)		 ::flixel::math::FlxRect _this1 = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  94)		bool _hx_tmp4;
HXDLIN(  94)		if ((_this1->width != (int)0)) {
HXLINE(  94)			_hx_tmp4 = (_this1->height == (int)0);
            		}
            		else {
HXLINE(  94)			_hx_tmp4 = true;
            		}
HXDLIN(  94)		if (!(_hx_tmp4)) {
HXLINE(  94)			_hx_tmp3 = (::flixel::util::FlxCollision_obj::intersect->width < (int)1);
            		}
            		else {
HXLINE(  94)			_hx_tmp3 = true;
            		}
HXDLIN(  94)		if (!(_hx_tmp3)) {
HXLINE(  94)			_hx_tmp2 = (::flixel::util::FlxCollision_obj::intersect->height < (int)1);
            		}
            		else {
HXLINE(  94)			_hx_tmp2 = true;
            		}
HXDLIN(  94)		if (_hx_tmp2) {
HXLINE(  96)			return false;
            		}
HXLINE( 100)		::flixel::util::FlxCollision_obj::matrixA->identity();
HXLINE( 101)		::flixel::util::FlxCollision_obj::matrixA->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y)));
HXLINE( 103)		::flixel::util::FlxCollision_obj::matrixB->identity();
HXLINE( 104)		::flixel::util::FlxCollision_obj::matrixB->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y)));
HXLINE( 106)		Contact->drawFrame(null());
HXLINE( 107)		Target->drawFrame(null());
HXLINE( 109)		 ::openfl::display::BitmapData testA = Contact->framePixels;
HXLINE( 110)		 ::openfl::display::BitmapData testB = Target->framePixels;
HXLINE( 112)		int overlapWidth = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->width);
HXLINE( 113)		int overlapHeight = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->height);
HXLINE( 116)		if (considerRotation) {
HXLINE( 118)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE( 121)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
HXLINE( 124)			 ::flixel::math::FlxMatrix _hx_tmp5 = ::flixel::util::FlxCollision_obj::testMatrix;
HXDLIN( 124)			Float Contact3 = Contact->angle;
HXDLIN( 124)			_hx_tmp5->rotate((Contact3 * ((Float)::Math_obj::PI / (Float)(int)180)));
HXLINE( 127)			 ::flixel::math::FlxMatrix _hx_tmp6 = ::flixel::util::FlxCollision_obj::testMatrix;
HXDLIN( 127)			Float _hx_tmp7 = ((Float)::flixel::util::FlxCollision_obj::boundsA->width / (Float)(int)2);
HXDLIN( 127)			_hx_tmp6->translate(_hx_tmp7,((Float)::flixel::util::FlxCollision_obj::boundsA->height / (Float)(int)2));
HXLINE( 130)			int testA2 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width);
HXDLIN( 130)			 ::openfl::display::BitmapData testA21 = ::flixel::util::FlxBitmapDataPool_obj::get(testA2,::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height),true,(int)0,false);
HXLINE( 133)			testA21->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 134)			testA = testA21;
HXLINE( 137)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE( 138)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
HXLINE( 139)			 ::flixel::math::FlxMatrix _hx_tmp8 = ::flixel::util::FlxCollision_obj::testMatrix;
HXDLIN( 139)			Float Target3 = Target->angle;
HXDLIN( 139)			_hx_tmp8->rotate((Target3 * ((Float)::Math_obj::PI / (Float)(int)180)));
HXLINE( 140)			 ::flixel::math::FlxMatrix _hx_tmp9 = ::flixel::util::FlxCollision_obj::testMatrix;
HXDLIN( 140)			Float _hx_tmp10 = ((Float)::flixel::util::FlxCollision_obj::boundsB->width / (Float)(int)2);
HXDLIN( 140)			_hx_tmp9->translate(_hx_tmp10,((Float)::flixel::util::FlxCollision_obj::boundsB->height / (Float)(int)2));
HXLINE( 142)			int testB2 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width);
HXDLIN( 142)			 ::openfl::display::BitmapData testB21 = ::flixel::util::FlxBitmapDataPool_obj::get(testB2,::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height),true,(int)0,false);
HXLINE( 143)			testB21->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 144)			testB = testB21;
            		}
HXLINE( 147)		::flixel::util::FlxCollision_obj::boundsA->x = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->tx));
HXLINE( 148)		::flixel::util::FlxCollision_obj::boundsA->y = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->ty));
HXLINE( 149)		::flixel::util::FlxCollision_obj::boundsA->width = overlapWidth;
HXLINE( 150)		::flixel::util::FlxCollision_obj::boundsA->height = overlapHeight;
HXLINE( 152)		::flixel::util::FlxCollision_obj::boundsB->x = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->tx));
HXLINE( 153)		::flixel::util::FlxCollision_obj::boundsB->y = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->ty));
HXLINE( 154)		::flixel::util::FlxCollision_obj::boundsB->width = overlapWidth;
HXLINE( 155)		::flixel::util::FlxCollision_obj::boundsB->height = overlapHeight;
HXLINE( 157)		{
HXLINE( 157)			 ::flixel::math::FlxRect _this2 = ::flixel::util::FlxCollision_obj::boundsA;
HXDLIN( 157)			 ::openfl::geom::Rectangle FlashRect = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 157)			if (hx::IsNull( FlashRect )) {
HXLINE( 157)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 157)			FlashRect->x = _this2->x;
HXDLIN( 157)			FlashRect->y = _this2->y;
HXDLIN( 157)			FlashRect->width = _this2->width;
HXDLIN( 157)			FlashRect->height = _this2->height;
            		}
HXLINE( 158)		 ::openfl::utils::ByteArrayData pixelsA = testA->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 160)		{
HXLINE( 160)			 ::flixel::math::FlxRect _this3 = ::flixel::util::FlxCollision_obj::boundsB;
HXDLIN( 160)			 ::openfl::geom::Rectangle FlashRect1 = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 160)			if (hx::IsNull( FlashRect1 )) {
HXLINE( 160)				FlashRect1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 160)			FlashRect1->x = _this3->x;
HXDLIN( 160)			FlashRect1->y = _this3->y;
HXDLIN( 160)			FlashRect1->width = _this3->width;
HXDLIN( 160)			FlashRect1->height = _this3->height;
            		}
HXLINE( 161)		 ::openfl::utils::ByteArrayData pixelsB = testB->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 163)		bool hit = false;
HXLINE( 166)		int alphaA = (int)0;
HXLINE( 167)		int alphaB = (int)0;
HXLINE( 168)		int overlapPixels = (overlapWidth * overlapHeight);
HXLINE( 169)		int alphaIdx = (int)0;
HXLINE( 172)		{
HXLINE( 172)			int _g1 = (int)0;
HXDLIN( 172)			int _g = ::Math_obj::ceil(((Float)overlapPixels / (Float)(int)2));
HXDLIN( 172)			while((_g1 < _g)){
HXLINE( 172)				_g1 = (_g1 + (int)1);
HXDLIN( 172)				int i = (_g1 - (int)1);
HXLINE( 174)				alphaIdx = ((int)i << (int)(int)3);
HXLINE( 175)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 176)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 177)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 179)				bool _hx_tmp11;
HXDLIN( 179)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 179)					_hx_tmp11 = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 179)					_hx_tmp11 = false;
            				}
HXDLIN( 179)				if (_hx_tmp11) {
HXLINE( 181)					hit = true;
HXLINE( 182)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE( 186)		if (!(hit)) {
HXLINE( 189)			int _g11 = (int)0;
HXDLIN( 189)			int _g2 = ((int)overlapPixels >> (int)(int)1);
HXDLIN( 189)			while((_g11 < _g2)){
HXLINE( 189)				_g11 = (_g11 + (int)1);
HXDLIN( 189)				int i1 = (_g11 - (int)1);
HXLINE( 191)				alphaIdx = (((int)i1 << (int)(int)3) + (int)4);
HXLINE( 192)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 193)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 194)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 196)				bool _hx_tmp12;
HXDLIN( 196)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 196)					_hx_tmp12 = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 196)					_hx_tmp12 = false;
            				}
HXDLIN( 196)				if (_hx_tmp12) {
HXLINE( 198)					hit = true;
HXLINE( 199)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 204)		if (considerRotation) {
HXLINE( 206)			::flixel::util::FlxBitmapDataPool_obj::put(testA);
HXLINE( 207)			::flixel::util::FlxBitmapDataPool_obj::put(testB);
            		}
HXLINE( 210)		return hit;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck(int PointX,int PointY, ::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_STACKFRAME(&_hx_pos_86c6328823573729_223_pixelPerfectPointCheck)
HXLINE( 225)		int _hx_tmp = ::Math_obj::floor(Target->x);
HXLINE( 226)		int _hx_tmp1 = ::Math_obj::floor(Target->y);
HXDLIN( 226)		int _hx_tmp2 = ::Std_obj::_hx_int(Target->get_width());
HXLINE( 225)		if (!(::flixel::math::FlxMath_obj::pointInCoordinates(PointX,PointY,_hx_tmp,_hx_tmp1,_hx_tmp2,::Std_obj::_hx_int(Target->get_height())))) {
HXLINE( 228)			return false;
            		}
HXLINE( 231)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 233)			Target->drawFrame(null());
            		}
HXLINE( 237)		 ::openfl::display::BitmapData test = Target->framePixels;
HXLINE( 239)		int Value = ::Math_obj::floor((PointX - Target->x));
HXDLIN( 239)		int pixelAlpha = ((int)((int)::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(test->getPixel32(Value,::Math_obj::floor((PointY - Target->y)))) >> (int)(int)24) & (int)(int)255);
HXLINE( 241)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 243)			pixelAlpha = ::Std_obj::_hx_int((pixelAlpha * Target->alpha));
            		}
HXLINE( 247)		return (pixelAlpha >= AlphaTolerance);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

 ::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_PlaceOutside,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool PlaceOutside = __o_PlaceOutside.Default(true);
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_260_createCameraWall)
HXLINE( 261)		 ::flixel::tile::FlxTileblock left = null();
HXLINE( 262)		 ::flixel::tile::FlxTileblock right = null();
HXLINE( 263)		 ::flixel::tile::FlxTileblock top = null();
HXLINE( 264)		 ::flixel::tile::FlxTileblock bottom = null();
HXLINE( 266)		if (PlaceOutside) {
HXLINE( 268)			int left1 = ::Math_obj::floor((Camera->x - Thickness));
HXDLIN( 268)			int left2 = ::Math_obj::floor((Camera->y + Thickness));
HXDLIN( 268)			int Camera1 = Camera->height;
HXDLIN( 268)			left =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,left1,left2,Thickness,(Camera1 - (Thickness * (int)2)));
HXLINE( 269)			int right1 = ::Math_obj::floor((Camera->x + Camera->width));
HXDLIN( 269)			int right2 = ::Math_obj::floor((Camera->y + Thickness));
HXDLIN( 269)			int Camera2 = Camera->height;
HXDLIN( 269)			right =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,right1,right2,Thickness,(Camera2 - (Thickness * (int)2)));
HXLINE( 270)			int top1 = ::Math_obj::floor((Camera->x - Thickness));
HXDLIN( 270)			int top2 = ::Math_obj::floor((Camera->y - Thickness));
HXDLIN( 270)			int Camera3 = Camera->width;
HXDLIN( 270)			top =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,top1,top2,(Camera3 + (Thickness * (int)2)),Thickness);
HXLINE( 271)			int bottom1 = ::Math_obj::floor((Camera->x - Thickness));
HXDLIN( 271)			int Camera4 = Camera->height;
HXDLIN( 271)			int Camera5 = Camera->width;
HXDLIN( 271)			bottom =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,bottom1,Camera4,(Camera5 + (Thickness * (int)2)),Thickness);
HXLINE( 273)			if (AdjustWorldBounds) {
HXLINE( 275)				 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 275)				int Camera6 = Camera->width;
HXDLIN( 275)				int Camera7 = Camera->height;
HXDLIN( 275)				_this->x = (Camera->x - Thickness);
HXDLIN( 275)				_this->y = (Camera->y - Thickness);
HXDLIN( 275)				_this->width = (Camera6 + (Thickness * (int)2));
HXDLIN( 275)				_this->height = (Camera7 + (Thickness * (int)2));
            			}
            		}
            		else {
HXLINE( 280)			int left3 = ::Math_obj::floor(Camera->x);
HXDLIN( 280)			int left4 = ::Math_obj::floor((Camera->y + Thickness));
HXDLIN( 280)			int Camera8 = Camera->height;
HXDLIN( 280)			left =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,left3,left4,Thickness,(Camera8 - (Thickness * (int)2)));
HXLINE( 281)			int right3 = ::Math_obj::floor(((Camera->x + Camera->width) - Thickness));
HXDLIN( 281)			int right4 = ::Math_obj::floor((Camera->y + Thickness));
HXDLIN( 281)			int Camera9 = Camera->height;
HXDLIN( 281)			right =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,right3,right4,Thickness,(Camera9 - (Thickness * (int)2)));
HXLINE( 282)			int top3 = ::Math_obj::floor(Camera->x);
HXDLIN( 282)			top =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,top3,::Math_obj::floor(Camera->y),Camera->width,Thickness);
HXLINE( 283)			int bottom2 = ::Math_obj::floor(Camera->x);
HXDLIN( 283)			bottom =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,bottom2,(Camera->height - Thickness),Camera->width,Thickness);
HXLINE( 285)			if (AdjustWorldBounds) {
HXLINE( 287)				 ::flixel::math::FlxRect _this1 = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 287)				_this1->x = Camera->x;
HXDLIN( 287)				_this1->y = Camera->y;
HXDLIN( 287)				_this1->width = Camera->width;
HXDLIN( 287)				_this1->height = Camera->height;
            			}
            		}
HXLINE( 291)		 ::flixel::group::FlxTypedGroup result =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 293)		result->add(left).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 294)		result->add(right).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 295)		result->add(top).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 296)		result->add(bottom).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 298)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = ( pointA ); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = ( pointB ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = ( centerA ); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = ( centerB ); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = ( matrixA ); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = ( matrixB ); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = ( boundsA ); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = ( boundsB ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = ( intersect ); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = ( flashRect ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = ( testMatrix ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true; }
	}
	return false;
}

bool FlxCollision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { intersect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxCollision_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxCollision_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCollision_obj::pointA,HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCollision_obj::pointB,HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCollision_obj::centerA,HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCollision_obj::centerB,HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixA,HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixB,HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::testMatrix,HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsA,HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsB,HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::intersect,HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &FlxCollision_obj::flashRect,HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxCollision_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxCollision_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#endif

hx::Class FlxCollision_obj::__mClass;

static ::String FlxCollision_obj_sStaticFields[] = {
	HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7"),
	HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7"),
	HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19"),
	HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93"),
	HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93"),
	HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4"),
	HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3"),
	HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3"),
	HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42"),
	HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02"),
	HX_HCSTRING("pixelPerfectCheck","\x21","\x18","\xe0","\xff"),
	HX_HCSTRING("pixelPerfectPointCheck","\x5f","\xf0","\x41","\xdf"),
	HX_HCSTRING("createCameraWall","\x6b","\x04","\x3e","\xea"),
	::String(null())
};

void FlxCollision_obj::__register()
{
	hx::Object *dummy = new FlxCollision_obj;
	FlxCollision_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCollision","\x1a","\xc3","\x9f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCollision_obj::__SetStatic;
	__mClass->mMarkFunc = FlxCollision_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxCollision_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxCollision_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxCollision_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCollision_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxCollision_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_25_boot)
HXDLIN(  25)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  25)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_25_boot)
HXDLIN(  25)		pointA =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_26_boot)
HXDLIN(  26)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  26)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_26_boot)
HXDLIN(  26)		pointB =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_27_boot)
HXDLIN(  27)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  27)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_27_boot)
HXDLIN(  27)		centerA =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_28_boot)
HXDLIN(  28)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  28)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_28_boot)
HXDLIN(  28)		centerB =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_29_boot)
HXDLIN(  29)		matrixA =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_30_boot)
HXDLIN(  30)		matrixB =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_31_boot)
HXDLIN(  31)		testMatrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_32_boot)
HXDLIN(  32)		boundsA =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_33_boot)
HXDLIN(  33)		boundsB =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_34_boot)
HXDLIN(  34)		intersect =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_35_boot)
HXDLIN(  35)		flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace util
