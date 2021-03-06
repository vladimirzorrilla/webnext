/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from <c:/EDUCAR/program/activex.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "c:/EDUCAR/program/activex.prg"

HB_FUNC( TACTIVEX );
HB_FUNC_STATIC( TACTIVEX_NEW );
HB_FUNC_STATIC( TACTIVEX_DO );
HB_FUNC_STATIC( TACTIVEX_REDEFINE );
HB_FUNC_STATIC( TACTIVEX_INITIATE );
HB_FUNC_STATIC( TACTIVEX_ONEVENT );
HB_FUNC_STATIC( TACTIVEX_READTYPES );

static HARBOUR hb_INITSTATICS( void );

extern HB_FUNC( HBCLASS );
extern HB_FUNC( __CLS_PARAM );
extern HB_FUNC( ACTXGETPROPERTY );
extern HB_FUNC( ACTXPDISP );
extern HB_FUNC( ACTXSETLOCATION );
extern HB_FUNC( ACTXSETPROPERTY );
extern HB_FUNC( __CLSINST );
extern HB_FUNC( PCOUNT );
extern HB_FUNC( HB_APARAMS );
extern HB_FUNC( GETWNDDEFAULT );
extern HB_FUNC( NOR );
extern HB_FUNC( ACTXSTRING );
extern HB_FUNC( EMPTY );
extern HB_FUNC( CREATEACTIVEX );
extern HB_FUNC( ACTXINVOKE );
extern HB_FUNC( ASCAN );
extern HB_FUNC( TREG32 );
extern HB_FUNC( FILE );
extern HB_FUNC( ACTXEVENTS );
extern HB_FUNC( ERRORSYS );
extern HB_FUNC( TCONTROL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ACTIVEX )
{ "TACTIVEX", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( TACTIVEX ), (PHB_DYNS) 1 },
{ "NEW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HBCLASS", HB_FS_PUBLIC, HB_FUNCNAME( HBCLASS ), NULL },
{ "__CLS_PARAM", HB_FS_PUBLIC, HB_FUNCNAME( __CLS_PARAM ), NULL },
{ "ADDMULTICLSDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMULTIDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMETHOD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TACTIVEX_NEW", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_NEW ), (PHB_DYNS) 1 },
{ "TACTIVEX_REDEFINE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_REDEFINE ), (PHB_DYNS) 1 },
{ "TACTIVEX_DO", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_DO ), (PHB_DYNS) 1 },
{ "ADDINLINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BEGINPAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "PAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ENDPAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTXGETPROPERTY", HB_FS_PUBLIC, HB_FUNCNAME( ACTXGETPROPERTY ), NULL },
{ "ACTXPDISP", HB_FS_PUBLIC, HB_FUNCNAME( ACTXPDISP ), NULL },
{ "HACTIVEX", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TACTIVEX_INITIATE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_INITIATE ), (PHB_DYNS) 1 },
{ "TACTIVEX_ONEVENT", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_ONEVENT ), (PHB_DYNS) 1 },
{ "TACTIVEX_READTYPES", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX_READTYPES ), (PHB_DYNS) 1 },
{ "ACTXSETLOCATION", HB_FS_PUBLIC, HB_FUNCNAME( ACTXSETLOCATION ), NULL },
{ "ACTXSETPROPERTY", HB_FS_PUBLIC, HB_FUNCNAME( ACTXSETPROPERTY ), NULL },
{ "CREATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HCLASS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__CLSINST", HB_FS_PUBLIC, HB_FUNCNAME( __CLSINST ), NULL },
{ "PCOUNT", HB_FS_PUBLIC, HB_FUNCNAME( PCOUNT ), NULL },
{ "CONSTRUCTORCALL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HB_APARAMS", HB_FS_PUBLIC, HB_FUNCNAME( HB_APARAMS ), NULL },
{ "GETWNDDEFAULT", HB_FS_PUBLIC, HB_FUNCNAME( GETWNDDEFAULT ), NULL },
{ "_NTOP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NLEFT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NBOTTOM", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NRIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETNEWID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NSTYLE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NOR", HB_FS_PUBLIC, HB_FUNCNAME( NOR ), NULL },
{ "_CPROGID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_CSTRING", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTXSTRING", HB_FS_PUBLIC, HB_FUNCNAME( ACTXSTRING ), NULL },
{ "REGISTER", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "EMPTY", HB_FS_PUBLIC, HB_FUNCNAME( EMPTY ), NULL },
{ "HWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_HACTIVEX", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CREATEACTIVEX", HB_FS_PUBLIC, HB_FUNCNAME( CREATEACTIVEX ), NULL },
{ "_NWIDTH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NHEIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "READTYPES", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DEFCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTXINVOKE", HB_FS_PUBLIC, HB_FUNCNAME( ACTXINVOKE ), NULL },
{ "INITIATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, HB_FUNCNAME( TCONTROL ), NULL },
{ "CPROGID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ASCAN", HB_FS_PUBLIC, HB_FUNCNAME( ASCAN ), NULL },
{ "AEVENTS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BONEVENT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "EVAL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TREG32", HB_FS_PUBLIC, HB_FUNCNAME( TREG32 ), NULL },
{ "CSTRING", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CLOSE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FILE", HB_FS_PUBLIC, HB_FUNCNAME( FILE ), NULL },
{ "_AEVENTS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTXEVENTS", HB_FS_PUBLIC, HB_FUNCNAME( ACTXEVENTS ), NULL },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL },
{ "(_INITSTATICS)", HB_FS_INIT | HB_FS_EXIT, hb_INITSTATICS, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_ACTIVEX )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_ACTIVEX
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_ACTIVEX = hb_vm_SymbolInit_ACTIVEX;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_ACTIVEX
#endif

HB_FUNC( TACTIVEX )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 67, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 185, 2,	/* 697 (abs: 00712) */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 2,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'A', 'c', 't', 'i', 'v', 'e', 'X', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* __CLS_PARAM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 1, 0,	/* S_OCLASS */
/* 00058 */ HB_P_BASELINE, 15, 0,	/* 15 */
	HB_P_MESSAGE, 4, 0,	/* ADDMULTICLSDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'L', 'O', 'G', 'I', 'C', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'l', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_SENDSHORT, 5,
	HB_P_POP,
/* 00104 */ HB_P_LINEOFFSET, 2,	/* 17 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'h', 'A', 'c', 't', 'i', 'v', 'e', 'X', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00135 */ HB_P_LINEOFFSET, 3,	/* 18 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'P', 'r', 'o', 'g', 'I', 'D', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00165 */ HB_P_LINEOFFSET, 4,	/* 19 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'S', 't', 'r', 'i', 'n', 'g', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00195 */ HB_P_LINEOFFSET, 5,	/* 20 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'a', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', 'M', 'e', 't', 'h', 'o', 'd', 's', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'E', 'v', 'e', 'n', 't', 's', 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00250 */ HB_P_LINEOFFSET, 6,	/* 21 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'O', 'n', 'E', 'v', 'e', 'n', 't', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00281 */ HB_P_LINEOFFSET, 8,	/* 23 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* TACTIVEX_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00307 */ HB_P_LINEOFFSET, 10,	/* 25 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'R', 'e', 'D', 'e', 'f', 'i', 'n', 'e', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* TACTIVEX_REDEFINE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00338 */ HB_P_LINEOFFSET, 12,	/* 27 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'o', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* TACTIVEX_DO */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00360 */ HB_P_LINEOFFSET, 14,	/* 29 */
	HB_P_MESSAGE, 10, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'D', 'i', 's', 'p', 'l', 'a', 'y', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 11, 0,	/* BEGINPAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 12, 0,	/* PAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 13, 0,	/* ENDPAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_ZERO,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00417 */ HB_P_LINEOFFSET, 16,	/* 31 */
	HB_P_MESSAGE, 10, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'r', 'a', 's', 'e', 'B', 'k', 'G', 'n', 'd', 0, 
	HB_P_PUSHBLOCK, 9, 0,	/* 9 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_ONE,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00453 */ HB_P_LINEOFFSET, 19,	/* 34 */
	HB_P_MESSAGE, 10, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'e', 't', 'P', 'r', 'o', 'p', 0, 
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 14,	/* ACTXGETPROPERTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00504 */ HB_P_LINEOFFSET, 21,	/* 36 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'n', 'i', 't', 'i', 'a', 't', 'e', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* TACTIVEX_INITIATE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00532 */ HB_P_LINEOFFSET, 23,	/* 38 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'O', 'n', 'E', 'v', 'e', 'n', 't', 0, 
	HB_P_PUSHSYMNEAR, 18,	/* TACTIVEX_ONEVENT */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00559 */ HB_P_LINEOFFSET, 25,	/* 40 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'e', 'a', 'd', 'T', 'y', 'p', 'e', 's', 0, 
	HB_P_PUSHSYMNEAR, 19,	/* TACTIVEX_READTYPES */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00588 */ HB_P_LINEOFFSET, 28,	/* 43 */
	HB_P_MESSAGE, 10, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', 'e', 'S', 'i', 'z', 'e', 0, 
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	4, 0,	/* number of local parameters (4) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 20,	/* ACTXSETLOCATION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_PUSHLOCALNEAR, 4,	/* codeblockvar4 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00637 */ HB_P_LINEOFFSET, 31,	/* 46 */
	HB_P_MESSAGE, 10, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'e', 't', 'P', 'r', 'o', 'p', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	3, 0,	/* number of local parameters (3) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 21,	/* ACTXSETPROPERTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00690 */ HB_P_LINEOFFSET, 33,	/* 48 */
	HB_P_MESSAGE, 22, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 23, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_CLASSSETMODULE,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00712) */
	HB_P_PUSHSYMNEAR, 24,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 23, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00754) */
	HB_P_MESSAGE, 26, 0,	/* CONSTRUCTORCALL */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 27,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00754) */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00758 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 6,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 7,	/* SELF */
/* 00006 */ HB_P_BASELINE, 55, 0,	/* 55 */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00022) */
	HB_P_PUSHSYMNEAR, 28,	/* GETWNDDEFAULT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00024) */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_POPLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHLOCALNEAR, 3,	/* NROW */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00035) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00037) */
	HB_P_PUSHLOCALNEAR, 3,	/* NROW */
	HB_P_POPLOCALNEAR, 3,	/* NROW */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00048) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00050) */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_POPLOCALNEAR, 4,	/* NCOL */
	HB_P_PUSHLOCALNEAR, 5,	/* NWIDTH */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00063) */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00065) */
	HB_P_PUSHLOCALNEAR, 5,	/* NWIDTH */
	HB_P_POPLOCALNEAR, 5,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00078) */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00080) */
	HB_P_PUSHLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_POPLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_MESSAGE, 29, 0,	/* _NTOP */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 3,	/* NROW */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00092 */ HB_P_LINEOFFSET, 3,	/* 58 */
	HB_P_MESSAGE, 30, 0,	/* _NLEFT */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00104 */ HB_P_LINEOFFSET, 4,	/* 59 */
	HB_P_MESSAGE, 31, 0,	/* _NBOTTOM */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 3,	/* NROW */
	HB_P_PUSHLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00119 */ HB_P_LINEOFFSET, 5,	/* 60 */
	HB_P_MESSAGE, 32, 0,	/* _NRIGHT */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_PUSHLOCALNEAR, 5,	/* NWIDTH */
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00134 */ HB_P_LINEOFFSET, 6,	/* 61 */
	HB_P_MESSAGE, 33, 0,	/* _OWND */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00146 */ HB_P_LINEOFFSET, 7,	/* 62 */
	HB_P_MESSAGE, 34, 0,	/* _NID */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_MESSAGE, 35, 0,	/* GETNEWID */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00163 */ HB_P_LINEOFFSET, 8,	/* 63 */
	HB_P_MESSAGE, 36, 0,	/* _NSTYLE */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHSYMNEAR, 37,	/* NOR */
	HB_P_PUSHNIL,
	HB_P_PUSHLONG, 0, 0, 0, 64,	/* 1073741824 */
	HB_P_PUSHLONG, 0, 0, 0, 16,	/* 268435456 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00188 */ HB_P_LINEOFFSET, 9,	/* 64 */
	HB_P_MESSAGE, 38, 0,	/* _CPROGID */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* CPROGID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00200 */ HB_P_LINEOFFSET, 10,	/* 65 */
	HB_P_MESSAGE, 39, 0,	/* _CSTRING */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHSYMNEAR, 40,	/* ACTXSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CPROGID */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00217 */ HB_P_LINEOFFSET, 12,	/* 67 */
	HB_P_MESSAGE, 41, 0,	/* REGISTER */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00227 */ HB_P_LINEOFFSET, 14,	/* 69 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 43, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 111, 0,	/* 111 (abs: 00353) */
/* 00245 */ HB_P_LINEOFFSET, 15,	/* 70 */
	HB_P_MESSAGE, 22, 0,	/* CREATE */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00255 */ HB_P_LINEOFFSET, 16,	/* 71 */
	HB_P_MESSAGE, 44, 0,	/* ADDCONTROL */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00267 */ HB_P_LINEOFFSET, 17,	/* 72 */
	HB_P_MESSAGE, 45, 0,	/* _HACTIVEX */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHSYMNEAR, 46,	/* CREATEACTIVEX */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 43, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* CPROGID */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00293 */ HB_P_LINEOFFSET, 18,	/* 73 */
	HB_P_MESSAGE, 29, 0,	/* _NTOP */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 3,	/* NROW */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00305 */ HB_P_LINEOFFSET, 19,	/* 74 */
	HB_P_MESSAGE, 30, 0,	/* _NLEFT */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00317 */ HB_P_LINEOFFSET, 20,	/* 75 */
	HB_P_MESSAGE, 47, 0,	/* _NWIDTH */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 5,	/* NWIDTH */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00329 */ HB_P_LINEOFFSET, 21,	/* 76 */
	HB_P_MESSAGE, 48, 0,	/* _NHEIGHT */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_PUSHLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00341 */ HB_P_LINEOFFSET, 22,	/* 77 */
	HB_P_MESSAGE, 49, 0,	/* READTYPES */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00365) */
/* 00353 */ HB_P_LINEOFFSET, 24,	/* 79 */
	HB_P_MESSAGE, 50, 0,	/* DEFCONTROL */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00365 */ HB_P_LINEOFFSET, 27,	/* 82 */
	HB_P_PUSHLOCALNEAR, 7,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00371 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_DO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 5,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 6,	/* SELF */
/* 00006 */ HB_P_BASELINE, 91, 0,	/* 91 */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00044) */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 92 */
	HB_P_PUSHSYMNEAR, 51,	/* ACTXINVOKE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 6,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* CMETHODNAME */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* URET */
	HB_P_JUMP, 172, 0,	/* 172 (abs: 00213) */
/* 00044 */ HB_P_LINEOFFSET, 3,	/* 94 */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00084) */
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 95 */
	HB_P_PUSHSYMNEAR, 51,	/* ACTXINVOKE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 6,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* CMETHODNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* UPARAM1 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* URET */
	HB_P_JUMP, 132, 0,	/* 132 (abs: 00213) */
/* 00084 */ HB_P_LINEOFFSET, 6,	/* 97 */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00125) */
/* 00096 */ HB_P_LINEOFFSET, 7,	/* 98 */
	HB_P_PUSHSYMNEAR, 51,	/* ACTXINVOKE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 6,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* CMETHODNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* UPARAM1 */
	HB_P_PUSHLOCALNEAR, 3,	/* UPARAM2 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 7,	/* URET */
	HB_P_JUMPNEAR, 90,	/* 90 (abs: 00213) */
/* 00125 */ HB_P_LINEOFFSET, 9,	/* 100 */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00168) */
/* 00137 */ HB_P_LINEOFFSET, 11,	/* 102 */
	HB_P_PUSHSYMNEAR, 51,	/* ACTXINVOKE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 6,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* CMETHODNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* UPARAM1 */
	HB_P_PUSHLOCALNEAR, 3,	/* UPARAM2 */
	HB_P_PUSHLOCALNEAR, 4,	/* UPARAM3 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* URET */
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 00213) */
/* 00168 */ HB_P_LINEOFFSET, 12,	/* 103 */
	HB_P_PUSHSYMNEAR, 25,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00213) */
/* 00180 */ HB_P_LINEOFFSET, 14,	/* 105 */
	HB_P_PUSHSYMNEAR, 51,	/* ACTXINVOKE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 6,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* CMETHODNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* UPARAM1 */
	HB_P_PUSHLOCALNEAR, 3,	/* UPARAM2 */
	HB_P_PUSHLOCALNEAR, 4,	/* UPARAM3 */
	HB_P_PUSHLOCALNEAR, 5,	/* UPARAM4 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_POPLOCALNEAR, 7,	/* URET */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00213) */
/* 00213 */ HB_P_LINEOFFSET, 17,	/* 108 */
	HB_P_PUSHLOCALNEAR, 7,	/* URET */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00219 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_REDEFINE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 114, 0,	/* 114 */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00022) */
	HB_P_PUSHSYMNEAR, 28,	/* GETWNDDEFAULT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00024) */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_POPLOCALNEAR, 2,	/* OWND */
	HB_P_MESSAGE, 34, 0,	/* _NID */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* NID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00036 */ HB_P_LINEOFFSET, 3,	/* 117 */
	HB_P_MESSAGE, 33, 0,	/* _OWND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00048 */ HB_P_LINEOFFSET, 4,	/* 118 */
	HB_P_MESSAGE, 38, 0,	/* _CPROGID */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHLOCALNEAR, 3,	/* CPROGID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00060 */ HB_P_LINEOFFSET, 5,	/* 119 */
	HB_P_MESSAGE, 39, 0,	/* _CSTRING */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHSYMNEAR, 40,	/* ACTXSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CPROGID */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00077 */ HB_P_LINEOFFSET, 7,	/* 121 */
	HB_P_MESSAGE, 41, 0,	/* REGISTER */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHSYMNEAR, 37,	/* NOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00095 */ HB_P_LINEOFFSET, 9,	/* 123 */
	HB_P_MESSAGE, 50, 0,	/* DEFCONTROL */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00107 */ HB_P_LINEOFFSET, 11,	/* 125 */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00113 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_INITIATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 131, 0,	/* 131 */
	HB_P_MESSAGE, 52, 0,	/* INITIATE */
	HB_P_MESSAGE, 53, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* HDLG */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 133 */
	HB_P_MESSAGE, 45, 0,	/* _HACTIVEX */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHSYMNEAR, 46,	/* CREATEACTIVEX */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 43, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 54, 0,	/* CPROGID */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 134 */
	HB_P_MESSAGE, 49, 0,	/* READTYPES */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 136 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00070 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_ONEVENT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 142, 0,	/* 142 */
	HB_P_PUSHSYMNEAR, 55,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 56, 0,	/* AEVENTS */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* NEVENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* NAT */
/* 00041 */ HB_P_LINEOFFSET, 1,	/* 143 */
	HB_P_PUSHLOCALNEAR, 5,	/* NAT */
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00063) */
	HB_P_MESSAGE, 56, 0,	/* AEVENTS */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 5,	/* NAT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00066) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPLOCALNEAR, 6,	/* CEVENT */
/* 00068 */ HB_P_LINEOFFSET, 3,	/* 145 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 57, 0,	/* BONEVENT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 00122) */
/* 00085 */ HB_P_LINEOFFSET, 4,	/* 146 */
	HB_P_MESSAGE, 58, 0,	/* EVAL */
	HB_P_MESSAGE, 57, 0,	/* BONEVENT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CEVENT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00111) */
	HB_P_PUSHLOCALNEAR, 6,	/* CEVENT */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00113) */
	HB_P_PUSHLOCALNEAR, 1,	/* NEVENT */
	HB_P_PUSHLOCALNEAR, 2,	/* APARAMS */
	HB_P_PUSHLOCALNEAR, 3,	/* PPARAMS */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00122) */
/* 00122 */ HB_P_LINEOFFSET, 7,	/* 149 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00127 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TACTIVEX_READTYPES )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 156, 0,	/* 156 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 59,	/* TREG32 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 224, 65, 11, 0,	/* 2147483648.00000000000, 11, 0 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'L', 'S', 'I', 'D', 92, 0, 
	HB_P_MESSAGE, 60, 0,	/* CSTRING */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	92, 'I', 'n', 'p', 'r', 'o', 'c', 'S', 'e', 'r', 'v', 'e', 'r', '3', '2', 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OREG */
/* 00068 */ HB_P_LINEOFFSET, 1,	/* 157 */
	HB_P_MESSAGE, 61, 0,	/* GET */
	HB_P_PUSHLOCALNEAR, 2,	/* OREG */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* CTYPELIB */
/* 00082 */ HB_P_LINEOFFSET, 3,	/* 159 */
	HB_P_MESSAGE, 62, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 2,	/* OREG */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 161 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CTYPELIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00113) */
	HB_P_PUSHSYMNEAR, 63,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CTYPELIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00141) */
/* 00115 */ HB_P_LINEOFFSET, 6,	/* 162 */
	HB_P_MESSAGE, 64, 0,	/* _AEVENTS */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_PUSHSYMNEAR, 65,	/* ACTXEVENTS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CTYPELIB */
	HB_P_MESSAGE, 16, 0,	/* HACTIVEX */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00141) */
/* 00141 */ HB_P_LINEOFFSET, 9,	/* 165 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00146 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

static HARBOUR hb_INITSTATICS( void )
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 67, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

