// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_AbstractNoise
#include <openfl/_internal/utils/AbstractNoise.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9149717b628345a7_86_new,"openfl._internal.utils.PerlinNoise","new",0x0294f3cb,"openfl._internal.utils.PerlinNoise.new","openfl/_internal/utils/PerlinNoise.hx",86,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_100_fill,"openfl._internal.utils.PerlinNoise","fill",0x3a79a8b8,"openfl._internal.utils.PerlinNoise.fill","openfl/_internal/utils/PerlinNoise.hx",100,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_197_noise,"openfl._internal.utils.PerlinNoise","noise",0x8f23a3c5,"openfl._internal.utils.PerlinNoise.noise","openfl/_internal/utils/PerlinNoise.hx",197,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_260_setSeed,"openfl._internal.utils.PerlinNoise","setSeed",0x6ac37b1e,"openfl._internal.utils.PerlinNoise.setSeed","openfl/_internal/utils/PerlinNoise.hx",260,0x13a5c608)
HX_LOCAL_STACK_FRAME(_hx_pos_9149717b628345a7_22_boot,"openfl._internal.utils.PerlinNoise","boot",0x37d95e67,"openfl._internal.utils.PerlinNoise.boot","openfl/_internal/utils/PerlinNoise.hx",22,0x13a5c608)
static const int _hx_array_data_42eeb259_9[] = {
	(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,
};
namespace openfl{
namespace _internal{
namespace utils{

void PerlinNoise_obj::__construct(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold){
bool stitch = __o_stitch.Default(false);
Float stitch_threshold = __o_stitch_threshold.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_86_new)
HXLINE(  87)		super::__construct(seed,octaves,channels,grayScale,falloff,stitch,stitch_threshold);
HXLINE(  89)		this->p_perm = ::Array_obj< int >::__new(0);
HXLINE(  91)		{
HXLINE(  91)			int _g = (int)0;
HXDLIN(  91)			while((_g < (int)512)){
HXLINE(  91)				_g = (_g + (int)1);
HXDLIN(  91)				int i = (_g - (int)1);
HXLINE(  92)				::Array< int > _hx_tmp = this->p_perm;
HXDLIN(  92)				::Array< int > _hx_tmp1 = ::openfl::_internal::utils::PerlinNoise_obj::P;
HXDLIN(  92)				_hx_tmp[i] = _hx_tmp1->__get(((int)i & (int)(int)255));
            			}
            		}
HXLINE(  95)		this->base_factor = ((Float)0.03125);
HXLINE(  97)		this->setSeed(seed);
            	}

Dynamic PerlinNoise_obj::__CreateEmpty() { return new PerlinNoise_obj; }

void *PerlinNoise_obj::_hx_vtable = 0;

Dynamic PerlinNoise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PerlinNoise_obj > _hx_result = new PerlinNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool PerlinNoise_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a4a4f8f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a4a4f8f;
	} else {
		return inClassId==(int)0x6189bcdd;
	}
}

void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_100_fill)
HXLINE( 101)		int width = bitmap->width;
HXLINE( 102)		int height = bitmap->height;
HXLINE( 104)		int octaves = this->octaves;
HXLINE( 105)		::Array< Float > octaves_frequencies = this->octaves_frequencies;
HXLINE( 106)		::Array< Float > octaves_persistences = this->octaves_persistences;
HXLINE( 108)		bool isRed = (((int)(int)1 & (int)this->channels) == (int)1);
HXLINE( 109)		bool isGreen = (((int)(int)2 & (int)this->channels) == (int)2);
HXLINE( 110)		bool isBlue = (((int)(int)4 & (int)this->channels) == (int)4);
HXLINE( 112)		int channels = (int)0;
HXLINE( 114)		if (isRed) {
HXLINE( 115)			channels = (channels + (int)1);
            		}
HXLINE( 118)		if (isGreen) {
HXLINE( 119)			channels = (channels + (int)1);
            		}
HXLINE( 122)		if (isBlue) {
HXLINE( 123)			channels = (channels + (int)1);
            		}
HXLINE( 126)		bool grayscale = this->grayscale;
HXLINE( 128)		int stitch_w = ::Std_obj::_hx_int((this->stitch_threshold * width));
HXLINE( 129)		int stitch_h = ::Std_obj::_hx_int((this->stitch_threshold * height));
HXLINE( 131)		Float base_x = ((_scale_x * this->base_factor) + this->x_offset);
HXLINE( 133)		_scale_y = ((_scale_y * this->base_factor) + this->y_offset);
HXLINE( 134)		_scale_z = ((_scale_z * this->base_factor) + this->z_offset);
HXLINE( 136)		Float g_offset = ((Float)1.0);
HXLINE( 137)		Float b_offset = ((Float)2.0);
HXLINE( 139)		{
HXLINE( 139)			int _g1 = (int)0;
HXDLIN( 139)			int _g = height;
HXDLIN( 139)			while((_g1 < _g)){
HXLINE( 139)				_g1 = (_g1 + (int)1);
HXDLIN( 139)				int py = (_g1 - (int)1);
HXLINE( 140)				_scale_x = base_x;
HXLINE( 142)				{
HXLINE( 142)					int _g3 = (int)0;
HXDLIN( 142)					int _g2 = width;
HXDLIN( 142)					while((_g3 < _g2)){
HXLINE( 142)						_g3 = (_g3 + (int)1);
HXDLIN( 142)						int px = (_g3 - (int)1);
HXLINE( 143)						Float color1 = ((Float)0.0);
HXLINE( 144)						Float color2 = ((Float)0.0);
HXLINE( 145)						Float color3 = ((Float)0.0);
HXLINE( 147)						{
HXLINE( 147)							int _g5 = (int)0;
HXDLIN( 147)							int _g4 = octaves;
HXDLIN( 147)							while((_g5 < _g4)){
HXLINE( 147)								_g5 = (_g5 + (int)1);
HXDLIN( 147)								int i = (_g5 - (int)1);
HXLINE( 148)								Float frequency = octaves_frequencies->__get(i);
HXLINE( 149)								Float persistence = octaves_persistences->__get(i);
HXLINE( 151)								color1 = (color1 + (this->noise((_scale_x * frequency),(_scale_y * frequency),(_scale_z * frequency)) * persistence));
HXLINE( 153)								if (!(grayscale)) {
HXLINE( 154)									if (((int)1 < channels)) {
HXLINE( 155)										color2 = (color2 + (this->noise(((_scale_x + g_offset) * frequency),((_scale_y + g_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
HXLINE( 158)									if (((int)2 < channels)) {
HXLINE( 159)										color3 = (color3 + (this->noise(((_scale_x + b_offset) * frequency),((_scale_y + b_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
            								}
            							}
            						}
HXLINE( 164)						int color = (int)0;
HXLINE( 166)						if (grayscale) {
HXLINE( 167)							color = this->color(color1,color1,color1);
            						}
            						else {
HXLINE( 168)							bool _hx_tmp;
HXDLIN( 168)							bool _hx_tmp1;
HXDLIN( 168)							if (isRed) {
HXLINE( 168)								_hx_tmp1 = isGreen;
            							}
            							else {
HXLINE( 168)								_hx_tmp1 = false;
            							}
HXDLIN( 168)							if (_hx_tmp1) {
HXLINE( 168)								_hx_tmp = isBlue;
            							}
            							else {
HXLINE( 168)								_hx_tmp = false;
            							}
HXDLIN( 168)							if (_hx_tmp) {
HXLINE( 169)								color = this->color(color1,color2,color3);
            							}
            							else {
HXLINE( 170)								bool _hx_tmp2;
HXDLIN( 170)								if (isRed) {
HXLINE( 170)									_hx_tmp2 = isGreen;
            								}
            								else {
HXLINE( 170)									_hx_tmp2 = false;
            								}
HXDLIN( 170)								if (_hx_tmp2) {
HXLINE( 171)									color = this->color(color1,color2,null());
            								}
            								else {
HXLINE( 172)									bool _hx_tmp3;
HXDLIN( 172)									if (isRed) {
HXLINE( 172)										_hx_tmp3 = isBlue;
            									}
            									else {
HXLINE( 172)										_hx_tmp3 = false;
            									}
HXDLIN( 172)									if (_hx_tmp3) {
HXLINE( 173)										color = this->color(color1,null(),color2);
            									}
            									else {
HXLINE( 174)										bool _hx_tmp4;
HXDLIN( 174)										if (isGreen) {
HXLINE( 174)											_hx_tmp4 = isBlue;
            										}
            										else {
HXLINE( 174)											_hx_tmp4 = false;
            										}
HXDLIN( 174)										if (_hx_tmp4) {
HXLINE( 175)											color = this->color(null(),color1,color2);
            										}
            										else {
HXLINE( 176)											if (isRed) {
HXLINE( 177)												color = this->color(color1,null(),null());
            											}
            											else {
HXLINE( 178)												if (isGreen) {
HXLINE( 179)													color = this->color(null(),color1,null());
            												}
            												else {
HXLINE( 180)													if (isBlue) {
HXLINE( 181)														color = this->color(null(),null(),color1);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE( 184)						if (this->stitch) {
HXLINE( 185)							color = this->stitching(bitmap,color,px,py,stitch_w,stitch_h,width,height);
            						}
HXLINE( 188)						bitmap->setPixel32(px,py,color);
HXLINE( 190)						_scale_x = (_scale_x + this->base_factor);
            					}
            				}
HXLINE( 193)				_scale_y = (_scale_y + this->base_factor);
            			}
            		}
            	}


Float PerlinNoise_obj::noise(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_197_noise)
HXLINE( 198)		Float xf = (x - hx::Mod(x,(int)1));
HXLINE( 199)		Float yf = (y - hx::Mod(y,(int)1));
HXLINE( 200)		Float zf = (z - hx::Mod(z,(int)1));
HXLINE( 202)		x = (x - xf);
HXLINE( 203)		y = (y - yf);
HXLINE( 204)		z = (z - zf);
HXLINE( 206)		int X = ((int)::Std_obj::_hx_int(xf) & (int)(int)255);
HXLINE( 207)		int Y = ((int)::Std_obj::_hx_int(yf) & (int)(int)255);
HXLINE( 208)		int Z = ((int)::Std_obj::_hx_int(zf) & (int)(int)255);
HXLINE( 210)		Float u = this->fade(x);
HXLINE( 211)		Float v = this->fade(y);
HXLINE( 212)		Float w = this->fade(z);
HXLINE( 214)		int A = (this->p_perm->__get(X) + Y);
HXLINE( 215)		int AA = (this->p_perm->__get(A) + Z);
HXLINE( 216)		::Array< int > AB = this->p_perm;
HXDLIN( 216)		int AB1 = (AB->__get((A + (int)1)) + Z);
HXLINE( 217)		::Array< int > B = this->p_perm;
HXDLIN( 217)		int B1 = (B->__get((X + (int)1)) + Y);
HXLINE( 218)		int BA = (this->p_perm->__get(B1) + Z);
HXLINE( 219)		::Array< int > BB = this->p_perm;
HXDLIN( 219)		int BB1 = (BB->__get((B1 + (int)1)) + Z);
HXLINE( 221)		Float x1 = (x - (int)1);
HXLINE( 222)		Float y1 = (y - (int)1);
HXLINE( 223)		Float z1 = (z - (int)1);
HXLINE( 225)		::Array< int > hash = this->p_perm;
HXDLIN( 225)		int hash1 = ((int)hash->__get((BB1 + (int)1)) & (int)(int)15);
HXLINE( 226)		Float g1;
HXDLIN( 226)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 226)			if ((hash1 < (int)8)) {
HXLINE( 226)				g1 = x1;
            			}
            			else {
HXLINE( 226)				g1 = y1;
            			}
            		}
            		else {
HXLINE( 226)			if ((hash1 < (int)8)) {
HXLINE( 226)				g1 = -(x1);
            			}
            			else {
HXLINE( 226)				g1 = -(y1);
            			}
            		}
HXDLIN( 226)		Float g11;
HXDLIN( 226)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 226)			if ((hash1 < (int)4)) {
HXLINE( 226)				g11 = y1;
            			}
            			else {
HXLINE( 226)				if ((hash1 == (int)12)) {
HXLINE( 226)					g11 = x1;
            				}
            				else {
HXLINE( 226)					g11 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 226)			if ((hash1 < (int)4)) {
HXLINE( 226)				g11 = -(y1);
            			}
            			else {
HXLINE( 226)				if ((hash1 == (int)14)) {
HXLINE( 226)					g11 = -(x1);
            				}
            				else {
HXLINE( 226)					g11 = -(z1);
            				}
            			}
            		}
HXDLIN( 226)		Float g12 = (g1 + g11);
HXLINE( 228)		::Array< int > hash2 = this->p_perm;
HXDLIN( 228)		hash1 = ((int)hash2->__get((AB1 + (int)1)) & (int)(int)15);
HXLINE( 229)		Float g2;
HXDLIN( 229)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 229)			if ((hash1 < (int)8)) {
HXLINE( 229)				g2 = x;
            			}
            			else {
HXLINE( 229)				g2 = y1;
            			}
            		}
            		else {
HXLINE( 229)			if ((hash1 < (int)8)) {
HXLINE( 229)				g2 = -(x);
            			}
            			else {
HXLINE( 229)				g2 = -(y1);
            			}
            		}
HXDLIN( 229)		Float g21;
HXDLIN( 229)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 229)			if ((hash1 < (int)4)) {
HXLINE( 229)				g21 = y1;
            			}
            			else {
HXLINE( 229)				if ((hash1 == (int)12)) {
HXLINE( 229)					g21 = x;
            				}
            				else {
HXLINE( 229)					g21 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 229)			if ((hash1 < (int)4)) {
HXLINE( 229)				g21 = -(y1);
            			}
            			else {
HXLINE( 229)				if ((hash1 == (int)14)) {
HXLINE( 229)					g21 = -(x);
            				}
            				else {
HXLINE( 229)					g21 = -(z1);
            				}
            			}
            		}
HXDLIN( 229)		Float g22 = (g2 + g21);
HXLINE( 231)		::Array< int > hash3 = this->p_perm;
HXDLIN( 231)		hash1 = ((int)hash3->__get((BA + (int)1)) & (int)(int)15);
HXLINE( 232)		Float g3;
HXDLIN( 232)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 232)			if ((hash1 < (int)8)) {
HXLINE( 232)				g3 = x1;
            			}
            			else {
HXLINE( 232)				g3 = y;
            			}
            		}
            		else {
HXLINE( 232)			if ((hash1 < (int)8)) {
HXLINE( 232)				g3 = -(x1);
            			}
            			else {
HXLINE( 232)				g3 = -(y);
            			}
            		}
HXDLIN( 232)		Float g31;
HXDLIN( 232)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 232)			if ((hash1 < (int)4)) {
HXLINE( 232)				g31 = y;
            			}
            			else {
HXLINE( 232)				if ((hash1 == (int)12)) {
HXLINE( 232)					g31 = x1;
            				}
            				else {
HXLINE( 232)					g31 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 232)			if ((hash1 < (int)4)) {
HXLINE( 232)				g31 = -(y);
            			}
            			else {
HXLINE( 232)				if ((hash1 == (int)14)) {
HXLINE( 232)					g31 = -(x1);
            				}
            				else {
HXLINE( 232)					g31 = -(z1);
            				}
            			}
            		}
HXDLIN( 232)		Float g32 = (g3 + g31);
HXLINE( 234)		::Array< int > hash4 = this->p_perm;
HXDLIN( 234)		hash1 = ((int)hash4->__get((AA + (int)1)) & (int)(int)15);
HXLINE( 235)		Float g4;
HXDLIN( 235)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 235)			if ((hash1 < (int)8)) {
HXLINE( 235)				g4 = x;
            			}
            			else {
HXLINE( 235)				g4 = y;
            			}
            		}
            		else {
HXLINE( 235)			if ((hash1 < (int)8)) {
HXLINE( 235)				g4 = -(x);
            			}
            			else {
HXLINE( 235)				g4 = -(y);
            			}
            		}
HXDLIN( 235)		Float g41;
HXDLIN( 235)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 235)			if ((hash1 < (int)4)) {
HXLINE( 235)				g41 = y;
            			}
            			else {
HXLINE( 235)				if ((hash1 == (int)12)) {
HXLINE( 235)					g41 = x;
            				}
            				else {
HXLINE( 235)					g41 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 235)			if ((hash1 < (int)4)) {
HXLINE( 235)				g41 = -(y);
            			}
            			else {
HXLINE( 235)				if ((hash1 == (int)14)) {
HXLINE( 235)					g41 = -(x);
            				}
            				else {
HXLINE( 235)					g41 = -(z1);
            				}
            			}
            		}
HXDLIN( 235)		Float g42 = (g4 + g41);
HXLINE( 237)		hash1 = ((int)this->p_perm->__get(BB1) & (int)(int)15);
HXLINE( 238)		Float g5;
HXDLIN( 238)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 238)			if ((hash1 < (int)8)) {
HXLINE( 238)				g5 = x1;
            			}
            			else {
HXLINE( 238)				g5 = y1;
            			}
            		}
            		else {
HXLINE( 238)			if ((hash1 < (int)8)) {
HXLINE( 238)				g5 = -(x1);
            			}
            			else {
HXLINE( 238)				g5 = -(y1);
            			}
            		}
HXDLIN( 238)		Float g51;
HXDLIN( 238)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 238)			if ((hash1 < (int)4)) {
HXLINE( 238)				g51 = y1;
            			}
            			else {
HXLINE( 238)				if ((hash1 == (int)12)) {
HXLINE( 238)					g51 = x1;
            				}
            				else {
HXLINE( 238)					g51 = z;
            				}
            			}
            		}
            		else {
HXLINE( 238)			if ((hash1 < (int)4)) {
HXLINE( 238)				g51 = -(y1);
            			}
            			else {
HXLINE( 238)				if ((hash1 == (int)14)) {
HXLINE( 238)					g51 = -(x1);
            				}
            				else {
HXLINE( 238)					g51 = -(z);
            				}
            			}
            		}
HXDLIN( 238)		Float g52 = (g5 + g51);
HXLINE( 240)		hash1 = ((int)this->p_perm->__get(AB1) & (int)(int)15);
HXLINE( 241)		Float g6;
HXDLIN( 241)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 241)			if ((hash1 < (int)8)) {
HXLINE( 241)				g6 = x;
            			}
            			else {
HXLINE( 241)				g6 = y1;
            			}
            		}
            		else {
HXLINE( 241)			if ((hash1 < (int)8)) {
HXLINE( 241)				g6 = -(x);
            			}
            			else {
HXLINE( 241)				g6 = -(y1);
            			}
            		}
HXDLIN( 241)		Float g61;
HXDLIN( 241)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 241)			if ((hash1 < (int)4)) {
HXLINE( 241)				g61 = y1;
            			}
            			else {
HXLINE( 241)				if ((hash1 == (int)12)) {
HXLINE( 241)					g61 = x;
            				}
            				else {
HXLINE( 241)					g61 = z;
            				}
            			}
            		}
            		else {
HXLINE( 241)			if ((hash1 < (int)4)) {
HXLINE( 241)				g61 = -(y1);
            			}
            			else {
HXLINE( 241)				if ((hash1 == (int)14)) {
HXLINE( 241)					g61 = -(x);
            				}
            				else {
HXLINE( 241)					g61 = -(z);
            				}
            			}
            		}
HXDLIN( 241)		Float g62 = (g6 + g61);
HXLINE( 243)		hash1 = ((int)this->p_perm->__get(BA) & (int)(int)15);
HXLINE( 244)		Float g7;
HXDLIN( 244)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 244)			if ((hash1 < (int)8)) {
HXLINE( 244)				g7 = x1;
            			}
            			else {
HXLINE( 244)				g7 = y;
            			}
            		}
            		else {
HXLINE( 244)			if ((hash1 < (int)8)) {
HXLINE( 244)				g7 = -(x1);
            			}
            			else {
HXLINE( 244)				g7 = -(y);
            			}
            		}
HXDLIN( 244)		Float g71;
HXDLIN( 244)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 244)			if ((hash1 < (int)4)) {
HXLINE( 244)				g71 = y;
            			}
            			else {
HXLINE( 244)				if ((hash1 == (int)12)) {
HXLINE( 244)					g71 = x1;
            				}
            				else {
HXLINE( 244)					g71 = z;
            				}
            			}
            		}
            		else {
HXLINE( 244)			if ((hash1 < (int)4)) {
HXLINE( 244)				g71 = -(y);
            			}
            			else {
HXLINE( 244)				if ((hash1 == (int)14)) {
HXLINE( 244)					g71 = -(x1);
            				}
            				else {
HXLINE( 244)					g71 = -(z);
            				}
            			}
            		}
HXDLIN( 244)		Float g72 = (g7 + g71);
HXLINE( 246)		hash1 = ((int)this->p_perm->__get(AA) & (int)(int)15);
HXLINE( 247)		Float g8;
HXDLIN( 247)		if ((((int)hash1 & (int)(int)1) == (int)0)) {
HXLINE( 247)			if ((hash1 < (int)8)) {
HXLINE( 247)				g8 = x;
            			}
            			else {
HXLINE( 247)				g8 = y;
            			}
            		}
            		else {
HXLINE( 247)			if ((hash1 < (int)8)) {
HXLINE( 247)				g8 = -(x);
            			}
            			else {
HXLINE( 247)				g8 = -(y);
            			}
            		}
HXDLIN( 247)		Float g81;
HXDLIN( 247)		if ((((int)hash1 & (int)(int)2) == (int)0)) {
HXLINE( 247)			if ((hash1 < (int)4)) {
HXLINE( 247)				g81 = y;
            			}
            			else {
HXLINE( 247)				if ((hash1 == (int)12)) {
HXLINE( 247)					g81 = x;
            				}
            				else {
HXLINE( 247)					g81 = z;
            				}
            			}
            		}
            		else {
HXLINE( 247)			if ((hash1 < (int)4)) {
HXLINE( 247)				g81 = -(y);
            			}
            			else {
HXLINE( 247)				if ((hash1 == (int)14)) {
HXLINE( 247)					g81 = -(x);
            				}
            				else {
HXLINE( 247)					g81 = -(z);
            				}
            			}
            		}
HXDLIN( 247)		Float g82 = (g8 + g81);
HXLINE( 249)		g22 = (g22 + (u * (g12 - g22)));
HXLINE( 250)		g42 = (g42 + (u * (g32 - g42)));
HXLINE( 251)		g62 = (g62 + (u * (g52 - g62)));
HXLINE( 252)		g82 = (g82 + (u * (g72 - g82)));
HXLINE( 254)		g42 = (g42 + (v * (g22 - g42)));
HXLINE( 255)		g82 = (g82 + (v * (g62 - g82)));
HXLINE( 257)		return (g82 + (w * (g42 - g82)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(PerlinNoise_obj,noise,return )

void PerlinNoise_obj::setSeed(int seed){
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_260_setSeed)
HXLINE( 261)		seed = ::Std_obj::_hx_int(hx::Mod((seed * ((Float)16807.0)),(int)2147483647));
HXDLIN( 261)		this->x_offset = seed;
HXLINE( 262)		seed = ::Std_obj::_hx_int(hx::Mod((seed * ((Float)16807.0)),(int)2147483647));
HXDLIN( 262)		this->y_offset = seed;
HXLINE( 263)		seed = ::Std_obj::_hx_int(hx::Mod((seed * ((Float)16807.0)),(int)2147483647));
HXDLIN( 263)		this->z_offset = seed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,setSeed,(void))

::Array< int > PerlinNoise_obj::P;


hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new(int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold) {
	hx::ObjectPtr< PerlinNoise_obj > __this = new PerlinNoise_obj();
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__alloc(hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,hx::Null< bool >  __o_stitch,hx::Null< Float >  __o_stitch_threshold) {
	PerlinNoise_obj *__this = (PerlinNoise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PerlinNoise_obj), true, "openfl._internal.utils.PerlinNoise"));
	*(void **)__this = PerlinNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(p_perm,"p_perm");
	HX_MARK_MEMBER_NAME(x_offset,"x_offset");
	HX_MARK_MEMBER_NAME(y_offset,"y_offset");
	HX_MARK_MEMBER_NAME(z_offset,"z_offset");
	HX_MARK_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::_internal::utils::AbstractNoise_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p_perm,"p_perm");
	HX_VISIT_MEMBER_NAME(x_offset,"x_offset");
	HX_VISIT_MEMBER_NAME(y_offset,"y_offset");
	HX_VISIT_MEMBER_NAME(z_offset,"z_offset");
	HX_VISIT_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::_internal::utils::AbstractNoise_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PerlinNoise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { return hx::Val( noise_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { return hx::Val( p_perm ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSeed") ) { return hx::Val( setSeed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { return hx::Val( x_offset ); }
		if (HX_FIELD_EQ(inName,"y_offset") ) { return hx::Val( y_offset ); }
		if (HX_FIELD_EQ(inName,"z_offset") ) { return hx::Val( z_offset ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { return hx::Val( base_factor ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = ( P ); return true; }
	}
	return false;
}

hx::Val PerlinNoise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { p_perm=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { x_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_offset") ) { y_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z_offset") ) { z_offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { base_factor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p_perm","\x5f","\x72","\x5e","\xc5"));
	outFields->push(HX_HCSTRING("x_offset","\xba","\x27","\x5c","\x9e"));
	outFields->push(HX_HCSTRING("y_offset","\xd9","\x99","\x8e","\xd7"));
	outFields->push(HX_HCSTRING("z_offset","\xf8","\x0b","\xc1","\x10"));
	outFields->push(HX_HCSTRING("base_factor","\x7d","\x56","\x3a","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PerlinNoise_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PerlinNoise_obj,p_perm),HX_HCSTRING("p_perm","\x5f","\x72","\x5e","\xc5")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,x_offset),HX_HCSTRING("x_offset","\xba","\x27","\x5c","\x9e")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,y_offset),HX_HCSTRING("y_offset","\xd9","\x99","\x8e","\xd7")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,z_offset),HX_HCSTRING("z_offset","\xf8","\x0b","\xc1","\x10")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,base_factor),HX_HCSTRING("base_factor","\x7d","\x56","\x3a","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo PerlinNoise_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &PerlinNoise_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String PerlinNoise_obj_sMemberFields[] = {
	HX_HCSTRING("p_perm","\x5f","\x72","\x5e","\xc5"),
	HX_HCSTRING("x_offset","\xba","\x27","\x5c","\x9e"),
	HX_HCSTRING("y_offset","\xd9","\x99","\x8e","\xd7"),
	HX_HCSTRING("z_offset","\xf8","\x0b","\xc1","\x10"),
	HX_HCSTRING("base_factor","\x7d","\x56","\x3a","\xd7"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("setSeed","\x33","\xc6","\xd4","\x11"),
	::String(null()) };

static void PerlinNoise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PerlinNoise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

hx::Class PerlinNoise_obj::__mClass;

static ::String PerlinNoise_obj_sStaticFields[] = {
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	::String(null())
};

void PerlinNoise_obj::__register()
{
	hx::Object *dummy = new PerlinNoise_obj;
	PerlinNoise_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.PerlinNoise","\x59","\xb2","\xee","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = PerlinNoise_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PerlinNoise_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PerlinNoise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PerlinNoise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PerlinNoise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinNoise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PerlinNoise_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9149717b628345a7_22_boot)
HXDLIN(  22)		P = ::Array_obj< int >::fromData( _hx_array_data_42eeb259_9,512);
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
