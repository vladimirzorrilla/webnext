/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from <c:/EDUCAR/program/TRMChartX.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "c:/EDUCAR/program/TRMChartX.prg"

HB_FUNC( TRMCHARTX );
HB_FUNC_STATIC( TRMCHARTX_NEW );
HB_FUNC_STATIC( TRMCHARTX_ACTIVATE );
HB_FUNC_STATIC( TRMCHARTX_VERIFICA );
HB_FUNC_STATIC( TRMCHARTX_INSTALL );
HB_FUNC_STATIC( TRMCHARTX_ARRAYTOSTRING );
HB_FUNC_STATIC( TRMCHARTX_CRMCOLOR );
HB_FUNC_STATIC( TRMCHARTX_RMCFILE );
HB_FUNC_STATIC( TRMCHARTX_ERROR );
HB_FUNC_STATIC( ISACTIVEX );

static HARBOUR hb_INITSTATICS( void );

extern HB_FUNC( HBCLASS );
extern HB_FUNC( __CLS_PARAM );
extern HB_FUNC( __CLSINST );
extern HB_FUNC( PCOUNT );
extern HB_FUNC( HB_APARAMS );
extern HB_FUNC( MSGINFO );
extern HB_FUNC( TACTIVEX );
extern HB_FUNC( EMPTY );
extern HB_FUNC( TOLEAUTO );
extern HB_FUNC( ACTXPDISP );
extern HB_FUNC( MSGRUN );
extern HB_FUNC( GETSYSDIR );
extern HB_FUNC( FILE );
extern HB_FUNC( __COPYFILE );
extern HB_FUNC( WINEXEC );
extern HB_FUNC( ISWIN95 );
extern HB_FUNC( ISWIN2000 );
extern HB_FUNC( AEVAL );
extern HB_FUNC( ALLTRIM );
extern HB_FUNC( VALTYPE );
extern HB_FUNC( STR );
extern HB_FUNC( SUBSTR );
extern HB_FUNC( DECTOHEX );
extern HB_FUNC( __GETMESSAGE );
extern HB_FUNC( TREG32 );
extern HB_FUNC( ERRORSYS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TRMCHARTX )
{ "TRMCHARTX", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( TRMCHARTX ), (PHB_DYNS) 1 },
{ "NEW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HBCLASS", HB_FS_PUBLIC, HB_FUNCNAME( HBCLASS ), NULL },
{ "__CLS_PARAM", HB_FS_PUBLIC, HB_FUNCNAME( __CLS_PARAM ), NULL },
{ "ADDMULTIDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMULTICLSDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMETHOD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TRMCHARTX_NEW", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_NEW ), (PHB_DYNS) 1 },
{ "TRMCHARTX_ARRAYTOSTRING", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_ARRAYTOSTRING ), (PHB_DYNS) 1 },
{ "SETONERROR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TRMCHARTX_ERROR", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_ERROR ), (PHB_DYNS) 1 },
{ "TRMCHARTX_VERIFICA", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_VERIFICA ), (PHB_DYNS) 1 },
{ "TRMCHARTX_ACTIVATE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_ACTIVATE ), (PHB_DYNS) 1 },
{ "TRMCHARTX_INSTALL", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_INSTALL ), (PHB_DYNS) 1 },
{ "TRMCHARTX_RMCFILE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_RMCFILE ), (PHB_DYNS) 1 },
{ "TRMCHARTX_CRMCOLOR", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TRMCHARTX_CRMCOLOR ), (PHB_DYNS) 1 },
{ "CREATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HCLASS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__CLSINST", HB_FS_PUBLIC, HB_FUNCNAME( __CLSINST ), NULL },
{ "PCOUNT", HB_FS_PUBLIC, HB_FUNCNAME( PCOUNT ), NULL },
{ "CONSTRUCTORCALL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HB_APARAMS", HB_FS_PUBLIC, HB_FUNCNAME( HB_APARAMS ), NULL },
{ "VERIFICA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LOK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGINFO", HB_FS_PUBLIC, HB_FUNCNAME( MSGINFO ), NULL },
{ "_OCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REDEFINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TACTIVEX", HB_FS_PUBLIC, HB_FUNCNAME( TACTIVEX ), NULL },
{ "EMPTY", HB_FS_PUBLIC, HB_FUNCNAME( EMPTY ), NULL },
{ "HWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTIVATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OCHART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TOLEAUTO", HB_FS_PUBLIC, HB_FUNCNAME( TOLEAUTO ), NULL },
{ "ACTXPDISP", HB_FS_PUBLIC, HB_FUNCNAME( ACTXPDISP ), NULL },
{ "HACTIVEX", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ISACTIVEX", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( ISACTIVEX ), (PHB_DYNS) 1 },
{ "_LOK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGRUN", HB_FS_PUBLIC, HB_FUNCNAME( MSGRUN ), NULL },
{ "INSTALL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETSYSDIR", HB_FS_PUBLIC, HB_FUNCNAME( GETSYSDIR ), NULL },
{ "FILE", HB_FS_PUBLIC, HB_FUNCNAME( FILE ), NULL },
{ "__COPYFILE", HB_FS_PUBLIC, HB_FUNCNAME( __COPYFILE ), NULL },
{ "WINEXEC", HB_FS_PUBLIC, HB_FUNCNAME( WINEXEC ), NULL },
{ "ISWIN95", HB_FS_PUBLIC, HB_FUNCNAME( ISWIN95 ), NULL },
{ "ISWIN2000", HB_FS_PUBLIC, HB_FUNCNAME( ISWIN2000 ), NULL },
{ "AEVAL", HB_FS_PUBLIC, HB_FUNCNAME( AEVAL ), NULL },
{ "ALLTRIM", HB_FS_PUBLIC, HB_FUNCNAME( ALLTRIM ), NULL },
{ "VALTYPE", HB_FS_PUBLIC, HB_FUNCNAME( VALTYPE ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "DECTOHEX", HB_FS_PUBLIC, HB_FUNCNAME( DECTOHEX ), NULL },
{ "_RMCFILE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OCHART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__GETMESSAGE", HB_FS_PUBLIC, HB_FUNCNAME( __GETMESSAGE ), NULL },
{ "GET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TREG32", HB_FS_PUBLIC, HB_FUNCNAME( TREG32 ), NULL },
{ "CLOSE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL },
{ "(_INITSTATICS)", HB_FS_INIT | HB_FS_EXIT, hb_INITSTATICS, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_TRMCHARTX )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_TRMCHARTX
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_TRMCHARTX = hb_vm_SymbolInit_TRMCHARTX;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_TRMCHARTX
#endif

HB_FUNC( TRMCHARTX )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 59, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 00390) */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 2,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'R', 'M', 'C', 'h', 'a', 'r', 't', 'X', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* __CLS_PARAM */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 1, 0,	/* S_OCLASS */
/* 00048 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_MESSAGE, 4, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'o', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00080 */ HB_P_LINEOFFSET, 1,	/* 14 */
	HB_P_MESSAGE, 4, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'o', 'C', 'h', 'a', 'r', 't', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00109 */ HB_P_LINEOFFSET, 2,	/* 15 */
	HB_P_MESSAGE, 5, 0,	/* ADDMULTICLSDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'l', 'O', 'k', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_SENDSHORT, 5,
	HB_P_POP,
/* 00137 */ HB_P_LINEOFFSET, 3,	/* 16 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* TRMCHARTX_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00160 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'r', 'r', 'a', 'y', 'T', 'o', 'S', 't', 'r', 'i', 'n', 'g', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* TRMCHARTX_ARRAYTOSTRING */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00193 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_MESSAGE, 9, 0,	/* SETONERROR */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 10,	/* TRMCHARTX_ERROR */
	HB_P_FUNCPTR,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* TRMCHARTX_VERIFICA */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00235 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'c', 't', 'i', 'v', 'a', 't', 'e', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* TRMCHARTX_ACTIVATE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00263 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'I', 'n', 's', 't', 'a', 'l', 'l', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* TRMCHARTX_INSTALL */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00290 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', 'F', 'i', 'l', 'e', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRMCHARTX_RMCFILE */
	HB_P_FUNCPTR,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'_', 'R', 'M', 'C', 'F', 'i', 'l', 'e', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRMCHARTX_RMCFILE */
	HB_P_FUNCPTR,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00340 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_MESSAGE, 6, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'R', 'M', 'C', 'o', 'l', 'o', 'r', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* TRMCHARTX_CRMCOLOR */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00368 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_MESSAGE, 16, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 17, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_CLASSSETMODULE,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00390) */
	HB_P_PUSHSYMNEAR, 18,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 17, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 19,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00432) */
	HB_P_MESSAGE, 20, 0,	/* CONSTRUCTORCALL */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 21,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00432) */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00436 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 3,	/* SELF */
/* 00006 */ HB_P_BASELINE, 29, 0,	/* 29 */
	HB_P_MESSAGE, 22, 0,	/* VERIFICA */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00017 */ HB_P_LINEOFFSET, 1,	/* 30 */
	HB_P_MESSAGE, 23, 0,	/* LOK */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 00085) */
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 31 */
	HB_P_PUSHSYMNEAR, 24,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'o', ' ', 't', 'i', 'e', 'n', 'e', 's', ' ', 'i', 'n', 's', 't', 'a', 'l', 'a', 'd', 'o', ' ', 'e', 'l', ' ', 'c', 'o', 'n', 't', 'r', 'o', 'l', ' ', 'R', 'M', 'C', 'h', 'a', 'r', 't', 0, 
	HB_P_DOSHORT, 1,
/* 00077 */ HB_P_LINEOFFSET, 3,	/* 32 */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00085) */
/* 00085 */ HB_P_LINEOFFSET, 6,	/* 35 */
	HB_P_PUSHLOCALNEAR, 2,	/* NID */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 00138) */
/* 00093 */ HB_P_LINEOFFSET, 7,	/* 36 */
	HB_P_MESSAGE, 25, 0,	/* _OCONTROL */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 26, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 27,	/* TACTIVEX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* NID */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'R', 'M', 'C', 'h', 'a', 'r', 't', 'X', 0, 
	HB_P_SENDSHORT, 3,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 00179) */
/* 00138 */ HB_P_LINEOFFSET, 9,	/* 38 */
	HB_P_MESSAGE, 25, 0,	/* _OCONTROL */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 27,	/* TACTIVEX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'R', 'M', 'C', 'h', 'a', 'r', 't', 'X', 0, 
	HB_P_SENDSHORT, 2,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00179 */ HB_P_LINEOFFSET, 12,	/* 41 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 29, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00208) */
/* 00196 */ HB_P_LINEOFFSET, 13,	/* 42 */
	HB_P_MESSAGE, 30, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00208) */
/* 00208 */ HB_P_LINEOFFSET, 16,	/* 45 */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00214 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 49, 0,	/* 49 */
	HB_P_MESSAGE, 31, 0,	/* _OCHART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 32,	/* TOLEAUTO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* ACTXPDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 34, 0,	/* HACTIVEX */
	HB_P_MESSAGE, 35, 0,	/* OCONTROL */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00044 */ HB_P_LINEOFFSET, 1,	/* 50 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00049 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_VERIFICA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 54, 0,	/* 54 */
	HB_P_PUSHLOCALNEAR, 1,	/* LAUTOINSTALL */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00018) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00020) */
	HB_P_PUSHLOCALNEAR, 1,	/* LAUTOINSTALL */
	HB_P_POPLOCALNEAR, 1,	/* LAUTOINSTALL */
	HB_P_MESSAGE, 23, 0,	/* LOK */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 115, 0,	/* 115 (abs: 00145) */
/* 00033 */ HB_P_LINEOFFSET, 2,	/* 56 */
	HB_P_PUSHSYMNEAR, 36,	/* ISACTIVEX */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'R', 'M', 'C', 'h', 'a', 'r', 't', 'X', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00074) */
/* 00061 */ HB_P_LINEOFFSET, 3,	/* 57 */
	HB_P_MESSAGE, 37, 0,	/* _LOK */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 71,	/* 71 (abs: 00143) */
/* 00074 */ HB_P_LINEOFFSET, 5,	/* 59 */
	HB_P_PUSHLOCALNEAR, 1,	/* LAUTOINSTALL */
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 00143) */
/* 00080 */ HB_P_LINEOFFSET, 7,	/* 61 */
	HB_P_PUSHSYMNEAR, 38,	/* MSGRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'n', 's', 't', 'a', 'l', 'a', 'n', 'd', 'o', ' ', 'e', 'l', ' ', 'c', 'o', 'n', 't', 'r', 'o', 'l', ' ', 'O', 'C', 'X', ' ', 'R', 'M', 'C', 'h', 'a', 'r', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* SELF */
	HB_P_MESSAGE, 39, 0,	/* INSTALL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00143) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00145) */
/* 00145 */ HB_P_LINEOFFSET, 11,	/* 65 */
	HB_P_MESSAGE, 23, 0,	/* LOK */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00156 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_INSTALL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 70, 0,	/* 70 */
	HB_P_LOCALNEARSETSTR, 2, 22, 0,	/* CORIGEN 22*/
	'.', 92, 'R', 'M', 'C', 'h', 'a', 'r', 't', 92, 'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'd', 'l', 'l', 0, 
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 71 */
	HB_P_PUSHSYMNEAR, 40,	/* GETSYSDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	92, 'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'd', 'l', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CDESTINO */
/* 00060 */ HB_P_LINEOFFSET, 2,	/* 72 */
	HB_P_PUSHSYMNEAR, 41,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00077) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00077) */
/* 00077 */ HB_P_LINEOFFSET, 3,	/* 73 */
	HB_P_PUSHSYMNEAR, 42,	/* __COPYFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_DOSHORT, 2,
/* 00088 */ HB_P_LINEOFFSET, 5,	/* 75 */
	HB_P_LOCALNEARSETSTR, 2, 22, 0,	/* CORIGEN 22*/
	'.', 92, 'R', 'M', 'C', 'h', 'a', 'r', 't', 92, 'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'o', 'c', 'x', 0, 
/* 00116 */ HB_P_LINEOFFSET, 6,	/* 76 */
	HB_P_PUSHSYMNEAR, 40,	/* GETSYSDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	92, 'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'o', 'c', 'x', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CDESTINO */
/* 00141 */ HB_P_LINEOFFSET, 7,	/* 77 */
	HB_P_PUSHSYMNEAR, 41,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00158) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00158) */
/* 00158 */ HB_P_LINEOFFSET, 8,	/* 78 */
	HB_P_PUSHSYMNEAR, 42,	/* __COPYFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_DOSHORT, 2,
/* 00169 */ HB_P_LINEOFFSET, 10,	/* 80 */
	HB_P_PUSHSYMNEAR, 43,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'E', 'G', 'S', 'V', 'R', '3', '2', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '/', 's', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00198 */ HB_P_LINEOFFSET, 12,	/* 82 */
	HB_P_LOCALNEARSETSTR, 3, 14, 0,	/* CDESTINO 14*/
	'.', 92, 'g', 'd', 'i', 'p', 'l', 'u', 's', '.', 'd', 'l', 'l', 0, 
/* 00218 */ HB_P_LINEOFFSET, 13,	/* 83 */
	HB_P_PUSHSYMNEAR, 44,	/* ISWIN95 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00234) */
	HB_P_PUSHSYMNEAR, 45,	/* ISWIN2000 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00301) */
/* 00236 */ HB_P_LINEOFFSET, 14,	/* 84 */
	HB_P_LOCALNEARSETSTR, 2, 28, 0,	/* CORIGEN 28*/
	'.', 92, 'R', 'M', 'C', 'h', 'a', 'r', 't', 92, 'W', '9', 'X', '2', 'K', 92, 'g', 'd', 'i', 'p', 'l', 'u', 's', '.', 'd', 'l', 'l', 0, 
/* 00270 */ HB_P_LINEOFFSET, 15,	/* 85 */
	HB_P_PUSHSYMNEAR, 41,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00287) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00287) */
/* 00287 */ HB_P_LINEOFFSET, 16,	/* 86 */
	HB_P_PUSHSYMNEAR, 42,	/* __COPYFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CORIGEN */
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 159, 0,	/* 159 (abs: 00457) */
/* 00301 */ HB_P_LINEOFFSET, 18,	/* 88 */
	HB_P_PUSHSYMNEAR, 41,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 00457) */
/* 00313 */ HB_P_LINEOFFSET, 20,	/* 90 */
	HB_P_PUSHSYMNEAR, 24,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'u', 'i', 'd', 'a', 'd', 'o', ' ', 't', 'i', 'e', 'n', 'e', ' ', 'l', 'a', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CDESTINO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'e', 'n', ' ', 'e', 'l', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'l', 'a', ' ', 'a', 'p', 'p', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'E', 'n', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', 'X', 'P', ' ', 'e', 's', 't', 'o', ' ', 'p', 'u', 'e', 'd', 'e', ' ', 'c', 'a', 'u', 's', 'a', 'r', ' ', 'i', 'n', 'e', 's', 't', 'a', 'b', 'i', 'l', 'i', 'd', 'a', 'd', ',', ' ', 'E', 'l', 'i', 'm', 'i', 'n', 'a', 'l', 'a', ' ', 'p', 'o', 'r', ' ', 'f', 'a', 'v', 'o', 'r', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00457) */
/* 00457 */ HB_P_LINEOFFSET, 24,	/* 94 */
	HB_P_MESSAGE, 37, 0,	/* _LOK */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_PUSHSYMNEAR, 36,	/* ISACTIVEX */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'M', 'C', 'h', 'a', 'r', 't', '.', 'R', 'M', 'C', 'h', 'a', 'r', 't', 'X', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00491 */ HB_P_LINEOFFSET, 25,	/* 95 */
	HB_P_MESSAGE, 23, 0,	/* LOK */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 00558) */
/* 00503 */ HB_P_LINEOFFSET, 26,	/* 96 */
	HB_P_PUSHSYMNEAR, 24,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'O', 'c', 'u', 'r', 'r', 'i', 'o', ' ', 'e', 'r', 'r', 'o', 'r', ' ', 'e', 'n', ' ', 'l', 'a', ' ', 'i', 'n', 's', 't', 'a', 'l', 'a', 'c', 'i', 'o', 'n', ' ', 'd', 'e', 'l', ' ', 'c', 'o', 'n', 't', 'r', 'o', 'l', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00558) */
/* 00558 */ HB_P_LINEOFFSET, 29,	/* 99 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00563 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_ARRAYTOSTRING )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 103, 0,	/* 103 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CSTRING 1*/
	0, 
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 104 */
	HB_P_PUSHSYMNEAR, 46,	/* AEVAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ADATOS */
	HB_P_PUSHBLOCK, 51, 0,	/* 51 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* CSTRING */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00062) */
	HB_P_PUSHSYMNEAR, 49,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00064) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 2,
/* 00074 */ HB_P_LINEOFFSET, 2,	/* 105 */
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CSTRING */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00087 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_CRMCOLOR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 109, 0,	/* 109 */
	HB_P_PUSHLOCALNEAR, 1,	/* NR */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00018) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00020) */
	HB_P_PUSHLOCALNEAR, 1,	/* NR */
	HB_P_POPLOCALNEAR, 1,	/* NR */
	HB_P_PUSHLOCALNEAR, 2,	/* NG */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00031) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00033) */
	HB_P_PUSHLOCALNEAR, 2,	/* NG */
	HB_P_POPLOCALNEAR, 2,	/* NG */
	HB_P_PUSHLOCALNEAR, 3,	/* NB */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00044) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00046) */
	HB_P_PUSHLOCALNEAR, 3,	/* NB */
	HB_P_POPLOCALNEAR, 3,	/* NB */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'&', 'H', 'F', 'F', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHSYMNEAR, 51,	/* DECTOHEX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DECTOHEX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DECTOHEX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00082 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_RMCFILE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 114, 0,	/* 114 */
	HB_P_MESSAGE, 52, 0,	/* _RMCFILE */
	HB_P_MESSAGE, 53, 0,	/* OCHART */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* CFILE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 115 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00029 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TRMCHARTX_ERROR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 120, 0,	/* 120 */
	HB_P_PUSHSYMNEAR, 19,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* NPARAM */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 121 */
	HB_P_PUSHSYMNEAR, 54,	/* __GETMESSAGE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* CMSG */
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 122 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMSG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00053) */
/* 00038 */ HB_P_LINEOFFSET, 3,	/* 123 */
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CMSG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* CMSG */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00053) */
/* 00053 */ HB_P_LINEOFFSET, 6,	/* 126 */
	HB_P_PUSHLOCALNEAR, 4,	/* NPARAM */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00081) */
/* 00061 */ HB_P_LINEOFFSET, 7,	/* 127 */
	HB_P_MESSAGE, 55, 0,	/* GET */
	HB_P_MESSAGE, 53, 0,	/* OCHART */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* CMSG */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* URET */
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 00112) */
/* 00081 */ HB_P_LINEOFFSET, 8,	/* 128 */
	HB_P_PUSHLOCALNEAR, 4,	/* NPARAM */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00112) */
/* 00089 */ HB_P_LINEOFFSET, 9,	/* 129 */
	HB_P_MESSAGE, 55, 0,	/* GET */
	HB_P_MESSAGE, 53, 0,	/* OCHART */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* CMSG */
	HB_P_PUSHLOCALREF, 1, 0,	/* UPARAM1 */
	HB_P_SENDSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* URET */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00112) */
/* 00112 */ HB_P_LINEOFFSET, 11,	/* 131 */
	HB_P_PUSHLOCALNEAR, 5,	/* URET */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00118 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( ISACTIVEX )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 148, 0,	/* 148 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 56,	/* TREG32 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 224, 65, 11, 0,	/* 2147483648.00000000000, 11, 0 */
	HB_P_PUSHLOCALNEAR, 1,	/* CSTRING */
	HB_P_SENDSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OREG */
/* 00031 */ HB_P_LINEOFFSET, 1,	/* 149 */
	HB_P_MESSAGE, 55, 0,	/* GET */
	HB_P_PUSHLOCALNEAR, 2,	/* OREG */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* CCLASS */
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 150 */
	HB_P_MESSAGE, 57, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 2,	/* OREG */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 151 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CCLASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00073) */
/* 00066 */ HB_P_LINEOFFSET, 4,	/* 152 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00073) */
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 154 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00078 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

static HARBOUR hb_INITSTATICS( void )
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 59, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
