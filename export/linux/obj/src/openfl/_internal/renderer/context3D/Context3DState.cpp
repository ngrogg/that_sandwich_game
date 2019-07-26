// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DState
#include <openfl/_internal/renderer/context3D/Context3DState.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60bc3ea1ea35efff_79_new,"openfl._internal.renderer.context3D.Context3DState","new",0xd2160e4c,"openfl._internal.renderer.context3D.Context3DState.new","openfl/_internal/renderer/context3D/Context3DState.hx",79,0x9f748564)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_60bc3ea1ea35efff_79_new)
HXLINE(  81)		this->backBufferEnableDepthAndStencil = false;
HXLINE(  82)		this->blendDestinationAlphaFactor = (int)9;
HXLINE(  83)		this->blendSourceAlphaFactor = (int)2;
HXLINE(  84)		this->blendDestinationRGBFactor = (int)9;
HXLINE(  85)		this->blendSourceRGBFactor = (int)2;
HXLINE(  86)		this->colorMaskRed = true;
HXLINE(  87)		this->colorMaskGreen = true;
HXLINE(  88)		this->colorMaskBlue = true;
HXLINE(  89)		this->colorMaskAlpha = true;
HXLINE(  90)		this->culling = (int)3;
HXLINE(  91)		this->depthCompareMode = (int)4;
HXLINE(  92)		this->depthMask = true;
HXLINE(  93)		this->samplerStates = ::Array_obj< ::Dynamic>::__new();
HXLINE(  94)		this->scissorRectangle =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  95)		this->stencilCompareMode = (int)0;
HXLINE(  96)		this->stencilDepthFail = (int)5;
HXLINE(  97)		this->stencilFail = (int)5;
HXLINE(  98)		this->stencilPass = (int)5;
HXLINE(  99)		this->stencilReadMask = (int)255;
HXLINE( 100)		this->stencilReferenceValue = (int)0;
HXLINE( 101)		this->stencilTriangleFace = (int)2;
HXLINE( 102)		this->stencilWriteMask = (int)255;
HXLINE( 103)		this->textures = ::Array_obj< ::Dynamic>::__new();
HXLINE( 104)		this->_hx___frontFaceGLCCW = true;
HXLINE( 107)		this->_hx___glBlendEquation = (int)32774;
            	}

Dynamic Context3DState_obj::__CreateEmpty() { return new Context3DState_obj; }

void *Context3DState_obj::_hx_vtable = 0;

Dynamic Context3DState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DState_obj > _hx_result = new Context3DState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fea29ea;
}


hx::ObjectPtr< Context3DState_obj > Context3DState_obj::__new() {
	hx::ObjectPtr< Context3DState_obj > __this = new Context3DState_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Context3DState_obj > Context3DState_obj::__alloc(hx::Ctx *_hx_ctx) {
	Context3DState_obj *__this = (Context3DState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DState_obj), true, "openfl._internal.renderer.context3D.Context3DState"));
	*(void **)__this = Context3DState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Context3DState_obj::Context3DState_obj()
{
}

void Context3DState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DState);
	HX_MARK_MEMBER_NAME(backBufferEnableDepthAndStencil,"backBufferEnableDepthAndStencil");
	HX_MARK_MEMBER_NAME(blendDestinationAlphaFactor,"blendDestinationAlphaFactor");
	HX_MARK_MEMBER_NAME(blendSourceAlphaFactor,"blendSourceAlphaFactor");
	HX_MARK_MEMBER_NAME(blendDestinationRGBFactor,"blendDestinationRGBFactor");
	HX_MARK_MEMBER_NAME(blendSourceRGBFactor,"blendSourceRGBFactor");
	HX_MARK_MEMBER_NAME(colorMaskRed,"colorMaskRed");
	HX_MARK_MEMBER_NAME(colorMaskGreen,"colorMaskGreen");
	HX_MARK_MEMBER_NAME(colorMaskBlue,"colorMaskBlue");
	HX_MARK_MEMBER_NAME(colorMaskAlpha,"colorMaskAlpha");
	HX_MARK_MEMBER_NAME(culling,"culling");
	HX_MARK_MEMBER_NAME(depthCompareMode,"depthCompareMode");
	HX_MARK_MEMBER_NAME(depthMask,"depthMask");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_MARK_MEMBER_NAME(renderToTextureAntiAlias,"renderToTextureAntiAlias");
	HX_MARK_MEMBER_NAME(renderToTextureDepthStencil,"renderToTextureDepthStencil");
	HX_MARK_MEMBER_NAME(renderToTextureSurfaceSelector,"renderToTextureSurfaceSelector");
	HX_MARK_MEMBER_NAME(samplerStates,"samplerStates");
	HX_MARK_MEMBER_NAME(scissorEnabled,"scissorEnabled");
	HX_MARK_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_MARK_MEMBER_NAME(stencilFail,"stencilFail");
	HX_MARK_MEMBER_NAME(stencilPass,"stencilPass");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_MARK_MEMBER_NAME(stencilTriangleFace,"stencilTriangleFace");
	HX_MARK_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_hx___currentGLArrayBuffer,"__currentGLArrayBuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLElementArrayBuffer,"__currentGLElementArrayBuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLFramebuffer,"__currentGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLTexture2D,"__currentGLTexture2D");
	HX_MARK_MEMBER_NAME(_hx___currentGLTextureCubeMap,"__currentGLTextureCubeMap");
	HX_MARK_MEMBER_NAME(_hx___enableGLBlend,"__enableGLBlend");
	HX_MARK_MEMBER_NAME(_hx___enableGLCullFace,"__enableGLCullFace");
	HX_MARK_MEMBER_NAME(_hx___enableGLDepthTest,"__enableGLDepthTest");
	HX_MARK_MEMBER_NAME(_hx___enableGLScissorTest,"__enableGLScissorTest");
	HX_MARK_MEMBER_NAME(_hx___enableGLStencilTest,"__enableGLStencilTest");
	HX_MARK_MEMBER_NAME(_hx___frontFaceGLCCW,"__frontFaceGLCCW");
	HX_MARK_MEMBER_NAME(_hx___glBlendEquation,"__glBlendEquation");
	HX_MARK_MEMBER_NAME(_hx___primaryGLFramebuffer,"__primaryGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___rttDepthGLRenderbuffer,"__rttDepthGLRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___rttGLFramebuffer,"__rttGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___rttGLRenderbuffer,"__rttGLRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___rttStencilGLRenderbuffer,"__rttStencilGLRenderbuffer");
	HX_MARK_END_CLASS();
}

void Context3DState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backBufferEnableDepthAndStencil,"backBufferEnableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(blendDestinationAlphaFactor,"blendDestinationAlphaFactor");
	HX_VISIT_MEMBER_NAME(blendSourceAlphaFactor,"blendSourceAlphaFactor");
	HX_VISIT_MEMBER_NAME(blendDestinationRGBFactor,"blendDestinationRGBFactor");
	HX_VISIT_MEMBER_NAME(blendSourceRGBFactor,"blendSourceRGBFactor");
	HX_VISIT_MEMBER_NAME(colorMaskRed,"colorMaskRed");
	HX_VISIT_MEMBER_NAME(colorMaskGreen,"colorMaskGreen");
	HX_VISIT_MEMBER_NAME(colorMaskBlue,"colorMaskBlue");
	HX_VISIT_MEMBER_NAME(colorMaskAlpha,"colorMaskAlpha");
	HX_VISIT_MEMBER_NAME(culling,"culling");
	HX_VISIT_MEMBER_NAME(depthCompareMode,"depthCompareMode");
	HX_VISIT_MEMBER_NAME(depthMask,"depthMask");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_VISIT_MEMBER_NAME(renderToTextureAntiAlias,"renderToTextureAntiAlias");
	HX_VISIT_MEMBER_NAME(renderToTextureDepthStencil,"renderToTextureDepthStencil");
	HX_VISIT_MEMBER_NAME(renderToTextureSurfaceSelector,"renderToTextureSurfaceSelector");
	HX_VISIT_MEMBER_NAME(samplerStates,"samplerStates");
	HX_VISIT_MEMBER_NAME(scissorEnabled,"scissorEnabled");
	HX_VISIT_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_VISIT_MEMBER_NAME(stencilFail,"stencilFail");
	HX_VISIT_MEMBER_NAME(stencilPass,"stencilPass");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_VISIT_MEMBER_NAME(stencilTriangleFace,"stencilTriangleFace");
	HX_VISIT_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_hx___currentGLArrayBuffer,"__currentGLArrayBuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLElementArrayBuffer,"__currentGLElementArrayBuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLFramebuffer,"__currentGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLTexture2D,"__currentGLTexture2D");
	HX_VISIT_MEMBER_NAME(_hx___currentGLTextureCubeMap,"__currentGLTextureCubeMap");
	HX_VISIT_MEMBER_NAME(_hx___enableGLBlend,"__enableGLBlend");
	HX_VISIT_MEMBER_NAME(_hx___enableGLCullFace,"__enableGLCullFace");
	HX_VISIT_MEMBER_NAME(_hx___enableGLDepthTest,"__enableGLDepthTest");
	HX_VISIT_MEMBER_NAME(_hx___enableGLScissorTest,"__enableGLScissorTest");
	HX_VISIT_MEMBER_NAME(_hx___enableGLStencilTest,"__enableGLStencilTest");
	HX_VISIT_MEMBER_NAME(_hx___frontFaceGLCCW,"__frontFaceGLCCW");
	HX_VISIT_MEMBER_NAME(_hx___glBlendEquation,"__glBlendEquation");
	HX_VISIT_MEMBER_NAME(_hx___primaryGLFramebuffer,"__primaryGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttDepthGLRenderbuffer,"__rttDepthGLRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttGLFramebuffer,"__rttGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttGLRenderbuffer,"__rttGLRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttStencilGLRenderbuffer,"__rttStencilGLRenderbuffer");
}

hx::Val Context3DState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { return hx::Val( culling ); }
		if (HX_FIELD_EQ(inName,"program") ) { return hx::Val( program ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return hx::Val( textures ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMask") ) { return hx::Val( depthMask ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilFail") ) { return hx::Val( stencilFail ); }
		if (HX_FIELD_EQ(inName,"stencilPass") ) { return hx::Val( stencilPass ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorMaskRed") ) { return hx::Val( colorMaskRed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorMaskBlue") ) { return hx::Val( colorMaskBlue ); }
		if (HX_FIELD_EQ(inName,"samplerStates") ) { return hx::Val( samplerStates ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorMaskGreen") ) { return hx::Val( colorMaskGreen ); }
		if (HX_FIELD_EQ(inName,"colorMaskAlpha") ) { return hx::Val( colorMaskAlpha ); }
		if (HX_FIELD_EQ(inName,"scissorEnabled") ) { return hx::Val( scissorEnabled ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return hx::Val( renderToTexture ); }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return hx::Val( stencilReadMask ); }
		if (HX_FIELD_EQ(inName,"__enableGLBlend") ) { return hx::Val( _hx___enableGLBlend ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return hx::Val( depthCompareMode ); }
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { return hx::Val( scissorRectangle ); }
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { return hx::Val( stencilDepthFail ); }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { return hx::Val( stencilWriteMask ); }
		if (HX_FIELD_EQ(inName,"__frontFaceGLCCW") ) { return hx::Val( _hx___frontFaceGLCCW ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glBlendEquation") ) { return hx::Val( _hx___glBlendEquation ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return hx::Val( stencilCompareMode ); }
		if (HX_FIELD_EQ(inName,"__enableGLCullFace") ) { return hx::Val( _hx___enableGLCullFace ); }
		if (HX_FIELD_EQ(inName,"__rttGLFramebuffer") ) { return hx::Val( _hx___rttGLFramebuffer ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stencilTriangleFace") ) { return hx::Val( stencilTriangleFace ); }
		if (HX_FIELD_EQ(inName,"__enableGLDepthTest") ) { return hx::Val( _hx___enableGLDepthTest ); }
		if (HX_FIELD_EQ(inName,"__rttGLRenderbuffer") ) { return hx::Val( _hx___rttGLRenderbuffer ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blendSourceRGBFactor") ) { return hx::Val( blendSourceRGBFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLTexture2D") ) { return hx::Val( _hx___currentGLTexture2D ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { return hx::Val( stencilReferenceValue ); }
		if (HX_FIELD_EQ(inName,"__enableGLScissorTest") ) { return hx::Val( _hx___enableGLScissorTest ); }
		if (HX_FIELD_EQ(inName,"__enableGLStencilTest") ) { return hx::Val( _hx___enableGLStencilTest ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendSourceAlphaFactor") ) { return hx::Val( blendSourceAlphaFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLArrayBuffer") ) { return hx::Val( _hx___currentGLArrayBuffer ); }
		if (HX_FIELD_EQ(inName,"__currentGLFramebuffer") ) { return hx::Val( _hx___currentGLFramebuffer ); }
		if (HX_FIELD_EQ(inName,"__primaryGLFramebuffer") ) { return hx::Val( _hx___primaryGLFramebuffer ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderToTextureAntiAlias") ) { return hx::Val( renderToTextureAntiAlias ); }
		if (HX_FIELD_EQ(inName,"__rttDepthGLRenderbuffer") ) { return hx::Val( _hx___rttDepthGLRenderbuffer ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"blendDestinationRGBFactor") ) { return hx::Val( blendDestinationRGBFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLTextureCubeMap") ) { return hx::Val( _hx___currentGLTextureCubeMap ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__rttStencilGLRenderbuffer") ) { return hx::Val( _hx___rttStencilGLRenderbuffer ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"blendDestinationAlphaFactor") ) { return hx::Val( blendDestinationAlphaFactor ); }
		if (HX_FIELD_EQ(inName,"renderToTextureDepthStencil") ) { return hx::Val( renderToTextureDepthStencil ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__currentGLElementArrayBuffer") ) { return hx::Val( _hx___currentGLElementArrayBuffer ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"renderToTextureSurfaceSelector") ) { return hx::Val( renderToTextureSurfaceSelector ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"backBufferEnableDepthAndStencil") ) { return hx::Val( backBufferEnableDepthAndStencil ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Context3DState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { culling=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMask") ) { depthMask=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilFail") ) { stencilFail=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilPass") ) { stencilPass=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorMaskRed") ) { colorMaskRed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorMaskBlue") ) { colorMaskBlue=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerStates") ) { samplerStates=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorMaskGreen") ) { colorMaskGreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMaskAlpha") ) { colorMaskAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scissorEnabled") ) { scissorEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { renderToTexture=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLBlend") ) { _hx___enableGLBlend=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { depthCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { scissorRectangle=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { stencilDepthFail=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { stencilWriteMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frontFaceGLCCW") ) { _hx___frontFaceGLCCW=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glBlendEquation") ) { _hx___glBlendEquation=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLCullFace") ) { _hx___enableGLCullFace=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttGLFramebuffer") ) { _hx___rttGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stencilTriangleFace") ) { stencilTriangleFace=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLDepthTest") ) { _hx___enableGLDepthTest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttGLRenderbuffer") ) { _hx___rttGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blendSourceRGBFactor") ) { blendSourceRGBFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLTexture2D") ) { _hx___currentGLTexture2D=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { stencilReferenceValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLScissorTest") ) { _hx___enableGLScissorTest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLStencilTest") ) { _hx___enableGLStencilTest=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendSourceAlphaFactor") ) { blendSourceAlphaFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLArrayBuffer") ) { _hx___currentGLArrayBuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLFramebuffer") ) { _hx___currentGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__primaryGLFramebuffer") ) { _hx___primaryGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderToTextureAntiAlias") ) { renderToTextureAntiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttDepthGLRenderbuffer") ) { _hx___rttDepthGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"blendDestinationRGBFactor") ) { blendDestinationRGBFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLTextureCubeMap") ) { _hx___currentGLTextureCubeMap=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__rttStencilGLRenderbuffer") ) { _hx___rttStencilGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"blendDestinationAlphaFactor") ) { blendDestinationAlphaFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderToTextureDepthStencil") ) { renderToTextureDepthStencil=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__currentGLElementArrayBuffer") ) { _hx___currentGLElementArrayBuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"renderToTextureSurfaceSelector") ) { renderToTextureSurfaceSelector=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"backBufferEnableDepthAndStencil") ) { backBufferEnableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backBufferEnableDepthAndStencil","\x7e","\x25","\x35","\x2a"));
	outFields->push(HX_HCSTRING("blendDestinationAlphaFactor","\x10","\xcc","\x9a","\x03"));
	outFields->push(HX_HCSTRING("blendSourceAlphaFactor","\x21","\xaa","\xfd","\x97"));
	outFields->push(HX_HCSTRING("blendDestinationRGBFactor","\x3f","\x6a","\x8d","\x0a"));
	outFields->push(HX_HCSTRING("blendSourceRGBFactor","\x10","\xf2","\xe1","\x7a"));
	outFields->push(HX_HCSTRING("colorMaskRed","\xa2","\xa4","\xa5","\x24"));
	outFields->push(HX_HCSTRING("colorMaskGreen","\x54","\x10","\x02","\x88"));
	outFields->push(HX_HCSTRING("colorMaskBlue","\x29","\x5e","\xbc","\xe1"));
	outFields->push(HX_HCSTRING("colorMaskAlpha","\xef","\xa8","\xab","\x0f"));
	outFields->push(HX_HCSTRING("culling","\x70","\xe2","\x87","\x53"));
	outFields->push(HX_HCSTRING("depthCompareMode","\x65","\x5e","\x47","\xb5"));
	outFields->push(HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7"));
	outFields->push(HX_HCSTRING("renderToTextureAntiAlias","\xc4","\x2e","\x27","\x75"));
	outFields->push(HX_HCSTRING("renderToTextureDepthStencil","\xc3","\x08","\xd5","\x8a"));
	outFields->push(HX_HCSTRING("renderToTextureSurfaceSelector","\x22","\xbf","\x22","\xb8"));
	outFields->push(HX_HCSTRING("samplerStates","\x6a","\x88","\x27","\x8c"));
	outFields->push(HX_HCSTRING("scissorEnabled","\xc5","\x7f","\xd4","\xe4"));
	outFields->push(HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c"));
	outFields->push(HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"));
	outFields->push(HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67"));
	outFields->push(HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40"));
	outFields->push(HX_HCSTRING("stencilPass","\xed","\x7c","\x4b","\x47"));
	outFields->push(HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60"));
	outFields->push(HX_HCSTRING("stencilTriangleFace","\xa1","\xb7","\xe8","\x53"));
	outFields->push(HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e"));
	outFields->push(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("__currentGLArrayBuffer","\x9b","\x60","\x91","\x80"));
	outFields->push(HX_HCSTRING("__currentGLElementArrayBuffer","\x3b","\xc1","\xf2","\x45"));
	outFields->push(HX_HCSTRING("__currentGLFramebuffer","\x0f","\x1e","\xfd","\x3c"));
	outFields->push(HX_HCSTRING("__currentGLTexture2D","\x0f","\x3e","\x84","\x97"));
	outFields->push(HX_HCSTRING("__currentGLTextureCubeMap","\x2a","\x25","\x61","\xd4"));
	outFields->push(HX_HCSTRING("__enableGLBlend","\xa9","\x64","\x22","\x80"));
	outFields->push(HX_HCSTRING("__enableGLCullFace","\x17","\xb2","\xc4","\x8b"));
	outFields->push(HX_HCSTRING("__enableGLDepthTest","\x4d","\xab","\x5b","\x64"));
	outFields->push(HX_HCSTRING("__enableGLScissorTest","\xe6","\xa8","\x79","\xfe"));
	outFields->push(HX_HCSTRING("__enableGLStencilTest","\xc6","\xae","\xc6","\xe5"));
	outFields->push(HX_HCSTRING("__frontFaceGLCCW","\x2c","\x60","\x32","\xbd"));
	outFields->push(HX_HCSTRING("__glBlendEquation","\x78","\x8c","\x54","\xe0"));
	outFields->push(HX_HCSTRING("__primaryGLFramebuffer","\xe6","\x38","\x3c","\x31"));
	outFields->push(HX_HCSTRING("__rttDepthGLRenderbuffer","\xac","\xd6","\xcf","\x01"));
	outFields->push(HX_HCSTRING("__rttGLFramebuffer","\x36","\x14","\x43","\x13"));
	outFields->push(HX_HCSTRING("__rttGLRenderbuffer","\x6d","\xad","\xfa","\x4d"));
	outFields->push(HX_HCSTRING("__rttStencilGLRenderbuffer","\xe5","\x14","\xba","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Context3DState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Context3DState_obj,backBufferEnableDepthAndStencil),HX_HCSTRING("backBufferEnableDepthAndStencil","\x7e","\x25","\x35","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,blendDestinationAlphaFactor),HX_HCSTRING("blendDestinationAlphaFactor","\x10","\xcc","\x9a","\x03")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,blendSourceAlphaFactor),HX_HCSTRING("blendSourceAlphaFactor","\x21","\xaa","\xfd","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,blendDestinationRGBFactor),HX_HCSTRING("blendDestinationRGBFactor","\x3f","\x6a","\x8d","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,blendSourceRGBFactor),HX_HCSTRING("blendSourceRGBFactor","\x10","\xf2","\xe1","\x7a")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskRed),HX_HCSTRING("colorMaskRed","\xa2","\xa4","\xa5","\x24")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskGreen),HX_HCSTRING("colorMaskGreen","\x54","\x10","\x02","\x88")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskBlue),HX_HCSTRING("colorMaskBlue","\x29","\x5e","\xbc","\xe1")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskAlpha),HX_HCSTRING("colorMaskAlpha","\xef","\xa8","\xab","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,culling),HX_HCSTRING("culling","\x70","\xe2","\x87","\x53")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,depthCompareMode),HX_HCSTRING("depthCompareMode","\x65","\x5e","\x47","\xb5")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,depthMask),HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3DState_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{hx::fsObject /*::openfl::display3D::textures::TextureBase*/ ,(int)offsetof(Context3DState_obj,renderToTexture),HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,renderToTextureAntiAlias),HX_HCSTRING("renderToTextureAntiAlias","\xc4","\x2e","\x27","\x75")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,renderToTextureDepthStencil),HX_HCSTRING("renderToTextureDepthStencil","\xc3","\x08","\xd5","\x8a")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,renderToTextureSurfaceSelector),HX_HCSTRING("renderToTextureSurfaceSelector","\x22","\xbf","\x22","\xb8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3DState_obj,samplerStates),HX_HCSTRING("samplerStates","\x6a","\x88","\x27","\x8c")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,scissorEnabled),HX_HCSTRING("scissorEnabled","\xc5","\x7f","\xd4","\xe4")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Context3DState_obj,scissorRectangle),HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,stencilCompareMode),HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,stencilDepthFail),HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,stencilFail),HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,stencilPass),HX_HCSTRING("stencilPass","\xed","\x7c","\x4b","\x47")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,stencilReadMask),HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,stencilReferenceValue),HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DState_obj,stencilTriangleFace),HX_HCSTRING("stencilTriangleFace","\xa1","\xb7","\xe8","\x53")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,stencilWriteMask),HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3DState_obj,textures),HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(Context3DState_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___currentGLArrayBuffer),HX_HCSTRING("__currentGLArrayBuffer","\x9b","\x60","\x91","\x80")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___currentGLElementArrayBuffer),HX_HCSTRING("__currentGLElementArrayBuffer","\x3b","\xc1","\xf2","\x45")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___currentGLFramebuffer),HX_HCSTRING("__currentGLFramebuffer","\x0f","\x1e","\xfd","\x3c")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___currentGLTexture2D),HX_HCSTRING("__currentGLTexture2D","\x0f","\x3e","\x84","\x97")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___currentGLTextureCubeMap),HX_HCSTRING("__currentGLTextureCubeMap","\x2a","\x25","\x61","\xd4")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLBlend),HX_HCSTRING("__enableGLBlend","\xa9","\x64","\x22","\x80")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLCullFace),HX_HCSTRING("__enableGLCullFace","\x17","\xb2","\xc4","\x8b")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLDepthTest),HX_HCSTRING("__enableGLDepthTest","\x4d","\xab","\x5b","\x64")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLScissorTest),HX_HCSTRING("__enableGLScissorTest","\xe6","\xa8","\x79","\xfe")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLStencilTest),HX_HCSTRING("__enableGLStencilTest","\xc6","\xae","\xc6","\xe5")},
	{hx::fsBool,(int)offsetof(Context3DState_obj,_hx___frontFaceGLCCW),HX_HCSTRING("__frontFaceGLCCW","\x2c","\x60","\x32","\xbd")},
	{hx::fsInt,(int)offsetof(Context3DState_obj,_hx___glBlendEquation),HX_HCSTRING("__glBlendEquation","\x78","\x8c","\x54","\xe0")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___primaryGLFramebuffer),HX_HCSTRING("__primaryGLFramebuffer","\xe6","\x38","\x3c","\x31")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___rttDepthGLRenderbuffer),HX_HCSTRING("__rttDepthGLRenderbuffer","\xac","\xd6","\xcf","\x01")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___rttGLFramebuffer),HX_HCSTRING("__rttGLFramebuffer","\x36","\x14","\x43","\x13")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___rttGLRenderbuffer),HX_HCSTRING("__rttGLRenderbuffer","\x6d","\xad","\xfa","\x4d")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Context3DState_obj,_hx___rttStencilGLRenderbuffer),HX_HCSTRING("__rttStencilGLRenderbuffer","\xe5","\x14","\xba","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Context3DState_obj_sStaticStorageInfo = 0;
#endif

static ::String Context3DState_obj_sMemberFields[] = {
	HX_HCSTRING("backBufferEnableDepthAndStencil","\x7e","\x25","\x35","\x2a"),
	HX_HCSTRING("blendDestinationAlphaFactor","\x10","\xcc","\x9a","\x03"),
	HX_HCSTRING("blendSourceAlphaFactor","\x21","\xaa","\xfd","\x97"),
	HX_HCSTRING("blendDestinationRGBFactor","\x3f","\x6a","\x8d","\x0a"),
	HX_HCSTRING("blendSourceRGBFactor","\x10","\xf2","\xe1","\x7a"),
	HX_HCSTRING("colorMaskRed","\xa2","\xa4","\xa5","\x24"),
	HX_HCSTRING("colorMaskGreen","\x54","\x10","\x02","\x88"),
	HX_HCSTRING("colorMaskBlue","\x29","\x5e","\xbc","\xe1"),
	HX_HCSTRING("colorMaskAlpha","\xef","\xa8","\xab","\x0f"),
	HX_HCSTRING("culling","\x70","\xe2","\x87","\x53"),
	HX_HCSTRING("depthCompareMode","\x65","\x5e","\x47","\xb5"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7"),
	HX_HCSTRING("renderToTextureAntiAlias","\xc4","\x2e","\x27","\x75"),
	HX_HCSTRING("renderToTextureDepthStencil","\xc3","\x08","\xd5","\x8a"),
	HX_HCSTRING("renderToTextureSurfaceSelector","\x22","\xbf","\x22","\xb8"),
	HX_HCSTRING("samplerStates","\x6a","\x88","\x27","\x8c"),
	HX_HCSTRING("scissorEnabled","\xc5","\x7f","\xd4","\xe4"),
	HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c"),
	HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"),
	HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67"),
	HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40"),
	HX_HCSTRING("stencilPass","\xed","\x7c","\x4b","\x47"),
	HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"),
	HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60"),
	HX_HCSTRING("stencilTriangleFace","\xa1","\xb7","\xe8","\x53"),
	HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e"),
	HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("__currentGLArrayBuffer","\x9b","\x60","\x91","\x80"),
	HX_HCSTRING("__currentGLElementArrayBuffer","\x3b","\xc1","\xf2","\x45"),
	HX_HCSTRING("__currentGLFramebuffer","\x0f","\x1e","\xfd","\x3c"),
	HX_HCSTRING("__currentGLTexture2D","\x0f","\x3e","\x84","\x97"),
	HX_HCSTRING("__currentGLTextureCubeMap","\x2a","\x25","\x61","\xd4"),
	HX_HCSTRING("__enableGLBlend","\xa9","\x64","\x22","\x80"),
	HX_HCSTRING("__enableGLCullFace","\x17","\xb2","\xc4","\x8b"),
	HX_HCSTRING("__enableGLDepthTest","\x4d","\xab","\x5b","\x64"),
	HX_HCSTRING("__enableGLScissorTest","\xe6","\xa8","\x79","\xfe"),
	HX_HCSTRING("__enableGLStencilTest","\xc6","\xae","\xc6","\xe5"),
	HX_HCSTRING("__frontFaceGLCCW","\x2c","\x60","\x32","\xbd"),
	HX_HCSTRING("__glBlendEquation","\x78","\x8c","\x54","\xe0"),
	HX_HCSTRING("__primaryGLFramebuffer","\xe6","\x38","\x3c","\x31"),
	HX_HCSTRING("__rttDepthGLRenderbuffer","\xac","\xd6","\xcf","\x01"),
	HX_HCSTRING("__rttGLFramebuffer","\x36","\x14","\x43","\x13"),
	HX_HCSTRING("__rttGLRenderbuffer","\x6d","\xad","\xfa","\x4d"),
	HX_HCSTRING("__rttStencilGLRenderbuffer","\xe5","\x14","\xba","\x53"),
	::String(null()) };

static void Context3DState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DState_obj::__mClass,"__mClass");
};

#endif

hx::Class Context3DState_obj::__mClass;

void Context3DState_obj::__register()
{
	hx::Object *dummy = new Context3DState_obj;
	Context3DState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.context3D.Context3DState","\x5a","\x38","\xce","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Context3DState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
