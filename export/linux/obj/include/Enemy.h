// Generated by Haxe 3.4.7
#ifndef INCLUDED_Enemy
#define INCLUDED_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Enemy_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();

	public:
		enum { _hx_ClassId = 0x03a88228 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Enemy"); }
		static hx::ObjectPtr< Enemy_obj > __new();
		static hx::ObjectPtr< Enemy_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		static void __boot();
		static int initial_velocity;
		static int velmod;
		static int _health;
		static int Enemytype;
		static int position;
		int StateSpawn;
		int Rspawn;
		 ::Enemy init(hx::Null< int >  X,hx::Null< int >  Y,hx::Null< Float >  VelocityX,hx::Null< Float >  VelocityY,::String Size);
		::Dynamic init_dyn();

		void update(Float elapsed);

		void kill();

		void decreaseHealth(hx::Null< int >  Amount);
		::Dynamic decreaseHealth_dyn();

};


#endif /* INCLUDED_Enemy */ 
