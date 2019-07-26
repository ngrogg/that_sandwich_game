// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_
#define INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLProgram,GLProgram_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLProgram{


class HXCPP_CLASS_ATTRIBUTES GLProgram_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLProgram_Impl__obj OBJ_;
		GLProgram_Impl__obj();

	public:
		enum { _hx_ClassId = 0x699ee368 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLProgram.GLProgram_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLProgram.GLProgram_Impl_"); }

		hx::ObjectPtr< GLProgram_Impl__obj > __new() {
			hx::ObjectPtr< GLProgram_Impl__obj > __this = new GLProgram_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLProgram_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GLProgram_Impl__obj *__this = (GLProgram_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLProgram_Impl__obj), false, "lime.graphics.opengl._GLProgram.GLProgram_Impl_"));
			*(void **)__this = GLProgram_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLProgram_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLProgram_Impl_","\xbf","\xa0","\xd5","\x0b"); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

		static  ::lime::graphics::opengl::GLObject fromSources( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl,::String vertexSource,::String fragmentSource);
		static ::Dynamic fromSources_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLProgram

#endif /* INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_ */ 
