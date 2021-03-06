// Generated by Haxe 3.4.7
#ifndef INCLUDED_flixel_addons_display_FlxStarField2D
#define INCLUDED_flixel_addons_display_FlxStarField2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_display__FlxStarField_FlxStarField
#include <flixel/addons/display/_FlxStarField/FlxStarField.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxStarField2D)
HX_DECLARE_CLASS4(flixel,addons,display,_FlxStarField,FlxStarField)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxStarField2D_obj : public  ::flixel::addons::display::_FlxStarField::FlxStarField_obj
{
	public:
		typedef  ::flixel::addons::display::_FlxStarField::FlxStarField_obj super;
		typedef FlxStarField2D_obj OBJ_;
		FlxStarField2D_obj();

	public:
		enum { _hx_ClassId = 0x0f6124cf };

		void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxStarField2D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxStarField2D"); }
		static hx::ObjectPtr< FlxStarField2D_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount);
		static hx::ObjectPtr< FlxStarField2D_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxStarField2D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxStarField2D","\x28","\xde","\x9e","\x93"); }

		 ::flixel::math::FlxPoint starVelocityOffset;
		void destroy();

		void update(Float elapsed);

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxStarField2D */ 
