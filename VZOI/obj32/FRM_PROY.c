/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from <c:/EDUCAR/program/FRM_PROY.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "c:/EDUCAR/program/FRM_PROY.prg"

HB_FUNC( FRM_PROY );
extern HB_FUNC( AADD );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FRM_PROY )
{ "FRM_PROY", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( FRM_PROY ), (PHB_DYNS) 1 },
{ "AADD", HB_FS_PUBLIC, HB_FUNCNAME( AADD ), NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_FRM_PROY )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_FRM_PROY
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_FRM_PROY = hb_vm_SymbolInit_FRM_PROY;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_FRM_PROY
#endif

HB_FUNC( FRM_PROY )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* ALINE */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 4 */
	HB_P_PUSHSYMNEAR, 1,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ALINE */
	HB_P_PUSHSTR, 63, 1,	/* 319 */
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'P', 'r', 'o', 'y', 'e', 'c', 'c', 'i', 243, 'n', ' ', 'd', 'e', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'z', 'a', 's', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '4', '2', '1', '5', '6', '6', '0', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '7', '7', '6', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '4', '5', '3', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', 0, 
	HB_P_DOSHORT, 2,
/* 00342 */ HB_P_LINEOFFSET, 2,	/* 5 */
	HB_P_PUSHSYMNEAR, 1,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ALINE */
	HB_P_PUSHSTR, 206, 2,	/* 718 */
	'T', 'W', 'B', 'R', 'O', 'W', 'S', 'E', '|', 'N', 'I', 'D', '=', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'B', 'r', 'w', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '1', '0', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '0', '0', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'C', 'H', 'A', 'N', 'G', 'E', '=', '|', 'N', 'F', 'R', 'E', 'E', 'Z', 'E', '=', '0', '|', 'N', 'H', 'E', 'A', 'D', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'N', 'F', 'O', 'O', 'T', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'N', 'L', 'I', 'N', 'E', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'L', 'C', 'E', 'L', 'L', 'S', 'T', 'Y', 'L', 'E', '=', 'F', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'H', 'E', 'A', 'D', '=', '0', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'H', 'E', 'A', 'D', '=', '1', '4', '2', '1', '5', '6', '6', '0', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'F', 'O', 'C', 'U', 'S', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'F', 'O', 'C', 'U', 'S', '=', '1', '2', '9', '3', '7', '7', '7', '7', '|', 'N', 'C', 'L', 'R', 'F', 'F', 'O', 'R', 'E', '=', '0', '|', 'N', 'C', 'L', 'R', 'F', 'B', 'A', 'C', 'K', '=', '1', '4', '2', '1', '5', '6', '6', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'L', 'I', 'N', 'E', '=', '0', '|', 'L', 'O', 'N', 'L', 'Y', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'F', '|', 'L', 'D', 'R', 'A', 'W', 'H', 'E', 'A', 'D', 'E', 'R', 'S', '=', 'T', '|', 'L', 'D', 'R', 'A', 'W', 'F', 'O', 'O', 'T', 'E', 'R', 'S', '=', 'F', '|', 'C', 'D', 'B', 'F', 'C', 'O', 'N', 'F', 'I', 'G', '=', 'p', 'r', 'o', 'y', '|', 'C', 'T', 'I', 'T', 'U', 'L', 'O', '=', '|', 'C', 'S', 'U', 'B', 'T', 'I', 'T', 'U', '=', '|', 'S', 'E', 'T', 'L', 'A', 'N', 'D', '=', '|', 'L', 'A', 'R', 'P', 'A', 'G', '=', '|', 'C', 'F', 'I', 'N', 'R', 'E', 'P', 'O', '=', '|', 'C', 'G', 'R', 'O', 'U', 'P', '=', '|', 'C', 'A', 'N', 'T', 'E', 'G', 'R', 'O', 'U', 'P', '=', '|', 'C', 'D', 'E', 'S', 'P', 'G', 'R', 'O', 'U', 'P', '=', '|', 'L', 'T', 'O', 'T', 'X', 'P', 'A', 'G', '=', 'F', '|', 'C', '_', 'S', 'E', 'T', 'A', 'R', 'R', 'A', 'Y', '=', '|', 'C', '_', 'S', 'E', 'T', 'T', 'R', 'E', 'E', '=', '|', 'C', '_', 'S', 'E', 'T', 'T', 'X', 'T', '=', 0, 
	HB_P_DOSHORT, 2,
/* 01072 */ HB_P_LINEOFFSET, 3,	/* 6 */
	HB_P_PUSHLOCALNEAR, 1,	/* ALINE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01078 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

