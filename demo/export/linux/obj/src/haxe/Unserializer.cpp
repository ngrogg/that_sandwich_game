// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_DefaultResolver
#include <haxe/_Unserializer/DefaultResolver.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_NullResolver
#include <haxe/_Unserializer/NullResolver.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2342b60103788fae_102_new,"haxe.Unserializer","new",0xa8f5e205,"haxe.Unserializer.new","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",102,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_128_setResolver,"haxe.Unserializer","setResolver",0x5545046d,"haxe.Unserializer.setResolver","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",128,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_147_readDigits,"haxe.Unserializer","readDigits",0x75598b17,"haxe.Unserializer.readDigits","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",147,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_172_readFloat,"haxe.Unserializer","readFloat",0x5bd86dcb,"haxe.Unserializer.readFloat","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",172,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_186_unserializeObject,"haxe.Unserializer","unserializeObject",0x1b3e66eb,"haxe.Unserializer.unserializeObject","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",186,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_201_unserializeEnum,"haxe.Unserializer","unserializeEnum",0x5018b02d,"haxe.Unserializer.unserializeEnum","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",201,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_233_unserialize,"haxe.Unserializer","unserialize",0x92cca30c,"haxe.Unserializer.unserialize","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",233,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_70_initCodes,"haxe.Unserializer","initCodes",0xee42ccdb,"haxe.Unserializer.initCodes","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",70,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_466_run,"haxe.Unserializer","run",0xa8f8f8f0,"haxe.Unserializer.run","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",466,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_63_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",63,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_65_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",65,0x94a17934)
HX_LOCAL_STACK_FRAME(_hx_pos_2342b60103788fae_68_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/home/oddone9139/.opam/default/share/haxe/std/haxe/Unserializer.hx",68,0x94a17934)
namespace haxe{

void Unserializer_obj::__construct(::String buf){
            	HX_GC_STACKFRAME(&_hx_pos_2342b60103788fae_102_new)
HXLINE( 103)		this->buf = buf;
HXLINE( 104)		this->length = buf.length;
HXLINE( 105)		this->pos = (int)0;
HXLINE( 109)		this->scache = ::Array_obj< ::String >::__new();
HXLINE( 110)		this->cache = ::cpp::VirtualArray_obj::__new();
HXLINE( 111)		 ::Dynamic r = ::haxe::Unserializer_obj::DEFAULT_RESOLVER;
HXLINE( 112)		if (hx::IsNull( r )) {
HXLINE( 113)			r =  ::haxe::_Unserializer::DefaultResolver_obj::__alloc( HX_CTX );
HXLINE( 114)			::haxe::Unserializer_obj::DEFAULT_RESOLVER = r;
            		}
HXLINE( 116)		this->resolver = r;
            	}

Dynamic Unserializer_obj::__CreateEmpty() { return new Unserializer_obj; }

void *Unserializer_obj::_hx_vtable = 0;

Dynamic Unserializer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Unserializer_obj > _hx_result = new Unserializer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Unserializer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7af2b435;
}

void Unserializer_obj::setResolver( ::Dynamic r){
            	HX_GC_STACKFRAME(&_hx_pos_2342b60103788fae_128_setResolver)
HXDLIN( 128)		if (hx::IsNull( r )) {
HXLINE( 129)			if (hx::IsNull( ::haxe::_Unserializer::NullResolver_obj::instance )) {
HXLINE( 129)				::haxe::_Unserializer::NullResolver_obj::instance =  ::haxe::_Unserializer::NullResolver_obj::__alloc( HX_CTX );
            			}
HXDLIN( 129)			this->resolver = ::haxe::_Unserializer::NullResolver_obj::instance;
            		}
            		else {
HXLINE( 131)			this->resolver = r;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,setResolver,(void))

int Unserializer_obj::readDigits(){
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_147_readDigits)
HXLINE( 148)		int k = (int)0;
HXLINE( 149)		bool s = false;
HXLINE( 150)		int fpos = this->pos;
HXLINE( 151)		while(true){
HXLINE( 152)			int c = this->buf.cca(this->pos);
HXLINE( 153)			if ((c == (int)0)) {
HXLINE( 154)				goto _hx_goto_2;
            			}
HXLINE( 155)			if ((c == (int)45)) {
HXLINE( 156)				if ((this->pos != fpos)) {
HXLINE( 157)					goto _hx_goto_2;
            				}
HXLINE( 158)				s = true;
HXLINE( 159)				this->pos++;
HXLINE( 160)				continue;
            			}
HXLINE( 162)			bool _hx_tmp;
HXDLIN( 162)			if ((c >= (int)48)) {
HXLINE( 162)				_hx_tmp = (c > (int)57);
            			}
            			else {
HXLINE( 162)				_hx_tmp = true;
            			}
HXDLIN( 162)			if (_hx_tmp) {
HXLINE( 163)				goto _hx_goto_2;
            			}
HXLINE( 164)			k = ((k * (int)10) + (c - (int)48));
HXLINE( 165)			this->pos++;
            		}
            		_hx_goto_2:;
HXLINE( 167)		if (s) {
HXLINE( 168)			k = (k * (int)-1);
            		}
HXLINE( 169)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readDigits,return )

Float Unserializer_obj::readFloat(){
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_172_readFloat)
HXLINE( 173)		int p1 = this->pos;
HXLINE( 174)		while(true){
HXLINE( 175)			int c = this->buf.cca(this->pos);
HXLINE( 176)			if ((c == (int)0)) {
HXLINE( 176)				goto _hx_goto_4;
            			}
HXLINE( 178)			bool _hx_tmp;
HXDLIN( 178)			bool _hx_tmp1;
HXDLIN( 178)			bool _hx_tmp2;
HXDLIN( 178)			if ((c >= (int)43)) {
HXLINE( 178)				_hx_tmp2 = (c < (int)58);
            			}
            			else {
HXLINE( 178)				_hx_tmp2 = false;
            			}
HXDLIN( 178)			if (!(_hx_tmp2)) {
HXLINE( 178)				_hx_tmp1 = (c == (int)101);
            			}
            			else {
HXLINE( 178)				_hx_tmp1 = true;
            			}
HXDLIN( 178)			if (!(_hx_tmp1)) {
HXLINE( 178)				_hx_tmp = (c == (int)69);
            			}
            			else {
HXLINE( 178)				_hx_tmp = true;
            			}
HXDLIN( 178)			if (_hx_tmp) {
HXLINE( 179)				this->pos++;
            			}
            			else {
HXLINE( 181)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE( 183)		::String _hx_tmp3 = this->buf;
HXDLIN( 183)		return ::Std_obj::parseFloat(_hx_tmp3.substr(p1,(this->pos - p1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readFloat,return )

void Unserializer_obj::unserializeObject( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_186_unserializeObject)
HXLINE( 187)		while(true){
HXLINE( 188)			if ((this->pos >= this->length)) {
HXLINE( 189)				HX_STACK_DO_THROW(HX_("Invalid object",e8,6c,b7,e2));
            			}
HXLINE( 190)			if ((this->buf.cca(this->pos) == (int)103)) {
HXLINE( 191)				goto _hx_goto_6;
            			}
HXLINE( 192)			::String k = ( (::String)(this->unserialize()) );
HXLINE( 193)			if (!(::Std_obj::is(k,hx::ClassOf< ::String >()))) {
HXLINE( 194)				HX_STACK_DO_THROW(HX_("Invalid object key",67,5e,4c,fb));
            			}
HXLINE( 195)			 ::Dynamic v = this->unserialize();
HXLINE( 196)			::Reflect_obj::setField(o,k,v);
            		}
            		_hx_goto_6:;
HXLINE( 198)		this->pos++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,unserializeObject,(void))

 ::Dynamic Unserializer_obj::unserializeEnum(hx::Class edecl,::String tag){
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_201_unserializeEnum)
HXLINE( 202)		if ((this->buf.cca(this->pos++) != (int)58)) {
HXLINE( 203)			HX_STACK_DO_THROW(HX_("Invalid enum format",ad,eb,77,c2));
            		}
HXLINE( 204)		int nargs = this->readDigits();
HXLINE( 205)		if ((nargs == (int)0)) {
HXLINE( 206)			return ::Type_obj::createEnum(edecl,tag,null());
            		}
HXLINE( 207)		::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 208)		while(true){
HXLINE( 208)			nargs = (nargs - (int)1);
HXDLIN( 208)			if (!(((nargs + (int)1) > (int)0))) {
HXLINE( 208)				goto _hx_goto_8;
            			}
HXLINE( 209)			args->push(this->unserialize());
            		}
            		_hx_goto_8:;
HXLINE( 210)		return ::Type_obj::createEnum(edecl,tag,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Unserializer_obj,unserializeEnum,return )

 ::Dynamic Unserializer_obj::unserialize(){
            	HX_GC_STACKFRAME(&_hx_pos_2342b60103788fae_233_unserialize)
HXLINE( 234)		{
HXLINE( 234)			int _g = this->buf.cca(this->pos++);
HXDLIN( 234)			switch((int)(_g)){
            				case (int)65: {
HXLINE( 441)					::String name = ( (::String)(this->unserialize()) );
HXLINE( 442)					hx::Class cl = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic)(name);
HXLINE( 443)					if (hx::IsNull( cl )) {
HXLINE( 444)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name));
            					}
HXLINE( 445)					return cl;
            				}
            				break;
            				case (int)66: {
HXLINE( 447)					::String name1 = ( (::String)(this->unserialize()) );
HXLINE( 448)					hx::Class e = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic)(name1);
HXLINE( 449)					if (hx::IsNull( e )) {
HXLINE( 450)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name1));
            					}
HXLINE( 451)					return e;
            				}
            				break;
            				case (int)67: {
HXLINE( 430)					::String name2 = ( (::String)(this->unserialize()) );
HXLINE( 431)					hx::Class cl1 = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic)(name2);
HXLINE( 432)					if (hx::IsNull( cl1 )) {
HXLINE( 433)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name2));
            					}
HXLINE( 434)					 ::Dynamic o = ::Type_obj::createEmptyInstance(cl1);
HXLINE( 435)					this->cache->push(o);
HXLINE( 436)					o->__Field(HX_("hxUnserialize",37,db,b9,86),hx::paccDynamic)(hx::ObjectPtr<OBJ_>(this));
HXLINE( 437)					if ((this->buf.cca(this->pos++) != (int)103)) {
HXLINE( 438)						HX_STACK_DO_THROW(HX_("Invalid custom data",30,fa,ef,08));
            					}
HXLINE( 439)					return o;
            				}
            				break;
            				case (int)77: {
HXLINE( 364)					 ::haxe::ds::ObjectMap h =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 365)					this->cache->push(h);
HXLINE( 366)					::String buf = this->buf;
HXLINE( 367)					while((this->buf.cca(this->pos) != (int)104)){
HXLINE( 368)						 ::Dynamic s = this->unserialize();
HXLINE( 369)						h->set(s,this->unserialize());
            					}
HXLINE( 371)					this->pos++;
HXLINE( 372)					return h;
            				}
            				break;
            				case (int)82: {
HXLINE( 296)					int n = this->readDigits();
HXLINE( 297)					bool _hx_tmp;
HXDLIN( 297)					if ((n >= (int)0)) {
HXLINE( 297)						_hx_tmp = (n >= this->scache->length);
            					}
            					else {
HXLINE( 297)						_hx_tmp = true;
            					}
HXDLIN( 297)					if (_hx_tmp) {
HXLINE( 298)						HX_STACK_DO_THROW(HX_("Invalid string reference",25,57,28,1b));
            					}
HXLINE( 299)					return this->scache->__get(n);
            				}
            				break;
            				case (int)97: {
HXLINE( 263)					::String buf1 = this->buf;
HXLINE( 264)					::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 265)					int cachePos = this->cache->get_length();
HXLINE( 266)					this->cache->push(a);
HXLINE( 267)					while(true){
HXLINE( 268)						int c = this->buf.cca(this->pos);
HXLINE( 269)						if ((c == (int)104)) {
HXLINE( 270)							this->pos++;
HXLINE( 271)							goto _hx_goto_11;
            						}
HXLINE( 273)						if ((c == (int)117)) {
HXLINE( 274)							this->pos++;
HXLINE( 275)							int n1 = this->readDigits();
HXLINE( 276)							a->set(((a->get_length() + n1) - (int)1),null());
            						}
            						else {
HXLINE( 278)							a->push(this->unserialize());
            						}
            					}
            					_hx_goto_11:;
HXLINE( 281)					return (this->cache->set(cachePos,_hx_reslove_virtual_array(a)));
            				}
            				break;
            				case (int)98: {
HXLINE( 341)					 ::haxe::ds::StringMap h1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 342)					this->cache->push(h1);
HXLINE( 343)					::String buf2 = this->buf;
HXLINE( 344)					while((this->buf.cca(this->pos) != (int)104)){
HXLINE( 345)						::String s1 = ( (::String)(this->unserialize()) );
HXLINE( 346)						h1->set(s1,this->unserialize());
            					}
HXLINE( 348)					this->pos++;
HXLINE( 349)					return h1;
            				}
            				break;
            				case (int)99: {
HXLINE( 303)					::String name3 = ( (::String)(this->unserialize()) );
HXLINE( 304)					hx::Class cl2 = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic)(name3);
HXLINE( 305)					if (hx::IsNull( cl2 )) {
HXLINE( 306)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name3));
            					}
HXLINE( 307)					 ::Dynamic o1 = ::Type_obj::createEmptyInstance(cl2);
HXLINE( 308)					this->cache->push(o1);
HXLINE( 309)					this->unserializeObject(o1);
HXLINE( 310)					return o1;
            				}
            				break;
            				case (int)100: {
HXLINE( 246)					return this->readFloat();
            				}
            				break;
            				case (int)102: {
HXLINE( 240)					return false;
            				}
            				break;
            				case (int)105: {
HXLINE( 244)					return this->readDigits();
            				}
            				break;
            				case (int)106: {
HXLINE( 320)					::String name4 = ( (::String)(this->unserialize()) );
HXLINE( 321)					hx::Class edecl = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic)(name4);
HXLINE( 322)					if (hx::IsNull( edecl )) {
HXLINE( 323)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name4));
            					}
HXLINE( 324)					this->pos++;
HXLINE( 325)					int index = this->readDigits();
HXLINE( 326)					::String tag = ::Type_obj::getEnumConstructs(edecl)->__get(index);
HXLINE( 327)					if (hx::IsNull( tag )) {
HXLINE( 328)						HX_STACK_DO_THROW((((HX_("Unknown enum index ",57,ca,63,30) + name4) + HX_("@",40,00,00,00)) + index));
            					}
HXLINE( 329)					 ::Dynamic e1 = this->unserializeEnum(edecl,tag);
HXLINE( 330)					this->cache->push(e1);
HXLINE( 331)					return e1;
            				}
            				break;
            				case (int)107: {
HXLINE( 257)					return ::Math_obj::NaN;
            				}
            				break;
            				case (int)108: {
HXLINE( 333)					 ::List l =  ::List_obj::__alloc( HX_CTX );
HXLINE( 334)					this->cache->push(l);
HXLINE( 335)					::String buf3 = this->buf;
HXLINE( 336)					while((this->buf.cca(this->pos) != (int)104)){
HXLINE( 337)						l->add(this->unserialize());
            					}
HXLINE( 338)					this->pos++;
HXLINE( 339)					return l;
            				}
            				break;
            				case (int)109: {
HXLINE( 259)					return ::Math_obj::NEGATIVE_INFINITY;
            				}
            				break;
            				case (int)110: {
HXLINE( 236)					return null();
            				}
            				break;
            				case (int)111: {
HXLINE( 286)					 ::Dynamic o2 =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 287)					this->cache->push(o2);
HXLINE( 288)					this->unserializeObject(o2);
HXLINE( 289)					return o2;
            				}
            				break;
            				case (int)112: {
HXLINE( 261)					return ::Math_obj::POSITIVE_INFINITY;
            				}
            				break;
            				case (int)113: {
HXLINE( 351)					 ::haxe::ds::IntMap h2 =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 352)					this->cache->push(h2);
HXLINE( 353)					::String buf4 = this->buf;
HXLINE( 354)					int c1 = this->buf.cca(this->pos++);
HXLINE( 355)					while((c1 == (int)58)){
HXLINE( 356)						int i = this->readDigits();
HXLINE( 357)						h2->set(i,this->unserialize());
HXLINE( 358)						c1 = this->buf.cca(this->pos++);
            					}
HXLINE( 360)					if ((c1 != (int)104)) {
HXLINE( 361)						HX_STACK_DO_THROW(HX_("Invalid IntMap format",e1,c2,b1,71));
            					}
HXLINE( 362)					return h2;
            				}
            				break;
            				case (int)114: {
HXLINE( 291)					int n2 = this->readDigits();
HXLINE( 292)					bool _hx_tmp1;
HXDLIN( 292)					if ((n2 >= (int)0)) {
HXLINE( 292)						_hx_tmp1 = (n2 >= this->cache->get_length());
            					}
            					else {
HXLINE( 292)						_hx_tmp1 = true;
            					}
HXDLIN( 292)					if (_hx_tmp1) {
HXLINE( 293)						HX_STACK_DO_THROW(HX_("Invalid reference",42,99,8f,7d));
            					}
HXLINE( 294)					return this->cache->__get(n2);
            				}
            				break;
            				case (int)115: {
HXLINE( 389)					int len = this->readDigits();
HXLINE( 390)					::String buf5 = this->buf;
HXLINE( 391)					bool _hx_tmp2;
HXDLIN( 391)					if ((this->buf.cca(this->pos++) == (int)58)) {
HXLINE( 391)						_hx_tmp2 = ((this->length - this->pos) < len);
            					}
            					else {
HXLINE( 391)						_hx_tmp2 = true;
            					}
HXDLIN( 391)					if (_hx_tmp2) {
HXLINE( 392)						HX_STACK_DO_THROW(HX_("Invalid bytes length",e4,8a,d3,50));
            					}
HXLINE( 396)					::Array< int > codes = ::haxe::Unserializer_obj::CODES;
HXLINE( 397)					if (hx::IsNull( codes )) {
HXLINE( 398)						codes = ::haxe::Unserializer_obj::initCodes();
HXLINE( 399)						::haxe::Unserializer_obj::CODES = codes;
            					}
HXLINE( 401)					int i1 = this->pos;
HXLINE( 402)					int rest = ((int)len & (int)(int)3);
HXLINE( 403)					int size;
HXDLIN( 403)					if ((rest >= (int)2)) {
HXLINE( 403)						size = (rest - (int)1);
            					}
            					else {
HXLINE( 403)						size = (int)0;
            					}
HXDLIN( 403)					int size1 = ((((int)len >> (int)(int)2) * (int)3) + size);
HXLINE( 404)					int max = (i1 + (len - rest));
HXLINE( 405)					 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(size1);
HXLINE( 406)					int bpos = (int)0;
HXLINE( 407)					while((i1 < max)){
HXLINE( 408)						i1 = (i1 + (int)1);
HXDLIN( 408)						int c11 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 409)						i1 = (i1 + (int)1);
HXDLIN( 409)						int c2 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 410)						{
HXLINE( 410)							bpos = (bpos + (int)1);
HXDLIN( 410)							::Array< unsigned char > bytes1 = bytes->b;
HXDLIN( 410)							bytes1[(bpos - (int)1)] = ((int)((int)c11 << (int)(int)2) | (int)((int)c2 >> (int)(int)4));
            						}
HXLINE( 411)						i1 = (i1 + (int)1);
HXDLIN( 411)						int c3 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 412)						{
HXLINE( 412)							bpos = (bpos + (int)1);
HXDLIN( 412)							::Array< unsigned char > bytes2 = bytes->b;
HXDLIN( 412)							bytes2[(bpos - (int)1)] = ((int)((int)c2 << (int)(int)4) | (int)((int)c3 >> (int)(int)2));
            						}
HXLINE( 413)						i1 = (i1 + (int)1);
HXDLIN( 413)						int c4 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 414)						{
HXLINE( 414)							bpos = (bpos + (int)1);
HXDLIN( 414)							::Array< unsigned char > bytes3 = bytes->b;
HXDLIN( 414)							bytes3[(bpos - (int)1)] = ((int)((int)c3 << (int)(int)6) | (int)c4);
            						}
            					}
HXLINE( 416)					if ((rest >= (int)2)) {
HXLINE( 417)						i1 = (i1 + (int)1);
HXDLIN( 417)						int c12 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 418)						i1 = (i1 + (int)1);
HXDLIN( 418)						int c21 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 419)						{
HXLINE( 419)							bpos = (bpos + (int)1);
HXDLIN( 419)							::Array< unsigned char > bytes4 = bytes->b;
HXDLIN( 419)							bytes4[(bpos - (int)1)] = ((int)((int)c12 << (int)(int)2) | (int)((int)c21 >> (int)(int)4));
            						}
HXLINE( 420)						if ((rest == (int)3)) {
HXLINE( 421)							i1 = (i1 + (int)1);
HXDLIN( 421)							int c31 = codes->__get(buf5.cca((i1 - (int)1)));
HXLINE( 422)							{
HXLINE( 422)								bpos = (bpos + (int)1);
HXDLIN( 422)								::Array< unsigned char > bytes5 = bytes->b;
HXDLIN( 422)								bytes5[(bpos - (int)1)] = ((int)((int)c21 << (int)(int)4) | (int)((int)c31 >> (int)(int)2));
            							}
            						}
            					}
HXLINE( 426)					 ::haxe::Unserializer _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 426)					_hx_tmp3->pos = (_hx_tmp3->pos + len);
HXLINE( 427)					this->cache->push(bytes);
HXLINE( 428)					return bytes;
            				}
            				break;
            				case (int)116: {
HXLINE( 238)					return true;
            				}
            				break;
            				case (int)118: {
HXLINE( 374)					 ::Date d;
HXLINE( 375)					bool _hx_tmp4;
HXDLIN( 375)					bool _hx_tmp5;
HXDLIN( 375)					bool _hx_tmp6;
HXDLIN( 375)					bool _hx_tmp7;
HXDLIN( 375)					bool _hx_tmp8;
HXDLIN( 375)					bool _hx_tmp9;
HXDLIN( 375)					bool _hx_tmp10;
HXDLIN( 375)					bool _hx_tmp11;
HXDLIN( 375)					if ((this->buf.cca(this->pos) >= (int)48)) {
HXLINE( 375)						_hx_tmp11 = (this->buf.cca(this->pos) <= (int)57);
            					}
            					else {
HXLINE( 375)						_hx_tmp11 = false;
            					}
HXDLIN( 375)					if (_hx_tmp11) {
HXLINE( 375)						_hx_tmp10 = (this->buf.cca((this->pos + (int)1)) >= (int)48);
            					}
            					else {
HXLINE( 375)						_hx_tmp10 = false;
            					}
HXDLIN( 375)					if (_hx_tmp10) {
HXLINE( 375)						_hx_tmp9 = (this->buf.cca((this->pos + (int)1)) <= (int)57);
            					}
            					else {
HXLINE( 375)						_hx_tmp9 = false;
            					}
HXDLIN( 375)					if (_hx_tmp9) {
HXLINE( 375)						_hx_tmp8 = (this->buf.cca((this->pos + (int)2)) >= (int)48);
            					}
            					else {
HXLINE( 375)						_hx_tmp8 = false;
            					}
HXDLIN( 375)					if (_hx_tmp8) {
HXLINE( 375)						_hx_tmp7 = (this->buf.cca((this->pos + (int)2)) <= (int)57);
            					}
            					else {
HXLINE( 375)						_hx_tmp7 = false;
            					}
HXDLIN( 375)					if (_hx_tmp7) {
HXLINE( 375)						_hx_tmp6 = (this->buf.cca((this->pos + (int)3)) >= (int)48);
            					}
            					else {
HXLINE( 375)						_hx_tmp6 = false;
            					}
HXDLIN( 375)					if (_hx_tmp6) {
HXLINE( 375)						_hx_tmp5 = (this->buf.cca((this->pos + (int)3)) <= (int)57);
            					}
            					else {
HXLINE( 375)						_hx_tmp5 = false;
            					}
HXDLIN( 375)					if (_hx_tmp5) {
HXLINE( 375)						_hx_tmp4 = (this->buf.cca((this->pos + (int)4)) == (int)45);
            					}
            					else {
HXLINE( 375)						_hx_tmp4 = false;
            					}
HXDLIN( 375)					if (_hx_tmp4) {
HXLINE( 382)						d = ::Date_obj::fromString(this->buf.substr(this->pos,(int)19));
HXLINE( 383)						 ::haxe::Unserializer _hx_tmp12 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 383)						_hx_tmp12->pos = (_hx_tmp12->pos + (int)19);
            					}
            					else {
HXLINE( 385)						d = ::Date_obj::fromTime(this->readFloat());
            					}
HXLINE( 386)					this->cache->push(d);
HXLINE( 387)					return d;
            				}
            				break;
            				case (int)119: {
HXLINE( 312)					::String name5 = ( (::String)(this->unserialize()) );
HXLINE( 313)					hx::Class edecl1 = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic)(name5);
HXLINE( 314)					if (hx::IsNull( edecl1 )) {
HXLINE( 315)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name5));
            					}
HXLINE( 316)					 ::Dynamic e2 = this->unserializeEnum(edecl1,( (::String)(this->unserialize()) ));
HXLINE( 317)					this->cache->push(e2);
HXLINE( 318)					return e2;
            				}
            				break;
            				case (int)120: {
HXLINE( 301)					HX_STACK_DO_THROW(this->unserialize());
            				}
            				break;
            				case (int)121: {
HXLINE( 248)					int len1 = this->readDigits();
HXLINE( 249)					bool _hx_tmp13;
HXDLIN( 249)					if ((this->buf.cca(this->pos++) == (int)58)) {
HXLINE( 249)						_hx_tmp13 = ((this->length - this->pos) < len1);
            					}
            					else {
HXLINE( 249)						_hx_tmp13 = true;
            					}
HXDLIN( 249)					if (_hx_tmp13) {
HXLINE( 250)						HX_STACK_DO_THROW(HX_("Invalid string length",4c,89,20,c9));
            					}
HXLINE( 251)					::String s2 = this->buf.substr(this->pos,len1);
HXLINE( 252)					 ::haxe::Unserializer _hx_tmp14 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)					_hx_tmp14->pos = (_hx_tmp14->pos + len1);
HXLINE( 253)					s2 = ::StringTools_obj::urlDecode(s2);
HXLINE( 254)					this->scache->push(s2);
HXLINE( 255)					return s2;
            				}
            				break;
            				case (int)122: {
HXLINE( 242)					return (int)0;
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 454)		this->pos--;
HXLINE( 455)		::String _hx_tmp15 = ((HX_("Invalid char ",81,66,ec,29) + this->buf.charAt(this->pos)) + HX_(" at position ",0a,c2,01,e0));
HXDLIN( 455)		HX_STACK_DO_THROW((_hx_tmp15 + this->pos));
HXDLIN( 455)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,unserialize,return )

 ::Dynamic Unserializer_obj::DEFAULT_RESOLVER;

::String Unserializer_obj::BASE64;

::Array< int > Unserializer_obj::CODES;

::Array< int > Unserializer_obj::initCodes(){
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_70_initCodes)
HXLINE(  71)		::Array< int > codes = ::Array_obj< int >::__new();
HXLINE(  77)		{
HXLINE(  77)			int _g1 = (int)0;
HXDLIN(  77)			int _g = ::haxe::Unserializer_obj::BASE64.length;
HXDLIN(  77)			while((_g1 < _g)){
HXLINE(  77)				_g1 = (_g1 + (int)1);
HXDLIN(  77)				int i = (_g1 - (int)1);
HXLINE(  78)				codes[::haxe::Unserializer_obj::BASE64.cca(i)] = i;
            			}
            		}
HXLINE(  79)		return codes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,initCodes,return )

 ::Dynamic Unserializer_obj::run(::String v){
            	HX_GC_STACKFRAME(&_hx_pos_2342b60103788fae_466_run)
HXDLIN( 466)		return  ::haxe::Unserializer_obj::__alloc( HX_CTX ,v)->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,run,return )


hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__new(::String buf) {
	hx::ObjectPtr< Unserializer_obj > __this = new Unserializer_obj();
	__this->__construct(buf);
	return __this;
}

hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__alloc(hx::Ctx *_hx_ctx,::String buf) {
	Unserializer_obj *__this = (Unserializer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Unserializer_obj), true, "haxe.Unserializer"));
	*(void **)__this = Unserializer_obj::_hx_vtable;
	__this->__construct(buf);
	return __this;
}

Unserializer_obj::Unserializer_obj()
{
}

void Unserializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Unserializer);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(scache,"scache");
	HX_MARK_MEMBER_NAME(resolver,"resolver");
	HX_MARK_END_CLASS();
}

void Unserializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(scache,"scache");
	HX_VISIT_MEMBER_NAME(resolver,"resolver");
}

hx::Val Unserializer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return hx::Val( cache ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"scache") ) { return hx::Val( scache ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { return hx::Val( resolver ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readFloat") ) { return hx::Val( readFloat_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDigits") ) { return hx::Val( readDigits_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setResolver") ) { return hx::Val( setResolver_dyn() ); }
		if (HX_FIELD_EQ(inName,"unserialize") ) { return hx::Val( unserialize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unserializeEnum") ) { return hx::Val( unserializeEnum_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unserializeObject") ) { return hx::Val( unserializeObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Unserializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { outValue = ( CODES ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { outValue = ( BASE64 ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initCodes") ) { outValue = initCodes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { outValue = ( DEFAULT_RESOLVER ); return true; }
	}
	return false;
}

hx::Val Unserializer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scache") ) { scache=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { resolver=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Unserializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { CODES=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { DEFAULT_RESOLVER=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Unserializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"));
	outFields->push(HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Unserializer_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Unserializer_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Unserializer_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Unserializer_obj,scache),HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Unserializer_obj,resolver),HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Unserializer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Unserializer_obj::DEFAULT_RESOLVER,HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde")},
	{hx::fsString,(void *) &Unserializer_obj::BASE64,HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Unserializer_obj::CODES,HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Unserializer_obj_sMemberFields[] = {
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"),
	HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"),
	HX_HCSTRING("setResolver","\xc8","\x45","\x11","\x3d"),
	HX_HCSTRING("readDigits","\x1c","\xee","\xa3","\xae"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("unserializeObject","\x86","\x9e","\x52","\x9f"),
	HX_HCSTRING("unserializeEnum","\x08","\x3b","\x10","\x7f"),
	HX_HCSTRING("unserialize","\x67","\xe4","\x98","\x7a"),
	::String(null()) };

static void Unserializer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_MARK_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_MARK_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unserializer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#endif

hx::Class Unserializer_obj::__mClass;

static ::String Unserializer_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde"),
	HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07"),
	HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8"),
	HX_HCSTRING("initCodes","\x76","\x71","\xe8","\x65"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void Unserializer_obj::__register()
{
	hx::Object *dummy = new Unserializer_obj;
	Unserializer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Unserializer","\x93","\x7b","\x79","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unserializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Unserializer_obj::__SetStatic;
	__mClass->mMarkFunc = Unserializer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Unserializer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Unserializer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Unserializer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Unserializer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Unserializer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Unserializer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Unserializer_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2342b60103788fae_63_boot)
HXDLIN(  63)		DEFAULT_RESOLVER =  ::haxe::_Unserializer::DefaultResolver_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_65_boot)
HXDLIN(  65)		BASE64 = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:",d4,3b,03,7f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2342b60103788fae_68_boot)
HXDLIN(  68)		CODES = null();
            	}
}

} // end namespace haxe
