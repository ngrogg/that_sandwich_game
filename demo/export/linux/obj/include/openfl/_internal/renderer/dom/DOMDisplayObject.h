// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMDisplayObject
#define INCLUDED_openfl__internal_renderer_dom_DOMDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMDisplayObject)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES DOMDisplayObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DOMDisplayObject_obj OBJ_;
		DOMDisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x50121d3a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.dom.DOMDisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.dom.DOMDisplayObject"); }

		hx::ObjectPtr< DOMDisplayObject_obj > __new() {
			hx::ObjectPtr< DOMDisplayObject_obj > __this = new DOMDisplayObject_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DOMDisplayObject_obj > __alloc(hx::Ctx *_hx_ctx) {
			DOMDisplayObject_obj *__this = (DOMDisplayObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DOMDisplayObject_obj), false, "openfl._internal.renderer.dom.DOMDisplayObject"));
			*(void **)__this = DOMDisplayObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMDisplayObject_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DOMDisplayObject","\xdf","\xd6","\x25","\x8f"); }

		static void clear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMDisplayObject */ 
