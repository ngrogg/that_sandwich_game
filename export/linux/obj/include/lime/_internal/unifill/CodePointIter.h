// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime__internal_unifill_CodePointIter
#define INCLUDED_lime__internal_unifill_CodePointIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_internal,unifill,CodePointIter)

namespace lime{
namespace _internal{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES CodePointIter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CodePointIter_obj OBJ_;
		CodePointIter_obj();

	public:
		enum { _hx_ClassId = 0x1e65c187 };

		void __construct(::String s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.unifill.CodePointIter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._internal.unifill.CodePointIter"); }
		static hx::ObjectPtr< CodePointIter_obj > __new(::String s);
		static hx::ObjectPtr< CodePointIter_obj > __alloc(hx::Ctx *_hx_ctx,::String s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodePointIter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CodePointIter","\x7b","\x7e","\x98","\xb4"); }

		::String string;
		int index;
		int endIndex;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int i;
		int next();
		::Dynamic next_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace unifill

#endif /* INCLUDED_lime__internal_unifill_CodePointIter */ 
