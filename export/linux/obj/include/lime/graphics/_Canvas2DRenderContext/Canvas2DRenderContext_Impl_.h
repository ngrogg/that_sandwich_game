// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_graphics__Canvas2DRenderContext_Canvas2DRenderContext_Impl_
#define INCLUDED_lime_graphics__Canvas2DRenderContext_Canvas2DRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_Canvas2DRenderContext,Canvas2DRenderContext_Impl_)

namespace lime{
namespace graphics{
namespace _Canvas2DRenderContext{


class HXCPP_CLASS_ATTRIBUTES Canvas2DRenderContext_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Canvas2DRenderContext_Impl__obj OBJ_;
		Canvas2DRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x18c2f63f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_"); }

		hx::ObjectPtr< Canvas2DRenderContext_Impl__obj > __new() {
			hx::ObjectPtr< Canvas2DRenderContext_Impl__obj > __this = new Canvas2DRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Canvas2DRenderContext_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Canvas2DRenderContext_Impl__obj *__this = (Canvas2DRenderContext_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Canvas2DRenderContext_Impl__obj), false, "lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_"));
			*(void **)__this = Canvas2DRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Canvas2DRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Canvas2DRenderContext_Impl_","\xef","\xf1","\x11","\xd9"); }

		static  ::Dynamic fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _Canvas2DRenderContext

#endif /* INCLUDED_lime_graphics__Canvas2DRenderContext_Canvas2DRenderContext_Impl_ */ 
