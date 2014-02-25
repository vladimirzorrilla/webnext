/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from </VZOI/PROGRAM/digital.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "/VZOI/PROGRAM/digital.prg"

HB_FUNC( VZOI );
HB_FUNC( VZOIFORM );
HB_FUNC( VZOIREPO );
HB_FUNC( FILSIMPLE );
HB_FUNC( AGRESGM );
HB_FUNC( ELIMSGM );
HB_FUNC( LLENACODREPO );
HB_FUNC( LLENACODFORM );
HB_FUNC( FILSIMPLEFO );
HB_FUNC( AGRESGMFO );
HB_FUNC( ELIMSGMFO );
HB_FUNC( SINCRONIZACION );
extern HB_FUNC( VZFORM );
extern HB_FUNC( DBSELECTAREA );
extern HB_FUNC( VZUSE_ );
extern HB_FUNC( VZDBSEEK );
extern HB_FUNC( _VG );
extern HB_FUNC( _R );
extern HB_FUNC( VZAPPEND );
extern HB_FUNC( _F );
extern HB_FUNC( VZDELE );
extern HB_FUNC( VZ2QUERY );
extern HB_FUNC( AADD );
extern HB_FUNC( MEMOREAD );
extern HB_FUNC( _T );
extern HB_FUNC( VZEXECUTE );
extern HB_FUNC( AT );
extern HB_FUNC( SUBSTR );
extern HB_FUNC( LTRIM );
extern HB_FUNC( STR );
extern HB_FUNC( MEMORY );
extern HB_FUNC( SYSREFRESH );
extern HB_FUNC( MSGALERT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DIGITAL )
{ "VZOI", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( VZOI ), (PHB_DYNS) 1 },
{ "VZFORM", HB_FS_PUBLIC, HB_FUNCNAME( VZFORM ), NULL },
{ "VZOIFORM", HB_FS_PUBLIC, HB_FUNCNAME( VZOIFORM ), (PHB_DYNS) 1 },
{ "DBSELECTAREA", HB_FS_PUBLIC, HB_FUNCNAME( DBSELECTAREA ), NULL },
{ "VZUSE_", HB_FS_PUBLIC, HB_FUNCNAME( VZUSE_ ), NULL },
{ "VZDBSEEK", HB_FS_PUBLIC, HB_FUNCNAME( VZDBSEEK ), NULL },
{ "VZOIREPO", HB_FS_PUBLIC, HB_FUNCNAME( VZOIREPO ), (PHB_DYNS) 1 },
{ "FILSIMPLE", HB_FS_PUBLIC, HB_FUNCNAME( FILSIMPLE ), (PHB_DYNS) 1 },
{ "_VG", HB_FS_PUBLIC, HB_FUNCNAME( _VG ), NULL },
{ "_R", HB_FS_PUBLIC, HB_FUNCNAME( _R ), NULL },
{ "AGRESGM", HB_FS_PUBLIC, HB_FUNCNAME( AGRESGM ), (PHB_DYNS) 1 },
{ "VZAPPEND", HB_FS_PUBLIC, HB_FUNCNAME( VZAPPEND ), NULL },
{ "_F", HB_FS_PUBLIC, HB_FUNCNAME( _F ), NULL },
{ "ELIMSGM", HB_FS_PUBLIC, HB_FUNCNAME( ELIMSGM ), (PHB_DYNS) 1 },
{ "VZDELE", HB_FS_PUBLIC, HB_FUNCNAME( VZDELE ), NULL },
{ "LLENACODREPO", HB_FS_PUBLIC, HB_FUNCNAME( LLENACODREPO ), (PHB_DYNS) 1 },
{ "VZ2QUERY", HB_FS_PUBLIC, HB_FUNCNAME( VZ2QUERY ), NULL },
{ "NROWCOUNT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GOTO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LOAD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AADD", HB_FS_PUBLIC, HB_FUNCNAME( AADD ), NULL },
{ "COD_REPO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LLENACODFORM", HB_FS_PUBLIC, HB_FUNCNAME( LLENACODFORM ), (PHB_DYNS) 1 },
{ "CODFORM", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FILSIMPLEFO", HB_FS_PUBLIC, HB_FUNCNAME( FILSIMPLEFO ), (PHB_DYNS) 1 },
{ "AGRESGMFO", HB_FS_PUBLIC, HB_FUNCNAME( AGRESGMFO ), (PHB_DYNS) 1 },
{ "ELIMSGMFO", HB_FS_PUBLIC, HB_FUNCNAME( ELIMSGMFO ), (PHB_DYNS) 1 },
{ "SINCRONIZACION", HB_FS_PUBLIC, HB_FUNCNAME( SINCRONIZACION ), (PHB_DYNS) 1 },
{ "MEMOREAD", HB_FS_PUBLIC, HB_FUNCNAME( MEMOREAD ), NULL },
{ "_T", HB_FS_PUBLIC, HB_FUNCNAME( _T ), NULL },
{ "VZEXECUTE", HB_FS_PUBLIC, HB_FUNCNAME( VZEXECUTE ), NULL },
{ "AT", HB_FS_PUBLIC, HB_FUNCNAME( AT ), NULL },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "LTRIM", HB_FS_PUBLIC, HB_FUNCNAME( LTRIM ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "MEMORY", HB_FS_PUBLIC, HB_FUNCNAME( MEMORY ), NULL },
{ "SYSREFRESH", HB_FS_PUBLIC, HB_FUNCNAME( SYSREFRESH ), NULL },
{ "MSGALERT", HB_FS_PUBLIC, HB_FUNCNAME( MSGALERT ), NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_DIGITAL )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_DIGITAL
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_DIGITAL = hb_vm_SymbolInit_DIGITAL;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_DIGITAL
#endif

HB_FUNC( VZOI )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_PUSHSYMNEAR, 1,	/* VZFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'M', 'N', 'U', 'I', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'D', 'M', 'I', 'N', 'I', 'S', 'T', 'R', 'A', 'R', ' ', 'P', 'R', 'O', 'Y', 'E', 'C', 'T', 'O', 0, 
	HB_P_DOSHORT, 2,
/* 00038 */ HB_P_LINEOFFSET, 1,	/* 5 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00043 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZOIFORM )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_PUSHSYMNEAR, 3,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_DOSHORT, 1,
/* 00012 */ HB_P_LINEOFFSET, 1,	/* 9 */
	HB_P_PUSHSYMNEAR, 4,	/* VZUSE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 00033 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSYMNEAR, 5,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'X', 'X', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'O', 'D', 'F', 'O', 'R', 'M', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'A', 'B', 'I', 'N', 'D', 'E', 'X', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 11,
/* 00080 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* VZFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'O', 'L', 'F', 'O', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'O', 'B', 'J', 'E', 'C', 'T', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', 'S', 0, 
	HB_P_DOSHORT, 2,
/* 00116 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00121 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZOIREPO )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_DOSHORT, 1,
/* 00012 */ HB_P_LINEOFFSET, 1,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* VZUSE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'R', 'E', 'P', 'O', 'R', 'T', 'E', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'X', 'X', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'D', '_', 'R', 'E', 'P', 'O', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'O', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 11,
/* 00073 */ HB_P_LINEOFFSET, 3,	/* 19 */
	HB_P_PUSHSYMNEAR, 1,	/* VZFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'O', 'L', 'R', 'E', 0, 
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'O', 'B', 'J', 'E', 'C', 'T', ' ', 'I', 'N', 'S', 'P', 'E', 'C', 'T', 'O', 'R', ' ', 'R', 'E', 'P', 'O', 'R', 'T', 'E', 'S', 0, 
	HB_P_DOSHORT, 2,
/* 00116 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00121 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FILSIMPLE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 23, 0,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'o', 'l', 'r', 'e', '_', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* COD */
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* COD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'D', '_', 'R', 'E', 'P', 'O', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'O', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 11,
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 25 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'r', 'e', '_', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 00084 */ HB_P_LINEOFFSET, 3,	/* 26 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00089 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( AGRESGM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 30, 0,	/* 30 */
	HB_P_PUSHSYMNEAR, 8,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'o', 'l', 'r', 'e', '_', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* COD */
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* VZAPPEND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* COD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'D', '_', 'R', 'E', 'P', 'O', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00050 */ HB_P_LINEOFFSET, 2,	/* 32 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'r', 'e', '_', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 00070 */ HB_P_LINEOFFSET, 3,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* _F */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'r', 'e', '_', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00087 */ HB_P_LINEOFFSET, 5,	/* 35 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00092 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ELIMSGM )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 39, 0,	/* 39 */
	HB_P_PUSHSYMNEAR, 14,	/* VZDELE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 1,	/* 40 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'r', 'e', '_', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 41 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00030 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LLENACODREPO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 46, 0,	/* 46 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* AREPO */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 47 */
	HB_P_PUSHSYMNEAR, 16,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 3, 0,	/* OSQL */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'i', 's', 't', 'i', 'n', 'c', 't', ' ', 'c', 'o', 'd', '_', 'r', 'e', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'R', 'E', 'P', 'O', 'R', 'T', 'E', 'S', 0, 
	HB_P_DOSHORT, 2,
/* 00062 */ HB_P_LINEOFFSET, 2,	/* 48 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_MESSAGE, 17, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00126) */
/* 00080 */ HB_P_LINEOFFSET, 3,	/* 49 */
	HB_P_MESSAGE, 18, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 19, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00102 */ HB_P_LINEOFFSET, 4,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* AREPO */
	HB_P_MESSAGE, 21, 0,	/* COD_REPO */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 2,
/* 00118 */ HB_P_LINEOFFSET, 5,	/* 51 */
	HB_P_LOCALNEARADDINT, 1, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 200,	/* -56 (abs: 00068) */
/* 00126 */ HB_P_LINEOFFSET, 6,	/* 52 */
	HB_P_PUSHLOCALNEAR, 2,	/* AREPO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00132 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LLENACODFORM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 56, 0,	/* 56 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* AREPO */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 57 */
	HB_P_PUSHSYMNEAR, 16,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 3, 0,	/* OSQL */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'i', 's', 't', 'i', 'n', 'c', 't', ' ', 'c', 'o', 'd', 'f', 'o', 'r', 'm', ' ', 'F', 'R', 'O', 'M', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', 'S', 0, 
	HB_P_DOSHORT, 2,
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 58 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_MESSAGE, 17, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00128) */
/* 00082 */ HB_P_LINEOFFSET, 3,	/* 59 */
	HB_P_MESSAGE, 18, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 19, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_PUSHLOCALNEAR, 1,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00104 */ HB_P_LINEOFFSET, 4,	/* 60 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* AREPO */
	HB_P_MESSAGE, 23, 0,	/* CODFORM */
	HB_P_PUSHLOCALNEAR, 3,	/* OSQL */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 2,
/* 00120 */ HB_P_LINEOFFSET, 5,	/* 61 */
	HB_P_LOCALNEARADDINT, 1, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 200,	/* -56 (abs: 00070) */
/* 00128 */ HB_P_LINEOFFSET, 6,	/* 62 */
	HB_P_PUSHLOCALNEAR, 2,	/* AREPO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00134 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FILSIMPLEFO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 68, 0,	/* 68 */
	HB_P_PUSHSYMNEAR, 8,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'o', 'l', 'f', 'o', '_', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* COD */
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 69 */
	HB_P_PUSHSYMNEAR, 5,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* COD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'O', 'D', 'F', 'O', 'R', 'M', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'A', 'B', 'I', 'N', 'D', 'E', 'X', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 11,
/* 00068 */ HB_P_LINEOFFSET, 2,	/* 70 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'o', 'l', 'f', 'o', '_', '1', '3', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 00089 */ HB_P_LINEOFFSET, 3,	/* 71 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00094 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( AGRESGMFO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 75, 0,	/* 75 */
	HB_P_PUSHSYMNEAR, 8,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'p', 'o', 'l', 'f', 'o', '_', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* COD */
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 76 */
	HB_P_PUSHSYMNEAR, 11,	/* VZAPPEND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* COD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'O', 'D', 'F', 'O', 'R', 'M', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00049 */ HB_P_LINEOFFSET, 2,	/* 77 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'f', 'o', '_', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 78 */
	HB_P_PUSHSYMNEAR, 12,	/* _F */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'f', 'o', '_', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00086 */ HB_P_LINEOFFSET, 5,	/* 80 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00091 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ELIMSGMFO )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 84, 0,	/* 84 */
	HB_P_PUSHSYMNEAR, 14,	/* VZDELE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 1,	/* 85 */
	HB_P_PUSHSYMNEAR, 9,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'p', 'o', 'l', 'f', 'o', '_', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 86 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00030 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SINCRONIZACION )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 92, 0,	/* 92 */
	HB_P_PUSHSYMNEAR, 28,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', ':', 92, 'C', 'O', 'N', '2', '0', '1', '0', 92, 'C', 'P', 'S', 'k', '.', 'S', 'Q', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* ARCHIVOK */
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 93 */
	HB_P_PUSHSYMNEAR, 28,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', ':', 92, 'C', 'O', 'N', '2', '0', '1', '0', 92, 'C', 'P', 'S', 'd', 'e', 'l', 'e', '.', 'S', 'Q', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* ARCHIVODELE */
/* 00069 */ HB_P_LINEOFFSET, 2,	/* 94 */
	HB_P_PUSHSYMNEAR, 28,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', ':', 92, 'C', 'O', 'N', '2', '0', '1', '0', 92, 'C', 'P', 'S', '.', 'S', 'Q', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 6,	/* SALIR */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* KK 1*/
/* 00106 */ HB_P_LINEOFFSET, 4,	/* 96 */
	HB_P_PUSHSYMNEAR, 29,	/* _T */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'N', 'U', 'I', '_', '7', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* ARCHIVODELE */
	HB_P_DOSHORT, 2,
/* 00124 */ HB_P_LINEOFFSET, 5,	/* 97 */
	HB_P_PUSHSYMNEAR, 30,	/* VZEXECUTE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ARCHIVODELE */
	HB_P_DOSHORT, 1,
/* 00133 */ HB_P_LINEOFFSET, 8,	/* 100 */
	HB_P_PUSHSYMNEAR, 31,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 5,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 00196) */
/* 00154 */ HB_P_LINEOFFSET, 9,	/* 101 */
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* FILA */
/* 00171 */ HB_P_LINEOFFSET, 10,	/* 102 */
	HB_P_PUSHLOCALNEAR, 7,	/* KK */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 7,	/* KK */
/* 00178 */ HB_P_LINEOFFSET, 11,	/* 103 */
	HB_P_PUSHSYMNEAR, 32,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00207) */
/* 00196 */ HB_P_LINEOFFSET, 13,	/* 105 */
	HB_P_PUSHLOCALNEAR, 4,	/* ARCHIVO */
	HB_P_POPLOCALNEAR, 1,	/* FILA */
/* 00202 */ HB_P_LINEOFFSET, 14,	/* 106 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 6,	/* SALIR */
/* 00207 */ HB_P_LINEOFFSET, 16,	/* 108 */
	HB_P_PUSHSYMNEAR, 29,	/* _T */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'M', 'N', 'U', 'I', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* KK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', 'd', 'e', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* ARCHIVOK */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00246 */ HB_P_LINEOFFSET, 18,	/* 110 */
	HB_P_PUSHSYMNEAR, 29,	/* _T */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'N', 'U', 'I', '_', '6', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* FILA */
	HB_P_DOSHORT, 2,
/* 00264 */ HB_P_LINEOFFSET, 19,	/* 111 */
	HB_P_PUSHSYMNEAR, 35,	/* MEMORY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_DOSHORT, 1,
/* 00273 */ HB_P_LINEOFFSET, 20,	/* 112 */
	HB_P_PUSHSYMNEAR, 36,	/* SYSREFRESH */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00280 */ HB_P_LINEOFFSET, 21,	/* 113 */
	HB_P_PUSHSYMNEAR, 30,	/* VZEXECUTE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FILA */
	HB_P_DOSHORT, 1,
/* 00289 */ HB_P_LINEOFFSET, 22,	/* 114 */
	HB_P_PUSHLOCALNEAR, 6,	/* SALIR */
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00299) */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00302) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00299) */
	HB_P_JUMP, 90, 255,	/* -166 (abs: 00133) */
/* 00302 */ HB_P_LINEOFFSET, 27,	/* 119 */
	HB_P_PUSHSYMNEAR, 37,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'e', 'r', 'm', 'i', 'n', 'o', ' ', 'l', 'a', ' ', 's', 'i', 'n', 'c', 'r', 'o', 'n', 'i', 'z', 'a', 'c', 'i', 'o', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 00337 */ HB_P_LINEOFFSET, 28,	/* 120 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00342 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

