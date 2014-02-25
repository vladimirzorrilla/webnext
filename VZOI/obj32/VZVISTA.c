/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from </vclon/mclon32/vZVISTA.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "/vclon/mclon32/vZVISTA.prg"

HB_FUNC( VZ2VISTAS );
HB_FUNC( VZ2VISTA );
HB_FUNC( VZ2_999 );
HB_FUNC( GET2SELECT );
HB_FUNC( GET2NUEVO1 );
HB_FUNC( VZ2SELECT );
HB_FUNC( VZ2LEESQL );
HB_FUNC( VZ2BUSCINC );
HB_FUNC( VZ2F2SEEK );
HB_FUNC( VZ2BUSC23 );
HB_FUNC( VZ2BUSC24 );
HB_FUNC( VZ2CVISTA );
HB_FUNC( VZ2FROMVISTA );
HB_FUNC( VZ2WHEREVISTA );
HB_FUNC( VZ2ORDERVISTA );
HB_FUNC( PRE2WHERE );
HB_FUNC( VISTAQUIE2 );
HB_FUNC( MY2_SETCOLOR );
HB_FUNC( MY2_SETFONT );
HB_FUNC( LASTSELECT2 );
HB_FUNC( VZ2BARVISTA );
HB_FUNC( MM2GET );
HB_FUNC( LIMPIO132 );
HB_FUNC( MYVCAMPO2 );
HB_FUNC( VZ2FILVISTA );
HB_FUNC( XXGET2 );
HB_FUNC( VZ2FILWHERE );
HB_FUNC( TODOBLANCO );

static HARBOUR hb_INITSTATICS( void );

extern HB_FUNC( SELECT );
extern HB_FUNC( ALLTRIM );
extern HB_FUNC( FILE );
extern HB_FUNC( RCLIPPER );
extern HB_FUNC( MEMOWRIT );
extern HB_FUNC( EMPTY );
extern HB_FUNC( USE_ );
extern HB_FUNC( __DBCOPY );
extern HB_FUNC( DBSELECTAREA );
extern HB_FUNC( TMSQUERY );
extern HB_FUNC( NATIVO );
extern HB_FUNC( DBAPPEND );
extern HB_FUNC( GETTEXTWIDTH );
extern HB_FUNC( REPLICATE );
extern HB_FUNC( DBCLOSEAREA );
extern HB_FUNC( VZFORMS );
extern HB_FUNC( VALTYPE );
extern HB_FUNC( DAMEOBJ );
extern HB_FUNC( SUBSTR );
extern HB_FUNC( AT );
extern HB_FUNC( GETCOORS );
extern HB_FUNC( LEN );
extern HB_FUNC( AADD );
extern HB_FUNC( MSGALERT );
extern HB_FUNC( NADA );
extern HB_FUNC( TRANSFORM );
extern HB_FUNC( ARRAY );
extern HB_FUNC( CHR );
extern HB_FUNC( LTRIM );
extern HB_FUNC( STR );
extern HB_FUNC( VCERROR );
extern HB_FUNC( MEMOREAD );
extern HB_FUNC( VERPREQUERY );
extern HB_FUNC( OUTPUTDEBUGSTRING );
extern HB_FUNC( MSGGET );
extern HB_FUNC( VERQUERY );
extern HB_FUNC( WQOUT );
extern HB_FUNC( UPPER );
extern HB_FUNC( INT );
extern HB_FUNC( ROUND );
extern HB_FUNC( SPACE );
extern HB_FUNC( CTOD );
extern HB_FUNC( TDIALOG );
extern HB_FUNC( TGET );
extern HB_FUNC( PCOUNT );
extern HB_FUNC( TBUTTON );
extern HB_FUNC( CURSORWAIT );
extern HB_FUNC( CURSORARROW );
extern HB_FUNC( DBGOTOP );
extern HB_FUNC( DTOMY );
extern HB_FUNC( DANCHO );
extern HB_FUNC( TFONT );
extern HB_FUNC( REPO );
extern HB_FUNC( VAL );
extern HB_FUNC( TBAR );
extern HB_FUNC( TSAY );
extern HB_FUNC( TCOMBOBOX );
extern HB_FUNC( ERRORSYS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VZVISTA )
{ "VZ2VISTAS", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( VZ2VISTAS ), (PHB_DYNS) 1 },
{ "SELECT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, HB_FUNCNAME( SELECT ), NULL },
{ "ALLTRIM", HB_FS_PUBLIC, HB_FUNCNAME( ALLTRIM ), NULL },
{ "FILE", HB_FS_PUBLIC, HB_FUNCNAME( FILE ), NULL },
{ "RCLIPPER", HB_FS_PUBLIC, HB_FUNCNAME( RCLIPPER ), NULL },
{ "MEMOWRIT", HB_FS_PUBLIC, HB_FUNCNAME( MEMOWRIT ), NULL },
{ "EMPTY", HB_FS_PUBLIC, HB_FUNCNAME( EMPTY ), NULL },
{ "USE_", HB_FS_PUBLIC, HB_FUNCNAME( USE_ ), NULL },
{ "__DBCOPY", HB_FS_PUBLIC, HB_FUNCNAME( __DBCOPY ), NULL },
{ "DBSELECTAREA", HB_FS_PUBLIC, HB_FUNCNAME( DBSELECTAREA ), NULL },
{ "NEW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TMSQUERY", HB_FS_PUBLIC, HB_FUNCNAME( TMSQUERY ), NULL },
{ "NATIVO", HB_FS_PUBLIC, HB_FUNCNAME( NATIVO ), NULL },
{ "OPEN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LOAD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NFIELDCOUNT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDTYPE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDNAME", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDLENGTH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDDEC", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DBAPPEND", HB_FS_PUBLIC, HB_FUNCNAME( DBAPPEND ), NULL },
{ "FIELDS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SIZE_REPOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETTEXTWIDTH", HB_FS_PUBLIC, HB_FUNCNAME( GETTEXTWIDTH ), NULL },
{ "REPLICATE", HB_FS_PUBLIC, HB_FUNCNAME( REPLICATE ), NULL },
{ "COLSIZES", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HEADERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CLOSE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DBCLOSEAREA", HB_FS_PUBLIC, HB_FUNCNAME( DBCLOSEAREA ), NULL },
{ "VZFORMS", HB_FS_PUBLIC, HB_FUNCNAME( VZFORMS ), NULL },
{ "VZ2VISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2VISTA ), (PHB_DYNS) 1 },
{ "VALTYPE", HB_FS_PUBLIC, HB_FUNCNAME( VALTYPE ), NULL },
{ "DAMEOBJ", HB_FS_PUBLIC, HB_FUNCNAME( DAMEOBJ ), NULL },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "AT", HB_FS_PUBLIC, HB_FUNCNAME( AT ), NULL },
{ "GET2NUEVO1", HB_FS_PUBLIC, HB_FUNCNAME( GET2NUEVO1 ), (PHB_DYNS) 1 },
{ "GETCOORS", HB_FS_PUBLIC, HB_FUNCNAME( GETCOORS ), NULL },
{ "HWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "END", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_PREWHERE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_SETLAND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LEN", HB_FS_PUBLIC, HB_FUNCNAME( LEN ), NULL },
{ "AHEADERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AADD", HB_FS_PUBLIC, HB_FUNCNAME( AADD ), NULL },
{ "_AFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_AFJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GET2SELECT", HB_FS_PUBLIC, HB_FUNCNAME( GET2SELECT ), (PHB_DYNS) 1 },
{ "HIDE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETSIZE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NWIDTH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NHEIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BRESIZED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_ACURSOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACURSOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZ2LEESQL", HB_FS_PUBLIC, HB_FUNCNAME( VZ2LEESQL ), (PHB_DYNS) 1 },
{ "NROWCOUNT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGALERT", HB_FS_PUBLIC, HB_FUNCNAME( MSGALERT ), NULL },
{ "SHOW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CGROUP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VISTAQUIE2", HB_FS_PUBLIC, HB_FUNCNAME( VISTAQUIE2 ), (PHB_DYNS) 1 },
{ "_BLINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDSGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETBROWSE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BKEYDOWN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BKEYDOWN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZ2BUSCINC", HB_FS_PUBLIC, HB_FUNCNAME( VZ2BUSCINC ), (PHB_DYNS) 1 },
{ "BLDBLCLICK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BLDBLCLICK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NADA", HB_FS_PUBLIC, HB_FUNCNAME( NADA ), NULL },
{ "_LDRAWFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NROW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GOTO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "FLDGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AFJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TRANSFORM", HB_FS_PUBLIC, HB_FUNCNAME( TRANSFORM ), NULL },
{ "AJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REFRESH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_AACTIONS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ARRAY", HB_FS_PUBLIC, HB_FUNCNAME( ARRAY ), NULL },
{ "CHR", HB_FS_PUBLIC, HB_FUNCNAME( CHR ), NULL },
{ "AACTIONS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LTRIM", HB_FS_PUBLIC, HB_FUNCNAME( LTRIM ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "VZ2_999", HB_FS_PUBLIC, HB_FUNCNAME( VZ2_999 ), (PHB_DYNS) 1 },
{ "AMULTI", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VCERROR", HB_FS_PUBLIC, HB_FUNCNAME( VCERROR ), NULL },
{ "VZ2SELECT", HB_FS_PUBLIC, HB_FUNCNAME( VZ2SELECT ), (PHB_DYNS) 1 },
{ "MEMOREAD", HB_FS_PUBLIC, HB_FUNCNAME( MEMOREAD ), NULL },
{ "VERPREQUERY", HB_FS_PUBLIC, HB_FUNCNAME( VERPREQUERY ), NULL },
{ "OUTPUTDEBUGSTRING", HB_FS_PUBLIC, HB_FUNCNAME( OUTPUTDEBUGSTRING ), NULL },
{ "MSGGET", HB_FS_PUBLIC, HB_FUNCNAME( MSGGET ), NULL },
{ "VERQUERY", HB_FS_PUBLIC, HB_FUNCNAME( VERQUERY ), NULL },
{ "WQOUT", HB_FS_PUBLIC, HB_FUNCNAME( WQOUT ), NULL },
{ "UPPER", HB_FS_PUBLIC, HB_FUNCNAME( UPPER ), NULL },
{ "VZ2F2SEEK", HB_FS_PUBLIC, HB_FUNCNAME( VZ2F2SEEK ), (PHB_DYNS) 1 },
{ "NCOLACT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETTEXT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "INT", HB_FS_PUBLIC, HB_FUNCNAME( INT ), NULL },
{ "ROUND", HB_FS_PUBLIC, HB_FUNCNAME( ROUND ), NULL },
{ "ANRECNO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NAT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZ2BUSC23", HB_FS_PUBLIC, HB_FUNCNAME( VZ2BUSC23 ), (PHB_DYNS) 1 },
{ "NROW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SPACE", HB_FS_PUBLIC, HB_FUNCNAME( SPACE ), NULL },
{ "CTOD", HB_FS_PUBLIC, HB_FUNCNAME( CTOD ), NULL },
{ "TDIALOG", HB_FS_PUBLIC, HB_FUNCNAME( TDIALOG ), NULL },
{ "TGET", HB_FS_PUBLIC, HB_FUNCNAME( TGET ), NULL },
{ "PCOUNT", HB_FS_PUBLIC, HB_FUNCNAME( PCOUNT ), NULL },
{ "TBUTTON", HB_FS_PUBLIC, HB_FUNCNAME( TBUTTON ), NULL },
{ "ACTIVATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BLCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BMOVED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BPAINTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BRCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CURSORWAIT", HB_FS_PUBLIC, HB_FUNCNAME( CURSORWAIT ), NULL },
{ "CURSORARROW", HB_FS_PUBLIC, HB_FUNCNAME( CURSORARROW ), NULL },
{ "SETFOCUS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZ2BUSC24", HB_FS_PUBLIC, HB_FUNCNAME( VZ2BUSC24 ), (PHB_DYNS) 1 },
{ "VZ2CVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2CVISTA ), (PHB_DYNS) 1 },
{ "VZ2FROMVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2FROMVISTA ), (PHB_DYNS) 1 },
{ "CDBFCONFIG", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DBGOTOP", HB_FS_PUBLIC, HB_FUNCNAME( DBGOTOP ), NULL },
{ "VZ2WHEREVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2WHEREVISTA ), (PHB_DYNS) 1 },
{ "PREWHERE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACONTROLS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CTOOLTIP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VARGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MCRUT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DTOMY", HB_FS_PUBLIC, HB_FUNCNAME( DTOMY ), NULL },
{ "VZ2ORDERVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2ORDERVISTA ), (PHB_DYNS) 1 },
{ "PRE2WHERE", HB_FS_PUBLIC, HB_FUNCNAME( PRE2WHERE ), (PHB_DYNS) 1 },
{ "DANCHO", HB_FS_PUBLIC, HB_FUNCNAME( DANCHO ), NULL },
{ "TFONT", HB_FS_PUBLIC, HB_FUNCNAME( TFONT ), NULL },
{ "_AARRAYDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REPO", HB_FS_PUBLIC, HB_FUNCNAME( REPO ), NULL },
{ "TODOBLANCO", HB_FS_PUBLIC, HB_FUNCNAME( TODOBLANCO ), (PHB_DYNS) 1 },
{ "AARRAYDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NAT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VAL", HB_FS_PUBLIC, HB_FUNCNAME( VAL ), NULL },
{ "SETARRAY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NLINESTYLE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BBKCOLOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MY2_SETCOLOR", HB_FS_PUBLIC, HB_FUNCNAME( MY2_SETCOLOR ), (PHB_DYNS) 1 },
{ "_BFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MY2_SETFONT", HB_FS_PUBLIC, HB_FUNCNAME( MY2_SETFONT ), (PHB_DYNS) 1 },
{ "_BVALID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LASTSELECT2", HB_FS_PUBLIC, HB_FUNCNAME( LASTSELECT2 ), (PHB_DYNS) 1 },
{ "VZ2BARVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2BARVISTA ), (PHB_DYNS) 1 },
{ "LIMPIO132", HB_FS_PUBLIC, HB_FUNCNAME( LIMPIO132 ), (PHB_DYNS) 1 },
{ "TBAR", HB_FS_PUBLIC, HB_FUNCNAME( TBAR ), NULL },
{ "TSAY", HB_FS_PUBLIC, HB_FUNCNAME( TSAY ), NULL },
{ "TCOMBOBOX", HB_FS_PUBLIC, HB_FUNCNAME( TCOMBOBOX ), NULL },
{ "MM2GET", HB_FS_PUBLIC, HB_FUNCNAME( MM2GET ), (PHB_DYNS) 1 },
{ "NLEFT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GOTOCOL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BRCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VARPUT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_CPICTURE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MOVE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MYVCAMPO2", HB_FS_PUBLIC, HB_FUNCNAME( MYVCAMPO2 ), (PHB_DYNS) 1 },
{ "VZ2FILVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZ2FILVISTA ), (PHB_DYNS) 1 },
{ "XXGET2", HB_FS_PUBLIC, HB_FUNCNAME( XXGET2 ), (PHB_DYNS) 1 },
{ "VZ2FILWHERE", HB_FS_PUBLIC, HB_FUNCNAME( VZ2FILWHERE ), (PHB_DYNS) 1 },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL },
{ "(_INITSTATICS)", HB_FS_INIT | HB_FS_EXIT, hb_INITSTATICS, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_VZVISTA )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_VZVISTA
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_VZVISTA = hb_vm_SymbolInit_VZVISTA;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_VZVISTA
#endif

HB_FUNC( VZ2VISTAS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* BUF */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* ATROZOS */
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* FRM */
/* 00029 */ HB_P_LINEOFFSET, 4,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'F', 'R', 'M', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 213, 29,	/* 7637 (abs: 07699) */
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_LOCALNEARSETSTR, 12, 187, 4,	/* C 1211*/
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'V', 'i', 's', 'u', 'a', 'l', ' ', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '9', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '8', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '5', '4', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', ' ', ' ', ' ', ' ', 13, 10, 0, 
/* 01282 */ HB_P_LINEOFFSET, 6,	/* 20 */
	HB_P_PUSHLOCALNEAR, 12,	/* C */
	HB_P_PUSHSTR, 105, 2,	/* 617 */
	'T', 'S', 'B', 'U', 'T', 'T', 'O', 'N', '|', 'N', 'I', 'D', '=', '1', '2', '5', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'B', 't', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '&', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '7', '|', 'N', 'L', 'E', 'F', 'T', '=', '3', '8', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '8', '1', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', 'v', 'z', 'v', 'i', 's', 't', 'a', '(', 34, 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '2', '7', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTR, 244, 3,	/* 1012 */
	')', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'T', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'I', 'T', 'M', 'A', 'P', '=', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '1', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '2', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '2', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '4', '.', 'b', 'm', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'R', 'U', 'S', 'H', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'S', 'H', 'A', 'P', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'W', '9', '7', '=', 'F', '|', 'L', 'T', 'R', 'A', 'N', 'S', 'P', 'A', 'R', 'E', 'N', 'T', '=', 'F', '|', 'L', 'A', 'D', 'J', 'U', 'S', 'T', '=', 'F', '|', 'N', 'C', 'A', 'P', 'T', 'P', 'O', 'S', '=', '5', '|', 'L', 'O', 'P', 'A', 'Q', 'U', 'E', '=', 'F', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* C */
/* 02952 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHLOCALNEAR, 12,	/* C */
	HB_P_PUSHSTR, 101, 2,	/* 613 */
	'T', 'S', 'B', 'U', 'T', 'T', 'O', 'N', '|', 'N', 'I', 'D', '=', '1', '2', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'B', 't', '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '&', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '8', '|', 'N', 'L', 'E', 'F', 'T', '=', '4', '7', '7', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '8', '1', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', 'r', 'e', 'p', 'o', '(', 34, 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '2', '7', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTR, 244, 3,	/* 1012 */
	')', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'T', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'I', 'T', 'M', 'A', 'P', '=', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '1', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '2', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '2', '.', 'b', 'm', 'p', ',', 'f', 'o', 'r', 'm', 92, '_', 'v', 'z', 'b', '4', '.', 'b', 'm', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'R', 'U', 'S', 'H', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'S', 'H', 'A', 'P', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'W', '9', '7', '=', 'F', '|', 'L', 'T', 'R', 'A', 'N', 'S', 'P', 'A', 'R', 'E', 'N', 'T', '=', 'F', '|', 'L', 'A', 'D', 'J', 'U', 'S', 'T', '=', 'F', '|', 'N', 'C', 'A', 'P', 'T', 'P', 'O', 'S', '=', '5', '|', 'L', 'O', 'P', 'A', 'Q', 'U', 'E', '=', 'F', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* C */
/* 04618 */ HB_P_LINEOFFSET, 8,	/* 22 */
	HB_P_PUSHLOCALNEAR, 12,	/* C */
	HB_P_PUSHSTR, 165, 6,	/* 1701 */
	'T', 'W', 'B', 'R', 'O', 'W', 'S', 'E', '|', 'N', 'I', 'D', '=', '1', '2', '7', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'B', 'r', 'w', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '3', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '6', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '5', '9', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '7', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'C', '_', 'B', 'C', 'H', 'A', 'N', 'G', 'E', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'N', 'F', 'R', 'E', 'E', 'Z', 'E', '=', '0', '|', 'N', 'H', 'E', 'A', 'D', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '5', '|', 'N', 'F', 'O', 'O', 'T', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'N', 'L', 'I', 'N', 'E', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'L', 'C', 'E', 'L', 'L', 'S', 'T', 'Y', 'L', 'E', '=', 'T', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '9', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'H', 'E', 'A', 'D', '=', '0', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'H', 'E', 'A', 'D', '=', '1', '4', '2', '1', '5', '6', '6', '0', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'F', 'O', 'C', 'U', 'S', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'F', 'O', 'C', 'U', 'S', '=', '1', '2', '9', '3', '7', '7', '7', '7', '|', 'N', 'C', 'L', 'R', 'F', 'F', 'O', 'R', 'E', '=', '0', '|', 'N', 'C', 'L', 'R', 'F', 'B', 'A', 'C', 'K', '=', '1', '4', '2', '1', '5', '6', '6', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'L', 'I', 'N', 'E', '=', '0', '|', 'L', 'O', 'N', 'L', 'Y', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'F', '|', 'L', 'D', 'R', 'A', 'W', 'H', 'E', 'A', 'D', 'E', 'R', 'S', '=', 'T', '|', 'L', 'D', 'R', 'A', 'W', 'F', 'O', 'O', 'T', 'E', 'R', 'S', '=', 'F', '|', 'C', 'D', 'B', 'F', 'C', 'O', 'N', 'F', 'I', 'G', '=', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTR, 54, 3,	/* 822 */
	' ', '|', 'T', 'I', 'T', 'U', 'L', 'O', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'S', 'U', 'B', 'T', 'I', 'T', 'U', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'S', 'E', 'T', 'L', 'A', 'N', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'A', 'R', 'P', 'A', 'G', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'F', 'I', 'N', 'R', 'E', 'P', 'O', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'G', 'R', 'O', 'U', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'A', 'N', 'T', 'E', 'G', 'R', 'O', 'U', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'D', 'E', 'S', 'P', 'G', 'R', 'O', 'U', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'T', 'O', 'T', 'X', 'P', 'A', 'G', '=', 'F', '|', 'C', '_', 'S', 'E', 'T', 'A', 'R', 'R', 'A', 'Y', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'S', 'E', 'T', 'T', 'R', 'E', 'E', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'S', 'E', 'T', 'T', 'X', 'T', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* C */
/* 07168 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'f', 'r', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* C */
	HB_P_DOSHORT, 2,
/* 07202 */ HB_P_LINEOFFSET, 11,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 229, 1,	/* 485 (abs: 07697) */
/* 07215 */ HB_P_LINEOFFSET, 12,	/* 26 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'D', 'B', 'F', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 191, 1,	/* 447 (abs: 07695) */
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* CMCRUT */
/* 07270 */ HB_P_LINEOFFSET, 13,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* USE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'F', 'O', 'R', 'M', 92, '_', 'V', 'Z', 'M', 'U', 'L', 'T', 'I', 0, 
	HB_P_PLUS,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
	HB_P_PUSHSYMNEAR, 8,	/* __DBCOPY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* CMCRUT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 8,
/* 07317 */ HB_P_LINEOFFSET, 14,	/* 28 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'7', '9', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* USE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 07353 */ HB_P_LINEOFFSET, 15,	/* 29 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* OBJQ */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* TABLA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'L', 'I', 'M', 'I', 'T', ' ', '1', 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 07412 */ HB_P_LINEOFFSET, 16,	/* 30 */
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07422 */ HB_P_LINEOFFSET, 17,	/* 31 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_MESSAGE, 15, 0,	/* NFIELDCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 07669) */
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* CTYPE */
	HB_P_MESSAGE, 17, 0,	/* FLDNAME */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* NAME */
/* 07463 */ HB_P_LINEOFFSET, 19,	/* 33 */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 07481) */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 07502) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'C', 0, 
	HB_P_MESSAGE, 18, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* ANCHO */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 07554) */
/* 07502 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07523) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'D', 0, 
	HB_P_LOCALNEARSETINT, 10, 8, 0,	/* ANCHO 8*/
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 07554) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'N', 0, 
	HB_P_MESSAGE, 18, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_POPLOCALNEAR, 10,	/* ANCHO */
	HB_P_MESSAGE, 19, 0,	/* FLDDEC */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* DEC */
/* 07554 */ HB_P_LINEOFFSET, 23,	/* 37 */
	HB_P_PUSHSYMNEAR, 20,	/* DBAPPEND */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07561 */ HB_P_LINEOFFSET, 24,	/* 38 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'+', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPFIELD, 1, 0,	/* SELECT */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, 34, 0, 
	HB_P_POPFIELD, 21, 0,	/* FIELDS */
/* 07614 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHLOCALNEAR, 10,	/* ANCHO */
	HB_P_POPFIELD, 22, 0,	/* SIZE_REPOR */
/* 07621 */ HB_P_LINEOFFSET, 26,	/* 40 */
	HB_P_PUSHSYMNEAR, 23,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 10,	/* ANCHO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPFIELD, 25, 0,	/* COLSIZES */
/* 07643 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPFIELD, 26, 0,	/* HEADERS */
/* 07660 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* J 1*/
	HB_P_JUMP, 18, 255,	/* -238 (abs: 07428) */
/* 07669 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_MESSAGE, 27, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07679 */ HB_P_LINEOFFSET, 30,	/* 44 */
	HB_P_PUSHSYMNEAR, 28,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* BUF */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07695) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07697) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07699) */
/* 07699 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_PUSHSYMNEAR, 29,	/* VZFORMS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PUSHLOCALNEAR, 2,	/* TITI */
	HB_P_PUSHLOCALNEAR, 3,	/* BMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'W', 'S', '_', 'C', 'A', 'P', 'T', 'I', 'O', 'N', ',', 'W', 'S', '_', 'S', 'Y', 'S', 'M', 'E', 'N', 'U', ',', 'W', 'S', '_', 'T', 'H', 'I', 'C', 'K', 'F', 'R', 'A', 'M', 'E', ',', 'W', 'S', '_', 'M', 'I', 'N', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', ',', ' ', 'W', 'S', '_', 'M', 'A', 'X', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', 0, 
	HB_P_DOSHORT, 5,
/* 07782 */ HB_P_LINEOFFSET, 35,	/* 49 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07787 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2VISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 19, 12,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 54, 0,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 15,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 55 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00053) */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00060) */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* OLBX */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* ACOLTOT */
/* 00072 */ HB_P_LINEOFFSET, 2,	/* 56 */
	HB_P_LOCALNEARSETSTR, 19, 8, 0,	/* CADBLOCK 8*/
	' ', '{', '|', '|', ' ', '{', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 22,	/* MIAFOOT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 23,	/* MIAFJUSTI */
/* 00096 */ HB_P_LINEOFFSET, 9,	/* 63 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00140) */
/* 00112 */ HB_P_LINEOFFSET, 10,	/* 64 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 13,	/* TUFOLDER */
/* 00121 */ HB_P_LINEOFFSET, 11,	/* 65 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* TUPAGINA */
/* 00130 */ HB_P_LINEOFFSET, 12,	/* 66 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 1,	/* NOLBX */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00140) */
/* 00140 */ HB_P_LINEOFFSET, 17,	/* 71 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* _NOLBX */
/* 00151 */ HB_P_LINEOFFSET, 18,	/* 72 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* CJA */
/* 00177 */ HB_P_LINEOFFSET, 19,	/* 73 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* CJA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* ODLG2 */
/* 00188 */ HB_P_LINEOFFSET, 20,	/* 74 */
	HB_P_PUSHSYMNEAR, 35,	/* GET2NUEVO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 27,	/* ANUEVO1 */
/* 00199 */ HB_P_LINEOFFSET, 21,	/* 75 */
	HB_P_PUSHSYMNEAR, 36,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 37, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* ARECT */
/* 00215 */ HB_P_LINEOFFSET, 26,	/* 80 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00239) */
/* 00231 */ HB_P_LINEOFFSET, 27,	/* 81 */
	HB_P_LOCALNEARSETINT, 12, 40, 0,	/* MENOS30 40*/
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00239) */
/* 00239 */ HB_P_LINEOFFSET, 29,	/* 83 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00269) */
/* 00256 */ HB_P_LINEOFFSET, 30,	/* 84 */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00269) */
/* 00269 */ HB_P_LINEOFFSET, 32,	/* 86 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'L', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00294) */
/* 00285 */ HB_P_LINEOFFSET, 33,	/* 87 */
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00316) */
/* 00294 */ HB_P_LINEOFFSET, 35,	/* 89 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00311) */
	HB_P_TRUE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00316) */
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
/* 00316 */ HB_P_LINEOFFSET, 39,	/* 93 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00360) */
/* 00328 */ HB_P_LINEOFFSET, 40,	/* 94 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00358) */
/* 00344 */ HB_P_LINEOFFSET, 41,	/* 95 */
	HB_P_MESSAGE, 39, 0,	/* _PREWHERE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00358) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00360) */
/* 00360 */ HB_P_LINEOFFSET, 44,	/* 98 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00368 */ HB_P_LINEOFFSET, 45,	/* 99 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00375 */ HB_P_LINEOFFSET, 46,	/* 100 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00396) */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00396) */
/* 00396 */ HB_P_LINEOFFSET, 47,	/* 101 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00424) */
	HB_P_MESSAGE, 40, 0,	/* _SETLAND */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00424) */
/* 00424 */ HB_P_LINEOFFSET, 48,	/* 102 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00473) */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MIAFOOT */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MIAFJUSTI */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 00430) */
/* 00473 */ HB_P_LINEOFFSET, 49,	/* 103 */
	HB_P_MESSAGE, 44, 0,	/* _AFOOTERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 22,	/* MIAFOOT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00485 */ HB_P_LINEOFFSET, 50,	/* 104 */
	HB_P_MESSAGE, 45, 0,	/* _AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 23,	/* MIAFJUSTI */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00497 */ HB_P_LINEOFFSET, 52,	/* 106 */
	HB_P_PUSHSYMNEAR, 46,	/* GET2SELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00509 */ HB_P_LINEOFFSET, 53,	/* 107 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* NOHIDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00537) */
/* 00525 */ HB_P_LINEOFFSET, 54,	/* 108 */
	HB_P_MESSAGE, 47, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00537) */
/* 00537 */ HB_P_LINEOFFSET, 56,	/* 110 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NORESIZE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 00650) */
/* 00548 */ HB_P_LINEOFFSET, 58,	/* 112 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 25,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_MINUS,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 25,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 28,	/* ARECT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_MINUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00586 */ HB_P_LINEOFFSET, 59,	/* 113 */
	HB_P_MESSAGE, 51, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 25,	/* ODLG2 */
	HB_P_PUSHBLOCK, 52, 0,	/* 52 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	16, 0,	/* OLBX */
	25, 0,	/* ODLG2 */
	12, 0,	/* MENOS30 */
	28, 0,	/* ARECT */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_MINUS,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_MINUS,
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00650) */
/* 00650 */ HB_P_LINEOFFSET, 61,	/* 115 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	's', 'q', 'l', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 's', 'q', 'l', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 143, 0,	/* 143 (abs: 00825) */
/* 00685 */ HB_P_LINEOFFSET, 63,	/* 117 */
	HB_P_LOCALNEARSETSTR, 26, 23, 0,	/* C 23*/
	34, 'S', 'E', 'L', 'E', 'C', 'T', ' ', 34, '+', 'V', 'Z', '2', 's', 'e', 'l', 'e', 'c', 't', '(', ')', '+', 0, 
/* 00714 */ HB_P_LINEOFFSET, 64,	/* 118 */
	HB_P_PUSHLOCALNEAR, 26,	/* C */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	34, ' ', 'F', 'R', 'O', 'M', ' ', ' ', 34, '+', 'v', 'z', '2', 'f', 'r', 'o', 'm', 'v', 'i', 's', 't', 'a', '(', ')', '+', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* C */
/* 00749 */ HB_P_LINEOFFSET, 65,	/* 119 */
	HB_P_PUSHLOCALNEAR, 26,	/* C */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'v', 'z', '2', 'w', 'h', 'e', 'r', 'e', 'v', 'i', 's', 't', 'a', '(', ')', '+', 'v', 'z', '2', 'o', 'r', 'd', 'e', 'r', 'v', 'i', 's', 't', 'a', '(', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* C */
/* 00790 */ HB_P_LINEOFFSET, 67,	/* 121 */
	HB_P_PUSHSYMNEAR, 5,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	's', 'q', 'l', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 's', 'q', 'l', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 26,	/* C */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00825) */
/* 00825 */ HB_P_LINEOFFSET, 71,	/* 125 */
	HB_P_MESSAGE, 52, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00847 */ HB_P_LINEOFFSET, 72,	/* 126 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 54,	/* VZ2LEESQL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	's', 'q', 'l', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 's', 'q', 'l', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00891 */ HB_P_LINEOFFSET, 73,	/* 127 */
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00906 */ HB_P_LINEOFFSET, 78,	/* 132 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01022) */
/* 00925 */ HB_P_LINEOFFSET, 79,	/* 133 */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01020) */
/* 00943 */ HB_P_LINEOFFSET, 80,	/* 134 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01013) */
	HB_P_PUSHSYMNEAR, 56,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01013) */
/* 01013 */ HB_P_LINEOFFSET, 81,	/* 135 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01020) */
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 01117) */
/* 01022 */ HB_P_LINEOFFSET, 84,	/* 138 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01117) */
/* 01040 */ HB_P_LINEOFFSET, 85,	/* 139 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01110) */
	HB_P_PUSHSYMNEAR, 56,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01110) */
/* 01110 */ HB_P_LINEOFFSET, 86,	/* 140 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01117) */
/* 01117 */ HB_P_LINEOFFSET, 89,	/* 143 */
	HB_P_MESSAGE, 57, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01127 */ HB_P_LINEOFFSET, 91,	/* 145 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 58, 0,	/* CGROUP */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 01172) */
/* 01144 */ HB_P_LINEOFFSET, 92,	/* 146 */
	HB_P_PUSHSYMNEAR, 59,	/* VISTAQUIE2 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 29,	/* _NOLBX */
	HB_P_PUSHLOCALNEAR, 6,	/* SUMAENTRA */
	HB_P_PUSHLOCALNEAR, 10,	/* MANERA */
	HB_P_PUSHLOCALNEAR, 13,	/* TUFOLDER */
	HB_P_PUSHLOCALNEAR, 14,	/* TUPAGINA */
	HB_P_DOSHORT, 7,
/* 01165 */ HB_P_LINEOFFSET, 93,	/* 147 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01172) */
/* 01172 */ HB_P_LINEOFFSET, 99,	/* 153 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 01297) */
/* 01195 */ HB_P_LINEOFFSET, 100,	/* 154 */
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01235) */
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 19,	/* 19 (abs: 01255) */
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01288) */
/* 01257 */ HB_P_LINEOFFSET, 101,	/* 155 */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLTOT */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01288) */
/* 01288 */ HB_P_LINEOFFSET, 103,	/* 157 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMP, 140, 255,	/* -116 (abs: 01178) */
/* 01297 */ HB_P_LINEOFFSET, 106,	/* 160 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 01354) */
/* 01315 */ HB_P_LINEOFFSET, 107,	/* 161 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 162, 51,	/* 13218 (abs: 14569) */
/* 01354 */ HB_P_LINEOFFSET, 108,	/* 162 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 01426) */
/* 01373 */ HB_P_LINEOFFSET, 109,	/* 163 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 90, 51,	/* 13146 (abs: 14569) */
/* 01426 */ HB_P_LINEOFFSET, 110,	/* 164 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 01512) */
/* 01445 */ HB_P_LINEOFFSET, 111,	/* 165 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 54, 0,	/* 54 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 4, 51,	/* 13060 (abs: 14569) */
/* 01512 */ HB_P_LINEOFFSET, 112,	/* 166 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 83,	/* 83 (abs: 01612) */
/* 01531 */ HB_P_LINEOFFSET, 113,	/* 167 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 68, 0,	/* 68 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 160, 50,	/* 12960 (abs: 14569) */
/* 01612 */ HB_P_LINEOFFSET, 114,	/* 168 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 01726) */
/* 01631 */ HB_P_LINEOFFSET, 115,	/* 169 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 82, 0,	/* 82 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 5, 0,	/* 5 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 46, 50,	/* 12846 (abs: 14569) */
/* 01726 */ HB_P_LINEOFFSET, 116,	/* 170 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 01854) */
/* 01745 */ HB_P_LINEOFFSET, 117,	/* 171 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 96, 0,	/* 96 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 174, 49,	/* 12718 (abs: 14569) */
/* 01854 */ HB_P_LINEOFFSET, 118,	/* 172 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 126, 0,	/* 126 (abs: 01997) */
/* 01874 */ HB_P_LINEOFFSET, 119,	/* 173 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 110, 0,	/* 110 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 31, 49,	/* 12575 (abs: 14569) */
/* 01997 */ HB_P_LINEOFFSET, 120,	/* 174 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 02154) */
/* 02017 */ HB_P_LINEOFFSET, 121,	/* 175 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 124, 0,	/* 124 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 130, 48,	/* 12418 (abs: 14569) */
/* 02154 */ HB_P_LINEOFFSET, 122,	/* 176 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 02325) */
/* 02174 */ HB_P_LINEOFFSET, 123,	/* 177 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 138, 0,	/* 138 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 9, 0,	/* 9 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 215, 47,	/* 12247 (abs: 14569) */
/* 02325 */ HB_P_LINEOFFSET, 124,	/* 178 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 168, 0,	/* 168 (abs: 02510) */
/* 02345 */ HB_P_LINEOFFSET, 125,	/* 179 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 152, 0,	/* 152 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 30, 47,	/* 12062 (abs: 14569) */
/* 02510 */ HB_P_LINEOFFSET, 126,	/* 180 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 182, 0,	/* 182 (abs: 02709) */
/* 02530 */ HB_P_LINEOFFSET, 127,	/* 181 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 166, 0,	/* 166 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 87, 46,	/* 11863 (abs: 14569) */
/* 02709 */ HB_P_LINEOFFSET, 128,	/* 182 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 02922) */
/* 02729 */ HB_P_LINEOFFSET, 129,	/* 183 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 180, 0,	/* 180 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 12, 0,	/* 12 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 130, 45,	/* 11650 (abs: 14569) */
/* 02922 */ HB_P_LINEOFFSET, 130,	/* 184 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 210, 0,	/* 210 (abs: 03149) */
/* 02942 */ HB_P_LINEOFFSET, 131,	/* 185 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 194, 0,	/* 194 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 159, 44,	/* 11423 (abs: 14569) */
/* 03149 */ HB_P_LINEOFFSET, 132,	/* 186 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 03390) */
/* 03169 */ HB_P_LINEOFFSET, 133,	/* 187 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 208, 0,	/* 208 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 14, 0,	/* 14 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 174, 43,	/* 11182 (abs: 14569) */
/* 03390 */ HB_P_LINEOFFSET, 134,	/* 188 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 03645) */
/* 03410 */ HB_P_LINEOFFSET, 135,	/* 189 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 222, 0,	/* 222 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 15, 0,	/* 15 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 175, 42,	/* 10927 (abs: 14569) */
/* 03645 */ HB_P_LINEOFFSET, 136,	/* 190 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 0,	/* 252 (abs: 03914) */
/* 03665 */ HB_P_LINEOFFSET, 137,	/* 191 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 236, 0,	/* 236 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 16, 0,	/* 16 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 162, 41,	/* 10658 (abs: 14569) */
/* 03914 */ HB_P_LINEOFFSET, 138,	/* 192 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 04197) */
/* 03934 */ HB_P_LINEOFFSET, 139,	/* 193 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 250, 0,	/* 250 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 17, 0,	/* 17 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 135, 40,	/* 10375 (abs: 14569) */
/* 04197 */ HB_P_LINEOFFSET, 140,	/* 194 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 04494) */
/* 04217 */ HB_P_LINEOFFSET, 141,	/* 195 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 8, 1,	/* 264 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 18, 0,	/* 18 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 94, 39,	/* 10078 (abs: 14569) */
/* 04494 */ HB_P_LINEOFFSET, 142,	/* 196 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 38, 1,	/* 294 (abs: 04805) */
/* 04514 */ HB_P_LINEOFFSET, 143,	/* 197 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 22, 1,	/* 278 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 19, 0,	/* 19 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 39, 38,	/* 9767 (abs: 14569) */
/* 04805 */ HB_P_LINEOFFSET, 144,	/* 198 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 52, 1,	/* 308 (abs: 05130) */
/* 04825 */ HB_P_LINEOFFSET, 145,	/* 199 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 36, 1,	/* 292 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 20, 0,	/* 20 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 226, 36,	/* 9442 (abs: 14569) */
/* 05130 */ HB_P_LINEOFFSET, 146,	/* 200 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 66, 1,	/* 322 (abs: 05469) */
/* 05150 */ HB_P_LINEOFFSET, 147,	/* 201 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 50, 1,	/* 306 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 21, 0,	/* 21 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 143, 35,	/* 9103 (abs: 14569) */
/* 05469 */ HB_P_LINEOFFSET, 148,	/* 202 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 80, 1,	/* 336 (abs: 05822) */
/* 05489 */ HB_P_LINEOFFSET, 149,	/* 203 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 64, 1,	/* 320 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 22, 0,	/* 22 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 46, 34,	/* 8750 (abs: 14569) */
/* 05822 */ HB_P_LINEOFFSET, 150,	/* 204 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 06189) */
/* 05842 */ HB_P_LINEOFFSET, 151,	/* 205 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 78, 1,	/* 334 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 23, 0,	/* 23 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 191, 32,	/* 8383 (abs: 14569) */
/* 06189 */ HB_P_LINEOFFSET, 152,	/* 206 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 108, 1,	/* 364 (abs: 06570) */
/* 06209 */ HB_P_LINEOFFSET, 153,	/* 207 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 92, 1,	/* 348 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 24, 0,	/* 24 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 66, 31,	/* 8002 (abs: 14569) */
/* 06570 */ HB_P_LINEOFFSET, 154,	/* 208 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 122, 1,	/* 378 (abs: 06965) */
/* 06590 */ HB_P_LINEOFFSET, 155,	/* 209 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 106, 1,	/* 362 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 25, 0,	/* 25 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 183, 29,	/* 7607 (abs: 14569) */
/* 06965 */ HB_P_LINEOFFSET, 156,	/* 210 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 136, 1,	/* 392 (abs: 07374) */
/* 06985 */ HB_P_LINEOFFSET, 157,	/* 211 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 120, 1,	/* 376 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 26, 0,	/* 26 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 30, 28,	/* 7198 (abs: 14569) */
/* 07374 */ HB_P_LINEOFFSET, 158,	/* 212 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 150, 1,	/* 406 (abs: 07797) */
/* 07394 */ HB_P_LINEOFFSET, 159,	/* 213 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 134, 1,	/* 390 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 27, 0,	/* 27 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 119, 26,	/* 6775 (abs: 14569) */
/* 07797 */ HB_P_LINEOFFSET, 160,	/* 214 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 164, 1,	/* 420 (abs: 08234) */
/* 07817 */ HB_P_LINEOFFSET, 161,	/* 215 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 148, 1,	/* 404 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 28, 0,	/* 28 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 194, 24,	/* 6338 (abs: 14569) */
/* 08234 */ HB_P_LINEOFFSET, 162,	/* 216 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 1,	/* 434 (abs: 08685) */
/* 08254 */ HB_P_LINEOFFSET, 163,	/* 217 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 162, 1,	/* 418 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 29, 0,	/* 29 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 255, 22,	/* 5887 (abs: 14569) */
/* 08685 */ HB_P_LINEOFFSET, 164,	/* 218 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 1,	/* 448 (abs: 09150) */
/* 08705 */ HB_P_LINEOFFSET, 165,	/* 219 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 176, 1,	/* 432 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 30, 0,	/* 30 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 46, 21,	/* 5422 (abs: 14569) */
/* 09150 */ HB_P_LINEOFFSET, 166,	/* 220 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 206, 1,	/* 462 (abs: 09629) */
/* 09170 */ HB_P_LINEOFFSET, 167,	/* 221 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 190, 1,	/* 446 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 31, 0,	/* 31 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 79, 19,	/* 4943 (abs: 14569) */
/* 09629 */ HB_P_LINEOFFSET, 168,	/* 222 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 1,	/* 476 (abs: 10122) */
/* 09649 */ HB_P_LINEOFFSET, 169,	/* 223 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 204, 1,	/* 460 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 32, 0,	/* 32 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 98, 17,	/* 4450 (abs: 14569) */
/* 10122 */ HB_P_LINEOFFSET, 170,	/* 224 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 1,	/* 490 (abs: 10629) */
/* 10142 */ HB_P_LINEOFFSET, 171,	/* 225 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 218, 1,	/* 474 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 33, 0,	/* 33 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 103, 15,	/* 3943 (abs: 14569) */
/* 10629 */ HB_P_LINEOFFSET, 172,	/* 226 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 248, 1,	/* 504 (abs: 11150) */
/* 10649 */ HB_P_LINEOFFSET, 173,	/* 227 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 232, 1,	/* 488 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 34, 0,	/* 34 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 94, 13,	/* 3422 (abs: 14569) */
/* 11150 */ HB_P_LINEOFFSET, 174,	/* 228 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 2,	/* 518 (abs: 11685) */
/* 11170 */ HB_P_LINEOFFSET, 175,	/* 229 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 246, 1,	/* 502 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 35, 0,	/* 35 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 71, 11,	/* 2887 (abs: 14569) */
/* 11685 */ HB_P_LINEOFFSET, 176,	/* 230 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 2,	/* 532 (abs: 12234) */
/* 11705 */ HB_P_LINEOFFSET, 177,	/* 231 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 4, 2,	/* 516 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 36, 0,	/* 36 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 34, 9,	/* 2338 (abs: 14569) */
/* 12234 */ HB_P_LINEOFFSET, 178,	/* 232 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 34, 2,	/* 546 (abs: 12797) */
/* 12254 */ HB_P_LINEOFFSET, 179,	/* 233 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 18, 2,	/* 530 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 37, 0,	/* 37 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 239, 6,	/* 1775 (abs: 14569) */
/* 12797 */ HB_P_LINEOFFSET, 180,	/* 234 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 48, 2,	/* 560 (abs: 13374) */
/* 12817 */ HB_P_LINEOFFSET, 181,	/* 235 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 32, 2,	/* 544 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 38, 0,	/* 38 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 174, 4,	/* 1198 (abs: 14569) */
/* 13374 */ HB_P_LINEOFFSET, 182,	/* 236 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 62, 2,	/* 574 (abs: 13965) */
/* 13394 */ HB_P_LINEOFFSET, 183,	/* 237 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 46, 2,	/* 558 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 39, 0,	/* 39 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 95, 2,	/* 607 (abs: 14569) */
/* 13965 */ HB_P_LINEOFFSET, 184,	/* 238 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 75, 2,	/* 587 (abs: 14569) */
/* 13985 */ HB_P_LINEOFFSET, 185,	/* 239 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 60, 2,	/* 572 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* OLBX */
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_SENDSHORT, 1,
	HB_P_MESSAGE, 61, 0,	/* FLDSGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 40, 0,	/* 40 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 14569) */
/* 14569 */ HB_P_LINEOFFSET, 188,	/* 242 */
	HB_P_MESSAGE, 62, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14586 */ HB_P_LINEOFFSET, 190,	/* 244 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 14609) */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 14642) */
/* 14609 */ HB_P_LINEOFFSET, 192,	/* 246 */
	HB_P_MESSAGE, 64, 0,	/* _BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	2, 0,	/* number of local parameters (2) */
	2, 0,	/* number of local variables (2) */
	16, 0,	/* OLBX */
	25, 0,	/* ODLG2 */
	HB_P_PUSHSYMNEAR, 65,	/* VZ2BUSCINC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14642 */ HB_P_LINEOFFSET, 195,	/* 249 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 66, 0,	/* BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 14665) */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 14683) */
/* 14665 */ HB_P_LINEOFFSET, 197,	/* 251 */
	HB_P_MESSAGE, 67, 0,	/* _BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 68,	/* NADA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14683 */ HB_P_LINEOFFSET, 200,	/* 254 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* HAYTOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 200, 1,	/* 456 (abs: 15148) */
/* 14695 */ HB_P_LINEOFFSET, 201,	/* 255 */
	HB_P_MESSAGE, 69, 0,	/* _LDRAWFOOTERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14706 */ HB_P_LINEOFFSET, 202,	/* 256 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 184, 0,	/* 184 (abs: 14907) */
	HB_P_MESSAGE, 47, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 70, 0,	/* _NROW */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14748 */ HB_P_LINEOFFSET, 203,	/* 257 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* MM 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* MM */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 14864) */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 24,	/* MM */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14799 */ HB_P_LINEOFFSET, 204,	/* 258 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 14856) */
/* 14817 */ HB_P_LINEOFFSET, 205,	/* 259 */
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 18, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
/* 14848 */ HB_P_LINEOFFSET, 206,	/* 260 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 207,	/* -49 (abs: 14805) */
/* 14856 */ HB_P_LINEOFFSET, 207,	/* 261 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MM 1*/
	HB_P_JUMPNEAR, 148,	/* -108 (abs: 14754) */
/* 14864 */ HB_P_LINEOFFSET, 208,	/* 262 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 14880 */ HB_P_LINEOFFSET, 209,	/* 263 */
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14895 */ HB_P_LINEOFFSET, 210,	/* 264 */
	HB_P_MESSAGE, 57, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 14994) */
/* 14907 */ HB_P_LINEOFFSET, 212,	/* 266 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* YY 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* YY */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 14994) */
/* 14930 */ HB_P_LINEOFFSET, 213,	/* 267 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 14986) */
/* 14948 */ HB_P_LINEOFFSET, 214,	/* 268 */
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* YY */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 18, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
/* 14978 */ HB_P_LINEOFFSET, 215,	/* 269 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 208,	/* -48 (abs: 14936) */
/* 14986 */ HB_P_LINEOFFSET, 216,	/* 270 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* YY 1*/
	HB_P_JUMPNEAR, 177,	/* -79 (abs: 14913) */
/* 14994 */ HB_P_LINEOFFSET, 221,	/* 275 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 73, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 15049) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_MESSAGE, 73, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
/* 15029 */ HB_P_LINEOFFSET, 223,	/* 277 */
	HB_P_FALSE,
	HB_P_MESSAGE, 74, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
/* 15041 */ HB_P_LINEOFFSET, 224,	/* 278 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 209,	/* -47 (abs: 15000) */
/* 15049 */ HB_P_LINEOFFSET, 225,	/* 279 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 15146) */
/* 15067 */ HB_P_LINEOFFSET, 227,	/* 281 */
	HB_P_PUSHSYMNEAR, 75,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 15108 */ HB_P_LINEOFFSET, 228,	/* 282 */
	HB_P_TRUE,
	HB_P_MESSAGE, 74, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 15123 */ HB_P_LINEOFFSET, 229,	/* 283 */
	HB_P_TRUE,
	HB_P_MESSAGE, 76, 0,	/* AJUSTIFY */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 17,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 15138 */ HB_P_LINEOFFSET, 230,	/* 284 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 167,	/* -89 (abs: 15055) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 15148) */
/* 15148 */ HB_P_LINEOFFSET, 232,	/* 286 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15158 */ HB_P_LINEOFFSET, 234,	/* 288 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* NOACTIONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 15408) */
/* 15175 */ HB_P_LINEOFFSET, 235,	/* 289 */
	HB_P_MESSAGE, 78, 0,	/* _AACTIONS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_PUSHSYMNEAR, 79,	/* ARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 15202 */ HB_P_LINEOFFSET, 236,	/* 290 */
	HB_P_LOCALNEARSETINT, 20, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 183, 0,	/* 183 (abs: 15406) */
/* 15226 */ HB_P_LINEOFFSET, 237,	/* 291 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 15303) */
/* 15242 */ HB_P_LINEOFFSET, 238,	/* 292 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'{', ' ', '|', '|', ' ', 'v', 'z', '2', 'c', 'v', 'i', 's', 't', 'a', '(', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_MESSAGE, 81, 0,	/* AACTIONS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 96,	/* 96 (abs: 15397) */
/* 15303 */ HB_P_LINEOFFSET, 240,	/* 294 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'{', ' ', '|', '|', ' ', 'v', 'z', '2', 'c', 'v', 'i', 's', 't', 'a', '(', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TUPAGINA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_MESSAGE, 81, 0,	/* AACTIONS */
	HB_P_PUSHLOCALNEAR, 16,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 20,	/* XX */
	HB_P_ARRAYPOP,
/* 15397 */ HB_P_LINEOFFSET, 242,	/* 296 */
	HB_P_LOCALNEARADDINT, 20, 1, 0,	/* XX 1*/
	HB_P_JUMP, 61, 255,	/* -195 (abs: 15208) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 15408) */
/* 15408 */ HB_P_LINEOFFSET, 245,	/* 299 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 15413 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2_999 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 47, 1,	/* 303 */
	HB_P_LOCALNEARSETSTR, 5, 15, 0,	/* MASK 15*/
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 305 */
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* LEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* DEC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00057 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GET2SELECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 62, 1,	/* 318 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CSELECT 1*/
	0, 
/* 00015 */ HB_P_LINEOFFSET, 3,	/* 321 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00108) */
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 4,	/* VCAMPO */
/* 00049 */ HB_P_LINEOFFSET, 5,	/* 323 */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00084) */
/* 00060 */ HB_P_LINEOFFSET, 7,	/* 325 */
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 4,	/* VCAMPO */
/* 00068 */ HB_P_LINEOFFSET, 8,	/* 326 */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00099) */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'O', 'W', '_', 'I', 'D', ',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
/* 00099 */ HB_P_LINEOFFSET, 12,	/* 330 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 2,	/* J */
	HB_P_JUMPNEAR, 165,	/* -91 (abs: 00015) */
/* 00108 */ HB_P_LINEOFFSET, 14,	/* 332 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
/* 00130 */ HB_P_LINEOFFSET, 16,	/* 334 */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00136 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GET2NUEVO1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 82, 1,	/* 338 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* ANUEVO1 */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 339 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00065) */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 340 */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ANUEVO1 */
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00056 */ HB_P_LINEOFFSET, 3,	/* 341 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 2,	/* J */
	HB_P_JUMPNEAR, 208,	/* -48 (abs: 00015) */
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 343 */
	HB_P_PUSHLOCALNEAR, 3,	/* ANUEVO1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00071 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2SELECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CAMBIO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00020) */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00027) */
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 350 */
	HB_P_PUSHLOCALNEAR, 1,	/* CAMBIO */
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00027 */ HB_P_LINEOFFSET, 4,	/* 352 */
	HB_P_PUSHSTATIC, 2, 0,	/* VZSELECT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00034 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2LEESQL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 88,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* SQL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* VTEXTO */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 358 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* CMD 1*/
	0, 
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* XL 1*/
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 360 */
	HB_P_PUSHLOCALNEAR, 2,	/* VTEXTO */
	HB_P_POPLOCALNEAR, 3,	/* VTEXTN */
/* 00035 */ HB_P_LINEOFFSET, 8,	/* 365 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 00254) */
/* 00056 */ HB_P_LINEOFFSET, 9,	/* 366 */
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 6,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
/* 00090 */ HB_P_LINEOFFSET, 11,	/* 368 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00127) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00127) */
/* 00127 */ HB_P_LINEOFFSET, 12,	/* 369 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00164) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00164) */
/* 00164 */ HB_P_LINEOFFSET, 13,	/* 370 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 6,	/* N */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* VTEXTN */
/* 00180 */ HB_P_LINEOFFSET, 14,	/* 371 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00216) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* VTEXTN */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00216) */
/* 00216 */ HB_P_LINEOFFSET, 15,	/* 372 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00252) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 7,	/* Y */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* VTEXTN */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00252) */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00276) */
/* 00254 */ HB_P_LINEOFFSET, 18,	/* 375 */
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTN */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
/* 00263 */ HB_P_LINEOFFSET, 19,	/* 376 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00279) */
	HB_P_JUMP, 15, 255,	/* -241 (abs: 00035) */
/* 00279 */ HB_P_LINEOFFSET, 24,	/* 381 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00316) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 6,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00316) */
/* 00316 */ HB_P_LINEOFFSET, 25,	/* 382 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00353) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 6,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00353) */
/* 00353 */ HB_P_LINEOFFSET, 26,	/* 383 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
/* 00364 */ HB_P_LINEOFFSET, 34,	/* 391 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VERPREQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00385) */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 00433) */
/* 00385 */ HB_P_LINEOFFSET, 36,	/* 393 */
	HB_P_PUSHSYMNEAR, 90,	/* OUTPUTDEBUGSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'e', 'Q', 'u', 'e', 'r', 'y', ' ', '=', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00409 */ HB_P_LINEOFFSET, 37,	/* 394 */
	HB_P_PUSHSYMNEAR, 91,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'e', ' ', 'Q', 'u', 'e', 'r', 'y', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 4, 0,	/* CMD */
	HB_P_DOSHORT, 3,
/* 00433 */ HB_P_LINEOFFSET, 40,	/* 397 */
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 4,	/* CMD */
/* 00441 */ HB_P_LINEOFFSET, 43,	/* 400 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VERQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00462) */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00509) */
/* 00462 */ HB_P_LINEOFFSET, 45,	/* 402 */
	HB_P_PUSHSYMNEAR, 90,	/* OUTPUTDEBUGSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'u', 'e', 'r', 'y', ' ', '=', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00483 */ HB_P_LINEOFFSET, 46,	/* 403 */
	HB_P_PUSHSYMNEAR, 91,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'Q', 'u', 'e', 'r', 'y', ' ', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'u', 'a', 'l', 0, 
	HB_P_PUSHLOCALREF, 4, 0,	/* CMD */
	HB_P_DOSHORT, 3,
/* 00509 */ HB_P_LINEOFFSET, 50,	/* 407 */
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_POPSTATIC, 11, 0,	/* LASTSELECT */
/* 00516 */ HB_P_LINEOFFSET, 51,	/* 408 */
	HB_P_PUSHLOCALNEAR, 4,	/* CMD */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00522 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2BUSCINC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 3,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00023) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00032) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00041) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00051) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHINT, 145, 0,	/* 145 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00060) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00069) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00079) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHINT, 144, 0,	/* 144 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00088) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00097) */
/* 00090 */ HB_P_LINEOFFSET, 1,	/* 417 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00097) */
/* 00097 */ HB_P_LINEOFFSET, 3,	/* 419 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 96,	/* 96 */
	HB_P_GREATEREQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00113) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_LESSEQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00124) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_ADDINT, 208, 255,	/* -48*/
	HB_P_POPLOCALNEAR, 1,	/* NKEY */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00124) */
/* 00124 */ HB_P_LINEOFFSET, 5,	/* 421 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 00158) */
/* 00133 */ HB_P_LINEOFFSET, 6,	/* 422 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00155) */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00155) */
	HB_P_JUMP, 161, 0,	/* 161 (abs: 00316) */
/* 00158 */ HB_P_LINEOFFSET, 7,	/* 423 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00193) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
	HB_P_JUMP, 126, 0,	/* 126 (abs: 00316) */
/* 00193 */ HB_P_LINEOFFSET, 8,	/* 424 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00215) */
	HB_P_PUSHSYMNEAR, 93,	/* WQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 103,	/* 103 (abs: 00316) */
/* 00215 */ HB_P_LINEOFFSET, 9,	/* 425 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00232) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 00316) */
/* 00232 */ HB_P_LINEOFFSET, 11,	/* 427 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00249) */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHINT, 190, 0,	/* 190 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00263) */
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* MYBUF */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00281) */
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* MYBUF */
/* 00281 */ HB_P_LINEOFFSET, 14,	/* 430 */
	HB_P_PUSHSYMNEAR, 95,	/* VZ2F2SEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MYBUF */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* RESU */
/* 00301 */ HB_P_LINEOFFSET, 15,	/* 431 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 4,	/* MYBUF */
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00316 */ HB_P_LINEOFFSET, 17,	/* 433 */
	HB_P_MESSAGE, 97, 0,	/* SETTEXT */
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00329 */ HB_P_LINEOFFSET, 18,	/* 434 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00334 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2F2SEEK )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 3,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 181, 1,	/* 437 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* NMIN 1*/
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00044) */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00056) */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 7,	/* LFOUND */
/* 00061 */ HB_P_LINEOFFSET, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 98,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
/* 00075 */ HB_P_LINEOFFSET, 2,	/* 439 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00140) */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* DATO */
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00155) */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* DATO */
/* 00155 */ HB_P_LINEOFFSET, 5,	/* 442 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00176) */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00176) */
/* 00176 */ HB_P_LINEOFFSET, 7,	/* 444 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 99, 1,	/* 355 (abs: 00538) */
/* 00186 */ HB_P_LINEOFFSET, 8,	/* 445 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00256) */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00276) */
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00276 */ HB_P_LINEOFFSET, 12,	/* 449 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* XSEARCH */
/* 00287 */ HB_P_LINEOFFSET, 13,	/* 450 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSE, 111, 0,	/* 111 (abs: 00403) */
/* 00295 */ HB_P_LINEOFFSET, 15,	/* 452 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00325) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 7,	/* LFOUND */
	HB_P_JUMP, 218, 0,	/* 218 (abs: 00538) */
	HB_P_JUMPNEAR, 77,	/* 77 (abs: 00400) */
/* 00325 */ HB_P_LINEOFFSET, 17,	/* 454 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00363) */
/* 00334 */ HB_P_LINEOFFSET, 18,	/* 455 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 4,	/* NMIN */
/* 00340 */ HB_P_LINEOFFSET, 19,	/* 456 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 99,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00400) */
/* 00363 */ HB_P_LINEOFFSET, 20,	/* 457 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00400) */
/* 00372 */ HB_P_LINEOFFSET, 21,	/* 458 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
/* 00378 */ HB_P_LINEOFFSET, 22,	/* 459 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 98,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00400) */
	HB_P_JUMP, 108, 0,	/* 108 (abs: 00508) */
/* 00403 */ HB_P_LINEOFFSET, 26,	/* 463 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00433) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 7,	/* LFOUND */
	HB_P_JUMP, 110, 0,	/* 110 (abs: 00538) */
	HB_P_JUMPNEAR, 77,	/* 77 (abs: 00508) */
/* 00433 */ HB_P_LINEOFFSET, 28,	/* 465 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00471) */
/* 00442 */ HB_P_LINEOFFSET, 29,	/* 466 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 4,	/* NMIN */
/* 00448 */ HB_P_LINEOFFSET, 30,	/* 467 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 99,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00508) */
/* 00471 */ HB_P_LINEOFFSET, 31,	/* 468 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00508) */
/* 00480 */ HB_P_LINEOFFSET, 32,	/* 469 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
/* 00486 */ HB_P_LINEOFFSET, 33,	/* 470 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 98,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00508) */
/* 00508 */ HB_P_LINEOFFSET, 36,	/* 473 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_MINUS,
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00529) */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_MINUS,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00535) */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00538) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00535) */
	HB_P_JUMP, 153, 254,	/* -359 (abs: 00176) */
/* 00538 */ HB_P_LINEOFFSET, 40,	/* 477 */
	HB_P_PUSHLOCALNEAR, 7,	/* LFOUND */
	HB_P_JUMPFALSE, 63, 1,	/* 319 (abs: 00861) */
/* 00545 */ HB_P_LINEOFFSET, 41,	/* 478 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 29, 1,	/* 285 (abs: 00847) */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPVARIABLE, 100, 0,	/* ANRECNO */
/* 00570 */ HB_P_LINEOFFSET, 42,	/* 479 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSE, 141, 0,	/* 141 (abs: 00716) */
/* 00578 */ HB_P_LINEOFFSET, 43,	/* 480 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_LESS,
	HB_P_JUMPFALSE, 123, 0,	/* 123 (abs: 00713) */
/* 00593 */ HB_P_LINEOFFSET, 44,	/* 481 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00649 */ HB_P_LINEOFFSET, 45,	/* 482 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00673) */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00710) */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_DEC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
/* 00678 */ HB_P_LINEOFFSET, 47,	/* 484 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00713) */
	HB_P_JUMP, 124, 255,	/* -132 (abs: 00578) */
	HB_P_JUMP, 132, 0,	/* 132 (abs: 00845) */
/* 00716 */ HB_P_LINEOFFSET, 51,	/* 488 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 123, 0,	/* 123 (abs: 00845) */
/* 00725 */ HB_P_LINEOFFSET, 52,	/* 489 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_DEC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00781 */ HB_P_LINEOFFSET, 53,	/* 490 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00805) */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 00842) */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
/* 00810 */ HB_P_LINEOFFSET, 55,	/* 492 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00845) */
	HB_P_JUMP, 130, 255,	/* -126 (abs: 00716) */
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00859) */
/* 00847 */ HB_P_LINEOFFSET, 60,	/* 497 */
	HB_P_MESSAGE, 101, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00861) */
/* 00861 */ HB_P_LINEOFFSET, 63,	/* 500 */
	HB_P_PUSHLOCALNEAR, 7,	/* LFOUND */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00867 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2BUSC23 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 4,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* O_LBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 507 */
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* N */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 12,	/* LFOUND */
/* 00036 */ HB_P_LINEOFFSET, 2,	/* 508 */
	HB_P_MESSAGE, 103, 0,	/* NROW */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* AYY */
/* 00052 */ HB_P_LINEOFFSET, 3,	/* 509 */
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* DATO */
/* 00070 */ HB_P_LINEOFFSET, 5,	/* 511 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00104) */
/* 00086 */ HB_P_LINEOFFSET, 6,	/* 512 */
	HB_P_PUSHSYMNEAR, 104,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 00166) */
/* 00104 */ HB_P_LINEOFFSET, 7,	/* 513 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00128) */
/* 00120 */ HB_P_LINEOFFSET, 8,	/* 514 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MIVALOR 0*/
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00166) */
/* 00128 */ HB_P_LINEOFFSET, 9,	/* 515 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00166) */
/* 00144 */ HB_P_LINEOFFSET, 10,	/* 516 */
	HB_P_PUSHSYMNEAR, 105,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00166) */
/* 00166 */ HB_P_LINEOFFSET, 13,	/* 519 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* BUSCAESTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 00413) */
/* 00178 */ HB_P_LINEOFFSET, 14,	/* 520 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 106,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'u', 's', 'c', 'a', 'r', ' ', 0, 
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
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
	HB_P_POPLOCALNEAR, 8,	/* ODLG */
/* 00235 */ HB_P_LINEOFFSET, 15,	/* 521 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 107,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MIVALOR */
	HB_P_PUSHSYMNEAR, 108,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00269) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00274) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 29,
	HB_P_POPLOCALNEAR, 7,	/* OGET */
/* 00308 */ HB_P_LINEOFFSET, 16,	/* 522 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 109,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'c', 'e', 'p', 't', 'a', 'r', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* ODLG */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 12,	/* 12 */
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
	HB_P_POPLOCALNEAR, 9,	/* OBTN */
/* 00368 */ HB_P_LINEOFFSET, 18,	/* 524 */
	HB_P_MESSAGE, 110, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_MESSAGE, 111, 0,	/* BLCLICKED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 112, 0,	/* BMOVED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 113, 0,	/* BPAINTED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 114, 0,	/* BRCLICKED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 9,
	HB_P_POP,
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00419) */
/* 00413 */ HB_P_LINEOFFSET, 20,	/* 526 */
	HB_P_PUSHLOCALNEAR, 4,	/* BUSCAESTO */
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
/* 00419 */ HB_P_LINEOFFSET, 23,	/* 529 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00435) */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00435) */
/* 00435 */ HB_P_LINEOFFSET, 24,	/* 530 */
	HB_P_PUSHSYMNEAR, 115,	/* CURSORWAIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* YY 1*/
/* 00446 */ HB_P_LINEOFFSET, 25,	/* 531 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_POPSTATIC, 5, 0,	/* VALORBUS */
/* 00453 */ HB_P_LINEOFFSET, 26,	/* 532 */
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 00640) */
/* 00473 */ HB_P_LINEOFFSET, 27,	/* 533 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00503 */ HB_P_LINEOFFSET, 29,	/* 535 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00568) */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
/* 00528 */ HB_P_LINEOFFSET, 30,	/* 536 */
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00566) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 12,	/* LFOUND */
	HB_P_JUMPNEAR, 78,	/* 78 (abs: 00640) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00566) */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 00630) */
/* 00568 */ HB_P_LINEOFFSET, 31,	/* 537 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00598) */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00630) */
/* 00600 */ HB_P_LINEOFFSET, 32,	/* 538 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00628) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 12,	/* LFOUND */
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00640) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00628) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00630) */
/* 00630 */ HB_P_LINEOFFSET, 34,	/* 540 */
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 11,	/* YY */
	HB_P_JUMP, 72, 255,	/* -184 (abs: 00453) */
/* 00640 */ HB_P_LINEOFFSET, 36,	/* 542 */
	HB_P_PUSHSYMNEAR, 116,	/* CURSORARROW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00647 */ HB_P_LINEOFFSET, 37,	/* 543 */
	HB_P_PUSHLOCALNEAR, 12,	/* LFOUND */
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00727) */
/* 00654 */ HB_P_LINEOFFSET, 38,	/* 544 */
	HB_P_PUSHSYMNEAR, 56,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 5, 0,	/* VALORBUS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', ' ', 's', 'e', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'o', ' ', 0, 
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00693 */ HB_P_LINEOFFSET, 39,	/* 545 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 14,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 14,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00727) */
/* 00727 */ HB_P_LINEOFFSET, 41,	/* 547 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00737 */ HB_P_LINEOFFSET, 42,	/* 548 */
	HB_P_MESSAGE, 117, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00747 */ HB_P_LINEOFFSET, 43,	/* 549 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00752 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2BUSC24 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 3,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 41, 2,	/* 553 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* O_LBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* OLBX */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 5,	/* LFOUND */
/* 00025 */ HB_P_LINEOFFSET, 1,	/* 554 */
	HB_P_PUSHSTATIC, 5, 0,	/* VALORBUS */
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* N */
/* 00041 */ HB_P_LINEOFFSET, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00062) */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00062) */
/* 00062 */ HB_P_LINEOFFSET, 3,	/* 556 */
	HB_P_MESSAGE, 103, 0,	/* NROW */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 7,	/* YY */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_POPLOCALNEAR, 9,	/* AYY */
/* 00085 */ HB_P_LINEOFFSET, 4,	/* 557 */
	HB_P_PUSHSYMNEAR, 115,	/* CURSORWAIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 558 */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 00279) */
/* 00112 */ HB_P_LINEOFFSET, 6,	/* 559 */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00142 */ HB_P_LINEOFFSET, 8,	/* 561 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00207) */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
/* 00167 */ HB_P_LINEOFFSET, 9,	/* 562 */
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 94,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00205) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* LFOUND */
	HB_P_JUMPNEAR, 78,	/* 78 (abs: 00279) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00205) */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 00269) */
/* 00207 */ HB_P_LINEOFFSET, 10,	/* 563 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00237) */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00269) */
/* 00239 */ HB_P_LINEOFFSET, 11,	/* 564 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00267) */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* LFOUND */
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00279) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00267) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00269) */
/* 00269 */ HB_P_LINEOFFSET, 13,	/* 566 */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 7,	/* YY */
	HB_P_JUMP, 72, 255,	/* -184 (abs: 00092) */
/* 00279 */ HB_P_LINEOFFSET, 15,	/* 568 */
	HB_P_PUSHSYMNEAR, 116,	/* CURSORARROW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00286 */ HB_P_LINEOFFSET, 16,	/* 569 */
	HB_P_PUSHLOCALNEAR, 5,	/* LFOUND */
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00325) */
	HB_P_MESSAGE, 71, 0,	/* GOTO */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00325) */
/* 00325 */ HB_P_LINEOFFSET, 17,	/* 570 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00335 */ HB_P_LINEOFFSET, 18,	/* 571 */
	HB_P_MESSAGE, 117, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00345 */ HB_P_LINEOFFSET, 19,	/* 572 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00350 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2CVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 4,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 65, 2,	/* 577 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 578 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 3,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 4,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* OLBX */
/* 00031 */ HB_P_LINEOFFSET, 3,	/* 580 */
	HB_P_PUSHSYMNEAR, 46,	/* GET2SELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 581 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 582 */
	HB_P_PUSHNIL,
	HB_P_POPSTATIC, 12, 0,	/* MYVCAMPO */
/* 00056 */ HB_P_LINEOFFSET, 6,	/* 583 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 00173) */
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 584 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '^', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 00133) */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', 'v', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00165) */
/* 00135 */ HB_P_LINEOFFSET, 8,	/* 585 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00165) */
/* 00165 */ HB_P_LINEOFFSET, 10,	/* 587 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 147,	/* -109 (abs: 00062) */
/* 00173 */ HB_P_LINEOFFSET, 11,	/* 588 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00181 */ HB_P_LINEOFFSET, 13,	/* 590 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOCAMBIES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 00287) */
/* 00192 */ HB_P_LINEOFFSET, 14,	/* 591 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00243) */
/* 00199 */ HB_P_LINEOFFSET, 15,	/* 592 */
	HB_P_FALSE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '^', ' ', 0, 
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 00285) */
/* 00243 */ HB_P_LINEOFFSET, 17,	/* 594 */
	HB_P_TRUE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'v', ' ', 0, 
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00287) */
/* 00287 */ HB_P_LINEOFFSET, 22,	/* 599 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NEWCURSOR */
/* 00303 */ HB_P_LINEOFFSET, 23,	/* 600 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_PUSHSYMNEAR, 54,	/* VZ2LEESQL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	's', 'q', 'l', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 's', 'q', 'l', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00342 */ HB_P_LINEOFFSET, 24,	/* 601 */
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00352 */ HB_P_LINEOFFSET, 26,	/* 603 */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 00428) */
/* 00365 */ HB_P_LINEOFFSET, 27,	/* 604 */
	HB_P_MESSAGE, 27, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00375 */ HB_P_LINEOFFSET, 28,	/* 605 */
	HB_P_PUSHSYMNEAR, 56,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'c', 'o', 'i', 'n', 'c', 'i', 'd', 'e', 'n', 'c', 'i', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 'e', ' ', 'F', 'i', 'l', 't', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00421 */ HB_P_LINEOFFSET, 29,	/* 606 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00428) */
/* 00428 */ HB_P_LINEOFFSET, 32,	/* 609 */
	HB_P_MESSAGE, 52, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00440 */ HB_P_LINEOFFSET, 35,	/* 612 */
	HB_P_MESSAGE, 62, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00457 */ HB_P_LINEOFFSET, 36,	/* 613 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00467 */ HB_P_LINEOFFSET, 40,	/* 617 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00472 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2FROMVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 623 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* BUF */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 624 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* DBFCONFIG */
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 626 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 121, 0,	/* CDBFCONFIG */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00084) */
	HB_P_MESSAGE, 121, 0,	/* CDBFCONFIG */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* DBFCONFIG */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00084) */
/* 00084 */ HB_P_LINEOFFSET, 5,	/* 627 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'4', '7', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* USE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'f', 'o', 'r', 'm', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* DBFCONFIG */
	HB_P_PLUS,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
	HB_P_PUSHSYMNEAR, 122,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00125 */ HB_P_LINEOFFSET, 6,	/* 628 */
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHALIASEDFIELDNEAR, 1,	/* SELECT */
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00133 */ HB_P_LINEOFFSET, 10,	/* 632 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00159 */ HB_P_LINEOFFSET, 11,	/* 633 */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00181 */ HB_P_LINEOFFSET, 13,	/* 635 */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00200) */
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00200) */
/* 00200 */ HB_P_LINEOFFSET, 14,	/* 636 */
	HB_P_PUSHSYMNEAR, 28,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* BUF */
	HB_P_DOSHORT, 1,
/* 00214 */ HB_P_LINEOFFSET, 15,	/* 637 */
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00220 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2WHEREVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 128, 2,	/* 640 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 641 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OFORM */
/* 00052 */ HB_P_LINEOFFSET, 2,	/* 642 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CWHERE 1*/
	0, 
/* 00059 */ HB_P_LINEOFFSET, 3,	/* 643 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 124, 0,	/* PREWHERE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00098) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
	HB_P_MESSAGE, 124, 0,	/* PREWHERE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00098) */
/* 00098 */ HB_P_LINEOFFSET, 5,	/* 645 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 125, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* OFORM */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 201, 2,	/* 713 (abs: 00832) */
	HB_P_MESSAGE, 125, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* OFORM */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* OCTRL */
/* 00134 */ HB_P_LINEOFFSET, 7,	/* 647 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00166) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_AND,
	HB_P_JUMPFALSE, 145, 2,	/* 657 (abs: 00823) */
/* 00169 */ HB_P_LINEOFFSET, 8,	/* 648 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00194) */
	HB_P_LOCALNEARSETSTR, 3, 8, 0,	/* CWHERE 8*/
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00207) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
/* 00207 */ HB_P_LINEOFFSET, 11,	/* 651 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00249) */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00275) */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'Y', 'E', 'A', 'R', '(', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00301) */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'X', 'C', 'O', 'D', '(', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00347) */
/* 00303 */ HB_P_LINEOFFSET, 12,	/* 652 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 128, 0,	/* MCRUT */
/* 00320 */ HB_P_LINEOFFSET, 13,	/* 653 */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 128, 0,	/* MCRUT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00344) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHVARIABLE, 128, 0,	/* MCRUT */
	HB_P_MACROPUSH, 11,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00344) */
	HB_P_JUMP, 221, 1,	/* 477 (abs: 00821) */
/* 00347 */ HB_P_LINEOFFSET, 14,	/* 654 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 00611) */
/* 00370 */ HB_P_LINEOFFSET, 15,	/* 655 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
/* 00406 */ HB_P_LINEOFFSET, 16,	/* 656 */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00441) */
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00441) */
/* 00441 */ HB_P_LINEOFFSET, 17,	/* 657 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
/* 00465 */ HB_P_LINEOFFSET, 19,	/* 659 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'*', '%', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00522) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 00608) */
/* 00522 */ HB_P_LINEOFFSET, 20,	/* 660 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'%', '*', 0, 
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00575) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, '%', 0, 
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 00608) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, '%', 0, 
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMP, 213, 0,	/* 213 (abs: 00821) */
/* 00611 */ HB_P_LINEOFFSET, 24,	/* 664 */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00646) */
	HB_P_MESSAGE, 126, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
/* 00636 */ HB_P_LINEOFFSET, 26,	/* 666 */
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00646) */
/* 00646 */ HB_P_LINEOFFSET, 28,	/* 668 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
/* 00665 */ HB_P_LINEOFFSET, 30,	/* 670 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00717) */
/* 00686 */ HB_P_LINEOFFSET, 31,	/* 671 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 129,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 106,	/* 106 (abs: 00821) */
/* 00717 */ HB_P_LINEOFFSET, 32,	/* 672 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00774) */
/* 00738 */ HB_P_LINEOFFSET, 33,	/* 673 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00821) */
/* 00774 */ HB_P_LINEOFFSET, 34,	/* 674 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00821) */
/* 00795 */ HB_P_LINEOFFSET, 35,	/* 675 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00821) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00823) */
/* 00823 */ HB_P_LINEOFFSET, 39,	/* 679 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMP, 43, 253,	/* -725 (abs: 00104) */
/* 00832 */ HB_P_LINEOFFSET, 41,	/* 681 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00838 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2ORDERVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 685 */
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* _BMULTI */
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 686 */
	HB_P_PUSHLOCALNEAR, 2,	/* _BMULTI */
	HB_P_MESSAGE, 96, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 687 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* ORDERBY 1*/
	0, 
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 688 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00073) */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00080) */
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 690 */
	HB_P_PUSHSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00080 */ HB_P_LINEOFFSET, 8,	/* 692 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00101) */
	HB_P_PUSHSYMNEAR, 86,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 00172) */
/* 00103 */ HB_P_LINEOFFSET, 9,	/* 693 */
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00111 */ HB_P_LINEOFFSET, 10,	/* 694 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00150) */
/* 00118 */ HB_P_LINEOFFSET, 11,	/* 695 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'D', 'E', 'S', 'C', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* ORDERBY */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00170) */
/* 00150 */ HB_P_LINEOFFSET, 13,	/* 697 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* ORDERBY */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00172) */
/* 00172 */ HB_P_LINEOFFSET, 17,	/* 701 */
	HB_P_PUSHLOCALNEAR, 4,	/* ORDERBY */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00178 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PRE2WHERE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 193, 2,	/* 705 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 706 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* VALO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00063) */
/* 00031 */ HB_P_LINEOFFSET, 2,	/* 707 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00061) */
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 708 */
	HB_P_MESSAGE, 39, 0,	/* _PREWHERE */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* VALO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00061) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00063) */
/* 00063 */ HB_P_LINEOFFSET, 6,	/* 711 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00092) */
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 712 */
	HB_P_MESSAGE, 124, 0,	/* PREWHERE */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00097) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_ENDPROC
/* 00098 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VISTAQUIE2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 7,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 209, 2,	/* 721 */
	HB_P_LOCALNEARSETSTR, 9, 3, 0,	/* CADBLOCK 3*/
	'{', ' ', 0, 
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* COLN 0*/
/* 00017 */ HB_P_LINEOFFSET, 1,	/* 722 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* ODLG */
/* 00048 */ HB_P_LINEOFFSET, 2,	/* 723 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* KXX 1*/
	HB_P_LOCALNEARSETSTR, 18, 1, 0,	/* CONDTOTA 1*/
	0, 
/* 00064 */ HB_P_LINEOFFSET, 3,	/* 724 */
	HB_P_PUSHSYMNEAR, 132,	/* DANCHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* AMYANCHO */
/* 00075 */ HB_P_LINEOFFSET, 6,	/* 727 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 133,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'A', 'H', 'O', 'M', 'A', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 246,	/* -10 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 10,	/* OFONT1 */
/* 00115 */ HB_P_LINEOFFSET, 7,	/* 728 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 133,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'A', 'H', 'O', 'M', 'A', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 246,	/* -10 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 11,	/* OFONT2 */
/* 00155 */ HB_P_LINEOFFSET, 9,	/* 730 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00199) */
/* 00171 */ HB_P_LINEOFFSET, 10,	/* 731 */
	HB_P_MESSAGE, 134, 0,	/* _AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHSYMNEAR, 135,	/* REPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* SUMAENTRA */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 9,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 00232) */
/* 00199 */ HB_P_LINEOFFSET, 12,	/* 733 */
	HB_P_MESSAGE, 134, 0,	/* _AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHSYMNEAR, 135,	/* REPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 6,	/* TUFOLDER */
	HB_P_PUSHLOCALNEAR, 7,	/* TUPAGINA */
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* SUMAENTRA */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 9,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00232 */ HB_P_LINEOFFSET, 50,	/* 771 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00324) */
/* 00250 */ HB_P_LINEOFFSET, 51,	/* 772 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 61, 0,	/* 61 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00297) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00317) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 76, 69,	/* 17740 (abs: 18061) */
/* 00324 */ HB_P_LINEOFFSET, 52,	/* 773 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00435) */
/* 00343 */ HB_P_LINEOFFSET, 53,	/* 774 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 79, 0,	/* 79 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00390) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00428) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 221, 68,	/* 17629 (abs: 18061) */
/* 00435 */ HB_P_LINEOFFSET, 54,	/* 775 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 112,	/* 112 (abs: 00564) */
/* 00454 */ HB_P_LINEOFFSET, 55,	/* 776 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 97, 0,	/* 97 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00501) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 00557) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 92, 68,	/* 17500 (abs: 18061) */
/* 00564 */ HB_P_LINEOFFSET, 56,	/* 777 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 131, 0,	/* 131 (abs: 00712) */
/* 00584 */ HB_P_LINEOFFSET, 57,	/* 778 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 115, 0,	/* 115 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00631) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 76,	/* 76 (abs: 00705) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 200, 67,	/* 17352 (abs: 18061) */
/* 00712 */ HB_P_LINEOFFSET, 58,	/* 779 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 0,	/* 149 (abs: 00878) */
/* 00732 */ HB_P_LINEOFFSET, 59,	/* 780 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 133, 0,	/* 133 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00779) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 94,	/* 94 (abs: 00871) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 5, 0,	/* 5 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 34, 67,	/* 17186 (abs: 18061) */
/* 00878 */ HB_P_LINEOFFSET, 60,	/* 781 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 167, 0,	/* 167 (abs: 01062) */
/* 00898 */ HB_P_LINEOFFSET, 61,	/* 782 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 151, 0,	/* 151 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00945) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMPNEAR, 112,	/* 112 (abs: 01055) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 106, 66,	/* 17002 (abs: 18061) */
/* 01062 */ HB_P_LINEOFFSET, 62,	/* 783 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 01265) */
/* 01082 */ HB_P_LINEOFFSET, 63,	/* 784 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 170, 0,	/* 170 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01130) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 131, 0,	/* 131 (abs: 01258) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 159, 65,	/* 16799 (abs: 18061) */
/* 01265 */ HB_P_LINEOFFSET, 64,	/* 785 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 204, 0,	/* 204 (abs: 01486) */
/* 01285 */ HB_P_LINEOFFSET, 65,	/* 786 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 188, 0,	/* 188 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01333) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 149, 0,	/* 149 (abs: 01479) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 194, 64,	/* 16578 (abs: 18061) */
/* 01486 */ HB_P_LINEOFFSET, 66,	/* 787 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 222, 0,	/* 222 (abs: 01725) */
/* 01506 */ HB_P_LINEOFFSET, 67,	/* 788 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 206, 0,	/* 206 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01554) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 01718) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 9, 0,	/* 9 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 211, 63,	/* 16339 (abs: 18061) */
/* 01725 */ HB_P_LINEOFFSET, 68,	/* 789 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 240, 0,	/* 240 (abs: 01982) */
/* 01745 */ HB_P_LINEOFFSET, 69,	/* 790 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 224, 0,	/* 224 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01793) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 185, 0,	/* 185 (abs: 01975) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 210, 62,	/* 16082 (abs: 18061) */
/* 01982 */ HB_P_LINEOFFSET, 70,	/* 791 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 02257) */
/* 02002 */ HB_P_LINEOFFSET, 71,	/* 792 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 242, 0,	/* 242 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02050) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 203, 0,	/* 203 (abs: 02250) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 191, 61,	/* 15807 (abs: 18061) */
/* 02257 */ HB_P_LINEOFFSET, 72,	/* 793 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 02550) */
/* 02277 */ HB_P_LINEOFFSET, 73,	/* 794 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 4, 1,	/* 260 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02325) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 02543) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 12, 0,	/* 12 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 154, 60,	/* 15514 (abs: 18061) */
/* 02550 */ HB_P_LINEOFFSET, 74,	/* 795 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 38, 1,	/* 294 (abs: 02861) */
/* 02570 */ HB_P_LINEOFFSET, 75,	/* 796 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 22, 1,	/* 278 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02618) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 239, 0,	/* 239 (abs: 02854) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 99, 59,	/* 15203 (abs: 18061) */
/* 02861 */ HB_P_LINEOFFSET, 76,	/* 797 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 56, 1,	/* 312 (abs: 03190) */
/* 02881 */ HB_P_LINEOFFSET, 77,	/* 798 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 40, 1,	/* 296 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02929) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 1, 1,	/* 257 (abs: 03183) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 14, 0,	/* 14 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 26, 58,	/* 14874 (abs: 18061) */
/* 03190 */ HB_P_LINEOFFSET, 78,	/* 799 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 74, 1,	/* 330 (abs: 03537) */
/* 03210 */ HB_P_LINEOFFSET, 79,	/* 800 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 58, 1,	/* 314 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03258) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 19, 1,	/* 275 (abs: 03530) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 15, 0,	/* 15 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 191, 56,	/* 14527 (abs: 18061) */
/* 03537 */ HB_P_LINEOFFSET, 80,	/* 801 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 92, 1,	/* 348 (abs: 03902) */
/* 03557 */ HB_P_LINEOFFSET, 81,	/* 802 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 76, 1,	/* 332 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03605) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 37, 1,	/* 293 (abs: 03895) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 16, 0,	/* 16 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 82, 55,	/* 14162 (abs: 18061) */
/* 03902 */ HB_P_LINEOFFSET, 82,	/* 803 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 110, 1,	/* 366 (abs: 04285) */
/* 03922 */ HB_P_LINEOFFSET, 83,	/* 804 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 94, 1,	/* 350 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03970) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 55, 1,	/* 311 (abs: 04278) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 17, 0,	/* 17 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 211, 53,	/* 13779 (abs: 18061) */
/* 04285 */ HB_P_LINEOFFSET, 84,	/* 805 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 128, 1,	/* 384 (abs: 04686) */
/* 04305 */ HB_P_LINEOFFSET, 85,	/* 806 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 112, 1,	/* 368 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 04353) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 73, 1,	/* 329 (abs: 04679) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 18, 0,	/* 18 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 66, 52,	/* 13378 (abs: 18061) */
/* 04686 */ HB_P_LINEOFFSET, 86,	/* 807 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 146, 1,	/* 402 (abs: 05105) */
/* 04706 */ HB_P_LINEOFFSET, 87,	/* 808 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 130, 1,	/* 386 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 04754) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 91, 1,	/* 347 (abs: 05098) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 19, 0,	/* 19 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 159, 50,	/* 12959 (abs: 18061) */
/* 05105 */ HB_P_LINEOFFSET, 88,	/* 809 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 164, 1,	/* 420 (abs: 05542) */
/* 05125 */ HB_P_LINEOFFSET, 89,	/* 810 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 148, 1,	/* 404 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 05173) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 109, 1,	/* 365 (abs: 05535) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 20, 0,	/* 20 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 234, 48,	/* 12522 (abs: 18061) */
/* 05542 */ HB_P_LINEOFFSET, 90,	/* 811 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 182, 1,	/* 438 (abs: 05997) */
/* 05562 */ HB_P_LINEOFFSET, 91,	/* 812 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 166, 1,	/* 422 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 05610) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 127, 1,	/* 383 (abs: 05990) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 21, 0,	/* 21 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 35, 47,	/* 12067 (abs: 18061) */
/* 05997 */ HB_P_LINEOFFSET, 92,	/* 813 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 200, 1,	/* 456 (abs: 06470) */
/* 06017 */ HB_P_LINEOFFSET, 93,	/* 814 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 184, 1,	/* 440 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 06065) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 145, 1,	/* 401 (abs: 06463) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 22, 0,	/* 22 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 74, 45,	/* 11594 (abs: 18061) */
/* 06470 */ HB_P_LINEOFFSET, 94,	/* 815 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 218, 1,	/* 474 (abs: 06961) */
/* 06490 */ HB_P_LINEOFFSET, 95,	/* 816 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 202, 1,	/* 458 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 06538) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 163, 1,	/* 419 (abs: 06954) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 23, 0,	/* 23 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 95, 43,	/* 11103 (abs: 18061) */
/* 06961 */ HB_P_LINEOFFSET, 96,	/* 817 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 1,	/* 492 (abs: 07470) */
/* 06981 */ HB_P_LINEOFFSET, 97,	/* 818 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 220, 1,	/* 476 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 07029) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 181, 1,	/* 437 (abs: 07463) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 24, 0,	/* 24 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 98, 41,	/* 10594 (abs: 18061) */
/* 07470 */ HB_P_LINEOFFSET, 98,	/* 819 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 1,	/* 510 (abs: 07997) */
/* 07490 */ HB_P_LINEOFFSET, 99,	/* 820 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 238, 1,	/* 494 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 07538) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 199, 1,	/* 455 (abs: 07990) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 25, 0,	/* 25 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 83, 39,	/* 10067 (abs: 18061) */
/* 07997 */ HB_P_LINEOFFSET, 100,	/* 821 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 16, 2,	/* 528 (abs: 08542) */
/* 08017 */ HB_P_LINEOFFSET, 101,	/* 822 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 0, 2,	/* 512 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 08065) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 217, 1,	/* 473 (abs: 08535) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 26, 0,	/* 26 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 50, 37,	/* 9522 (abs: 18061) */
/* 08542 */ HB_P_LINEOFFSET, 102,	/* 823 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 34, 2,	/* 546 (abs: 09105) */
/* 08562 */ HB_P_LINEOFFSET, 103,	/* 824 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 18, 2,	/* 530 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 08610) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 235, 1,	/* 491 (abs: 09098) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 27, 0,	/* 27 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 255, 34,	/* 8959 (abs: 18061) */
/* 09105 */ HB_P_LINEOFFSET, 104,	/* 825 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 52, 2,	/* 564 (abs: 09686) */
/* 09125 */ HB_P_LINEOFFSET, 105,	/* 826 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 36, 2,	/* 548 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 09173) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 253, 1,	/* 509 (abs: 09679) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 28, 0,	/* 28 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 186, 32,	/* 8378 (abs: 18061) */
/* 09686 */ HB_P_LINEOFFSET, 106,	/* 827 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 70, 2,	/* 582 (abs: 10285) */
/* 09706 */ HB_P_LINEOFFSET, 107,	/* 828 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 54, 2,	/* 566 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 09754) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 15, 2,	/* 527 (abs: 10278) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 29, 0,	/* 29 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 99, 30,	/* 7779 (abs: 18061) */
/* 10285 */ HB_P_LINEOFFSET, 108,	/* 829 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 88, 2,	/* 600 (abs: 10902) */
/* 10305 */ HB_P_LINEOFFSET, 109,	/* 830 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 72, 2,	/* 584 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 10353) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 33, 2,	/* 545 (abs: 10895) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 30, 0,	/* 30 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 250, 27,	/* 7162 (abs: 18061) */
/* 10902 */ HB_P_LINEOFFSET, 110,	/* 831 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 106, 2,	/* 618 (abs: 11537) */
/* 10922 */ HB_P_LINEOFFSET, 111,	/* 832 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 90, 2,	/* 602 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 10970) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 51, 2,	/* 563 (abs: 11530) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 31, 0,	/* 31 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 127, 25,	/* 6527 (abs: 18061) */
/* 11537 */ HB_P_LINEOFFSET, 112,	/* 833 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 124, 2,	/* 636 (abs: 12190) */
/* 11557 */ HB_P_LINEOFFSET, 113,	/* 834 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 108, 2,	/* 620 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 11605) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 69, 2,	/* 581 (abs: 12183) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 32, 0,	/* 32 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 242, 22,	/* 5874 (abs: 18061) */
/* 12190 */ HB_P_LINEOFFSET, 114,	/* 835 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 142, 2,	/* 654 (abs: 12861) */
/* 12210 */ HB_P_LINEOFFSET, 115,	/* 836 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 126, 2,	/* 638 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 12258) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 87, 2,	/* 599 (abs: 12854) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 33, 0,	/* 33 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 83, 20,	/* 5203 (abs: 18061) */
/* 12861 */ HB_P_LINEOFFSET, 116,	/* 837 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 160, 2,	/* 672 (abs: 13550) */
/* 12881 */ HB_P_LINEOFFSET, 117,	/* 838 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 144, 2,	/* 656 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 12929) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 105, 2,	/* 617 (abs: 13543) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 34, 0,	/* 34 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 162, 17,	/* 4514 (abs: 18061) */
/* 13550 */ HB_P_LINEOFFSET, 118,	/* 839 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 2,	/* 690 (abs: 14257) */
/* 13570 */ HB_P_LINEOFFSET, 119,	/* 840 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 162, 2,	/* 674 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 13618) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 123, 2,	/* 635 (abs: 14250) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 35, 0,	/* 35 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 223, 14,	/* 3807 (abs: 18061) */
/* 14257 */ HB_P_LINEOFFSET, 120,	/* 841 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 2,	/* 708 (abs: 14982) */
/* 14277 */ HB_P_LINEOFFSET, 121,	/* 842 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 180, 2,	/* 692 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 14325) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 141, 2,	/* 653 (abs: 14975) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 36, 0,	/* 36 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 10, 12,	/* 3082 (abs: 18061) */
/* 14982 */ HB_P_LINEOFFSET, 122,	/* 843 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 214, 2,	/* 726 (abs: 15725) */
/* 15002 */ HB_P_LINEOFFSET, 123,	/* 844 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 198, 2,	/* 710 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 15050) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 159, 2,	/* 671 (abs: 15718) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 37, 0,	/* 37 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 35, 9,	/* 2339 (abs: 18061) */
/* 15725 */ HB_P_LINEOFFSET, 124,	/* 845 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 2,	/* 744 (abs: 16486) */
/* 15745 */ HB_P_LINEOFFSET, 125,	/* 846 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 216, 2,	/* 728 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 15793) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 177, 2,	/* 689 (abs: 16479) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 38, 0,	/* 38 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 42, 6,	/* 1578 (abs: 18061) */
/* 16486 */ HB_P_LINEOFFSET, 126,	/* 847 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 2,	/* 762 (abs: 17265) */
/* 16506 */ HB_P_LINEOFFSET, 127,	/* 848 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 234, 2,	/* 746 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 16554) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 195, 2,	/* 707 (abs: 17258) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 39, 0,	/* 39 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 31, 3,	/* 799 (abs: 18061) */
/* 17265 */ HB_P_LINEOFFSET, 128,	/* 849 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 11, 3,	/* 779 (abs: 18061) */
/* 17285 */ HB_P_LINEOFFSET, 129,	/* 850 */
	HB_P_MESSAGE, 60, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 252, 2,	/* 764 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 136,	/* TODOBLANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 17333) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_JUMP, 213, 2,	/* 725 (abs: 18055) */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 40, 0,	/* 40 */
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 18061) */
/* 18061 */ HB_P_LINEOFFSET, 133,	/* 854 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 146, 0,	/* 146 (abs: 18228) */
/* 18085 */ HB_P_LINEOFFSET, 135,	/* 856 */
	HB_P_PUSHSYMNEAR, 139,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* AMYANCHO */
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 120, 0,	/* 120 (abs: 18219) */
/* 18102 */ HB_P_LINEOFFSET, 137,	/* 858 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 18154) */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18166) */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 18210) */
/* 18166 */ HB_P_LINEOFFSET, 138,	/* 859 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18202) */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 18210) */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 18210 */ HB_P_LINEOFFSET, 141,	/* 862 */
	HB_P_PUSHLOCALNEAR, 17,	/* KXX */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 17,	/* KXX */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 18219) */
/* 18219 */ HB_P_LINEOFFSET, 143,	/* 864 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* XX 1*/
	HB_P_JUMP, 98, 255,	/* -158 (abs: 18067) */
/* 18228 */ HB_P_LINEOFFSET, 146,	/* 867 */
	HB_P_MESSAGE, 140, 0,	/* SETARRAY */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18245 */ HB_P_LINEOFFSET, 149,	/* 870 */
	HB_P_MESSAGE, 69, 0,	/* _LDRAWFOOTERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18256 */ HB_P_LINEOFFSET, 150,	/* 871 */
	HB_P_MESSAGE, 141, 0,	/* _NLINESTYLE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_ZERO,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18267 */ HB_P_LINEOFFSET, 152,	/* 873 */
	HB_P_MESSAGE, 142, 0,	/* _BBKCOLOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	3, 0,	/* number of local parameters (3) */
	3, 0,	/* number of local variables (3) */
	1, 0,	/* OLBX */
	3, 0,	/* _NOLBX */
	2, 0,	/* NOLBX */
	HB_P_PUSHSYMNEAR, 143,	/* MY2_SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18306 */ HB_P_LINEOFFSET, 153,	/* 874 */
	HB_P_MESSAGE, 144, 0,	/* _BFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	3, 0,	/* number of local parameters (3) */
	6, 0,	/* number of local variables (6) */
	1, 0,	/* OLBX */
	3, 0,	/* _NOLBX */
	2, 0,	/* NOLBX */
	10, 0,	/* OFONT1 */
	11, 0,	/* OFONT2 */
	18, 0,	/* CONDTOTA */
	HB_P_PUSHSYMNEAR, 145,	/* MY2_SETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_PUSHLOCALNEAR, 251,	/* localvar5 */
	HB_P_PUSHLOCALNEAR, 250,	/* localvar6 */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18357 */ HB_P_LINEOFFSET, 154,	/* 875 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18367 */ HB_P_LINEOFFSET, 156,	/* 877 */
	HB_P_MESSAGE, 146, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 13,	/* ODLG */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	10, 0,	/* OFONT1 */
	11, 0,	/* OFONT2 */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 18406 */ HB_P_LINEOFFSET, 157,	/* 878 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 18411 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MY2_SETCOLOR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 5,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 115, 3,	/* 883 */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 3,	/* OBRW */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBRW */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* VALOR2 */
/* 00026 */ HB_P_LINEOFFSET, 1,	/* 884 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSTYLE */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00041) */
	HB_P_PUSHLOCALNEAR, 2,	/* NSTYLE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00076) */
/* 00043 */ HB_P_LINEOFFSET, 2,	/* 885 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* VALOR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00065) */
/* 00054 */ HB_P_LINEOFFSET, 3,	/* 886 */
	HB_P_PUSHLONG, 221, 221, 221, 0,	/* 14540253 */
	HB_P_POPLOCALNEAR, 6,	/* NCOLOR */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 00074) */
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 888 */
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_POPLOCALNEAR, 6,	/* NCOLOR */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00076) */
/* 00076 */ HB_P_LINEOFFSET, 9,	/* 892 */
	HB_P_PUSHLOCALNEAR, 6,	/* NCOLOR */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00082 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MY2_SETFONT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 8,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 128, 3,	/* 896 */
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 3,	/* OBRW */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBRW */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* VALOR2 */
/* 00026 */ HB_P_LINEOFFSET, 3,	/* 899 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSTYLE */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00072) */
/* 00034 */ HB_P_LINEOFFSET, 4,	/* 900 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* VALOR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00059) */
/* 00046 */ HB_P_LINEOFFSET, 5,	/* 901 */
	HB_P_MESSAGE, 147, 0,	/* HFONT */
	HB_P_PUSHLOCALNEAR, 7,	/* OFONT2 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* NHFONT */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00070) */
/* 00059 */ HB_P_LINEOFFSET, 7,	/* 903 */
	HB_P_MESSAGE, 147, 0,	/* HFONT */
	HB_P_PUSHLOCALNEAR, 6,	/* OFONT1 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* NHFONT */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00072) */
/* 00072 */ HB_P_LINEOFFSET, 11,	/* 907 */
	HB_P_PUSHLOCALNEAR, 10,	/* NHFONT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00078 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LASTSELECT2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 148, 3,	/* 916 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 917 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 918 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00034 */ HB_P_LINEOFFSET, 3,	/* 919 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00042 */ HB_P_LINEOFFSET, 5,	/* 921 */
	HB_P_MESSAGE, 52, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00064 */ HB_P_LINEOFFSET, 6,	/* 922 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 11, 0,	/* LASTSELECT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00082 */ HB_P_LINEOFFSET, 7,	/* 923 */
	HB_P_MESSAGE, 14, 0,	/* LOAD */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00097 */ HB_P_LINEOFFSET, 10,	/* 926 */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00122) */
/* 00115 */ HB_P_LINEOFFSET, 11,	/* 927 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00122) */
/* 00122 */ HB_P_LINEOFFSET, 13,	/* 929 */
	HB_P_MESSAGE, 62, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00139 */ HB_P_LINEOFFSET, 14,	/* 930 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00149 */ HB_P_LINEOFFSET, 15,	/* 931 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00154 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2BARVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 4,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 167, 3,	/* 935 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 936 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* ODLG */
/* 00053 */ HB_P_LINEOFFSET, 2,	/* 937 */
	HB_P_PUSHSYMNEAR, 150,	/* LIMPIO132 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* AITEMS */
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 938 */
	HB_P_PUSHLOCALNEAR, 7,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 8,	/* CCOMBO */
/* 00077 */ HB_P_LINEOFFSET, 4,	/* 939 */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00102) */
/* 00095 */ HB_P_LINEOFFSET, 5,	/* 940 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00102) */
/* 00102 */ HB_P_LINEOFFSET, 7,	/* 942 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 133,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 20, 64, 1, 2,	/* 5.0, 1, 2 */
	HB_P_PUSHDOUBLE, 123, 20, 174, 71, 225, 250, 45, 64, 2, 2,	/* 14.99, 2, 2 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 14,	/* OFONT */
/* 00160 */ HB_P_LINEOFFSET, 9,	/* 944 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 00203) */
/* 00176 */ HB_P_LINEOFFSET, 10,	/* 945 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
	HB_P_JUMP, 192, 0,	/* 192 (abs: 00392) */
/* 00203 */ HB_P_LINEOFFSET, 13,	/* 948 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'T', 'O', 'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00248) */
/* 00216 */ HB_P_LINEOFFSET, 14,	/* 949 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'T', 'O', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
	HB_P_JUMP, 147, 0,	/* 147 (abs: 00392) */
/* 00248 */ HB_P_LINEOFFSET, 15,	/* 950 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'O', 'T', 'T', 'O', 'M', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00298) */
/* 00264 */ HB_P_LINEOFFSET, 16,	/* 951 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'O', 'T', 'T', 'O', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
	HB_P_JUMPNEAR, 96,	/* 96 (abs: 00392) */
/* 00298 */ HB_P_LINEOFFSET, 17,	/* 952 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'E', 'F', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00344) */
/* 00312 */ HB_P_LINEOFFSET, 18,	/* 953 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'E', 'F', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 00392) */
/* 00344 */ HB_P_LINEOFFSET, 19,	/* 954 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', 'I', 'G', 'H', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00392) */
/* 00359 */ HB_P_LINEOFFSET, 20,	/* 955 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', 'I', 'G', 'H', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00392) */
/* 00392 */ HB_P_LINEOFFSET, 23,	/* 958 */
	HB_P_PUSHLOCALNEAR, 7,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 8,	/* CCOMBO */
/* 00400 */ HB_P_LINEOFFSET, 24,	/* 959 */
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* CTEXT */
/* 00417 */ HB_P_LINEOFFSET, 25,	/* 960 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 152,	/* TSAY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'u', 's', 'c', 'a', 'r', 0, 
	HB_P_ENDBLOCK,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 19,
	HB_P_POP,
/* 00464 */ HB_P_LINEOFFSET, 26,	/* 961 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 153,	/* TCOMBOBOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* CCOMBO */
	HB_P_PUSHSYMNEAR, 108,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00499) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00504) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 7,	/* AITEMS */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 36, 0,	/* 36 */
	1, 0,	/* number of local parameters (1) */
	5, 0,	/* number of local variables (5) */
	10, 0,	/* OGET */
	5, 0,	/* OLBX */
	9, 0,	/* OCBX */
	12, 0,	/* OBTN1 */
	13, 0,	/* OBTN2 */
	HB_P_PUSHSYMNEAR, 154,	/* MM2GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_PUSHLOCALNEAR, 251,	/* localvar5 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 23,
	HB_P_POPLOCALNEAR, 9,	/* OCBX */
/* 00570 */ HB_P_LINEOFFSET, 27,	/* 962 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 107,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* CTEXT */
	HB_P_PUSHSYMNEAR, 108,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00605) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00610) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 29,
	HB_P_POPLOCALNEAR, 10,	/* OGET */
/* 00647 */ HB_P_LINEOFFSET, 28,	/* 963 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 109,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'u', 's', 'c', 'a', 'r', 0, 
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCK, 53, 0,	/* 53 */
	0, 0,	/* number of local parameters (0) */
	6, 0,	/* number of local variables (6) */
	5, 0,	/* OLBX */
	9, 0,	/* OCBX */
	1, 0,	/* NOLBX */
	2, 0,	/* FOLDER */
	3, 0,	/* PAGINA */
	10, 0,	/* OGET */
	HB_P_MESSAGE, 156, 0,	/* GOTOCOL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 102,	/* VZ2BUSC23 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_PUSHLOCALNEAR, 251,	/* localvar5 */
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 250,	/* localvar6 */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_FALSE,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 12,	/* OBTN1 */
/* 00757 */ HB_P_LINEOFFSET, 29,	/* 964 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 109,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 12,	/* OBTN1 */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	1, 0,	/* NOLBX */
	2, 0,	/* FOLDER */
	3, 0,	/* PAGINA */
	HB_P_PUSHSYMNEAR, 118,	/* VZ2BUSC24 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_FALSE,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 13,	/* OBTN2 */
/* 00850 */ HB_P_LINEOFFSET, 30,	/* 965 */
	HB_P_MESSAGE, 157, 0,	/* _BRCLICKED */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCKSHORT, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00865 */ HB_P_LINEOFFSET, 31,	/* 966 */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00875 */ HB_P_LINEOFFSET, 32,	/* 967 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00880 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MM2GET )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 6,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 202, 3,	/* 970 */
	HB_P_MESSAGE, 158, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OCBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00033 */ HB_P_LINEOFFSET, 1,	/* 971 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00080) */
/* 00054 */ HB_P_LINEOFFSET, 2,	/* 972 */
	HB_P_MESSAGE, 159, 0,	/* _CPICTURE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 147, 0,	/* 147 (abs: 00224) */
/* 00080 */ HB_P_LINEOFFSET, 3,	/* 973 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00205) */
/* 00101 */ HB_P_LINEOFFSET, 4,	/* 974 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00156) */
/* 00120 */ HB_P_LINEOFFSET, 5,	/* 975 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 23,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00203) */
/* 00156 */ HB_P_LINEOFFSET, 7,	/* 977 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 23,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00224) */
/* 00205 */ HB_P_LINEOFFSET, 10,	/* 980 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00224 */ HB_P_LINEOFFSET, 12,	/* 982 */
	HB_P_MESSAGE, 160, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00250 */ HB_P_LINEOFFSET, 13,	/* 983 */
	HB_P_MESSAGE, 160, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 6,	/* OBTN2 */
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00284 */ HB_P_LINEOFFSET, 14,	/* 984 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00294 */ HB_P_LINEOFFSET, 15,	/* 985 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OBAR1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00304 */ HB_P_LINEOFFSET, 16,	/* 986 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00309 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LIMPIO132 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 221, 3,	/* 989 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* ALIMPIO */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 990 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 00123) */
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 991 */
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00101) */
/* 00053 */ HB_P_LINEOFFSET, 3,	/* 992 */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 4,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* N */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00115) */
/* 00101 */ HB_P_LINEOFFSET, 5,	/* 994 */
	HB_P_PUSHSYMNEAR, 43,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00115 */ HB_P_LINEOFFSET, 7,	/* 996 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 152,	/* -104 (abs: 00017) */
/* 00123 */ HB_P_LINEOFFSET, 8,	/* 997 */
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00129 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MYVCAMPO2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 233, 3,	/* 1001 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00032) */
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 1002 */
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_POPSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00032) */
/* 00032 */ HB_P_LINEOFFSET, 3,	/* 1004 */
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00038 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2FILVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 3,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 240, 3,	/* 1008 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 1009 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 34,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* ODLG */
/* 00053 */ HB_P_LINEOFFSET, 2,	/* 1010 */
	HB_P_PUSHSYMNEAR, 150,	/* LIMPIO132 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* AITEMS */
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 1011 */
	HB_P_PUSHLOCALNEAR, 6,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* CCOMBO */
/* 00077 */ HB_P_LINEOFFSET, 4,	/* 1012 */
	HB_P_PUSHSYMNEAR, 36,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 37, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* ARECT */
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 1013 */
	HB_P_MESSAGE, 55, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00118) */
/* 00111 */ HB_P_LINEOFFSET, 6,	/* 1014 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00118) */
/* 00118 */ HB_P_LINEOFFSET, 8,	/* 1016 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 12,	/* ARECT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 176, 255,	/* -80*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00154 */ HB_P_LINEOFFSET, 9,	/* 1017 */
	HB_P_MESSAGE, 51, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_PUSHBLOCK, 47, 0,	/* 47 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	4, 0,	/* OLBX */
	5, 0,	/* ODLG */
	12, 0,	/* ARECT */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 243, 255,	/* -13*/
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 176, 255,	/* -80*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00211 */ HB_P_LINEOFFSET, 10,	/* 1018 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 133,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 20, 64, 1, 2,	/* 5.0, 1, 2 */
	HB_P_PUSHDOUBLE, 123, 20, 174, 71, 225, 250, 45, 64, 2, 2,	/* 14.99, 2, 2 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 11,	/* OFONT */
/* 00269 */ HB_P_LINEOFFSET, 11,	/* 1019 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'O', 'T', 'T', 'O', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPSTATIC, 13, 0,	/* OBAR11 */
/* 00301 */ HB_P_LINEOFFSET, 12,	/* 1020 */
	HB_P_PUSHLOCALNEAR, 6,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* CCOMBO */
/* 00309 */ HB_P_LINEOFFSET, 14,	/* 1022 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00354) */
/* 00336 */ HB_P_LINEOFFSET, 15,	/* 1023 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 00432) */
/* 00354 */ HB_P_LINEOFFSET, 16,	/* 1024 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00404) */
/* 00381 */ HB_P_LINEOFFSET, 17,	/* 1025 */
	HB_P_PUSHSYMNEAR, 105,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 00432) */
/* 00404 */ HB_P_LINEOFFSET, 19,	/* 1027 */
	HB_P_PUSHSYMNEAR, 104,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
/* 00432 */ HB_P_LINEOFFSET, 21,	/* 1029 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 152,	/* TSAY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', 0, 
	HB_P_ENDBLOCK,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 19,
	HB_P_POP,
/* 00480 */ HB_P_LINEOFFSET, 22,	/* 1030 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 153,	/* TCOMBOBOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* CCOMBO */
	HB_P_PUSHSYMNEAR, 108,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00515) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00520) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 6,	/* AITEMS */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	1, 0,	/* number of local parameters (1) */
	3, 0,	/* number of local variables (3) */
	8, 0,	/* OGET */
	4, 0,	/* OLBX */
	9, 0,	/* OBTN1 */
	HB_P_PUSHSYMNEAR, 163,	/* XXGET2 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHSTATIC, 14, 0,	/* OFILCBX */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 23,
	HB_P_POPSTATIC, 14, 0,	/* OFILCBX */
/* 00582 */ HB_P_LINEOFFSET, 23,	/* 1031 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 107,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 108,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00616) */
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00622) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 29,
	HB_P_POPLOCALNEAR, 8,	/* OGET */
/* 00659 */ HB_P_LINEOFFSET, 24,	/* 1032 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 109,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 8,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 8,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', 0, 
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* NOLBX */
	HB_P_PUSHSYMNEAR, 119,	/* VZ2CVISTA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_FALSE,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 17,
	HB_P_POPLOCALNEAR, 9,	/* OBTN1 */
/* 00735 */ HB_P_LINEOFFSET, 25,	/* 1033 */
	HB_P_MESSAGE, 157, 0,	/* _BRCLICKED */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCKSHORT, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00750 */ HB_P_LINEOFFSET, 26,	/* 1034 */
	HB_P_MESSAGE, 38, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00760 */ HB_P_LINEOFFSET, 27,	/* 1035 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00765 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( XXGET2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 5,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 19, 4,	/* 1043 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00072) */
/* 00034 */ HB_P_LINEOFFSET, 1,	/* 1044 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_MESSAGE, 158, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 138, 0,	/* 138 (abs: 00207) */
/* 00072 */ HB_P_LINEOFFSET, 2,	/* 1045 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00146) */
/* 00099 */ HB_P_LINEOFFSET, 3,	/* 1046 */
	HB_P_PUSHSYMNEAR, 105,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_MESSAGE, 158, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 105,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 00207) */
/* 00146 */ HB_P_LINEOFFSET, 5,	/* 1048 */
	HB_P_PUSHSYMNEAR, 104,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
/* 00174 */ HB_P_LINEOFFSET, 6,	/* 1049 */
	HB_P_MESSAGE, 158, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 104,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 72, 0,	/* FLDGET */
	HB_P_MESSAGE, 53, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 1052 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00332) */
/* 00228 */ HB_P_LINEOFFSET, 10,	/* 1053 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00283) */
/* 00247 */ HB_P_LINEOFFSET, 11,	/* 1054 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 23,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00330) */
/* 00283 */ HB_P_LINEOFFSET, 13,	/* 1056 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 23,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 24,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 127, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00351) */
/* 00332 */ HB_P_LINEOFFSET, 16,	/* 1059 */
	HB_P_MESSAGE, 48, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_MESSAGE, 50, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00351 */ HB_P_LINEOFFSET, 18,	/* 1061 */
	HB_P_MESSAGE, 160, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_ZERO,
	HB_P_MESSAGE, 155, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 49, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00377 */ HB_P_LINEOFFSET, 19,	/* 1062 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00387 */ HB_P_LINEOFFSET, 20,	/* 1063 */
	HB_P_MESSAGE, 77, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OBAR1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00397 */ HB_P_LINEOFFSET, 21,	/* 1064 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00402 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ2FILWHERE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 3,	/* locals, params */
	HB_P_SFRAME, 166, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 44, 4,	/* 1068 */
	HB_P_LOCALNEARSETSTR, 4, 2, 0,	/* CWHERE 2*/
	' ', 0, 
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 1069 */
	HB_P_PUSHSYMNEAR, 32,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* OLBX */
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 1070 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 14, 0,	/* OFILCBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00055) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00055) */
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 1071 */
	HB_P_MESSAGE, 85, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 6,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHSTATIC, 14, 0,	/* OFILCBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* MCRUT */
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 1072 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCRUT */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 5,	/* MCRUT */
/* 00086 */ HB_P_LINEOFFSET, 5,	/* 1073 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00106) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00106) */
/* 00106 */ HB_P_LINEOFFSET, 8,	/* 1076 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 00163) */
/* 00123 */ HB_P_LINEOFFSET, 9,	/* 1077 */
	HB_P_PUSHLOCALNEAR, 4,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MCRUT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 129,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CWHERE */
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 00268) */
/* 00163 */ HB_P_LINEOFFSET, 10,	/* 1078 */
	HB_P_PUSHSYMNEAR, 31,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00215) */
/* 00180 */ HB_P_LINEOFFSET, 11,	/* 1079 */
	HB_P_PUSHLOCALNEAR, 4,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MCRUT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CWHERE */
	HB_P_JUMPNEAR, 55,	/* 55 (abs: 00268) */
/* 00215 */ HB_P_LINEOFFSET, 13,	/* 1081 */
	HB_P_PUSHLOCALNEAR, 4,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MCRUT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CWHERE */
/* 00268 */ HB_P_LINEOFFSET, 16,	/* 1084 */
	HB_P_PUSHLOCALNEAR, 4,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00279 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TODOBLANCO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 65, 4,	/* 1089 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00030) */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 1090 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 76, 87,	/* 22348 (abs: 22375) */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 00087) */
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 1092 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00081) */
/* 00074 */ HB_P_LINEOFFSET, 4,	/* 1093 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00084) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 19, 87,	/* 22291 (abs: 22375) */
/* 00087 */ HB_P_LINEOFFSET, 8,	/* 1097 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 00173) */
/* 00106 */ HB_P_LINEOFFSET, 9,	/* 1098 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00158) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00167) */
/* 00160 */ HB_P_LINEOFFSET, 10,	/* 1099 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00170) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 189, 86,	/* 22205 (abs: 22375) */
/* 00173 */ HB_P_LINEOFFSET, 14,	/* 1103 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 00286) */
/* 00192 */ HB_P_LINEOFFSET, 15,	/* 1104 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00244) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00271) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00280) */
/* 00273 */ HB_P_LINEOFFSET, 16,	/* 1105 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00283) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 76, 86,	/* 22092 (abs: 22375) */
/* 00286 */ HB_P_LINEOFFSET, 20,	/* 1109 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 124, 0,	/* 124 (abs: 00427) */
/* 00306 */ HB_P_LINEOFFSET, 21,	/* 1110 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00358) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00385) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00412) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00421) */
/* 00414 */ HB_P_LINEOFFSET, 22,	/* 1111 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00424) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 191, 85,	/* 21951 (abs: 22375) */
/* 00427 */ HB_P_LINEOFFSET, 26,	/* 1115 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 151, 0,	/* 151 (abs: 00595) */
/* 00447 */ HB_P_LINEOFFSET, 27,	/* 1116 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00499) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00526) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00553) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00580) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00589) */
/* 00582 */ HB_P_LINEOFFSET, 28,	/* 1117 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00592) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 23, 85,	/* 21783 (abs: 22375) */
/* 00595 */ HB_P_LINEOFFSET, 33,	/* 1122 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 0,	/* 178 (abs: 00790) */
/* 00615 */ HB_P_LINEOFFSET, 34,	/* 1123 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00667) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00694) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00721) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00748) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00775) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00784) */
/* 00777 */ HB_P_LINEOFFSET, 35,	/* 1124 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00787) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 84, 84,	/* 21588 (abs: 22375) */
/* 00790 */ HB_P_LINEOFFSET, 40,	/* 1129 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 205, 0,	/* 205 (abs: 01012) */
/* 00810 */ HB_P_LINEOFFSET, 41,	/* 1130 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00862) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00889) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00916) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00943) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00970) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00997) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01006) */
/* 00999 */ HB_P_LINEOFFSET, 42,	/* 1131 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 01009) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 118, 83,	/* 21366 (abs: 22375) */
/* 01012 */ HB_P_LINEOFFSET, 46,	/* 1135 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 01261) */
/* 01032 */ HB_P_LINEOFFSET, 47,	/* 1136 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01084) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01111) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01138) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01165) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01192) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01219) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01246) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01255) */
/* 01248 */ HB_P_LINEOFFSET, 48,	/* 1137 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 01258) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 125, 82,	/* 21117 (abs: 22375) */
/* 01261 */ HB_P_LINEOFFSET, 52,	/* 1141 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 01537) */
/* 01281 */ HB_P_LINEOFFSET, 53,	/* 1142 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01333) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01360) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01387) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01414) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01441) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01468) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01495) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01522) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01531) */
/* 01524 */ HB_P_LINEOFFSET, 54,	/* 1143 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 01534) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 105, 81,	/* 20841 (abs: 22375) */
/* 01537 */ HB_P_LINEOFFSET, 58,	/* 1147 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 30, 1,	/* 286 (abs: 01840) */
/* 01557 */ HB_P_LINEOFFSET, 59,	/* 1148 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01609) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01636) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01663) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01690) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01717) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01744) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01771) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01798) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01825) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01834) */
/* 01827 */ HB_P_LINEOFFSET, 60,	/* 1149 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 01837) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 58, 80,	/* 20538 (abs: 22375) */
/* 01840 */ HB_P_LINEOFFSET, 65,	/* 1154 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 57, 1,	/* 313 (abs: 02170) */
/* 01860 */ HB_P_LINEOFFSET, 66,	/* 1155 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01912) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01939) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01966) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01993) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02020) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02047) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02074) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02101) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02128) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02155) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02164) */
/* 02157 */ HB_P_LINEOFFSET, 67,	/* 1156 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 02167) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 240, 78,	/* 20208 (abs: 22375) */
/* 02170 */ HB_P_LINEOFFSET, 72,	/* 1161 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 02527) */
/* 02190 */ HB_P_LINEOFFSET, 73,	/* 1162 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02242) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02269) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02296) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02323) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02350) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02377) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02404) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02431) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02458) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02485) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02512) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02521) */
/* 02514 */ HB_P_LINEOFFSET, 74,	/* 1163 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 02524) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 139, 77,	/* 19851 (abs: 22375) */
/* 02527 */ HB_P_LINEOFFSET, 79,	/* 1168 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 111, 1,	/* 367 (abs: 02911) */
/* 02547 */ HB_P_LINEOFFSET, 80,	/* 1169 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02599) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02626) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02653) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02680) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02707) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02734) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02761) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02788) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02815) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02842) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02869) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02896) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02905) */
/* 02898 */ HB_P_LINEOFFSET, 81,	/* 1170 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 02908) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 11, 76,	/* 19467 (abs: 22375) */
/* 02911 */ HB_P_LINEOFFSET, 86,	/* 1175 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 1,	/* 394 (abs: 03322) */
/* 02931 */ HB_P_LINEOFFSET, 87,	/* 1176 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02983) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03010) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03037) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03064) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03091) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03118) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03145) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03172) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03199) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03226) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03253) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03280) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03307) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03316) */
/* 03309 */ HB_P_LINEOFFSET, 88,	/* 1177 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 03319) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 112, 74,	/* 19056 (abs: 22375) */
/* 03322 */ HB_P_LINEOFFSET, 93,	/* 1182 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 165, 1,	/* 421 (abs: 03760) */
/* 03342 */ HB_P_LINEOFFSET, 94,	/* 1183 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03394) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03421) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03448) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03475) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03502) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03529) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03556) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03583) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03610) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03637) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03664) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03691) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03718) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03745) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03754) */
/* 03747 */ HB_P_LINEOFFSET, 95,	/* 1184 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 03757) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 186, 72,	/* 18618 (abs: 22375) */
/* 03760 */ HB_P_LINEOFFSET, 100,	/* 1189 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 1,	/* 448 (abs: 04225) */
/* 03780 */ HB_P_LINEOFFSET, 101,	/* 1190 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03832) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03859) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03886) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03913) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03940) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03967) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 03994) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04021) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04048) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04075) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04102) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04129) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04156) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04183) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04210) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04219) */
/* 04212 */ HB_P_LINEOFFSET, 102,	/* 1191 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 04222) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 233, 70,	/* 18153 (abs: 22375) */
/* 04225 */ HB_P_LINEOFFSET, 107,	/* 1196 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 219, 1,	/* 475 (abs: 04717) */
/* 04245 */ HB_P_LINEOFFSET, 108,	/* 1197 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04297) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04324) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04351) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04378) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04405) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04432) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04459) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04486) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04513) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04540) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04567) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04594) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04621) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04648) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04675) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04702) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04711) */
/* 04704 */ HB_P_LINEOFFSET, 109,	/* 1198 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 04714) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 253, 68,	/* 17661 (abs: 22375) */
/* 04717 */ HB_P_LINEOFFSET, 114,	/* 1203 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 1,	/* 502 (abs: 05236) */
/* 04737 */ HB_P_LINEOFFSET, 115,	/* 1204 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04789) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04816) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04843) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04870) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04897) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04924) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04951) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 04978) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05005) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05032) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05059) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05086) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05113) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05140) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05167) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05194) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05221) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05230) */
/* 05223 */ HB_P_LINEOFFSET, 116,	/* 1205 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 05233) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 246, 66,	/* 17142 (abs: 22375) */
/* 05236 */ HB_P_LINEOFFSET, 121,	/* 1210 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 17, 2,	/* 529 (abs: 05782) */
/* 05256 */ HB_P_LINEOFFSET, 122,	/* 1211 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05308) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05335) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05362) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05389) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05416) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05443) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05470) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05497) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05524) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05551) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05578) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05605) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05632) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05659) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05686) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05713) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05740) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05767) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05776) */
/* 05769 */ HB_P_LINEOFFSET, 123,	/* 1212 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 05779) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 212, 64,	/* 16596 (abs: 22375) */
/* 05782 */ HB_P_LINEOFFSET, 128,	/* 1217 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 44, 2,	/* 556 (abs: 06355) */
/* 05802 */ HB_P_LINEOFFSET, 129,	/* 1218 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05854) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05881) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05908) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05935) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05962) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 05989) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06016) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06043) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06070) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06097) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06124) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06151) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06178) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06205) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06232) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06259) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06286) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06313) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06340) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06349) */
/* 06342 */ HB_P_LINEOFFSET, 130,	/* 1219 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06352) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 151, 62,	/* 16023 (abs: 22375) */
/* 06355 */ HB_P_LINEOFFSET, 135,	/* 1224 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 71, 2,	/* 583 (abs: 06955) */
/* 06375 */ HB_P_LINEOFFSET, 136,	/* 1225 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06427) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06454) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06481) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06508) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06535) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06562) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06589) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06616) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06643) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06670) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06697) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06724) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06751) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06778) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06805) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06832) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06859) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06886) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06913) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 06940) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06949) */
/* 06942 */ HB_P_LINEOFFSET, 137,	/* 1226 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06952) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 63, 60,	/* 15423 (abs: 22375) */
/* 06955 */ HB_P_LINEOFFSET, 142,	/* 1231 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 98, 2,	/* 610 (abs: 07582) */
/* 06975 */ HB_P_LINEOFFSET, 143,	/* 1232 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07027) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07054) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07081) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07108) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07135) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07162) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07189) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07216) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07243) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07270) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07297) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07324) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07351) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07378) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07405) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07432) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07459) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07486) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07513) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07540) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07567) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07576) */
/* 07569 */ HB_P_LINEOFFSET, 144,	/* 1233 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 07579) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 204, 57,	/* 14796 (abs: 22375) */
/* 07582 */ HB_P_LINEOFFSET, 149,	/* 1238 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 125, 2,	/* 637 (abs: 08236) */
/* 07602 */ HB_P_LINEOFFSET, 150,	/* 1239 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07654) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07681) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07708) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07735) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07762) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07789) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07816) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07843) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07870) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07897) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07924) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07951) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 07978) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08005) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08032) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08059) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08086) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08113) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08140) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08167) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08194) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08221) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 08230) */
/* 08223 */ HB_P_LINEOFFSET, 151,	/* 1240 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 08233) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 62, 55,	/* 14142 (abs: 22375) */
/* 08236 */ HB_P_LINEOFFSET, 156,	/* 1245 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 2,	/* 664 (abs: 08917) */
/* 08256 */ HB_P_LINEOFFSET, 157,	/* 1246 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08308) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08335) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08362) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08389) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08416) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08443) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08470) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08497) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08524) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08551) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08578) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08605) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08632) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08659) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08686) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08713) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08740) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08767) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08794) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08821) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08848) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08875) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08902) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 08911) */
/* 08904 */ HB_P_LINEOFFSET, 158,	/* 1247 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 08914) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 149, 52,	/* 13461 (abs: 22375) */
/* 08917 */ HB_P_LINEOFFSET, 163,	/* 1252 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 179, 2,	/* 691 (abs: 09625) */
/* 08937 */ HB_P_LINEOFFSET, 164,	/* 1253 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08989) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09016) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09043) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09070) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09097) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09124) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09151) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09178) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09205) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09232) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09259) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09286) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09313) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09340) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09367) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09394) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09421) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09448) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09475) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09502) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09529) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09556) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09583) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09610) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 09619) */
/* 09612 */ HB_P_LINEOFFSET, 165,	/* 1254 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 09622) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 209, 49,	/* 12753 (abs: 22375) */
/* 09625 */ HB_P_LINEOFFSET, 170,	/* 1259 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 206, 2,	/* 718 (abs: 10360) */
/* 09645 */ HB_P_LINEOFFSET, 171,	/* 1260 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09697) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09724) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09751) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09778) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09805) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09832) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09859) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09886) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09913) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09940) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09967) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 09994) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10021) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10048) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10075) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10102) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10129) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10156) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10183) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10210) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10237) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10264) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10291) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10318) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10345) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 10354) */
/* 10347 */ HB_P_LINEOFFSET, 172,	/* 1261 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 10357) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 242, 46,	/* 12018 (abs: 22375) */
/* 10360 */ HB_P_LINEOFFSET, 177,	/* 1266 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 233, 2,	/* 745 (abs: 11122) */
/* 10380 */ HB_P_LINEOFFSET, 178,	/* 1267 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10432) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10459) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10486) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10513) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10540) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10567) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10594) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10621) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10648) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10675) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10702) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10729) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10756) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10783) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10810) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10837) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10864) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10891) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10918) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10945) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10972) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 10999) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11026) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11053) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11080) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11107) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 11116) */
/* 11109 */ HB_P_LINEOFFSET, 179,	/* 1268 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 11119) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 248, 43,	/* 11256 (abs: 22375) */
/* 11122 */ HB_P_LINEOFFSET, 184,	/* 1273 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 4, 3,	/* 772 (abs: 11911) */
/* 11142 */ HB_P_LINEOFFSET, 185,	/* 1274 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11194) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11221) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11248) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11275) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11302) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11329) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11356) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11383) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11410) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11437) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11464) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11491) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11518) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11545) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11572) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11599) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11626) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11653) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11680) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11707) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11734) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11761) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11788) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11815) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11842) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11869) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11896) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 11905) */
/* 11898 */ HB_P_LINEOFFSET, 186,	/* 1275 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 11908) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 227, 40,	/* 10467 (abs: 22375) */
/* 11911 */ HB_P_LINEOFFSET, 191,	/* 1280 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 31, 3,	/* 799 (abs: 12727) */
/* 11931 */ HB_P_LINEOFFSET, 192,	/* 1281 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11983) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12010) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12037) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12064) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12091) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12118) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12145) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12172) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12199) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12226) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12253) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12280) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12307) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12334) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12361) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12388) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12415) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12442) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12469) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12496) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12523) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12550) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12577) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12604) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12631) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12658) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12685) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12712) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 12721) */
/* 12714 */ HB_P_LINEOFFSET, 193,	/* 1282 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 12724) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 179, 37,	/* 9651 (abs: 22375) */
/* 12727 */ HB_P_LINEOFFSET, 198,	/* 1287 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 58, 3,	/* 826 (abs: 13570) */
/* 12747 */ HB_P_LINEOFFSET, 199,	/* 1288 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12799) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12826) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12853) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12880) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12907) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12934) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12961) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 12988) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13015) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13042) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13069) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13096) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13123) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13150) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13177) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13204) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13231) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13258) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13285) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13312) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13339) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13366) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13393) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13420) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13447) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13474) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13501) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13528) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13555) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 13564) */
/* 13557 */ HB_P_LINEOFFSET, 200,	/* 1289 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 13567) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 104, 34,	/* 8808 (abs: 22375) */
/* 13570 */ HB_P_LINEOFFSET, 205,	/* 1294 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 85, 3,	/* 853 (abs: 14440) */
/* 13590 */ HB_P_LINEOFFSET, 206,	/* 1295 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13642) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13669) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13696) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13723) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13750) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13777) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13804) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13831) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13858) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13885) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13912) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13939) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13966) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 13993) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14020) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14047) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14074) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14101) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14128) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14155) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14182) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14209) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14236) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14263) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14290) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14317) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14344) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14371) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14398) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14425) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 14434) */
/* 14427 */ HB_P_LINEOFFSET, 207,	/* 1296 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 14437) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 2, 31,	/* 7938 (abs: 22375) */
/* 14440 */ HB_P_LINEOFFSET, 212,	/* 1301 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 112, 3,	/* 880 (abs: 15337) */
/* 14460 */ HB_P_LINEOFFSET, 213,	/* 1302 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14512) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14539) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14566) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14593) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14620) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14647) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14674) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14701) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14728) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14755) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14782) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14809) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14836) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14863) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14890) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14917) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14944) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14971) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 14998) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15025) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15052) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15079) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15106) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15133) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15160) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15187) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15214) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15241) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15268) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15295) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15322) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 15331) */
/* 15324 */ HB_P_LINEOFFSET, 214,	/* 1303 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 15334) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 129, 27,	/* 7041 (abs: 22375) */
/* 15337 */ HB_P_LINEOFFSET, 219,	/* 1308 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 139, 3,	/* 907 (abs: 16261) */
/* 15357 */ HB_P_LINEOFFSET, 220,	/* 1309 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15409) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15436) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15463) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15490) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15517) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15544) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15571) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15598) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15625) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15652) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15679) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15706) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15733) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15760) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15787) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15814) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15841) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15868) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15895) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15922) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15949) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 15976) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16003) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16030) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16057) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16084) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16111) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16138) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16165) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16192) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16219) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16246) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 16255) */
/* 16248 */ HB_P_LINEOFFSET, 221,	/* 1310 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 16258) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 229, 23,	/* 6117 (abs: 22375) */
/* 16261 */ HB_P_LINEOFFSET, 226,	/* 1315 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 3,	/* 934 (abs: 17212) */
/* 16281 */ HB_P_LINEOFFSET, 227,	/* 1316 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16333) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16360) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16387) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16414) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16441) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16468) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16495) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16522) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16549) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16576) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16603) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16630) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16657) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16684) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16711) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16738) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16765) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16792) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16819) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16846) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16873) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16900) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16927) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16954) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 16981) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17008) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17035) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17062) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17089) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17116) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17143) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17170) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17197) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 17206) */
/* 17199 */ HB_P_LINEOFFSET, 228,	/* 1317 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 17209) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 46, 20,	/* 5166 (abs: 22375) */
/* 17212 */ HB_P_LINEOFFSET, 233,	/* 1322 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 193, 3,	/* 961 (abs: 18190) */
/* 17232 */ HB_P_LINEOFFSET, 234,	/* 1323 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17284) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17311) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17338) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17365) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17392) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17419) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17446) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17473) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17500) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17527) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17554) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17581) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17608) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17635) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17662) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17689) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17716) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17743) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17770) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17797) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17824) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17851) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17878) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17905) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17932) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17959) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 17986) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18013) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18040) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18067) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18094) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18121) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18148) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18175) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 18184) */
/* 18177 */ HB_P_LINEOFFSET, 235,	/* 1324 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 18187) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 92, 16,	/* 4188 (abs: 22375) */
/* 18190 */ HB_P_LINEOFFSET, 240,	/* 1329 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 3,	/* 988 (abs: 19195) */
/* 18210 */ HB_P_LINEOFFSET, 241,	/* 1330 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18262) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18289) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18316) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18343) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18370) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18397) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18424) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18451) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18478) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18505) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18532) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18559) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18586) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18613) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18640) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18667) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18694) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18721) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18748) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18775) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18802) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18829) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18856) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18883) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18910) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18937) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18964) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 18991) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19018) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19045) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19072) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19099) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19126) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19153) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19180) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 19189) */
/* 19182 */ HB_P_LINEOFFSET, 242,	/* 1331 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 19192) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 111, 12,	/* 3183 (abs: 22375) */
/* 19195 */ HB_P_LINEOFFSET, 247,	/* 1336 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 3,	/* 1015 (abs: 20227) */
/* 19215 */ HB_P_LINEOFFSET, 248,	/* 1337 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19267) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19294) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19321) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19348) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19375) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19402) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19429) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19456) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19483) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19510) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19537) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19564) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19591) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19618) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19645) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19672) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19699) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19726) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19753) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19780) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19807) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19834) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19861) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19888) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19915) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19942) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19969) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 19996) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20023) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20050) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20077) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20104) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20131) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20158) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20185) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20212) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 20221) */
/* 20214 */ HB_P_LINEOFFSET, 249,	/* 1338 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 20224) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 103, 8,	/* 2151 (abs: 22375) */
/* 20227 */ HB_P_LINEOFFSET, 254,	/* 1343 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 4,	/* 1043 (abs: 21287) */
/* 20247 */ HB_P_LINEOFFSET, 255,	/* 1344 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20299) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20326) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20353) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20380) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20407) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20434) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20461) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20488) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20515) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20542) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20569) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20596) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20623) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20650) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20677) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20704) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20731) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20758) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20785) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20812) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20839) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20866) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20893) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20920) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20947) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 20974) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21001) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21028) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21055) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21082) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21109) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21136) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21163) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21190) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21217) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21244) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21271) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 21281) */
/* 21273 */ HB_P_LINE, 65, 5,	/* 1345 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 21284) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMP, 67, 4,	/* 1091 (abs: 22375) */
/* 21287 */ HB_P_LINE, 70, 5,	/* 1350 */
	HB_P_PUSHSYMNEAR, 41,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 4,	/* 1070 (abs: 22375) */
/* 21308 */ HB_P_LINE, 71, 5,	/* 1351 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21361) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21388) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21415) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21442) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21469) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21496) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21523) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21550) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21577) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21604) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21631) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21658) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21685) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21712) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21739) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21766) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21793) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21820) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21847) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21874) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21901) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21928) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21955) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 21982) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22009) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22036) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22063) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22090) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22117) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22144) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22171) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22198) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22225) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22252) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22279) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22306) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22333) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 22360) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* AARRAYDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 138, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 22370) */
/* 22362 */ HB_P_LINE, 72, 5,	/* 1352 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 22373) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 22375) */
/* 22375 */ HB_P_LINE, 77, 5,	/* 1357 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 22381 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

static HARBOUR hb_INITSTATICS( void )
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 166, 0, 19, 0,	/* symbol (_INITSTATICS), 19 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

