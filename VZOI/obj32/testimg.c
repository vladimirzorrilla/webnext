/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from <c:/EDUCAR/program/testimg.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "c:/EDUCAR/program/testimg.prg"

HB_FUNC( IMG );
HB_FUNC( GETIMAGE );
HB_FUNC( PRINTIMAGE );
HB_FUNC( APPSYS );
extern HB_FUNC( TDIALOG );
extern HB_FUNC( TIMAGE );
extern HB_FUNC( TBUTTON );
extern HB_FUNC( MSGINFO );
extern HB_FUNC( TCHECKBOX );
extern HB_FUNC( PCOUNT );
extern HB_FUNC( CGETFILE );
extern HB_FUNC( EMPTY );
extern HB_FUNC( FILE );
extern HB_FUNC( PRINTBEGIN );
extern HB_FUNC( PAGEBEGIN );
extern HB_FUNC( PAGEEND );
extern HB_FUNC( PRINTEND );
extern HB_FUNC( ERRORSYS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TESTIMG )
{ "IMG", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( IMG ), (PHB_DYNS) 1 },
{ "NEW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TDIALOG", HB_FS_PUBLIC, HB_FUNCNAME( TDIALOG ), NULL },
{ "TIMAGE", HB_FS_PUBLIC, HB_FUNCNAME( TIMAGE ), NULL },
{ "PROGRESS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TBUTTON", HB_FS_PUBLIC, HB_FUNCNAME( TBUTTON ), NULL },
{ "GETIMAGE", HB_FS_PUBLIC, HB_FUNCNAME( GETIMAGE ), (PHB_DYNS) 1 },
{ "PRINTIMAGE", HB_FS_PUBLIC, HB_FUNCNAME( PRINTIMAGE ), (PHB_DYNS) 1 },
{ "COPYTOCLIPBOARD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LOADFROMCLIPBOARD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REFRESH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SAVEIMAGE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGINFO", HB_FS_PUBLIC, HB_FUNCNAME( MSGINFO ), NULL },
{ "END", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TCHECKBOX", HB_FS_PUBLIC, HB_FUNCNAME( TCHECKBOX ), NULL },
{ "PCOUNT", HB_FS_PUBLIC, HB_FUNCNAME( PCOUNT ), NULL },
{ "LSTRETCH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_LSTRETCH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SCROLLADJUST", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACTIVATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BLCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BMOVED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BPAINTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BRCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CGETFILE", HB_FS_PUBLIC, HB_FUNCNAME( CGETFILE ), NULL },
{ "EMPTY", HB_FS_PUBLIC, HB_FUNCNAME( EMPTY ), NULL },
{ "FILE", HB_FS_PUBLIC, HB_FUNCNAME( FILE ), NULL },
{ "LOADBMP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "PRINTBEGIN", HB_FS_PUBLIC, HB_FUNCNAME( PRINTBEGIN ), NULL },
{ "PAGEBEGIN", HB_FS_PUBLIC, HB_FUNCNAME( PAGEBEGIN ), NULL },
{ "SAYIMAGE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "PAGEEND", HB_FS_PUBLIC, HB_FUNCNAME( PAGEEND ), NULL },
{ "PRINTEND", HB_FS_PUBLIC, HB_FUNCNAME( PRINTEND ), NULL },
{ "APPSYS", HB_FS_PUBLIC, HB_FUNCNAME( APPSYS ), (PHB_DYNS) 1 },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_TESTIMG )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_TESTIMG
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_TESTIMG = hb_vm_SymbolInit_TESTIMG;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_TESTIMG
#endif

HB_FUNC( IMG )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 2,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'F', 'i', 'v', 'e', 'W', 'i', 'n', ' ', 'f', 'o', 'r', ' ', 'H', 'a', 'r', 'b', 'o', 'u', 'r', ' ', 'J', 'P', 'G', ',', 'J', 'I', 'F', ',', 'G', 'I', 'F', ',', 'B', 'M', 'P', ',', 'D', 'I', 'B', ',', 'R', 'L', 'E', ',', 'T', 'G', 'A', ',', 'P', 'C', 'X', ' ', 's', 'u', 'p', 'p', 'o', 'r', 't', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 19,
	HB_P_POPLOCALNEAR, 1,	/* ODLG */
/* 00101 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 3,	/* TIMAGE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 19,
	HB_P_POPLOCALNEAR, 2,	/* OIMAGE */
/* 00139 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_MESSAGE, 4, 0,	/* PROGRESS */
	HB_P_PUSHLOCALNEAR, 2,	/* OIMAGE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00150 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'e', 'l', 'e', 'c', 't', ' ', 'I', 'm', 'a', 'g', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_PUSHSYMNEAR, 6,	/* GETIMAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00214 */ HB_P_LINEOFFSET, 8,	/* 19 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'r', 'i', 'n', 't', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_PUSHSYMNEAR, 7,	/* PRINTIMAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00272 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'p', 'y', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_MESSAGE, 8, 0,	/* COPYTOCLIPBOARD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00329 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'a', 's', 't', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_MESSAGE, 9, 0,	/* LOADFROMCLIPBOARD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 10, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00395 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'S', 'a', 'v', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 60, 0,	/* 60 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_MESSAGE, 11, 0,	/* SAVEIMAGE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'A', 'V', 'E', 'D', '.', 'J', 'P', 'G', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 12,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	's', 'a', 'v', 'e', 'd', ' ', 'a', 's', ' ', 's', 'a', 'v', 'e', 'd', '.', 'j', 'p', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00495 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 5,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'x', 'i', 't', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* ODLG */
	HB_P_MESSAGE, 13, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
/* 00552 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 14,	/* TCHECKBOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 't', 'r', 'e', 't', 'c', 'h', 0, 
	HB_P_PUSHBLOCK, 37, 0,	/* 37 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_PUSHSYMNEAR, 15,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00603) */
	HB_P_MESSAGE, 16, 0,	/* LSTRETCH */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 00612) */
	HB_P_MESSAGE, 17, 0,	/* _LSTRETCH */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OIMAGE */
	HB_P_MESSAGE, 18, 0,	/* SCROLLADJUST */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 10, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 18,
	HB_P_POP,
/* 00657 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_MESSAGE, 19, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_MESSAGE, 20, 0,	/* BLCLICKED */
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 21, 0,	/* BMOVED */
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 22, 0,	/* BPAINTED */
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 23, 0,	/* BRCLICKED */
	HB_P_PUSHLOCALNEAR, 1,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 9,
	HB_P_POP,
/* 00700 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00705 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GETIMAGE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 51, 0,	/* 51 */
	HB_P_PUSHSYMNEAR, 24,	/* CGETFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 169,	/* 169 */
	'B', 'i', 't', 'm', 'a', 'p', ' ', '(', '*', '.', 'b', 'm', 'p', ')', '|', ' ', '*', '.', 'b', 'm', 'p', '|', 'D', 'I', 'B', ' ', ' ', ' ', '(', '*', '.', 'd', 'i', 'b', ')', '|', ' ', '*', '.', 'd', 'i', 'b', '|', 'P', 'C', 'X', ' ', ' ', ' ', '(', '*', '.', 'p', 'c', 'x', ')', '|', ' ', '*', '.', 'p', 'c', 'x', '|', 'J', 'P', 'E', 'G', ' ', ' ', '(', '*', '.', 'j', 'p', 'g', ')', '|', ' ', '*', '.', 'j', 'p', 'g', '|', 'G', 'I', 'F', ' ', ' ', ' ', '(', '*', '.', 'g', 'i', 'f', ')', '|', ' ', '*', '.', 'g', 'i', 'f', '|', 'T', 'A', 'R', 'G', 'A', ' ', '(', '*', '.', 't', 'g', 'a', ')', '|', ' ', '*', '.', 't', 'g', 'a', '|', 'R', 'L', 'E', ' ', ' ', ' ', '(', '*', '.', 'r', 'l', 'e', ')', '|', ' ', '*', '.', 'r', 'l', 'e', '|', 'A', 'l', 'l', ' ', 'F', 'i', 'l', 'e', 's', ' ', '(', '*', '.', '*', ')', '|', ' ', '*', '.', '*', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'P', 'l', 'e', 'a', 's', 'e', ' ', 's', 'e', 'l', 'e', 'c', 't', ' ', 'a', ' ', 'i', 'm', 'a', 'g', 'e', ' ', 'f', 'i', 'l', 'e', 0, 
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* GCFILE */
/* 00215 */ HB_P_LINEOFFSET, 2,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* GCFILE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00236) */
	HB_P_PUSHSYMNEAR, 26,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* GCFILE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00252) */
/* 00238 */ HB_P_LINEOFFSET, 3,	/* 54 */
	HB_P_MESSAGE, 27, 0,	/* LOADBMP */
	HB_P_PUSHLOCALNEAR, 1,	/* OIMAGE */
	HB_P_PUSHLOCALNEAR, 2,	/* GCFILE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00252) */
/* 00252 */ HB_P_LINEOFFSET, 6,	/* 57 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00257 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PRINTIMAGE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 65, 0,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* PRINTBEGIN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'I', 'm', 'a', 'g', 'e', ' ', 'P', 'r', 'i', 'n', 't', 'i', 'n', 'g', 0, 
	HB_P_FALSE,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 2,	/* OPRN */
/* 00034 */ HB_P_LINEOFFSET, 1,	/* 66 */
	HB_P_PUSHSYMNEAR, 29,	/* PAGEBEGIN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00041 */ HB_P_LINEOFFSET, 2,	/* 67 */
	HB_P_MESSAGE, 30, 0,	/* SAYIMAGE */
	HB_P_PUSHLOCALNEAR, 2,	/* OPRN */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* OIMAGE */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* PAGEEND */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00062 */ HB_P_LINEOFFSET, 4,	/* 69 */
	HB_P_PUSHSYMNEAR, 32,	/* PRINTEND */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00069 */ HB_P_LINEOFFSET, 6,	/* 71 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00074 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( APPSYS )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 77, 0,	/* 77 */
	HB_P_ENDPROC
/* 00004 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

