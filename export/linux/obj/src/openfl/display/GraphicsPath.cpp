// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d2387a0b056a42f_66_new,"openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",66,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_76_cubicCurveTo,"openfl.display.GraphicsPath","cubicCurveTo",0x2db23954,"openfl.display.GraphicsPath.cubicCurveTo","openfl/display/GraphicsPath.hx",76,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_109_curveTo,"openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",109,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_130_lineTo,"openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",130,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_149_moveTo,"openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",149,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_168_wideLineTo,"openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",168,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_187_wideMoveTo,"openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",187,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_201___drawCircle,"openfl.display.GraphicsPath","__drawCircle",0xcf8699c8,"openfl.display.GraphicsPath.__drawCircle","openfl/display/GraphicsPath.hx",201,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_208___drawEllipse,"openfl.display.GraphicsPath","__drawEllipse",0xdc0fda26,"openfl.display.GraphicsPath.__drawEllipse","openfl/display/GraphicsPath.hx",208,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_213___drawRect,"openfl.display.GraphicsPath","__drawRect",0xe8f096dc,"openfl.display.GraphicsPath.__drawRect","openfl/display/GraphicsPath.hx",213,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_224___drawRoundRect,"openfl.display.GraphicsPath","__drawRoundRect",0xbc9c2bda,"openfl.display.GraphicsPath.__drawRoundRect","openfl/display/GraphicsPath.hx",224,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_34_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",34,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_35_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",35,0x0a58fcc2)
namespace openfl{
namespace display{

void GraphicsPath_obj::__construct( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding){
 ::Dynamic winding = __o_winding.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_66_new)
HXLINE(  68)		this->commands = commands;
HXLINE(  69)		this->data = data;
HXLINE(  70)		this->winding = winding;
HXLINE(  71)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::PATH_dyn();
            	}

Dynamic GraphicsPath_obj::__CreateEmpty() { return new GraphicsPath_obj; }

void *GraphicsPath_obj::_hx_vtable = 0;

Dynamic GraphicsPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsPath_obj > _hx_result = new GraphicsPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GraphicsPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x572da862;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GraphicsPath_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_76_cubicCurveTo)
HXLINE(  78)		if (hx::IsNull( this->commands )) {
HXLINE(  78)			int length = null();
HXDLIN(  78)			bool fixed = null();
HXDLIN(  78)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE(  79)		if (hx::IsNull( this->data )) {
HXLINE(  79)			int length1 = null();
HXDLIN(  79)			bool fixed1 = null();
HXDLIN(  79)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE(  81)		this->commands->push((int)6);
HXLINE(  82)		this->data->push(controlX1);
HXLINE(  83)		this->data->push(controlY1);
HXLINE(  84)		this->data->push(controlX2);
HXLINE(  85)		this->data->push(controlY2);
HXLINE(  86)		this->data->push(anchorX);
HXLINE(  87)		this->data->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,cubicCurveTo,(void))

void GraphicsPath_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_109_curveTo)
HXLINE( 111)		if (hx::IsNull( this->commands )) {
HXLINE( 111)			int length = null();
HXDLIN( 111)			bool fixed = null();
HXDLIN( 111)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE( 112)		if (hx::IsNull( this->data )) {
HXLINE( 112)			int length1 = null();
HXDLIN( 112)			bool fixed1 = null();
HXDLIN( 112)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE( 114)		this->commands->push((int)3);
HXLINE( 115)		this->data->push(controlX);
HXLINE( 116)		this->data->push(controlY);
HXLINE( 117)		this->data->push(anchorX);
HXLINE( 118)		this->data->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

void GraphicsPath_obj::lineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_130_lineTo)
HXLINE( 132)		if (hx::IsNull( this->commands )) {
HXLINE( 132)			int length = null();
HXDLIN( 132)			bool fixed = null();
HXDLIN( 132)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE( 133)		if (hx::IsNull( this->data )) {
HXLINE( 133)			int length1 = null();
HXDLIN( 133)			bool fixed1 = null();
HXDLIN( 133)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE( 135)		this->commands->push((int)2);
HXLINE( 136)		this->data->push(x);
HXLINE( 137)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

void GraphicsPath_obj::moveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_149_moveTo)
HXLINE( 151)		if (hx::IsNull( this->commands )) {
HXLINE( 151)			int length = null();
HXDLIN( 151)			bool fixed = null();
HXDLIN( 151)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE( 152)		if (hx::IsNull( this->data )) {
HXLINE( 152)			int length1 = null();
HXDLIN( 152)			bool fixed1 = null();
HXDLIN( 152)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE( 154)		this->commands->push((int)1);
HXLINE( 155)		this->data->push(x);
HXLINE( 156)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

void GraphicsPath_obj::wideLineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_168_wideLineTo)
HXLINE( 170)		if (hx::IsNull( this->commands )) {
HXLINE( 170)			int length = null();
HXDLIN( 170)			bool fixed = null();
HXDLIN( 170)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE( 171)		if (hx::IsNull( this->data )) {
HXLINE( 171)			int length1 = null();
HXDLIN( 171)			bool fixed1 = null();
HXDLIN( 171)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE( 173)		this->commands->push((int)2);
HXLINE( 174)		this->data->push(x);
HXLINE( 175)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

void GraphicsPath_obj::wideMoveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_187_wideMoveTo)
HXLINE( 189)		if (hx::IsNull( this->commands )) {
HXLINE( 189)			int length = null();
HXDLIN( 189)			bool fixed = null();
HXDLIN( 189)			this->commands =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
            		}
HXLINE( 190)		if (hx::IsNull( this->data )) {
HXLINE( 190)			int length1 = null();
HXDLIN( 190)			bool fixed1 = null();
HXDLIN( 190)			this->data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
            		}
HXLINE( 192)		this->commands->push((int)1);
HXLINE( 193)		this->data->push(x);
HXLINE( 194)		this->data->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))

void GraphicsPath_obj::_hx___drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_201___drawCircle)
HXDLIN( 201)		this->_hx___drawRoundRect((x - radius),(y - radius),(radius * (int)2),(radius * (int)2),(radius * (int)2),(radius * (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC3(GraphicsPath_obj,_hx___drawCircle,(void))

void GraphicsPath_obj::_hx___drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_208___drawEllipse)
HXDLIN( 208)		this->_hx___drawRoundRect(x,y,width,height,width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawEllipse,(void))

void GraphicsPath_obj::_hx___drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_213___drawRect)
HXLINE( 215)		this->moveTo(x,y);
HXLINE( 216)		this->lineTo((x + width),y);
HXLINE( 217)		this->lineTo((x + width),(y + height));
HXLINE( 218)		this->lineTo(x,(y + height));
HXLINE( 219)		this->lineTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawRect,(void))

void GraphicsPath_obj::_hx___drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth,Float ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_224___drawRoundRect)
HXLINE( 226)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 227)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 229)		if ((ellipseWidth > ((Float)width / (Float)(int)2))) {
HXLINE( 229)			ellipseWidth = ((Float)width / (Float)(int)2);
            		}
HXLINE( 230)		if ((ellipseHeight > ((Float)height / (Float)(int)2))) {
HXLINE( 230)			ellipseHeight = ((Float)height / (Float)(int)2);
            		}
HXLINE( 232)		Float xe = (x + width);
HXDLIN( 232)		Float ye = (y + height);
HXDLIN( 232)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::GraphicsPath_obj::SIN45));
HXDLIN( 232)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::GraphicsPath_obj::TAN22));
HXDLIN( 232)		Float cy1 = (-(ellipseHeight) + (ellipseHeight * ::openfl::display::GraphicsPath_obj::SIN45));
HXDLIN( 232)		Float cy2 = (-(ellipseHeight) + (ellipseHeight * ::openfl::display::GraphicsPath_obj::TAN22));
HXLINE( 239)		this->moveTo(xe,(ye - ellipseHeight));
HXLINE( 240)		this->curveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 241)		this->curveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 242)		this->lineTo((x + ellipseWidth),ye);
HXLINE( 243)		this->curveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 244)		this->curveTo(x,(ye + cy2),x,(ye - ellipseHeight));
HXLINE( 245)		this->lineTo(x,(y + ellipseHeight));
HXLINE( 246)		this->curveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 247)		this->curveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 248)		this->lineTo((xe - ellipseWidth),y);
HXLINE( 249)		this->curveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 250)		this->curveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 251)		this->lineTo(xe,(ye - ellipseHeight));
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,_hx___drawRoundRect,(void))

Float GraphicsPath_obj::SIN45;

Float GraphicsPath_obj::TAN22;


hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding) {
	hx::ObjectPtr< GraphicsPath_obj > __this = new GraphicsPath_obj();
	__this->__construct(commands,data,__o_winding);
	return __this;
}

hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding) {
	GraphicsPath_obj *__this = (GraphicsPath_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsPath_obj), true, "openfl.display.GraphicsPath"));
	*(void **)__this = GraphicsPath_obj::_hx_vtable;
	__this->__construct(commands,data,__o_winding);
	return __this;
}

GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

hx::Val GraphicsPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return hx::Val( winding ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return hx::Val( curveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return hx::Val( wideLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return hx::Val( wideMoveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawRect") ) { return hx::Val( _hx___drawRect_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return hx::Val( cubicCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawCircle") ) { return hx::Val( _hx___drawCircle_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__drawEllipse") ) { return hx::Val( _hx___drawEllipse_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__drawRoundRect") ) { return hx::Val( _hx___drawRoundRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GraphicsPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
	}
	return false;
}

hx::Val GraphicsPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast<  ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GraphicsPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsPath_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(GraphicsPath_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(GraphicsPath_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsPath_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GraphicsPath_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GraphicsPath_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsPath_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GraphicsPath_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("wideLineTo","\x02","\xf3","\x82","\xc8"),
	HX_HCSTRING("wideMoveTo","\x5f","\x7f","\x8f","\xa8"),
	HX_HCSTRING("__drawCircle","\x54","\x68","\x64","\xd0"),
	HX_HCSTRING("__drawEllipse","\x1a","\xc6","\x46","\x9d"),
	HX_HCSTRING("__drawRect","\x68","\x6a","\x49","\x03"),
	HX_HCSTRING("__drawRoundRect","\xce","\xfc","\x5c","\x6a"),
	::String(null()) };

static void GraphicsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#endif

hx::Class GraphicsPath_obj::__mClass;

static ::String GraphicsPath_obj_sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	::String(null())
};

void GraphicsPath_obj::__register()
{
	hx::Object *dummy = new GraphicsPath_obj;
	GraphicsPath_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPath","\x7a","\xb7","\x47","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPath_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicsPath_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicsPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicsPath_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicsPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_34_boot)
HXDLIN(  34)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_35_boot)
HXDLIN(  35)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
}

} // end namespace openfl
} // end namespace display
