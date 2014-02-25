/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from <c:/EDUCAR/program/graficas.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "c:/EDUCAR/program/graficas.prg"

HB_FUNC( GRAFHM );
HB_FUNC( GRAFMR );
HB_FUNC( GRAFATF );
HB_FUNC( GRAFFLUJO );
HB_FUNC( GRAFRUBRO );
extern HB_FUNC( VZ2QUERY );
extern HB_FUNC( ALLTRIM );
extern HB_FUNC( PERIODO );
extern HB_FUNC( SUBSTR );
extern HB_FUNC( OFERTAEDUCATIVA );
extern HB_FUNC( VALTYPE );
extern HB_FUNC( LTRIM );
extern HB_FUNC( STR );
extern HB_FUNC( H );
extern HB_FUNC( MEMOWRIT );
extern HB_FUNC( WINEXEC );
extern HB_FUNC( ASHIS2 );
extern HB_FUNC( CCCMES );
extern HB_FUNC( VAL );
extern HB_FUNC( CTA10 );
extern HB_FUNC( DTOMY );
extern HB_FUNC( _VG );
extern HB_FUNC( DTOC );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GRAFICAS )
{ "GRAFHM", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( GRAFHM ), (PHB_DYNS) 1 },
{ "VZ2QUERY", HB_FS_PUBLIC, HB_FUNCNAME( VZ2QUERY ), NULL },
{ "NROWCOUNT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GOTO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LOAD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ALLTRIM", HB_FS_PUBLIC, HB_FUNCNAME( ALLTRIM ), NULL },
{ "FLDGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "PERIODO", HB_FS_PUBLIC, HB_FUNCNAME( PERIODO ), NULL },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "OFERTAEDUCATIVA", HB_FS_PUBLIC, HB_FUNCNAME( OFERTAEDUCATIVA ), NULL },
{ "VALTYPE", HB_FS_PUBLIC, HB_FUNCNAME( VALTYPE ), NULL },
{ "LTRIM", HB_FS_PUBLIC, HB_FUNCNAME( LTRIM ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "H", HB_FS_PUBLIC, HB_FUNCNAME( H ), NULL },
{ "MEMOWRIT", HB_FS_PUBLIC, HB_FUNCNAME( MEMOWRIT ), NULL },
{ "WINEXEC", HB_FS_PUBLIC, HB_FUNCNAME( WINEXEC ), NULL },
{ "GRAFMR", HB_FS_PUBLIC, HB_FUNCNAME( GRAFMR ), (PHB_DYNS) 1 },
{ "GRAFATF", HB_FS_PUBLIC, HB_FUNCNAME( GRAFATF ), (PHB_DYNS) 1 },
{ "GRAFFLUJO", HB_FS_PUBLIC, HB_FUNCNAME( GRAFFLUJO ), (PHB_DYNS) 1 },
{ "ASHIS2", HB_FS_PUBLIC, HB_FUNCNAME( ASHIS2 ), NULL },
{ "CCCMES", HB_FS_PUBLIC, HB_FUNCNAME( CCCMES ), NULL },
{ "VAL", HB_FS_PUBLIC, HB_FUNCNAME( VAL ), NULL },
{ "GRAFRUBRO", HB_FS_PUBLIC, HB_FUNCNAME( GRAFRUBRO ), (PHB_DYNS) 1 },
{ "CTA10", HB_FS_PUBLIC, HB_FUNCNAME( CTA10 ), NULL },
{ "DTOMY", HB_FS_PUBLIC, HB_FUNCNAME( DTOMY ), NULL },
{ "_VG", HB_FS_PUBLIC, HB_FUNCNAME( _VG ), NULL },
{ "DTOC", HB_FS_PUBLIC, HB_FUNCNAME( DTOC ), NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_GRAFICAS )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_GRAFICAS
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_GRAFICAS = hb_vm_SymbolInit_GRAFICAS;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_GRAFICAS
#endif

HB_FUNC( GRAFHM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 5, 11, 0,	/* BARSERIES 11*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '=', 0, 
	HB_P_LOCALNEARSETSTR, 6, 12, 0,	/* BARSERIES2 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '2', '=', 0, 
	HB_P_LOCALNEARSETSTR, 7, 8, 0,	/* YLABEL 8*/
	'Y', 'L', 'A', 'B', 'E', 'L', '=', 0, 
/* 00054 */ HB_P_LINEOFFSET, 1,	/* 5 */
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* TXT 1*/
	0, 
/* 00061 */ HB_P_LINEOFFSET, 2,	/* 6 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'A', 'R', 'R', 'E', 'R', 'A', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'r', 'r', 'e', 'r', 'a', 's', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00116 */ HB_P_LINEOFFSET, 3,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 8, 0,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00128 */ HB_P_LINEOFFSET, 4,	/* 8 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00216) */
/* 00146 */ HB_P_LINEOFFSET, 5,	/* 9 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00166 */ HB_P_LINEOFFSET, 6,	/* 10 */
	HB_P_PUSHLOCALNEAR, 7,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 5,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00200) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00204) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* YLABEL */
/* 00208 */ HB_P_LINEOFFSET, 7,	/* 11 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 176,	/* -80 (abs: 00134) */
/* 00216 */ HB_P_LINEOFFSET, 8,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00223 */ HB_P_LINEOFFSET, 9,	/* 13 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00266 */ HB_P_LINEOFFSET, 10,	/* 14 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'L', 'E', 'F', 'T', ' ', 'J', 'O', 'I', 'N', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', ' ', 'O', 'N', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', '.', 'c', 'o', 'd', 'i', 'g', 'o', '=', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'c', 'o', 'd', '_', 'a', 'l', 'u', 'm', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00331 */ HB_P_LINEOFFSET, 11,	/* 15 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'W', 'H', 'E', 'R', 'E', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	39, ' ', 'A', 'N', 'D', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', '.', 'S', 'E', 'X', 'O', '=', 39, 'M', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00433 */ HB_P_LINEOFFSET, 12,	/* 16 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00460 */ HB_P_LINEOFFSET, 14,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 2, 0,	/* OHOM */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00472 */ HB_P_LINEOFFSET, 16,	/* 20 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 00628) */
/* 00491 */ HB_P_LINEOFFSET, 17,	/* 21 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00511 */ HB_P_LINEOFFSET, 18,	/* 22 */
	HB_P_PUSHSYMNEAR, 10,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00582) */
/* 00533 */ HB_P_LINEOFFSET, 19,	/* 23 */
	HB_P_PUSHLOCALNEAR, 5,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00572) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00576) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* BARSERIES */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00619) */
/* 00582 */ HB_P_LINEOFFSET, 21,	/* 25 */
	HB_P_PUSHLOCALNEAR, 5,	/* BARSERIES */
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OHOM */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00611) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00615) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* BARSERIES */
/* 00619 */ HB_P_LINEOFFSET, 23,	/* 27 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 00478) */
/* 00628 */ HB_P_LINEOFFSET, 24,	/* 28 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00635 */ HB_P_LINEOFFSET, 25,	/* 29 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00678 */ HB_P_LINEOFFSET, 26,	/* 30 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'L', 'E', 'F', 'T', ' ', 'J', 'O', 'I', 'N', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', ' ', 'O', 'N', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', '.', 'c', 'o', 'd', 'i', 'g', 'o', '=', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'c', 'o', 'd', '_', 'a', 'l', 'u', 'm', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00743 */ HB_P_LINEOFFSET, 27,	/* 31 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'W', 'H', 'E', 'R', 'E', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	39, ' ', 'A', 'N', 'D', ' ', 'a', 'l', 'u', 'm', 'n', 'o', 's', '.', 'S', 'E', 'X', 'O', '=', 39, 'F', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00845 */ HB_P_LINEOFFSET, 28,	/* 32 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00872 */ HB_P_LINEOFFSET, 29,	/* 33 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 3, 0,	/* OMUJ */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00884 */ HB_P_LINEOFFSET, 30,	/* 34 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 01040) */
/* 00903 */ HB_P_LINEOFFSET, 31,	/* 35 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00923 */ HB_P_LINEOFFSET, 33,	/* 37 */
	HB_P_PUSHSYMNEAR, 10,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00994) */
/* 00945 */ HB_P_LINEOFFSET, 34,	/* 38 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00984) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00988) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES2 */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 01031) */
/* 00994 */ HB_P_LINEOFFSET, 36,	/* 40 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES2 */
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OMUJ */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01023) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 01027) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES2 */
/* 01031 */ HB_P_LINEOFFSET, 38,	/* 42 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 00890) */
/* 01040 */ HB_P_LINEOFFSET, 41,	/* 45 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'Y', 'P', 'E', 'C', 'H', 'A', 'R', 'T', '=', 'G', 'R', 'O', 'U', 'P', 'B', 'A', 'R', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01074 */ HB_P_LINEOFFSET, 42,	/* 46 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'A', 'l', 'u', 'm', 'n', 'o', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01126 */ HB_P_LINEOFFSET, 43,	/* 47 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'M', 'I', 'N', 'V', 'A', 'L', 'U', 'E', '=', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01153 */ HB_P_LINEOFFSET, 44,	/* 48 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'M', 'A', 'X', 'V', 'A', 'L', 'U', 'E', '=', '2', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01182 */ HB_P_LINEOFFSET, 45,	/* 49 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01211 */ HB_P_LINEOFFSET, 46,	/* 50 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'X', 'S', 'U', 'N', 'I', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01234 */ HB_P_LINEOFFSET, 47,	/* 51 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'X', 'S', 'T', 'E', 'X', 'T', '=', 'N', 186, ' ', 'A', 'l', 'u', 'm', 'n', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01267 */ HB_P_LINEOFFSET, 48,	/* 52 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 7,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01282 */ HB_P_LINEOFFSET, 49,	/* 53 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Y', 'S', 'T', 'E', 'X', 'T', '=', 'A', 209, 'O', 'S', ' ', 'D', 'E', ' ', 'E', 'S', 'T', 'U', 'D', 'I', 'O', 'S', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01321 */ HB_P_LINEOFFSET, 50,	/* 54 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01366 */ HB_P_LINEOFFSET, 51,	/* 55 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 5,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01381 */ HB_P_LINEOFFSET, 52,	/* 56 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01396 */ HB_P_LINEOFFSET, 53,	/* 57 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'L', 'E', 'G', 'E', 'N', 'D', '=', 'H', 'o', 'm', 'b', 'r', 'e', 's', '*', 'M', 'u', 'j', 'e', 'r', 'e', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01434 */ HB_P_LINEOFFSET, 55,	/* 59 */
	HB_P_PUSHSYMNEAR, 14,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_DOSHORT, 2,
/* 01453 */ HB_P_LINEOFFSET, 57,	/* 61 */
	HB_P_PUSHSYMNEAR, 15,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'e', 'x', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01470 */ HB_P_LINEOFFSET, 58,	/* 62 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01475 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAFMR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 67, 0,	/* 67 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 6, 11, 0,	/* BARSERIES 11*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '=', 0, 
	HB_P_LOCALNEARSETSTR, 7, 12, 0,	/* BARSERIES2 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '2', '=', 0, 
	HB_P_LOCALNEARSETSTR, 8, 12, 0,	/* BARSERIES3 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '3', '=', 0, 
	HB_P_LOCALNEARSETSTR, 9, 8, 0,	/* YLABEL 8*/
	'Y', 'L', 'A', 'B', 'E', 'L', '=', 0, 
/* 00070 */ HB_P_LINEOFFSET, 1,	/* 68 */
	HB_P_LOCALNEARSETSTR, 11, 1, 0,	/* TXT 1*/
	0, 
/* 00077 */ HB_P_LINEOFFSET, 2,	/* 69 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'A', 'R', 'R', 'E', 'R', 'A', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'r', 'r', 'e', 'r', 'a', 's', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00132 */ HB_P_LINEOFFSET, 3,	/* 70 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 10, 0,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00144 */ HB_P_LINEOFFSET, 4,	/* 71 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00232) */
/* 00162 */ HB_P_LINEOFFSET, 5,	/* 72 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00182 */ HB_P_LINEOFFSET, 6,	/* 73 */
	HB_P_PUSHLOCALNEAR, 9,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 5,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00216) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00220) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* YLABEL */
/* 00224 */ HB_P_LINEOFFSET, 7,	/* 74 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 176,	/* -80 (abs: 00150) */
/* 00232 */ HB_P_LINEOFFSET, 8,	/* 75 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00239 */ HB_P_LINEOFFSET, 9,	/* 76 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00282 */ HB_P_LINEOFFSET, 10,	/* 77 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'W', 'H', 'E', 'R', 'E', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00363 */ HB_P_LINEOFFSET, 11,	/* 78 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00390 */ HB_P_LINEOFFSET, 13,	/* 80 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 2, 0,	/* OMAT */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00402 */ HB_P_LINEOFFSET, 15,	/* 82 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 00558) */
/* 00421 */ HB_P_LINEOFFSET, 16,	/* 83 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00441 */ HB_P_LINEOFFSET, 17,	/* 84 */
	HB_P_PUSHSYMNEAR, 10,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00512) */
/* 00463 */ HB_P_LINEOFFSET, 18,	/* 85 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00502) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00506) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00549) */
/* 00512 */ HB_P_LINEOFFSET, 20,	/* 87 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00541) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00545) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES */
/* 00549 */ HB_P_LINEOFFSET, 22,	/* 89 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* J 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 00408) */
/* 00558 */ HB_P_LINEOFFSET, 23,	/* 90 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00565 */ HB_P_LINEOFFSET, 24,	/* 91 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00608 */ HB_P_LINEOFFSET, 25,	/* 92 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'W', 'H', 'E', 'R', 'E', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'B', 'A', 'J', 'A', '=', 39, 'S', 'I', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00713 */ HB_P_LINEOFFSET, 26,	/* 93 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00740 */ HB_P_LINEOFFSET, 27,	/* 94 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 4, 0,	/* ORET */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00752 */ HB_P_LINEOFFSET, 28,	/* 95 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 00908) */
/* 00771 */ HB_P_LINEOFFSET, 29,	/* 96 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00791 */ HB_P_LINEOFFSET, 31,	/* 98 */
	HB_P_PUSHSYMNEAR, 10,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00862) */
/* 00813 */ HB_P_LINEOFFSET, 32,	/* 99 */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00852) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00856) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00899) */
/* 00862 */ HB_P_LINEOFFSET, 34,	/* 101 */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* ORET */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00891) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00895) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* BARSERIES2 */
/* 00899 */ HB_P_LINEOFFSET, 36,	/* 103 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* J 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 00758) */
/* 00908 */ HB_P_LINEOFFSET, 38,	/* 105 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00915 */ HB_P_LINEOFFSET, 39,	/* 106 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00958 */ HB_P_LINEOFFSET, 40,	/* 107 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'I', 'N', 'N', 'E', 'R', ' ', 'J', 'O', 'I', 'N', ' ', 'a', 's', 'i', 's', 'c', 'u', 'r', ' ', 'o', 'n', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'c', 'o', 'd', '_', 'a', 'l', 'u', 'm', '=', 'a', 's', 'i', 's', 'c', 'u', 'r', '.', 'c', 'o', 'd', '_', 'a', 'l', 'u', 'm', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 01026 */ HB_P_LINEOFFSET, 41,	/* 108 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'W', 'H', 'E', 'R', 'E', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	39, ' ', 'A', 'N', 'D', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 01117 */ HB_P_LINEOFFSET, 42,	/* 109 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', '.', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 01154 */ HB_P_LINEOFFSET, 43,	/* 110 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 3, 0,	/* OACT */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 01166 */ HB_P_LINEOFFSET, 44,	/* 111 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 01322) */
/* 01185 */ HB_P_LINEOFFSET, 45,	/* 112 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01205 */ HB_P_LINEOFFSET, 46,	/* 113 */
	HB_P_PUSHSYMNEAR, 10,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 01276) */
/* 01227 */ HB_P_LINEOFFSET, 47,	/* 114 */
	HB_P_PUSHLOCALNEAR, 8,	/* BARSERIES3 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01266) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 01270) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* BARSERIES3 */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 01313) */
/* 01276 */ HB_P_LINEOFFSET, 49,	/* 116 */
	HB_P_PUSHLOCALNEAR, 8,	/* BARSERIES3 */
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OACT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01305) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 01309) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* BARSERIES3 */
/* 01313 */ HB_P_LINEOFFSET, 51,	/* 118 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* J 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 01172) */
/* 01322 */ HB_P_LINEOFFSET, 53,	/* 120 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'Y', 'P', 'E', 'C', 'H', 'A', 'R', 'T', '=', 'G', 'R', 'O', 'U', 'P', 'B', 'A', 'R', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01356 */ HB_P_LINEOFFSET, 54,	/* 121 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'A', 'l', 'u', 'm', 'n', 'o', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01408 */ HB_P_LINEOFFSET, 55,	/* 122 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'M', 'I', 'N', 'V', 'A', 'L', 'U', 'E', '=', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01435 */ HB_P_LINEOFFSET, 56,	/* 123 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'M', 'A', 'X', 'V', 'A', 'L', 'U', 'E', '=', '2', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01464 */ HB_P_LINEOFFSET, 57,	/* 124 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01493 */ HB_P_LINEOFFSET, 58,	/* 125 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'X', 'S', 'U', 'N', 'I', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01516 */ HB_P_LINEOFFSET, 59,	/* 126 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'X', 'S', 'T', 'E', 'X', 'T', '=', 'N', 186, ' ', 'A', 'l', 'u', 'm', 'n', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01549 */ HB_P_LINEOFFSET, 60,	/* 127 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHLOCALNEAR, 9,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01564 */ HB_P_LINEOFFSET, 61,	/* 128 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Y', 'S', 'T', 'E', 'X', 'T', '=', 'A', 209, 'O', 'S', ' ', 'D', 'E', ' ', 'E', 'S', 'T', 'U', 'D', 'I', 'O', 'S', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01603 */ HB_P_LINEOFFSET, 62,	/* 129 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 10,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01648 */ HB_P_LINEOFFSET, 63,	/* 130 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01663 */ HB_P_LINEOFFSET, 64,	/* 131 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01678 */ HB_P_LINEOFFSET, 65,	/* 132 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHLOCALNEAR, 8,	/* BARSERIES3 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01693 */ HB_P_LINEOFFSET, 66,	/* 133 */
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'L', 'E', 'G', 'E', 'N', 'D', '=', 'M', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', 'd', 'o', 's', '*', 'R', 'e', 't', 'i', 'r', 'a', 'd', 'o', 's', '*', 'A', 'c', 't', 'i', 'v', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* TXT */
/* 01746 */ HB_P_LINEOFFSET, 68,	/* 135 */
	HB_P_PUSHSYMNEAR, 14,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 11,	/* TXT */
	HB_P_DOSHORT, 2,
/* 01765 */ HB_P_LINEOFFSET, 70,	/* 137 */
	HB_P_PUSHSYMNEAR, 15,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'e', 'x', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01782 */ HB_P_LINEOFFSET, 71,	/* 138 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01787 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAFATF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 142, 0,	/* 142 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 4, 11, 0,	/* BARSERIES 11*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '=', 0, 
	HB_P_LOCALNEARSETSTR, 5, 12, 0,	/* BARSERIES2 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '2', '=', 0, 
	HB_P_LOCALNEARSETSTR, 6, 12, 0,	/* BARSERIES3 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '3', '=', 0, 
	HB_P_LOCALNEARSETSTR, 7, 8, 0,	/* YLABEL 8*/
	'Y', 'L', 'A', 'B', 'E', 'L', '=', 0, 
/* 00070 */ HB_P_LINEOFFSET, 1,	/* 143 */
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* TXT 1*/
	0, 
/* 00077 */ HB_P_LINEOFFSET, 2,	/* 144 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'A', 'R', 'R', 'E', 'R', 'A', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'r', 'r', 'e', 'r', 'a', 's', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'C', 'O', 'D', '_', 'C', 'A', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00132 */ HB_P_LINEOFFSET, 3,	/* 145 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 8, 0,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00144 */ HB_P_LINEOFFSET, 4,	/* 146 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 00232) */
/* 00162 */ HB_P_LINEOFFSET, 5,	/* 147 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00182 */ HB_P_LINEOFFSET, 6,	/* 148 */
	HB_P_PUSHLOCALNEAR, 7,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 5,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00216) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00220) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* YLABEL */
/* 00224 */ HB_P_LINEOFFSET, 7,	/* 149 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 176,	/* -80 (abs: 00150) */
/* 00232 */ HB_P_LINEOFFSET, 8,	/* 150 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* CMD 1*/
	0, 
/* 00239 */ HB_P_LINEOFFSET, 9,	/* 151 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', ' ', 'S', 'U', 'M', '(', 'A', 'S', 'I', 'S', 'T', 'E', 'N', 'C', 'I', 'A', ')', ',', 'S', 'U', 'M', '(', 'T', 'A', 'R', 'D', 'A', 'N', 'Z', 'A', ')', ',', 'S', 'U', 'M', '(', 'F', 'A', 'L', 'T', 'A', 'S', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'a', 's', 'i', 's', 'c', 'u', 'r', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00312 */ HB_P_LINEOFFSET, 10,	/* 152 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'W', 'H', 'E', 'R', 'E', ' ', 'a', 's', 'i', 's', 'c', 'u', 'r', '.', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	39, ' ', 'A', 'N', 'D', ' ', 'a', 's', 'i', 's', 'c', 'u', 'r', '.', 'T', 'I', 'P', 'O', '_', 'C', 'A', 'R', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00399 */ HB_P_LINEOFFSET, 11,	/* 153 */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'a', 's', 'i', 's', 'c', 'u', 'r', '.', 'C', 'O', 'D', '_', 'C', 'A', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CMD */
/* 00434 */ HB_P_LINEOFFSET, 13,	/* 155 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 2, 0,	/* OMAT */
	HB_P_PUSHLOCALNEAR, 1,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00446 */ HB_P_LINEOFFSET, 15,	/* 157 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 00637) */
/* 00465 */ HB_P_LINEOFFSET, 16,	/* 158 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00485 */ HB_P_LINEOFFSET, 17,	/* 159 */
	HB_P_PUSHLOCALNEAR, 4,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00524) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00528) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* BARSERIES */
/* 00532 */ HB_P_LINEOFFSET, 18,	/* 160 */
	HB_P_PUSHLOCALNEAR, 5,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00572) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00576) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* BARSERIES2 */
/* 00580 */ HB_P_LINEOFFSET, 19,	/* 161 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES3 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OMAT */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00620) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00624) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES3 */
/* 00628 */ HB_P_LINEOFFSET, 20,	/* 162 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* J 1*/
	HB_P_JUMP, 74, 255,	/* -182 (abs: 00452) */
/* 00637 */ HB_P_LINEOFFSET, 23,	/* 165 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'Y', 'P', 'E', 'C', 'H', 'A', 'R', 'T', '=', 'G', 'R', 'O', 'U', 'P', 'B', 'A', 'R', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00671 */ HB_P_LINEOFFSET, 24,	/* 166 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'A', 'l', 'u', 'm', 'n', 'o', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00723 */ HB_P_LINEOFFSET, 25,	/* 167 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'M', 'I', 'N', 'V', 'A', 'L', 'U', 'E', '=', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00750 */ HB_P_LINEOFFSET, 26,	/* 168 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'M', 'A', 'X', 'V', 'A', 'L', 'U', 'E', '=', '2', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00779 */ HB_P_LINEOFFSET, 27,	/* 169 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00808 */ HB_P_LINEOFFSET, 28,	/* 170 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'X', 'S', 'U', 'N', 'I', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00831 */ HB_P_LINEOFFSET, 29,	/* 171 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'X', 'S', 'T', 'E', 'X', 'T', '=', 'N', 186, ' ', 'v', 'e', 'c', 'e', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00862 */ HB_P_LINEOFFSET, 30,	/* 172 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 7,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00877 */ HB_P_LINEOFFSET, 31,	/* 173 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Y', 'S', 'T', 'E', 'X', 'T', '=', 'A', 209, 'O', 'S', ' ', 'D', 'E', ' ', 'E', 'S', 'T', 'U', 'D', 'I', 'O', 'S', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00916 */ HB_P_LINEOFFSET, 32,	/* 174 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 8,	/* OCARR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00961 */ HB_P_LINEOFFSET, 33,	/* 175 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 4,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00976 */ HB_P_LINEOFFSET, 34,	/* 176 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 5,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 00991 */ HB_P_LINEOFFSET, 35,	/* 177 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES3 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01006 */ HB_P_LINEOFFSET, 36,	/* 178 */
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'L', 'E', 'G', 'E', 'N', 'D', '=', 'A', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 's', '*', 'T', 'a', 'r', 'd', 'a', 'n', 'z', 'a', 's', '*', 'F', 'a', 'l', 't', 'a', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* TXT */
/* 01057 */ HB_P_LINEOFFSET, 38,	/* 180 */
	HB_P_PUSHSYMNEAR, 14,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* TXT */
	HB_P_DOSHORT, 2,
/* 01076 */ HB_P_LINEOFFSET, 40,	/* 182 */
	HB_P_PUSHSYMNEAR, 15,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'e', 'x', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01093 */ HB_P_LINEOFFSET, 41,	/* 183 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01098 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAFFLUJO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 187, 0,	/* 187 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* TXT 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CMD 1*/
	0, 
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 188 */
	HB_P_LOCALNEARSETSTR, 5, 8, 0,	/* YLABEL 8*/
	'Y', 'L', 'A', 'B', 'E', 'L', '=', 0, 
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 189 */
	HB_P_LOCALNEARSETSTR, 6, 11, 0,	/* BARSERIES 11*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '=', 0, 
	HB_P_LOCALNEARSETSTR, 7, 12, 0,	/* BARSERIES2 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '2', '=', 0, 
/* 00063 */ HB_P_LINEOFFSET, 3,	/* 190 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'M', 'E', 'S', ',', 'S', 'U', 'M', '(', 'D', 'E', 'B', 'E', ')', ',', 'S', 'U', 'M', '(', 'H', 'A', 'B', 'E', 'R', ')', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 19,	/* ASHIS2 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00121 */ HB_P_LINEOFFSET, 4,	/* 191 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'W', 'H', 'E', 'R', 'E', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	39, ' ', 'A', 'N', 'D', ' ', 'P', 'A', 'I', 'S', '_', 'O', 'R', 'I', 'G', 'E', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	39, ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00194 */ HB_P_LINEOFFSET, 5,	/* 192 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', ' ', 'M', 'E', 'S', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00218 */ HB_P_LINEOFFSET, 7,	/* 194 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 4, 0,	/* O */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00230 */ HB_P_LINEOFFSET, 8,	/* 195 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 177, 0,	/* 177 (abs: 00423) */
/* 00249 */ HB_P_LINEOFFSET, 9,	/* 196 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00271 */ HB_P_LINEOFFSET, 10,	/* 197 */
	HB_P_PUSHLOCALNEAR, 5,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 20,	/* CCCMES */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00310) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00314) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* YLABEL */
/* 00318 */ HB_P_LINEOFFSET, 11,	/* 198 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00358) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00362) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES */
/* 00366 */ HB_P_LINEOFFSET, 12,	/* 199 */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00406) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00410) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* BARSERIES2 */
/* 00414 */ HB_P_LINEOFFSET, 13,	/* 200 */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* J 1*/
	HB_P_JUMP, 72, 255,	/* -184 (abs: 00236) */
/* 00423 */ HB_P_LINEOFFSET, 14,	/* 201 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'Y', 'P', 'E', 'C', 'H', 'A', 'R', 'T', '=', 'G', 'R', 'O', 'U', 'P', 'B', 'A', 'R', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00457 */ HB_P_LINEOFFSET, 15,	/* 202 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'F', 'L', 'U', 'J', 'O', 'G', 'R', 'A', 'M', 'A', ' ', 'D', 'E', ' ', 'P', 'A', 'G', 'O', ' ', 'D', 'E', ' ', 'P', 'E', 'N', 'S', 'I', 'O', 'N', 'E', 'S', ' ', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00530 */ HB_P_LINEOFFSET, 16,	/* 203 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'M', 'I', 'N', 'V', 'A', 'L', 'U', 'E', '=', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00557 */ HB_P_LINEOFFSET, 17,	/* 204 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'X', 'M', 'A', 'X', 'V', 'A', 'L', 'U', 'E', '=', '2', '0', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00588 */ HB_P_LINEOFFSET, 18,	/* 205 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00617 */ HB_P_LINEOFFSET, 19,	/* 206 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'X', 'S', 'U', 'N', 'I', 'T', '=', 'S', '/', '.', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00643 */ HB_P_LINEOFFSET, 20,	/* 207 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'X', 'S', 'T', 'E', 'X', 'T', '=', 'I', 'm', 'p', 'o', 'r', 't', 'e', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00683 */ HB_P_LINEOFFSET, 21,	/* 208 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'S', 'U', 'N', 'I', 'T', '2', '=', 'S', '/', '.', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00710 */ HB_P_LINEOFFSET, 22,	/* 209 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'X', 'S', 'T', 'E', 'X', 'T', '2', '=', 'I', 'm', 'p', 'o', 'r', 't', 'e', 's', ' ', 'C', 'o', 'b', 'r', 'a', 'd', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00751 */ HB_P_LINEOFFSET, 23,	/* 210 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 5,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00766 */ HB_P_LINEOFFSET, 24,	/* 211 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Y', 'S', 'T', 'E', 'X', 'T', '=', 'M', 'E', 'S', 'E', 'S', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00794 */ HB_P_LINEOFFSET, 25,	/* 212 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00839 */ HB_P_LINEOFFSET, 26,	/* 213 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00854 */ HB_P_LINEOFFSET, 27,	/* 214 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00869 */ HB_P_LINEOFFSET, 28,	/* 215 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'L', 'E', 'G', 'E', 'N', 'D', '=', 'E', 'm', 'i', 't', 'i', 'd', 'o', '*', 'C', 'o', 'b', 'r', 'a', 'd', 'o', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00907 */ HB_P_LINEOFFSET, 30,	/* 217 */
	HB_P_PUSHSYMNEAR, 14,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_DOSHORT, 2,
/* 00926 */ HB_P_LINEOFFSET, 32,	/* 219 */
	HB_P_PUSHSYMNEAR, 15,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'e', 'x', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00943 */ HB_P_LINEOFFSET, 33,	/* 220 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00948 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAFRUBRO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 225, 0,	/* 225 */
	HB_P_LOCALNEARSETSTR, 1, 1, 0,	/* TXT 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CMD 1*/
	0, 
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 226 */
	HB_P_LOCALNEARSETSTR, 5, 8, 0,	/* YLABEL 8*/
	'Y', 'L', 'A', 'B', 'E', 'L', '=', 0, 
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 227 */
	HB_P_LOCALNEARSETSTR, 6, 11, 0,	/* BARSERIES 11*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '=', 0, 
	HB_P_LOCALNEARSETSTR, 7, 12, 0,	/* BARSERIES2 12*/
	'B', 'A', 'R', 'S', 'E', 'R', 'I', 'E', 'S', '2', '=', 0, 
/* 00063 */ HB_P_LINEOFFSET, 4,	/* 229 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'f', 'c', 'h', 'n', 'u', 'm', 'e', 'r', ',', 's', 'u', 'm', '(', 'd', 'e', 'b', 'e', ')', ',', 's', 'u', 'm', '(', 'h', 'a', 'b', 'e', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 19,	/* ASHIS2 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00126 */ HB_P_LINEOFFSET, 5,	/* 230 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'W', 'H', 'E', 'R', 'E', ' ', 'C', 'U', 'E', 'N', 'T', 'A', '=', 39, 0, 
	HB_P_PUSHSYMNEAR, 23,	/* CTA10 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	39, ' ', 'A', 'N', 'D', ' ', '(', 'F', 'C', 'H', 'N', 'U', 'M', 'E', 'R', '>', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', 'C', 'R', 'U', '_', '3', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	39, ' ', 'A', 'N', 'D', ' ', 'F', 'C', 'H', 'N', 'U', 'M', 'E', 'R', '<', '=', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', 'C', 'R', 'U', '_', '5', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	39, ' ', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00247 */ HB_P_LINEOFFSET, 6,	/* 231 */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'F', 'C', 'H', 'N', 'U', 'M', 'E', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CMD */
/* 00274 */ HB_P_LINEOFFSET, 7,	/* 232 */
	HB_P_PUSHSYMNEAR, 1,	/* VZ2QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 4, 0,	/* O */
	HB_P_PUSHLOCALNEAR, 3,	/* CMD */
	HB_P_DOSHORT, 2,
/* 00286 */ HB_P_LINEOFFSET, 9,	/* 234 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 172, 0,	/* 172 (abs: 00474) */
/* 00305 */ HB_P_LINEOFFSET, 10,	/* 235 */
	HB_P_MESSAGE, 3, 0,	/* GOTO */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 4, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00327 */ HB_P_LINEOFFSET, 11,	/* 236 */
	HB_P_PUSHLOCALNEAR, 5,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 26,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00361) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00365) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* YLABEL */
/* 00369 */ HB_P_LINEOFFSET, 12,	/* 237 */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00409) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00413) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* BARSERIES */
/* 00417 */ HB_P_LINEOFFSET, 13,	/* 238 */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 6, 0,	/* FLDGET */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00457) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00461) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* BARSERIES2 */
/* 00465 */ HB_P_LINEOFFSET, 14,	/* 239 */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* J 1*/
	HB_P_JUMP, 77, 255,	/* -179 (abs: 00292) */
/* 00474 */ HB_P_LINEOFFSET, 15,	/* 240 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'Y', 'P', 'E', 'C', 'H', 'A', 'R', 'T', '=', 'G', 'R', 'O', 'U', 'P', 'B', 'A', 'R', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00508 */ HB_P_LINEOFFSET, 16,	/* 241 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'F', 'L', 'U', 'J', 'O', 'G', 'R', 'A', 'M', 'A', ' ', 'D', 'E', ' ', 'I', 'N', 'G', 'R', 'E', 'S', 'O', 'S', ' ', 'Y', ' ', 'G', 'A', 'S', 'T', 'O', 'S', ' ', 'P', 'O', 'R', ' ', 'D', 'I', 'A', ' ', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* OFERTAEDUCATIVA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* PERIODO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00589 */ HB_P_LINEOFFSET, 17,	/* 242 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'M', 'I', 'N', 'V', 'A', 'L', 'U', 'E', '=', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00616 */ HB_P_LINEOFFSET, 18,	/* 243 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'X', 'M', 'A', 'X', 'V', 'A', 'L', 'U', 'E', '=', '2', '0', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00647 */ HB_P_LINEOFFSET, 19,	/* 244 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'X', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00676 */ HB_P_LINEOFFSET, 20,	/* 245 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'X', 'S', 'U', 'N', 'I', 'T', '=', 'S', '/', '.', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00702 */ HB_P_LINEOFFSET, 21,	/* 246 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'X', 'S', 'T', 'E', 'X', 'T', '=', 'I', 'n', 'g', 'r', 'e', 's', 'o', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00733 */ HB_P_LINEOFFSET, 22,	/* 247 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'X', 'S', 'U', 'N', 'I', 'T', '2', '=', 'S', '/', '.', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00760 */ HB_P_LINEOFFSET, 23,	/* 248 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'X', 'S', 'T', 'E', 'X', 'T', '2', '=', 'S', 'a', 'l', 'i', 'd', 'a', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00791 */ HB_P_LINEOFFSET, 24,	/* 249 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 5,	/* YLABEL */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00806 */ HB_P_LINEOFFSET, 25,	/* 250 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'S', 'T', 'E', 'X', 'T', '=', 'D', 'I', 'A', 'S', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00833 */ HB_P_LINEOFFSET, 26,	/* 251 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Y', 'T', 'I', 'C', 'K', 'C', 'O', 'U', 'N', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 2, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 4,	/* O */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00878 */ HB_P_LINEOFFSET, 27,	/* 252 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 6,	/* BARSERIES */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00893 */ HB_P_LINEOFFSET, 28,	/* 253 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHLOCALNEAR, 7,	/* BARSERIES2 */
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00908 */ HB_P_LINEOFFSET, 29,	/* 254 */
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'L', 'E', 'G', 'E', 'N', 'D', '=', 'I', 'n', 'g', 'r', 'e', 's', 'o', 's', '*', 'S', 'a', 'l', 'i', 'd', 'a', 's', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* TXT */
/* 00947 */ HB_P_LINEOFFSET, 31,	/* 256 */
	HB_P_PUSHSYMNEAR, 14,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* TXT */
	HB_P_DOSHORT, 2,
/* 00966 */ HB_P_LINEOFFSET, 33,	/* 258 */
	HB_P_PUSHSYMNEAR, 15,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'M', 'C', '.', 'e', 'x', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00983 */ HB_P_LINEOFFSET, 34,	/* 259 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00988 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

