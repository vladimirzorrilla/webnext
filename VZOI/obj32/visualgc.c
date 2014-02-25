/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from </vclon/mclon32/visualgc.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "/vclon/mclon32/visualgc.prg"

HB_FUNC( VZVISTAS );
HB_FUNC( VZVISTA );
HB_FUNC( VZ_999 );
HB_FUNC( GETSELECT );
HB_FUNC( GETNUEVO1 );
HB_FUNC( VZSELECT );
HB_FUNC( VZLEESQL );
HB_FUNC( VZBIEN );
HB_FUNC( VZBUSCINC );
HB_FUNC( VZF2SEEK );
HB_FUNC( VZBUSC23 );
HB_FUNC( VZBUSC24 );
HB_FUNC( VZCVISTA );
HB_FUNC( VZFROMVISTA );
HB_FUNC( VZWHEREVISTA );
HB_FUNC( VZORDERVISTA );
HB_FUNC( PREWHERE );
HB_FUNC( VISTAQUIE );
HB_FUNC( MY_SETCOLOR );
HB_FUNC( MY_SETFONT );
HB_FUNC( VZTABLA );
HB_FUNC( INIVZTB );
HB_FUNC( VZTBBUSCAR );
HB_FUNC( VZSGBUSCAR );
HB_FUNC( VZTBAGMO );
HB_FUNC( VZTBDELE );
HB_FUNC( XINIVZTB );
HB_FUNC( XVALTB );
HB_FUNC( SWTB );
HB_FUNC( VZTBIMPR );
HB_FUNC( SOLOELCAMPO );
HB_FUNC( VZPASACAMPOS );
HB_FUNC( LASTSELECT );
HB_FUNC( VZBARVISTA );
HB_FUNC( MMGET );
HB_FUNC( LIMPIO13 );
HB_FUNC( MYVCAMPO );
HB_FUNC( VZFILVISTA );
HB_FUNC( XXGET );
HB_FUNC( VZFILWHERE );
HB_FUNC( VZVISTAFREE );
HB_FUNC( VZVISTA2 );

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
extern HB_FUNC( UPPER );
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
extern HB_FUNC( __MVPUBLIC );
extern HB_FUNC( LEN );
extern HB_FUNC( AADD );
extern HB_FUNC( VZCSS );
extern HB_FUNC( MSGALERT );
extern HB_FUNC( LTRIM );
extern HB_FUNC( STR );
extern HB_FUNC( NADA );
extern HB_FUNC( TRANSFORM );
extern HB_FUNC( ARRAY );
extern HB_FUNC( CHR );
extern HB_FUNC( VCERROR );
extern HB_FUNC( VZ3QUERY );
extern HB_FUNC( MEMOREAD );
extern HB_FUNC( VERPREQUERY );
extern HB_FUNC( OUTPUTDEBUGSTRING );
extern HB_FUNC( MSGGET );
extern HB_FUNC( VERQUERY );
extern HB_FUNC( WQOUT );
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
extern HB_FUNC( MSGSTOP );
extern HB_FUNC( VZUSE_ );
extern HB_FUNC( VZDBSEEK );
extern HB_FUNC( TBAR );
extern HB_FUNC( CURDIR );
extern HB_FUNC( TBTNBMP );
extern HB_FUNC( VZ );
extern HB_FUNC( VZRECNO );
extern HB_FUNC( VZGOTOP );
extern HB_FUNC( DAMEOBJSQL );
extern HB_FUNC( VZEOF );
extern HB_FUNC( VZSKIP );
extern HB_FUNC( VZFORM1 );
extern HB_FUNC( _R );
extern HB_FUNC( VZFIELDGET );
extern HB_FUNC( MSGYESNO );
extern HB_FUNC( VZDELE );
extern HB_FUNC( _VG );
extern HB_FUNC( VZFIELDNAME );
extern HB_FUNC( ISQL );
extern HB_FUNC( VZAPPEND );
extern HB_FUNC( VZLOA );
extern HB_FUNC( INFOREG );
extern HB_FUNC( DAMETABLASQL );
extern HB_FUNC( QUERY2ARRAY );
extern HB_FUNC( VZREPL );
extern HB_FUNC( TSAY );
extern HB_FUNC( TCOMBOBOX );
extern HB_FUNC( __MVXRELEASE );
extern HB_FUNC( ERRORSYS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VISUALGC )
{ "VZVISTAS", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( VZVISTAS ), (PHB_DYNS) 1 },
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
{ "UPPER", HB_FS_PUBLIC, HB_FUNCNAME( UPPER ), NULL },
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
{ "VZVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZVISTA ), (PHB_DYNS) 1 },
{ "VALTYPE", HB_FS_PUBLIC, HB_FUNCNAME( VALTYPE ), NULL },
{ "DAMEOBJ", HB_FS_PUBLIC, HB_FUNCNAME( DAMEOBJ ), NULL },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "AT", HB_FS_PUBLIC, HB_FUNCNAME( AT ), NULL },
{ "BVALID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BVALID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZVISTAFREE", HB_FS_PUBLIC, HB_FUNCNAME( VZVISTAFREE ), (PHB_DYNS) 1 },
{ "EVAL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETNUEVO1", HB_FS_PUBLIC, HB_FUNCNAME( GETNUEVO1 ), (PHB_DYNS) 1 },
{ "GETCOORS", HB_FS_PUBLIC, HB_FUNCNAME( GETCOORS ), NULL },
{ "HWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__MVPUBLIC", HB_FS_PUBLIC, HB_FUNCNAME( __MVPUBLIC ), NULL },
{ "END", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_PREWHERE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_SETLAND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LEN", HB_FS_PUBLIC, HB_FUNCNAME( LEN ), NULL },
{ "AHEADERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AADD", HB_FS_PUBLIC, HB_FUNCNAME( AADD ), NULL },
{ "_AFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_AFJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETSELECT", HB_FS_PUBLIC, HB_FUNCNAME( GETSELECT ), (PHB_DYNS) 1 },
{ "HIDE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETSIZE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NWIDTH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NHEIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BRESIZED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_ACURSOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ACURSOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZCSS", HB_FS_PUBLIC, HB_FUNCNAME( VZCSS ), NULL },
{ "VZLEESQL", HB_FS_PUBLIC, HB_FUNCNAME( VZLEESQL ), (PHB_DYNS) 1 },
{ "NROWCOUNT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGALERT", HB_FS_PUBLIC, HB_FUNCNAME( MSGALERT ), NULL },
{ "SHOW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CGROUP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VISTAQUIE", HB_FS_PUBLIC, HB_FUNCNAME( VISTAQUIE ), (PHB_DYNS) 1 },
{ "FLDGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LTRIM", HB_FS_PUBLIC, HB_FUNCNAME( LTRIM ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "VZ_999", HB_FS_PUBLIC, HB_FUNCNAME( VZ_999 ), (PHB_DYNS) 1 },
{ "_BLINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETBROWSE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETARRAY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BKEYDOWN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BKEYDOWN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZBUSCINC", HB_FS_PUBLIC, HB_FUNCNAME( VZBUSCINC ), (PHB_DYNS) 1 },
{ "BLDBLCLICK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BLDBLCLICK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NADA", HB_FS_PUBLIC, HB_FUNCNAME( NADA ), NULL },
{ "_LDRAWFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NROW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GOTO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AFOOTERS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AFJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TRANSFORM", HB_FS_PUBLIC, HB_FUNCNAME( TRANSFORM ), NULL },
{ "AJUSTIFY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REFRESH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_AACTIONS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ARRAY", HB_FS_PUBLIC, HB_FUNCNAME( ARRAY ), NULL },
{ "CHR", HB_FS_PUBLIC, HB_FUNCNAME( CHR ), NULL },
{ "AACTIONS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AMULTI", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VCERROR", HB_FS_PUBLIC, HB_FUNCNAME( VCERROR ), NULL },
{ "VZSELECT", HB_FS_PUBLIC, HB_FUNCNAME( VZSELECT ), (PHB_DYNS) 1 },
{ "VZ3QUERY", HB_FS_PUBLIC, HB_FUNCNAME( VZ3QUERY ), NULL },
{ "TEXTO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MEMOREAD", HB_FS_PUBLIC, HB_FUNCNAME( MEMOREAD ), NULL },
{ "VERPREQUERY", HB_FS_PUBLIC, HB_FUNCNAME( VERPREQUERY ), NULL },
{ "OUTPUTDEBUGSTRING", HB_FS_PUBLIC, HB_FUNCNAME( OUTPUTDEBUGSTRING ), NULL },
{ "MSGGET", HB_FS_PUBLIC, HB_FUNCNAME( MSGGET ), NULL },
{ "VERQUERY", HB_FS_PUBLIC, HB_FUNCNAME( VERQUERY ), NULL },
{ "VZBIEN", HB_FS_PUBLIC, HB_FUNCNAME( VZBIEN ), (PHB_DYNS) 1 },
{ "NAT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "WQOUT", HB_FS_PUBLIC, HB_FUNCNAME( WQOUT ), NULL },
{ "VZF2SEEK", HB_FS_PUBLIC, HB_FUNCNAME( VZF2SEEK ), (PHB_DYNS) 1 },
{ "NCOLACT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETTEXT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "INT", HB_FS_PUBLIC, HB_FUNCNAME( INT ), NULL },
{ "ROUND", HB_FS_PUBLIC, HB_FUNCNAME( ROUND ), NULL },
{ "ANRECNO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NAT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZBUSC23", HB_FS_PUBLIC, HB_FUNCNAME( VZBUSC23 ), (PHB_DYNS) 1 },
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
{ "VZBUSC24", HB_FS_PUBLIC, HB_FUNCNAME( VZBUSC24 ), (PHB_DYNS) 1 },
{ "VZCVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZCVISTA ), (PHB_DYNS) 1 },
{ "VZFROMVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZFROMVISTA ), (PHB_DYNS) 1 },
{ "CDBFCONFIG", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DBGOTOP", HB_FS_PUBLIC, HB_FUNCNAME( DBGOTOP ), NULL },
{ "NNN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZWHEREVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZWHEREVISTA ), (PHB_DYNS) 1 },
{ "PREWHERE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, HB_FUNCNAME( PREWHERE ), (PHB_DYNS) 1 },
{ "ACONTROLS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CTOOLTIP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VARGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MCRUT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DTOMY", HB_FS_PUBLIC, HB_FUNCNAME( DTOMY ), NULL },
{ "VZORDERVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZORDERVISTA ), (PHB_DYNS) 1 },
{ "DANCHO", HB_FS_PUBLIC, HB_FUNCNAME( DANCHO ), NULL },
{ "TFONT", HB_FS_PUBLIC, HB_FUNCNAME( TFONT ), NULL },
{ "REPO", HB_FS_PUBLIC, HB_FUNCNAME( REPO ), NULL },
{ "VAL", HB_FS_PUBLIC, HB_FUNCNAME( VAL ), NULL },
{ "_NLINESTYLE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BBKCOLOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MY_SETCOLOR", HB_FS_PUBLIC, HB_FUNCNAME( MY_SETCOLOR ), (PHB_DYNS) 1 },
{ "_BFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MY_SETFONT", HB_FS_PUBLIC, HB_FUNCNAME( MY_SETFONT ), (PHB_DYNS) 1 },
{ "HFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZTABLA", HB_FS_PUBLIC, HB_FUNCNAME( VZTABLA ), (PHB_DYNS) 1 },
{ "MSGSTOP", HB_FS_PUBLIC, HB_FUNCNAME( MSGSTOP ), NULL },
{ "VZUSE_", HB_FS_PUBLIC, HB_FUNCNAME( VZUSE_ ), NULL },
{ "VZDBSEEK", HB_FS_PUBLIC, HB_FUNCNAME( VZDBSEEK ), NULL },
{ "INIVZTB", HB_FS_PUBLIC, HB_FUNCNAME( INIVZTB ), (PHB_DYNS) 1 },
{ "TBAR", HB_FS_PUBLIC, HB_FUNCNAME( TBAR ), NULL },
{ "CURDIR", HB_FS_PUBLIC, HB_FUNCNAME( CURDIR ), NULL },
{ "NEWBAR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TBTNBMP", HB_FS_PUBLIC, HB_FUNCNAME( TBTNBMP ), NULL },
{ "VZTBAGMO", HB_FS_PUBLIC, HB_FUNCNAME( VZTBAGMO ), (PHB_DYNS) 1 },
{ "VZTBDELE", HB_FS_PUBLIC, HB_FUNCNAME( VZTBDELE ), (PHB_DYNS) 1 },
{ "VZTBIMPR", HB_FS_PUBLIC, HB_FUNCNAME( VZTBIMPR ), (PHB_DYNS) 1 },
{ "VZTBBUSCAR", HB_FS_PUBLIC, HB_FUNCNAME( VZTBBUSCAR ), (PHB_DYNS) 1 },
{ "VZSGBUSCAR", HB_FS_PUBLIC, HB_FUNCNAME( VZSGBUSCAR ), (PHB_DYNS) 1 },
{ "VZ", HB_FS_PUBLIC, HB_FUNCNAME( VZ ), NULL },
{ "VALORGET", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZRECNO", HB_FS_PUBLIC, HB_FUNCNAME( VZRECNO ), NULL },
{ "VZGOTOP", HB_FS_PUBLIC, HB_FUNCNAME( VZGOTOP ), NULL },
{ "DAMEOBJSQL", HB_FS_PUBLIC, HB_FUNCNAME( DAMEOBJSQL ), NULL },
{ "VZEOF", HB_FS_PUBLIC, HB_FUNCNAME( VZEOF ), NULL },
{ "VZSKIP", HB_FS_PUBLIC, HB_FUNCNAME( VZSKIP ), NULL },
{ "GOTOCOL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OBJQ", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZFORM1", HB_FS_PUBLIC, HB_FUNCNAME( VZFORM1 ), NULL },
{ "_R", HB_FS_PUBLIC, HB_FUNCNAME( _R ), NULL },
{ "VZFIELDGET", HB_FS_PUBLIC, HB_FUNCNAME( VZFIELDGET ), NULL },
{ "LASTSELECT", HB_FS_PUBLIC, HB_FUNCNAME( LASTSELECT ), (PHB_DYNS) 1 },
{ "GO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADBF", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MSGYESNO", HB_FS_PUBLIC, HB_FUNCNAME( MSGYESNO ), NULL },
{ "VZDELE", HB_FS_PUBLIC, HB_FUNCNAME( VZDELE ), NULL },
{ "XINIVZTB", HB_FS_PUBLIC, HB_FUNCNAME( XINIVZTB ), (PHB_DYNS) 1 },
{ "DISABLE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CLASSNAME", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADIALOGS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VARPUT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "XVALTB", HB_FS_PUBLIC, HB_FUNCNAME( XVALTB ), (PHB_DYNS) 1 },
{ "_VG", HB_FS_PUBLIC, HB_FUNCNAME( _VG ), NULL },
{ "VZFIELDNAME", HB_FS_PUBLIC, HB_FUNCNAME( VZFIELDNAME ), NULL },
{ "ISQL", HB_FS_PUBLIC, HB_FUNCNAME( ISQL ), NULL },
{ "VZAPPEND", HB_FS_PUBLIC, HB_FUNCNAME( VZAPPEND ), NULL },
{ "VZLOA", HB_FS_PUBLIC, HB_FUNCNAME( VZLOA ), NULL },
{ "INFOREG", HB_FS_PUBLIC, HB_FUNCNAME( INFOREG ), NULL },
{ "SWTB", HB_FS_PUBLIC, HB_FUNCNAME( SWTB ), (PHB_DYNS) 1 },
{ "DAMETABLASQL", HB_FS_PUBLIC, HB_FUNCNAME( DAMETABLASQL ), NULL },
{ "SOLOELCAMPO", HB_FS_PUBLIC, HB_FUNCNAME( SOLOELCAMPO ), (PHB_DYNS) 1 },
{ "QUERY2ARRAY", HB_FS_PUBLIC, HB_FUNCNAME( QUERY2ARRAY ), NULL },
{ "_CTITULO", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "VZPASACAMPOS", HB_FS_PUBLIC, HB_FUNCNAME( VZPASACAMPOS ), (PHB_DYNS) 1 },
{ "VZREPL", HB_FS_PUBLIC, HB_FUNCNAME( VZREPL ), NULL },
{ "VZBARVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZBARVISTA ), (PHB_DYNS) 1 },
{ "LIMPIO13", HB_FS_PUBLIC, HB_FUNCNAME( LIMPIO13 ), (PHB_DYNS) 1 },
{ "TSAY", HB_FS_PUBLIC, HB_FUNCNAME( TSAY ), NULL },
{ "TCOMBOBOX", HB_FS_PUBLIC, HB_FUNCNAME( TCOMBOBOX ), NULL },
{ "MMGET", HB_FS_PUBLIC, HB_FUNCNAME( MMGET ), (PHB_DYNS) 1 },
{ "NLEFT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BRCLICKED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_CPICTURE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MOVE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MYVCAMPO", HB_FS_PUBLIC, HB_FUNCNAME( MYVCAMPO ), (PHB_DYNS) 1 },
{ "VZFILVISTA", HB_FS_PUBLIC, HB_FUNCNAME( VZFILVISTA ), (PHB_DYNS) 1 },
{ "XXGET", HB_FS_PUBLIC, HB_FUNCNAME( XXGET ), (PHB_DYNS) 1 },
{ "VZFILWHERE", HB_FS_PUBLIC, HB_FUNCNAME( VZFILWHERE ), (PHB_DYNS) 1 },
{ "__MVXRELEASE", HB_FS_PUBLIC, HB_FUNCNAME( __MVXRELEASE ), NULL },
{ "VZVISTA2", HB_FS_PUBLIC, HB_FUNCNAME( VZVISTA2 ), (PHB_DYNS) 1 },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL },
{ "(_INITSTATICS)", HB_FS_INIT | HB_FS_EXIT, hb_INITSTATICS, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_VISUALGC )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_VISUALGC
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_VISUALGC = hb_vm_SymbolInit_VISUALGC;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_VISUALGC
#endif

HB_FUNC( VZVISTAS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 42, 0,	/* 42 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* BUF */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* ATROZOS */
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 44 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* FRM */
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 45 */
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
	HB_P_JUMPFALSE, 218, 29,	/* 7642 (abs: 07704) */
/* 00065 */ HB_P_LINEOFFSET, 4,	/* 46 */
	HB_P_LOCALNEARSETSTR, 12, 187, 4,	/* C 1211*/
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'V', 'i', 's', 'u', 'a', 'l', ' ', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '9', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '8', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '5', '4', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', ' ', ' ', ' ', ' ', 13, 10, 0, 
/* 01282 */ HB_P_LINEOFFSET, 5,	/* 47 */
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
/* 02952 */ HB_P_LINEOFFSET, 6,	/* 48 */
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
/* 04618 */ HB_P_LINEOFFSET, 7,	/* 49 */
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
/* 07168 */ HB_P_LINEOFFSET, 8,	/* 50 */
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
/* 07202 */ HB_P_LINEOFFSET, 10,	/* 52 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 234, 1,	/* 490 (abs: 07702) */
/* 07215 */ HB_P_LINEOFFSET, 11,	/* 53 */
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
	HB_P_JUMPFALSE, 196, 1,	/* 452 (abs: 07700) */
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* CMCRUT */
/* 07270 */ HB_P_LINEOFFSET, 12,	/* 54 */
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
/* 07317 */ HB_P_LINEOFFSET, 13,	/* 55 */
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
/* 07353 */ HB_P_LINEOFFSET, 14,	/* 56 */
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
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'L', 'I', 'M', 'I', 'T', ' ', '1', 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 07417 */ HB_P_LINEOFFSET, 15,	/* 57 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07427 */ HB_P_LINEOFFSET, 16,	/* 58 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_MESSAGE, 16, 0,	/* NFIELDCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 07674) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* CTYPE */
	HB_P_MESSAGE, 18, 0,	/* FLDNAME */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* NAME */
/* 07468 */ HB_P_LINEOFFSET, 18,	/* 60 */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 07486) */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 07507) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'C', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* ANCHO */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 07559) */
/* 07507 */ HB_P_LINEOFFSET, 19,	/* 61 */
	HB_P_PUSHLOCALNEAR, 8,	/* CTYPE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07528) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'D', 0, 
	HB_P_LOCALNEARSETINT, 10, 8, 0,	/* ANCHO 8*/
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 07559) */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* TIPO 2*/
	'N', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_POPLOCALNEAR, 10,	/* ANCHO */
	HB_P_MESSAGE, 20, 0,	/* FLDDEC */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* DEC */
/* 07559 */ HB_P_LINEOFFSET, 22,	/* 64 */
	HB_P_PUSHSYMNEAR, 21,	/* DBAPPEND */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07566 */ HB_P_LINEOFFSET, 23,	/* 65 */
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
	HB_P_POPFIELD, 22, 0,	/* FIELDS */
/* 07619 */ HB_P_LINEOFFSET, 24,	/* 66 */
	HB_P_PUSHLOCALNEAR, 10,	/* ANCHO */
	HB_P_POPFIELD, 23, 0,	/* SIZE_REPOR */
/* 07626 */ HB_P_LINEOFFSET, 25,	/* 67 */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 10,	/* ANCHO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPFIELD, 26, 0,	/* COLSIZES */
/* 07648 */ HB_P_LINEOFFSET, 26,	/* 68 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPFIELD, 27, 0,	/* HEADERS */
/* 07665 */ HB_P_LINEOFFSET, 27,	/* 69 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* J 1*/
	HB_P_JUMP, 18, 255,	/* -238 (abs: 07433) */
/* 07674 */ HB_P_LINEOFFSET, 28,	/* 70 */
	HB_P_MESSAGE, 28, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07684 */ HB_P_LINEOFFSET, 29,	/* 71 */
	HB_P_PUSHSYMNEAR, 29,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* BUF */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07700) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07702) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 07704) */
/* 07704 */ HB_P_LINEOFFSET, 33,	/* 75 */
	HB_P_PUSHSYMNEAR, 30,	/* VZFORMS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FRM */
	HB_P_PUSHLOCALNEAR, 2,	/* TITI */
	HB_P_PUSHLOCALNEAR, 3,	/* BMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'W', 'S', '_', 'C', 'A', 'P', 'T', 'I', 'O', 'N', ',', 'W', 'S', '_', 'S', 'Y', 'S', 'M', 'E', 'N', 'U', ',', 'W', 'S', '_', 'T', 'H', 'I', 'C', 'K', 'F', 'R', 'A', 'M', 'E', ',', 'W', 'S', '_', 'M', 'I', 'N', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', ',', ' ', 'W', 'S', '_', 'M', 'A', 'X', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', 0, 
	HB_P_DOSHORT, 5,
/* 07787 */ HB_P_LINEOFFSET, 34,	/* 76 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07792 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 19, 13,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 81, 0,	/* 81 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 16,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 82 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00053) */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
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
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* OLBX */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 19,	/* ACOLTOT */
/* 00072 */ HB_P_LINEOFFSET, 2,	/* 83 */
	HB_P_LOCALNEARSETSTR, 20, 8, 0,	/* CADBLOCK 8*/
	' ', '{', '|', '|', ' ', '{', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 23,	/* MIAFOOT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 24,	/* MIAFJUSTI */
/* 00096 */ HB_P_LINEOFFSET, 9,	/* 90 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* USARCORR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00120) */
/* 00112 */ HB_P_LINEOFFSET, 10,	/* 91 */
	HB_P_TRUE,
	HB_P_POPSTATIC, 20, 0,	/* LCORR */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00126) */
/* 00120 */ HB_P_LINEOFFSET, 12,	/* 93 */
	HB_P_FALSE,
	HB_P_POPSTATIC, 20, 0,	/* LCORR */
/* 00126 */ HB_P_LINEOFFSET, 14,	/* 95 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00170) */
/* 00142 */ HB_P_LINEOFFSET, 15,	/* 96 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* TUFOLDER */
/* 00151 */ HB_P_LINEOFFSET, 16,	/* 97 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 15,	/* TUPAGINA */
/* 00160 */ HB_P_LINEOFFSET, 17,	/* 98 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 1,	/* NOLBX */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00170) */
/* 00170 */ HB_P_LINEOFFSET, 22,	/* 103 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* _NOLBX */
/* 00181 */ HB_P_LINEOFFSET, 23,	/* 104 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 31,	/* CJA */
/* 00207 */ HB_P_LINEOFFSET, 24,	/* 105 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* CJA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* ODLG2 */
/* 00218 */ HB_P_LINEOFFSET, 25,	/* 106 */
	HB_P_MESSAGE, 36, 0,	/* BVALID */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 32,	/* OLDBVALID */
/* 00229 */ HB_P_LINEOFFSET, 26,	/* 107 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* OLDBVALID */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00283) */
/* 00245 */ HB_P_LINEOFFSET, 27,	/* 108 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* NOLBX */
	32, 0,	/* OLDBVALID */
	HB_P_PUSHSYMNEAR, 38,	/* VZVISTAFREE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 39, 0,	/* EVAL */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00310) */
/* 00283 */ HB_P_LINEOFFSET, 29,	/* 110 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* NOLBX */
	HB_P_PUSHSYMNEAR, 38,	/* VZVISTAFREE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00310 */ HB_P_LINEOFFSET, 32,	/* 113 */
	HB_P_PUSHSYMNEAR, 40,	/* GETNUEVO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* ANUEVO1 */
/* 00321 */ HB_P_LINEOFFSET, 33,	/* 114 */
	HB_P_PUSHSYMNEAR, 41,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* ARECT */
/* 00337 */ HB_P_LINEOFFSET, 35,	/* 116 */
	HB_P_PUSHSYMNEAR, 43,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROSYMBOL,
	HB_P_DOSHORT, 1,
/* 00347 */ HB_P_LINEOFFSET, 36,	/* 117 */
	HB_P_PUSHSYMNEAR, 43,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* _NOLBX */
	HB_P_MACROSYMBOL,
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 38,	/* 119 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00381) */
/* 00373 */ HB_P_LINEOFFSET, 39,	/* 120 */
	HB_P_LOCALNEARSETINT, 12, 40, 0,	/* MENOS30 40*/
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00381) */
/* 00381 */ HB_P_LINEOFFSET, 41,	/* 122 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00411) */
/* 00398 */ HB_P_LINEOFFSET, 42,	/* 123 */
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00411) */
/* 00411 */ HB_P_LINEOFFSET, 44,	/* 125 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'L', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00436) */
/* 00427 */ HB_P_LINEOFFSET, 45,	/* 126 */
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00458) */
/* 00436 */ HB_P_LINEOFFSET, 47,	/* 128 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00453) */
	HB_P_TRUE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00458) */
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
/* 00458 */ HB_P_LINEOFFSET, 53,	/* 134 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00502) */
/* 00470 */ HB_P_LINEOFFSET, 54,	/* 135 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00500) */
/* 00486 */ HB_P_LINEOFFSET, 55,	/* 136 */
	HB_P_MESSAGE, 45, 0,	/* _PREWHERE */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00500) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00502) */
/* 00502 */ HB_P_LINEOFFSET, 58,	/* 139 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00510 */ HB_P_LINEOFFSET, 59,	/* 140 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00517 */ HB_P_LINEOFFSET, 60,	/* 141 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00538) */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00538) */
/* 00538 */ HB_P_LINEOFFSET, 61,	/* 142 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00566) */
	HB_P_MESSAGE, 46, 0,	/* _SETLAND */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00566) */
/* 00566 */ HB_P_LINEOFFSET, 62,	/* 143 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00615) */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MIAFOOT */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MIAFJUSTI */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 00572) */
/* 00615 */ HB_P_LINEOFFSET, 63,	/* 144 */
	HB_P_MESSAGE, 50, 0,	/* _AFOOTERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 23,	/* MIAFOOT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00627 */ HB_P_LINEOFFSET, 64,	/* 145 */
	HB_P_MESSAGE, 51, 0,	/* _AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 24,	/* MIAFJUSTI */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00639 */ HB_P_LINEOFFSET, 66,	/* 147 */
	HB_P_PUSHSYMNEAR, 52,	/* GETSELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00651 */ HB_P_LINEOFFSET, 67,	/* 148 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* NOHIDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00679) */
/* 00667 */ HB_P_LINEOFFSET, 68,	/* 149 */
	HB_P_MESSAGE, 53, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00679) */
/* 00679 */ HB_P_LINEOFFSET, 70,	/* 151 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NORESIZE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 00792) */
/* 00690 */ HB_P_LINEOFFSET, 72,	/* 153 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_MINUS,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 29,	/* ARECT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_MINUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00728 */ HB_P_LINEOFFSET, 73,	/* 154 */
	HB_P_MESSAGE, 57, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 26,	/* ODLG2 */
	HB_P_PUSHBLOCK, 52, 0,	/* 52 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	17, 0,	/* OLBX */
	26, 0,	/* ODLG2 */
	12, 0,	/* MENOS30 */
	29, 0,	/* ARECT */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_MINUS,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
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
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00792) */
/* 00792 */ HB_P_LINEOFFSET, 75,	/* 156 */
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
	HB_P_JUMPFALSE, 139, 0,	/* 139 (abs: 00963) */
/* 00827 */ HB_P_LINEOFFSET, 77,	/* 158 */
	HB_P_LOCALNEARSETSTR, 27, 22, 0,	/* C 22*/
	34, 'S', 'E', 'L', 'E', 'C', 'T', ' ', 34, '+', 'V', 'Z', 's', 'e', 'l', 'e', 'c', 't', '(', ')', '+', 0, 
/* 00855 */ HB_P_LINEOFFSET, 78,	/* 159 */
	HB_P_PUSHLOCALNEAR, 27,	/* C */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	34, ' ', 'F', 'R', 'O', 'M', ' ', ' ', 34, '+', 'v', 'z', 'f', 'r', 'o', 'm', 'v', 'i', 's', 't', 'a', '(', ')', '+', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* C */
/* 00889 */ HB_P_LINEOFFSET, 79,	/* 160 */
	HB_P_PUSHLOCALNEAR, 27,	/* C */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'v', 'z', 'w', 'h', 'e', 'r', 'e', 'v', 'i', 's', 't', 'a', '(', ')', '+', 'v', 'z', 'o', 'r', 'd', 'e', 'r', 'v', 'i', 's', 't', 'a', '(', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* C */
/* 00928 */ HB_P_LINEOFFSET, 81,	/* 162 */
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
	HB_P_PUSHLOCALNEAR, 27,	/* C */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00963) */
/* 00963 */ HB_P_LINEOFFSET, 85,	/* 166 */
	HB_P_MESSAGE, 58, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 16,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00985 */ HB_P_LINEOFFSET, 87,	/* 168 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 60,	/* VZCSS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* VZLEESQL */
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
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01036 */ HB_P_LINEOFFSET, 88,	/* 169 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01051 */ HB_P_LINEOFFSET, 90,	/* 171 */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROPOP, 11,
/* 01059 */ HB_P_LINEOFFSET, 93,	/* 174 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01175) */
/* 01078 */ HB_P_LINEOFFSET, 94,	/* 175 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01173) */
/* 01096 */ HB_P_LINEOFFSET, 95,	/* 176 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01166) */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01166) */
/* 01166 */ HB_P_LINEOFFSET, 96,	/* 177 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01173) */
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 01270) */
/* 01175 */ HB_P_LINEOFFSET, 99,	/* 180 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01270) */
/* 01193 */ HB_P_LINEOFFSET, 100,	/* 181 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01263) */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01263) */
/* 01263 */ HB_P_LINEOFFSET, 101,	/* 182 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01270) */
/* 01270 */ HB_P_LINEOFFSET, 104,	/* 185 */
	HB_P_MESSAGE, 64, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01280 */ HB_P_LINEOFFSET, 106,	/* 187 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 65, 0,	/* CGROUP */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 01325) */
/* 01297 */ HB_P_LINEOFFSET, 107,	/* 188 */
	HB_P_PUSHSYMNEAR, 66,	/* VISTAQUIE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 30,	/* _NOLBX */
	HB_P_PUSHLOCALNEAR, 6,	/* SUMAENTRA */
	HB_P_PUSHLOCALNEAR, 10,	/* MANERA */
	HB_P_PUSHLOCALNEAR, 14,	/* TUFOLDER */
	HB_P_PUSHLOCALNEAR, 15,	/* TUPAGINA */
	HB_P_DOSHORT, 7,
/* 01318 */ HB_P_LINEOFFSET, 108,	/* 189 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01325) */
/* 01325 */ HB_P_LINEOFFSET, 111,	/* 192 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 167, 2,	/* 679 (abs: 02025) */
/* 01349 */ HB_P_LINEOFFSET, 115,	/* 196 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 31, 2,	/* 543 (abs: 01909) */
/* 01369 */ HB_P_LINEOFFSET, 117,	/* 198 */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01409) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 19,	/* 19 (abs: 01429) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01462) */
/* 01431 */ HB_P_LINEOFFSET, 118,	/* 199 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* ACOLTOT */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01462) */
/* 01462 */ HB_P_LINEOFFSET, 120,	/* 201 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* ANUEVO1 */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 155, 1,	/* 411 (abs: 01885) */
/* 01477 */ HB_P_LINEOFFSET, 122,	/* 203 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 01747) */
/* 01506 */ HB_P_LINEOFFSET, 123,	/* 204 */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01624) */
/* 01527 */ HB_P_LINEOFFSET, 124,	/* 205 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_JUMP, 123, 0,	/* 123 (abs: 01744) */
/* 01624 */ HB_P_LINEOFFSET, 126,	/* 207 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* VZ_999 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_MESSAGE, 20, 0,	/* FLDDEC */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_JUMP, 139, 0,	/* 139 (abs: 01883) */
/* 01747 */ HB_P_LINEOFFSET, 129,	/* 210 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 01835) */
/* 01775 */ HB_P_LINEOFFSET, 130,	/* 211 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 't', 'o', 'c', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	')', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 01883) */
/* 01835 */ HB_P_LINEOFFSET, 132,	/* 213 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 01907) */
/* 01885 */ HB_P_LINEOFFSET, 135,	/* 216 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* ANUEVO1 */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 02016) */
/* 01909 */ HB_P_LINEOFFSET, 138,	/* 219 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01966) */
/* 01935 */ HB_P_LINEOFFSET, 139,	/* 220 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* ACOLTOT */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01966) */
/* 01966 */ HB_P_LINEOFFSET, 141,	/* 222 */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'z', 'b', 'i', 'e', 'n', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
/* 02016 */ HB_P_LINEOFFSET, 143,	/* 224 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMP, 77, 253,	/* -691 (abs: 01331) */
/* 02025 */ HB_P_LINEOFFSET, 144,	/* 225 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'}', '}', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CADBLOCK */
/* 02053 */ HB_P_LINEOFFSET, 147,	/* 228 */
	HB_P_MESSAGE, 71, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 20,	/* CADBLOCK */
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02067 */ HB_P_LINEOFFSET, 148,	/* 229 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 02105) */
/* 02086 */ HB_P_LINEOFFSET, 149,	/* 230 */
	HB_P_MESSAGE, 72, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 02122) */
/* 02105 */ HB_P_LINEOFFSET, 151,	/* 232 */
	HB_P_MESSAGE, 73, 0,	/* SETARRAY */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02122 */ HB_P_LINEOFFSET, 153,	/* 234 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 74, 0,	/* BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02145) */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 02178) */
/* 02145 */ HB_P_LINEOFFSET, 155,	/* 236 */
	HB_P_MESSAGE, 75, 0,	/* _BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	2, 0,	/* number of local parameters (2) */
	2, 0,	/* number of local variables (2) */
	17, 0,	/* OLBX */
	26, 0,	/* ODLG2 */
	HB_P_PUSHSYMNEAR, 76,	/* VZBUSCINC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02178 */ HB_P_LINEOFFSET, 157,	/* 238 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 77, 0,	/* BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02201) */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 02219) */
/* 02201 */ HB_P_LINEOFFSET, 159,	/* 240 */
	HB_P_MESSAGE, 78, 0,	/* _BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 79,	/* NADA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02219 */ HB_P_LINEOFFSET, 162,	/* 243 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* HAYTOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 200, 1,	/* 456 (abs: 02684) */
/* 02231 */ HB_P_LINEOFFSET, 163,	/* 244 */
	HB_P_MESSAGE, 80, 0,	/* _LDRAWFOOTERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02242 */ HB_P_LINEOFFSET, 164,	/* 245 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 184, 0,	/* 184 (abs: 02443) */
	HB_P_MESSAGE, 53, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 81, 0,	/* _NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02284 */ HB_P_LINEOFFSET, 165,	/* 246 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* MM 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* MM */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 02400) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 25,	/* MM */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02335 */ HB_P_LINEOFFSET, 166,	/* 247 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02392) */
/* 02353 */ HB_P_LINEOFFSET, 167,	/* 248 */
	HB_P_PUSHLOCALNEAR, 19,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 19, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
/* 02384 */ HB_P_LINEOFFSET, 168,	/* 249 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 207,	/* -49 (abs: 02341) */
/* 02392 */ HB_P_LINEOFFSET, 169,	/* 250 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* MM 1*/
	HB_P_JUMPNEAR, 148,	/* -108 (abs: 02290) */
/* 02400 */ HB_P_LINEOFFSET, 170,	/* 251 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02416 */ HB_P_LINEOFFSET, 171,	/* 252 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02431 */ HB_P_LINEOFFSET, 172,	/* 253 */
	HB_P_MESSAGE, 64, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 02530) */
/* 02443 */ HB_P_LINEOFFSET, 174,	/* 255 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* YY 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* YY */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 02530) */
/* 02466 */ HB_P_LINEOFFSET, 175,	/* 256 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 02522) */
/* 02484 */ HB_P_LINEOFFSET, 176,	/* 257 */
	HB_P_PUSHLOCALNEAR, 19,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 22,	/* YY */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 19, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
/* 02514 */ HB_P_LINEOFFSET, 177,	/* 258 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 208,	/* -48 (abs: 02472) */
/* 02522 */ HB_P_LINEOFFSET, 178,	/* 259 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* YY 1*/
	HB_P_JUMPNEAR, 177,	/* -79 (abs: 02449) */
/* 02530 */ HB_P_LINEOFFSET, 183,	/* 264 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02585) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
/* 02565 */ HB_P_LINEOFFSET, 185,	/* 266 */
	HB_P_FALSE,
	HB_P_MESSAGE, 84, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
/* 02577 */ HB_P_LINEOFFSET, 186,	/* 267 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 209,	/* -47 (abs: 02536) */
/* 02585 */ HB_P_LINEOFFSET, 187,	/* 268 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 02682) */
/* 02603 */ HB_P_LINEOFFSET, 189,	/* 270 */
	HB_P_PUSHSYMNEAR, 85,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02644 */ HB_P_LINEOFFSET, 190,	/* 271 */
	HB_P_TRUE,
	HB_P_MESSAGE, 84, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02659 */ HB_P_LINEOFFSET, 191,	/* 272 */
	HB_P_TRUE,
	HB_P_MESSAGE, 86, 0,	/* AJUSTIFY */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02674 */ HB_P_LINEOFFSET, 192,	/* 273 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 167,	/* -89 (abs: 02591) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02684) */
/* 02684 */ HB_P_LINEOFFSET, 194,	/* 275 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02694 */ HB_P_LINEOFFSET, 196,	/* 277 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* NOACTIONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 02942) */
/* 02711 */ HB_P_LINEOFFSET, 197,	/* 278 */
	HB_P_MESSAGE, 88, 0,	/* _AACTIONS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_PUSHSYMNEAR, 89,	/* ARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02738 */ HB_P_LINEOFFSET, 198,	/* 279 */
	HB_P_LOCALNEARSETINT, 21, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 181, 0,	/* 181 (abs: 02940) */
/* 02762 */ HB_P_LINEOFFSET, 199,	/* 280 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 02838) */
/* 02778 */ HB_P_LINEOFFSET, 200,	/* 281 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'{', ' ', '|', '|', ' ', 'v', 'z', 'c', 'v', 'i', 's', 't', 'a', '(', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_MESSAGE, 91, 0,	/* AACTIONS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 95,	/* 95 (abs: 02931) */
/* 02838 */ HB_P_LINEOFFSET, 202,	/* 283 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'{', ' ', '|', '|', ' ', 'v', 'z', 'c', 'v', 'i', 's', 't', 'a', '(', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TUPAGINA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_MESSAGE, 91, 0,	/* AACTIONS */
	HB_P_PUSHLOCALNEAR, 17,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 21,	/* XX */
	HB_P_ARRAYPOP,
/* 02931 */ HB_P_LINEOFFSET, 204,	/* 285 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* XX 1*/
	HB_P_JUMP, 63, 255,	/* -193 (abs: 02744) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02942) */
/* 02942 */ HB_P_LINEOFFSET, 207,	/* 288 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02947 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZ_999 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 36, 1,	/* 292 */
	HB_P_LOCALNEARSETSTR, 5, 15, 0,	/* MASK 15*/
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 294 */
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* LEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
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

HB_FUNC( GETSELECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 51, 1,	/* 307 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CSELECT 1*/
	0, 
/* 00015 */ HB_P_LINEOFFSET, 3,	/* 310 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 00113) */
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 4,	/* VCAMPO */
/* 00049 */ HB_P_LINEOFFSET, 5,	/* 312 */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00089) */
/* 00060 */ HB_P_LINEOFFSET, 7,	/* 314 */
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 4,	/* VCAMPO */
/* 00068 */ HB_P_LINEOFFSET, 9,	/* 316 */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00104) */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'O', 'W', '_', 'I', 'D', ',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
/* 00104 */ HB_P_LINEOFFSET, 13,	/* 320 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 2,	/* J */
	HB_P_JUMPNEAR, 160,	/* -96 (abs: 00015) */
/* 00113 */ HB_P_LINEOFFSET, 15,	/* 322 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* CSELECT */
/* 00135 */ HB_P_LINEOFFSET, 17,	/* 324 */
	HB_P_PUSHLOCALNEAR, 3,	/* CSELECT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00141 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GETNUEVO1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 72, 1,	/* 328 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* J 1*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* ANUEVO1 */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 329 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00065) */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 330 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ANUEVO1 */
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00056 */ HB_P_LINEOFFSET, 3,	/* 331 */
	HB_P_PUSHLOCALNEAR, 2,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 2,	/* J */
	HB_P_JUMPNEAR, 208,	/* -48 (abs: 00015) */
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 333 */
	HB_P_PUSHLOCALNEAR, 3,	/* ANUEVO1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00071 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZSELECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CAMBIO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00020) */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00027) */
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 339 */
	HB_P_PUSHLOCALNEAR, 1,	/* CAMBIO */
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00027 */ HB_P_LINEOFFSET, 4,	/* 341 */
	HB_P_PUSHSTATIC, 2, 0,	/* VZSELECT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00034 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZLEESQL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 2,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 91, 1,	/* 347 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* CMD 1*/
	0, 
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* XL 1*/
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 350 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'R', 'E', 'M', 'O', 'T', 'O', '.', 'T', 'X', 'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 00131) */
/* 00040 */ HB_P_LINEOFFSET, 4,	/* 351 */
	HB_P_PUSHSYMNEAR, 95,	/* VZ3QUERY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 9, 0,	/* OTXTSQL */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 't', 'e', 'x', 't', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'q', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'C', 'O', 'N', 'T', 'R', 'O', 'L', '=', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CONTROL */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00098 */ HB_P_LINEOFFSET, 5,	/* 352 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 9,	/* OTXTSQL */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00124) */
/* 00111 */ HB_P_LINEOFFSET, 6,	/* 353 */
	HB_P_MESSAGE, 96, 0,	/* TEXTO */
	HB_P_PUSHLOCALNEAR, 9,	/* OTXTSQL */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* VTEXTO */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00129) */
/* 00124 */ HB_P_LINEOFFSET, 8,	/* 355 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00142) */
/* 00131 */ HB_P_LINEOFFSET, 11,	/* 358 */
	HB_P_PUSHSYMNEAR, 97,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* SQL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* VTEXTO */
/* 00142 */ HB_P_LINEOFFSET, 15,	/* 362 */
	HB_P_PUSHLOCALNEAR, 3,	/* VTEXTO */
	HB_P_POPLOCALNEAR, 4,	/* VTEXTN */
/* 00148 */ HB_P_LINEOFFSET, 20,	/* 367 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 00367) */
/* 00169 */ HB_P_LINEOFFSET, 21,	/* 368 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 7,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00203 */ HB_P_LINEOFFSET, 23,	/* 370 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00240) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 8,	/* Y */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00240) */
/* 00240 */ HB_P_LINEOFFSET, 24,	/* 371 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00277) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 8,	/* Y */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00277) */
/* 00277 */ HB_P_LINEOFFSET, 25,	/* 372 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 7,	/* N */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* VTEXTN */
/* 00293 */ HB_P_LINEOFFSET, 26,	/* 373 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00329) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 8,	/* Y */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* VTEXTN */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00329) */
/* 00329 */ HB_P_LINEOFFSET, 27,	/* 374 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* Y */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00365) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_PUSHLOCALNEAR, 8,	/* Y */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* VTEXTN */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00365) */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00389) */
/* 00367 */ HB_P_LINEOFFSET, 30,	/* 377 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PUSHLOCALNEAR, 4,	/* VTEXTN */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00376 */ HB_P_LINEOFFSET, 31,	/* 378 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00392) */
	HB_P_JUMP, 15, 255,	/* -241 (abs: 00148) */
/* 00392 */ HB_P_LINEOFFSET, 36,	/* 383 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00429) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 7,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00429) */
/* 00429 */ HB_P_LINEOFFSET, 37,	/* 384 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* N */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00466) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 7,	/* N */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00466) */
/* 00466 */ HB_P_LINEOFFSET, 38,	/* 385 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00477 */ HB_P_LINEOFFSET, 46,	/* 393 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 98,	/* VERPREQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00498) */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 00546) */
/* 00498 */ HB_P_LINEOFFSET, 48,	/* 395 */
	HB_P_PUSHSYMNEAR, 99,	/* OUTPUTDEBUGSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'e', 'Q', 'u', 'e', 'r', 'y', ' ', '=', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00522 */ HB_P_LINEOFFSET, 49,	/* 396 */
	HB_P_PUSHSYMNEAR, 100,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'e', ' ', 'Q', 'u', 'e', 'r', 'y', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 5, 0,	/* CMD */
	HB_P_DOSHORT, 3,
/* 00546 */ HB_P_LINEOFFSET, 55,	/* 402 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00554 */ HB_P_LINEOFFSET, 58,	/* 405 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* VERQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00575) */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00622) */
/* 00575 */ HB_P_LINEOFFSET, 60,	/* 407 */
	HB_P_PUSHSYMNEAR, 99,	/* OUTPUTDEBUGSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'u', 'e', 'r', 'y', ' ', '=', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00596 */ HB_P_LINEOFFSET, 61,	/* 408 */
	HB_P_PUSHSYMNEAR, 100,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'Q', 'u', 'e', 'r', 'y', ' ', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'u', 'a', 'l', 0, 
	HB_P_PUSHLOCALREF, 5, 0,	/* CMD */
	HB_P_DOSHORT, 3,
/* 00622 */ HB_P_LINEOFFSET, 67,	/* 414 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_POPSTATIC, 11, 0,	/* LASTSELECT */
/* 00629 */ HB_P_LINEOFFSET, 68,	/* 415 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00635 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZBIEN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 421 */
	HB_P_LOCALNEARSETSTR, 4, 15, 0,	/* MASK 15*/
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
/* 00036 */ HB_P_LINEOFFSET, 2,	/* 422 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 00137) */
/* 00052 */ HB_P_LINEOFFSET, 3,	/* 423 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* COL */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00115) */
/* 00084 */ HB_P_LINEOFFSET, 4,	/* 424 */
	HB_P_PUSHSYMNEAR, 85,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* COL */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* MASK */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00135) */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* COL */
	HB_P_ARRAYPUSH,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00144) */
/* 00137 */ HB_P_LINEOFFSET, 9,	/* 429 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_ENDPROC
/* 00145 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZBUSCINC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 181, 1,	/* 437 */
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
/* 00090 */ HB_P_LINEOFFSET, 1,	/* 438 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00097) */
/* 00097 */ HB_P_LINEOFFSET, 3,	/* 440 */
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
/* 00124 */ HB_P_LINEOFFSET, 5,	/* 442 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 00158) */
/* 00133 */ HB_P_LINEOFFSET, 6,	/* 443 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00155) */
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00155) */
	HB_P_JUMP, 161, 0,	/* 161 (abs: 00316) */
/* 00158 */ HB_P_LINEOFFSET, 7,	/* 444 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00193) */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
	HB_P_JUMP, 126, 0,	/* 126 (abs: 00316) */
/* 00193 */ HB_P_LINEOFFSET, 8,	/* 445 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00215) */
	HB_P_PUSHSYMNEAR, 104,	/* WQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 103,	/* 103 (abs: 00316) */
/* 00215 */ HB_P_LINEOFFSET, 9,	/* 446 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00232) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 00316) */
/* 00232 */ HB_P_LINEOFFSET, 11,	/* 448 */
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
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* MYBUF */
/* 00281 */ HB_P_LINEOFFSET, 14,	/* 451 */
	HB_P_PUSHSYMNEAR, 105,	/* VZF2SEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MYBUF */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* RESU */
/* 00301 */ HB_P_LINEOFFSET, 15,	/* 452 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 4,	/* MYBUF */
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00316 */ HB_P_LINEOFFSET, 17,	/* 454 */
	HB_P_MESSAGE, 107, 0,	/* SETTEXT */
	HB_P_PUSHLOCALNEAR, 3,	/* CJA */
	HB_P_PUSHSTATIC, 3, 0,	/* KBUFFER */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00329 */ HB_P_LINEOFFSET, 18,	/* 455 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00334 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZF2SEEK )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 202, 1,	/* 458 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* NMIN 1*/
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00044) */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00056) */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 7,	/* LFOUND */
/* 00061 */ HB_P_LINEOFFSET, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 108,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
/* 00075 */ HB_P_LINEOFFSET, 2,	/* 460 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00140) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* DATO */
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00155) */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* DATO */
/* 00155 */ HB_P_LINEOFFSET, 5,	/* 463 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
/* 00176 */ HB_P_LINEOFFSET, 7,	/* 465 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHLOCALNEAR, 5,	/* NMAX */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 99, 1,	/* 355 (abs: 00538) */
/* 00186 */ HB_P_LINEOFFSET, 8,	/* 466 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00256) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00276) */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00276 */ HB_P_LINEOFFSET, 12,	/* 470 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* XSEARCH */
/* 00287 */ HB_P_LINEOFFSET, 13,	/* 471 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSE, 111, 0,	/* 111 (abs: 00403) */
/* 00295 */ HB_P_LINEOFFSET, 15,	/* 473 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
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
/* 00325 */ HB_P_LINEOFFSET, 17,	/* 475 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00363) */
/* 00334 */ HB_P_LINEOFFSET, 18,	/* 476 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 4,	/* NMIN */
/* 00340 */ HB_P_LINEOFFSET, 19,	/* 477 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 109,	/* ROUND */
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
/* 00363 */ HB_P_LINEOFFSET, 20,	/* 478 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00400) */
/* 00372 */ HB_P_LINEOFFSET, 21,	/* 479 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
/* 00378 */ HB_P_LINEOFFSET, 22,	/* 480 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 108,	/* INT */
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
/* 00403 */ HB_P_LINEOFFSET, 26,	/* 484 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
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
/* 00433 */ HB_P_LINEOFFSET, 28,	/* 486 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00471) */
/* 00442 */ HB_P_LINEOFFSET, 29,	/* 487 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 4,	/* NMIN */
/* 00448 */ HB_P_LINEOFFSET, 30,	/* 488 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 109,	/* ROUND */
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
/* 00471 */ HB_P_LINEOFFSET, 31,	/* 489 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00508) */
/* 00480 */ HB_P_LINEOFFSET, 32,	/* 490 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_POPLOCALNEAR, 5,	/* NMAX */
/* 00486 */ HB_P_LINEOFFSET, 33,	/* 491 */
	HB_P_PUSHLOCALNEAR, 4,	/* NMIN */
	HB_P_PUSHSYMNEAR, 108,	/* INT */
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
/* 00508 */ HB_P_LINEOFFSET, 36,	/* 494 */
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
/* 00538 */ HB_P_LINEOFFSET, 40,	/* 498 */
	HB_P_PUSHLOCALNEAR, 7,	/* LFOUND */
	HB_P_JUMPFALSE, 63, 1,	/* 319 (abs: 00861) */
/* 00545 */ HB_P_LINEOFFSET, 41,	/* 499 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
	HB_P_POPVARIABLE, 110, 0,	/* ANRECNO */
/* 00570 */ HB_P_LINEOFFSET, 42,	/* 500 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSE, 141, 0,	/* 141 (abs: 00716) */
/* 00578 */ HB_P_LINEOFFSET, 43,	/* 501 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_LESS,
	HB_P_JUMPFALSE, 123, 0,	/* 123 (abs: 00713) */
/* 00593 */ HB_P_LINEOFFSET, 44,	/* 502 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00649 */ HB_P_LINEOFFSET, 45,	/* 503 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
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
/* 00678 */ HB_P_LINEOFFSET, 47,	/* 505 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00713) */
	HB_P_JUMP, 124, 255,	/* -132 (abs: 00578) */
	HB_P_JUMP, 132, 0,	/* 132 (abs: 00845) */
/* 00716 */ HB_P_LINEOFFSET, 51,	/* 509 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 123, 0,	/* 123 (abs: 00845) */
/* 00725 */ HB_P_LINEOFFSET, 52,	/* 510 */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_DEC,
	HB_P_POPLOCALNEAR, 8,	/* NRECNO */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* NOCAMPO */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* XCURRENT */
/* 00781 */ HB_P_LINEOFFSET, 53,	/* 511 */
	HB_P_PUSHLOCALNEAR, 1,	/* XSEARCH */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* XCURRENT */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
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
/* 00810 */ HB_P_LINEOFFSET, 55,	/* 513 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00845) */
	HB_P_JUMP, 130, 255,	/* -126 (abs: 00716) */
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00859) */
/* 00847 */ HB_P_LINEOFFSET, 60,	/* 518 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OBROW */
	HB_P_PUSHLOCALNEAR, 8,	/* NRECNO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00861) */
/* 00861 */ HB_P_LINEOFFSET, 63,	/* 521 */
	HB_P_PUSHLOCALNEAR, 7,	/* LFOUND */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00867 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZBUSC23 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 4,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* O_LBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 528 */
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* N */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 12,	/* LFOUND */
/* 00036 */ HB_P_LINEOFFSET, 2,	/* 529 */
	HB_P_MESSAGE, 113, 0,	/* NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* AYY */
/* 00052 */ HB_P_LINEOFFSET, 3,	/* 530 */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* DATO */
/* 00070 */ HB_P_LINEOFFSET, 5,	/* 532 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00104) */
/* 00086 */ HB_P_LINEOFFSET, 6,	/* 533 */
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 00166) */
/* 00104 */ HB_P_LINEOFFSET, 7,	/* 534 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00128) */
/* 00120 */ HB_P_LINEOFFSET, 8,	/* 535 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MIVALOR 0*/
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00166) */
/* 00128 */ HB_P_LINEOFFSET, 9,	/* 536 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DATO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00166) */
/* 00144 */ HB_P_LINEOFFSET, 10,	/* 537 */
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00166) */
/* 00166 */ HB_P_LINEOFFSET, 13,	/* 540 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* BUSCAESTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 00413) */
/* 00178 */ HB_P_LINEOFFSET, 14,	/* 541 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 116,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'u', 's', 'c', 'a', 'r', ' ', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
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
/* 00235 */ HB_P_LINEOFFSET, 15,	/* 542 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 117,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MIVALOR */
	HB_P_PUSHSYMNEAR, 118,	/* PCOUNT */
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
/* 00308 */ HB_P_LINEOFFSET, 16,	/* 543 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 119,	/* TBUTTON */
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
	HB_P_MESSAGE, 44, 0,	/* END */
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
/* 00368 */ HB_P_LINEOFFSET, 18,	/* 545 */
	HB_P_MESSAGE, 120, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_MESSAGE, 121, 0,	/* BLCLICKED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 122, 0,	/* BMOVED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 123, 0,	/* BPAINTED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 124, 0,	/* BRCLICKED */
	HB_P_PUSHLOCALNEAR, 8,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 9,
	HB_P_POP,
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00419) */
/* 00413 */ HB_P_LINEOFFSET, 20,	/* 547 */
	HB_P_PUSHLOCALNEAR, 4,	/* BUSCAESTO */
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
/* 00419 */ HB_P_LINEOFFSET, 23,	/* 550 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00435) */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00435) */
/* 00435 */ HB_P_LINEOFFSET, 24,	/* 551 */
	HB_P_PUSHSYMNEAR, 125,	/* CURSORWAIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* YY 1*/
/* 00446 */ HB_P_LINEOFFSET, 25,	/* 552 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_POPSTATIC, 5, 0,	/* VALORBUS */
/* 00453 */ HB_P_LINEOFFSET, 26,	/* 553 */
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 00640) */
/* 00473 */ HB_P_LINEOFFSET, 27,	/* 554 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00503 */ HB_P_LINEOFFSET, 29,	/* 556 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
/* 00528 */ HB_P_LINEOFFSET, 30,	/* 557 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
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
/* 00568 */ HB_P_LINEOFFSET, 31,	/* 558 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00598) */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00630) */
/* 00600 */ HB_P_LINEOFFSET, 32,	/* 559 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
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
/* 00630 */ HB_P_LINEOFFSET, 34,	/* 561 */
	HB_P_PUSHLOCALNEAR, 11,	/* YY */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 11,	/* YY */
	HB_P_JUMP, 72, 255,	/* -184 (abs: 00453) */
/* 00640 */ HB_P_LINEOFFSET, 36,	/* 563 */
	HB_P_PUSHSYMNEAR, 126,	/* CURSORARROW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00647 */ HB_P_LINEOFFSET, 37,	/* 564 */
	HB_P_PUSHLOCALNEAR, 12,	/* LFOUND */
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00727) */
/* 00654 */ HB_P_LINEOFFSET, 38,	/* 565 */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 5, 0,	/* VALORBUS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', ' ', 's', 'e', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'o', ' ', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* N */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00693 */ HB_P_LINEOFFSET, 39,	/* 566 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 14,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 14,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00727) */
/* 00727 */ HB_P_LINEOFFSET, 41,	/* 568 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00737 */ HB_P_LINEOFFSET, 42,	/* 569 */
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00747 */ HB_P_LINEOFFSET, 43,	/* 570 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00752 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZBUSC24 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* O_LBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* OLBX */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 5,	/* LFOUND */
/* 00025 */ HB_P_LINEOFFSET, 1,	/* 575 */
	HB_P_PUSHSTATIC, 5, 0,	/* VALORBUS */
	HB_P_POPLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* N */
/* 00041 */ HB_P_LINEOFFSET, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
/* 00062 */ HB_P_LINEOFFSET, 3,	/* 577 */
	HB_P_MESSAGE, 113, 0,	/* NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 7,	/* YY */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_POPLOCALNEAR, 9,	/* AYY */
/* 00085 */ HB_P_LINEOFFSET, 4,	/* 578 */
	HB_P_PUSHSYMNEAR, 125,	/* CURSORWAIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 579 */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 00279) */
/* 00112 */ HB_P_LINEOFFSET, 6,	/* 580 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00142 */ HB_P_LINEOFFSET, 8,	/* 582 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
/* 00167 */ HB_P_LINEOFFSET, 9,	/* 583 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
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
/* 00207 */ HB_P_LINEOFFSET, 10,	/* 584 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00237) */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00269) */
/* 00239 */ HB_P_LINEOFFSET, 11,	/* 585 */
	HB_P_PUSHLOCALNEAR, 6,	/* MIVALOR */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
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
/* 00269 */ HB_P_LINEOFFSET, 13,	/* 587 */
	HB_P_PUSHLOCALNEAR, 7,	/* YY */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 7,	/* YY */
	HB_P_JUMP, 72, 255,	/* -184 (abs: 00092) */
/* 00279 */ HB_P_LINEOFFSET, 15,	/* 589 */
	HB_P_PUSHSYMNEAR, 126,	/* CURSORARROW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00286 */ HB_P_LINEOFFSET, 16,	/* 590 */
	HB_P_PUSHLOCALNEAR, 5,	/* LFOUND */
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00325) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* AYY */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00325) */
/* 00325 */ HB_P_LINEOFFSET, 17,	/* 591 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00335 */ HB_P_LINEOFFSET, 18,	/* 592 */
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00345 */ HB_P_LINEOFFSET, 19,	/* 593 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00350 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZCVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 4,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 86, 2,	/* 598 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 599 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 3,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 4,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* OLBX */
/* 00031 */ HB_P_LINEOFFSET, 3,	/* 601 */
	HB_P_PUSHSYMNEAR, 52,	/* GETSELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 602 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 603 */
	HB_P_PUSHNIL,
	HB_P_POPSTATIC, 12, 0,	/* MYVCAMPO */
/* 00056 */ HB_P_LINEOFFSET, 6,	/* 604 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 00173) */
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 605 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
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
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
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
/* 00135 */ HB_P_LINEOFFSET, 8,	/* 606 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 8,	/* J */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00165) */
/* 00165 */ HB_P_LINEOFFSET, 10,	/* 608 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 147,	/* -109 (abs: 00062) */
/* 00173 */ HB_P_LINEOFFSET, 11,	/* 609 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00181 */ HB_P_LINEOFFSET, 13,	/* 611 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOCAMBIES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 00287) */
/* 00192 */ HB_P_LINEOFFSET, 14,	/* 612 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00243) */
/* 00199 */ HB_P_LINEOFFSET, 15,	/* 613 */
	HB_P_FALSE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '^', ' ', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 00285) */
/* 00243 */ HB_P_LINEOFFSET, 17,	/* 615 */
	HB_P_TRUE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'v', ' ', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_IVARREF,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00287) */
/* 00287 */ HB_P_LINEOFFSET, 22,	/* 620 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NEWCURSOR */
/* 00303 */ HB_P_LINEOFFSET, 23,	/* 621 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_PUSHSYMNEAR, 60,	/* VZCSS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* VZLEESQL */
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
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00349 */ HB_P_LINEOFFSET, 24,	/* 622 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00359 */ HB_P_LINEOFFSET, 26,	/* 624 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 00435) */
/* 00372 */ HB_P_LINEOFFSET, 27,	/* 625 */
	HB_P_MESSAGE, 28, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00382 */ HB_P_LINEOFFSET, 28,	/* 626 */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'c', 'o', 'i', 'n', 'c', 'i', 'd', 'e', 'n', 'c', 'i', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 'e', ' ', 'F', 'i', 'l', 't', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00428 */ HB_P_LINEOFFSET, 29,	/* 627 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00435) */
/* 00435 */ HB_P_LINEOFFSET, 32,	/* 630 */
	HB_P_MESSAGE, 58, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 5,	/* NEWCURSOR */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00447 */ HB_P_LINEOFFSET, 34,	/* 632 */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROPOP, 11,
/* 00455 */ HB_P_LINEOFFSET, 35,	/* 633 */
	HB_P_MESSAGE, 72, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00472 */ HB_P_LINEOFFSET, 36,	/* 634 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 7,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00482 */ HB_P_LINEOFFSET, 40,	/* 638 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00487 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZFROMVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 644 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* BUF */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 645 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* DBFCONFIG */
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 647 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 131, 0,	/* CDBFCONFIG */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00084) */
	HB_P_MESSAGE, 131, 0,	/* CDBFCONFIG */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* DBFCONFIG */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00084) */
/* 00084 */ HB_P_LINEOFFSET, 5,	/* 648 */
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
	HB_P_PUSHSYMNEAR, 132,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00125 */ HB_P_LINEOFFSET, 6,	/* 649 */
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHALIASEDFIELDNEAR, 1,	/* SELECT */
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00133 */ HB_P_LINEOFFSET, 10,	/* 653 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00159 */ HB_P_LINEOFFSET, 11,	/* 654 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
/* 00181 */ HB_P_LINEOFFSET, 13,	/* 656 */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00200) */
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00200) */
/* 00200 */ HB_P_LINEOFFSET, 14,	/* 657 */
	HB_P_PUSHSYMNEAR, 29,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* BUF */
	HB_P_DOSHORT, 1,
/* 00214 */ HB_P_LINEOFFSET, 16,	/* 659 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'I', 'S', 'T', 'I', 'N', 'C', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 133, 0,	/* NNN */
/* 00237 */ HB_P_LINEOFFSET, 17,	/* 660 */
	HB_P_PUSHVARIABLE, 133, 0,	/* NNN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00265) */
/* 00246 */ HB_P_LINEOFFSET, 18,	/* 661 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_PUSHVARIABLE, 133, 0,	/* NNN */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* LATABLA */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00265) */
/* 00265 */ HB_P_LINEOFFSET, 20,	/* 663 */
	HB_P_PUSHLOCALNEAR, 2,	/* LATABLA */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00271 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZWHEREVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 155, 2,	/* 667 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 668 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OFORM */
/* 00052 */ HB_P_LINEOFFSET, 2,	/* 669 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* CWHERE 1*/
	0, 
/* 00059 */ HB_P_LINEOFFSET, 3,	/* 670 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 135, 0,	/* PREWHERE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00098) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
	HB_P_MESSAGE, 135, 0,	/* PREWHERE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00098) */
/* 00098 */ HB_P_LINEOFFSET, 5,	/* 672 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* OFORM */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 201, 2,	/* 713 (abs: 00832) */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* OFORM */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* OCTRL */
/* 00134 */ HB_P_LINEOFFSET, 7,	/* 674 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00166) */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_AND,
	HB_P_JUMPFALSE, 145, 2,	/* 657 (abs: 00823) */
/* 00169 */ HB_P_LINEOFFSET, 8,	/* 675 */
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
/* 00207 */ HB_P_LINEOFFSET, 11,	/* 678 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00249) */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00275) */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'Y', 'E', 'A', 'R', '(', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00301) */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'X', 'C', 'O', 'D', '(', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00347) */
/* 00303 */ HB_P_LINEOFFSET, 12,	/* 679 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 139, 0,	/* MCRUT */
/* 00320 */ HB_P_LINEOFFSET, 13,	/* 680 */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 139, 0,	/* MCRUT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00344) */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHVARIABLE, 139, 0,	/* MCRUT */
	HB_P_MACROPUSH, 11,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CWHERE */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00344) */
	HB_P_JUMP, 221, 1,	/* 477 (abs: 00821) */
/* 00347 */ HB_P_LINEOFFSET, 14,	/* 681 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 00611) */
/* 00370 */ HB_P_LINEOFFSET, 15,	/* 682 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
/* 00406 */ HB_P_LINEOFFSET, 16,	/* 683 */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00441) */
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00441) */
/* 00441 */ HB_P_LINEOFFSET, 17,	/* 684 */
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
/* 00465 */ HB_P_LINEOFFSET, 19,	/* 686 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'*', '%', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
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
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00522 */ HB_P_LINEOFFSET, 20,	/* 687 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'%', '*', 0, 
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
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
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00611 */ HB_P_LINEOFFSET, 24,	/* 691 */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00646) */
	HB_P_MESSAGE, 137, 0,	/* CTOOLTIP */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
/* 00636 */ HB_P_LINEOFFSET, 26,	/* 693 */
	HB_P_PUSHLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 6,	/* CTOOLTIP */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00646) */
/* 00646 */ HB_P_LINEOFFSET, 28,	/* 695 */
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
/* 00665 */ HB_P_LINEOFFSET, 30,	/* 697 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00717) */
/* 00686 */ HB_P_LINEOFFSET, 31,	/* 698 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 140,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00717 */ HB_P_LINEOFFSET, 32,	/* 699 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00774) */
/* 00738 */ HB_P_LINEOFFSET, 33,	/* 700 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00774 */ HB_P_LINEOFFSET, 34,	/* 701 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 5,	/* OCTRL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00821) */
/* 00795 */ HB_P_LINEOFFSET, 35,	/* 702 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00823 */ HB_P_LINEOFFSET, 39,	/* 706 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMP, 43, 253,	/* -725 (abs: 00104) */
/* 00832 */ HB_P_LINEOFFSET, 41,	/* 708 */
	HB_P_PUSHLOCALNEAR, 3,	/* CWHERE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00838 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZORDERVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 199, 2,	/* 711 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* LASTVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OLBX */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 712 */
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* _BMULTI */
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 713 */
	HB_P_PUSHLOCALNEAR, 2,	/* _BMULTI */
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 714 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* ORDERBY 1*/
	0, 
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 715 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00073) */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00080) */
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 717 */
	HB_P_PUSHSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00080 */ HB_P_LINEOFFSET, 8,	/* 719 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00101) */
	HB_P_PUSHSYMNEAR, 93,	/* VCERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_AND,
	HB_P_JUMPFALSE, 123, 0,	/* 123 (abs: 00224) */
/* 00104 */ HB_P_LINEOFFSET, 9,	/* 720 */
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
/* 00112 */ HB_P_LINEOFFSET, 11,	/* 722 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'I', 'S', 'T', 'I', 'N', 'C', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 133, 0,	/* NNN */
/* 00135 */ HB_P_LINEOFFSET, 12,	/* 723 */
	HB_P_PUSHVARIABLE, 133, 0,	/* NNN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00163) */
/* 00144 */ HB_P_LINEOFFSET, 13,	/* 724 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_PUSHVARIABLE, 133, 0,	/* NNN */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* VCAMPO */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00163) */
/* 00163 */ HB_P_LINEOFFSET, 16,	/* 727 */
	HB_P_PUSHSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00202) */
/* 00170 */ HB_P_LINEOFFSET, 17,	/* 728 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'D', 'E', 'S', 'C', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* ORDERBY */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00222) */
/* 00202 */ HB_P_LINEOFFSET, 19,	/* 730 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* VCAMPO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* ORDERBY */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00224) */
/* 00224 */ HB_P_LINEOFFSET, 23,	/* 734 */
	HB_P_PUSHLOCALNEAR, 4,	/* ORDERBY */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00230 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PREWHERE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 226, 2,	/* 738 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 739 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* VALO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00063) */
/* 00031 */ HB_P_LINEOFFSET, 2,	/* 740 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00061) */
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 741 */
	HB_P_MESSAGE, 45, 0,	/* _PREWHERE */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* VALO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00061) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00063) */
/* 00063 */ HB_P_LINEOFFSET, 6,	/* 744 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00092) */
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 745 */
	HB_P_MESSAGE, 135, 0,	/* PREWHERE */
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

HB_FUNC( VISTAQUIE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 19, 7,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 242, 2,	/* 754 */
	HB_P_LOCALNEARSETSTR, 9, 3, 0,	/* CADBLOCK 3*/
	'{', ' ', 0, 
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* COLN 0*/
/* 00020 */ HB_P_LINEOFFSET, 1,	/* 755 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* ODLG */
/* 00051 */ HB_P_LINEOFFSET, 2,	/* 756 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* KXX 1*/
	HB_P_LOCALNEARSETSTR, 18, 1, 0,	/* CONDTOTA 1*/
	0, 
/* 00067 */ HB_P_LINEOFFSET, 3,	/* 757 */
	HB_P_PUSHSYMNEAR, 142,	/* DANCHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* AMYANCHO */
/* 00078 */ HB_P_LINEOFFSET, 6,	/* 760 */
	HB_P_PUSHSTATIC, 20, 0,	/* LCORR */
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00093) */
/* 00085 */ HB_P_LINEOFFSET, 7,	/* 761 */
	HB_P_LOCALNEARSETINT, 26, 1, 0,	/* HAYCORR 1*/
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00098) */
/* 00093 */ HB_P_LINEOFFSET, 9,	/* 763 */
	HB_P_PUSHNIL,
	HB_P_POPLOCALNEAR, 26,	/* HAYCORR */
/* 00098 */ HB_P_LINEOFFSET, 12,	/* 766 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 143,	/* TFONT */
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
/* 00138 */ HB_P_LINEOFFSET, 13,	/* 767 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 143,	/* TFONT */
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
/* 00178 */ HB_P_LINEOFFSET, 15,	/* 769 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* TUFOLDER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 00221) */
/* 00194 */ HB_P_LINEOFFSET, 17,	/* 771 */
	HB_P_PUSHSYMNEAR, 144,	/* REPO */
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
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* HAYCORR */
	HB_P_FUNCTIONSHORT, 13,
	HB_P_POPLOCALNEAR, 15,	/* ARROLBX */
	HB_P_JUMPNEAR, 34,	/* 34 (abs: 00253) */
/* 00221 */ HB_P_LINEOFFSET, 20,	/* 774 */
	HB_P_PUSHSYMNEAR, 144,	/* REPO */
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
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* HAYCORR */
	HB_P_FUNCTIONSHORT, 13,
	HB_P_POPLOCALNEAR, 15,	/* ARROLBX */
/* 00253 */ HB_P_LINEOFFSET, 55,	/* 809 */
	HB_P_PUSHLOCALNEAR, 15,	/* ARROLBX */
	HB_P_PUSHLOCALNEAR, 3,	/* _NOLBX */
	HB_P_MACROPOP, 11,
/* 00261 */ HB_P_LINEOFFSET, 57,	/* 811 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 99, 1,	/* 355 (abs: 00637) */
/* 00285 */ HB_P_LINEOFFSET, 59,	/* 813 */
	HB_P_PUSHSYMNEAR, 145,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* AMYANCHO */
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 00628) */
/* 00302 */ HB_P_LINEOFFSET, 60,	/* 814 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00394) */
/* 00330 */ HB_P_LINEOFFSET, 61,	/* 815 */
	HB_P_PUSHLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'p', 't', 'y', '(', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* _NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'[', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	':', 'n', 'A', 't', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* KXX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	']', ')', ' ', '.', 'a', 'n', 'd', '.', ' ', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00394) */
/* 00394 */ HB_P_LINEOFFSET, 63,	/* 817 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 00569) */
/* 00414 */ HB_P_LINEOFFSET, 65,	/* 819 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 00466) */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00478) */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 00522) */
/* 00478 */ HB_P_LINEOFFSET, 66,	/* 820 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00514) */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00522) */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* AJUSTIFY */
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 00522 */ HB_P_LINEOFFSET, 69,	/* 823 */
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_PUSHLOCALNEAR, 3,	/* _NOLBX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'[', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	':', 'n', 'A', 't', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* KXX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	']', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_JUMPNEAR, 52,	/* 52 (abs: 00619) */
/* 00569 */ HB_P_LINEOFFSET, 71,	/* 825 */
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'z', 'b', 'i', 'e', 'n', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* KXX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CADBLOCK */
/* 00619 */ HB_P_LINEOFFSET, 73,	/* 827 */
	HB_P_PUSHLOCALNEAR, 17,	/* KXX */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 17,	/* KXX */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00628) */
/* 00628 */ HB_P_LINEOFFSET, 75,	/* 829 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* XX 1*/
	HB_P_JUMP, 145, 254,	/* -367 (abs: 00267) */
/* 00637 */ HB_P_LINEOFFSET, 76,	/* 830 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 250, 255,	/* -6*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 18,	/* CONDTOTA */
/* 00659 */ HB_P_LINEOFFSET, 79,	/* 833 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'}', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CADBLOCK */
/* 00686 */ HB_P_LINEOFFSET, 84,	/* 838 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MANERA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 113, 0,	/* 113 (abs: 00813) */
/* 00703 */ HB_P_LINEOFFSET, 85,	/* 839 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00752) */
/* 00714 */ HB_P_LINEOFFSET, 86,	/* 840 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'p', 't', 'y', '(', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* _NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'[', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	':', 'n', 'A', 't', ',', '2', ']', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00752) */
/* 00752 */ HB_P_LINEOFFSET, 88,	/* 842 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'{', '|', '|', ' ', 'I', 'F', '(', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 18,	/* CONDTOTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', '{', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* _NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'[', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	':', 'n', 'A', 't', ',', '1', ' ', ']', ' ', '}', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', '}', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00832) */
/* 00813 */ HB_P_LINEOFFSET, 90,	/* 844 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'{', '|', '|', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'}', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CADBLOCK */
/* 00832 */ HB_P_LINEOFFSET, 93,	/* 847 */
	HB_P_MESSAGE, 73, 0,	/* SETARRAY */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 15,	/* ARROLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00844 */ HB_P_LINEOFFSET, 94,	/* 848 */
	HB_P_MESSAGE, 71, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 9,	/* CADBLOCK */
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00858 */ HB_P_LINEOFFSET, 95,	/* 849 */
	HB_P_MESSAGE, 80, 0,	/* _LDRAWFOOTERS */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00869 */ HB_P_LINEOFFSET, 96,	/* 850 */
	HB_P_MESSAGE, 146, 0,	/* _NLINESTYLE */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00881 */ HB_P_LINEOFFSET, 98,	/* 852 */
	HB_P_MESSAGE, 147, 0,	/* _BBKCOLOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	3, 0,	/* number of local parameters (3) */
	4, 0,	/* number of local variables (4) */
	1, 0,	/* OLBX */
	3, 0,	/* _NOLBX */
	2, 0,	/* NOLBX */
	18, 0,	/* CONDTOTA */
	HB_P_PUSHSYMNEAR, 148,	/* MY_SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00924 */ HB_P_LINEOFFSET, 99,	/* 853 */
	HB_P_MESSAGE, 149, 0,	/* _BFONT */
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
	HB_P_PUSHSYMNEAR, 150,	/* MY_SETFONT */
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
/* 00975 */ HB_P_LINEOFFSET, 100,	/* 854 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00985 */ HB_P_LINEOFFSET, 101,	/* 855 */
	HB_P_MESSAGE, 36, 0,	/* BVALID */
	HB_P_PUSHLOCALNEAR, 13,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 14,	/* BOLDVALID */
/* 00996 */ HB_P_LINEOFFSET, 102,	/* 856 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 13,	/* ODLG */
	HB_P_PUSHBLOCK, 39, 0,	/* 39 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	14, 0,	/* BOLDVALID */
	10, 0,	/* OFONT1 */
	11, 0,	/* OFONT2 */
	HB_P_MESSAGE, 39, 0,	/* EVAL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01045 */ HB_P_LINEOFFSET, 103,	/* 857 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01050 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MY_SETCOLOR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 6,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 96, 3,	/* 864 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CONDTOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00017) */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00025) */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 866 */
	HB_P_PUSHLOCALNEAR, 6,	/* CONDTOTA */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 8,	/* VALOR2 */
/* 00025 */ HB_P_LINEOFFSET, 6,	/* 870 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSTYLE */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00067) */
/* 00033 */ HB_P_LINEOFFSET, 9,	/* 873 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* VALOR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00056) */
/* 00045 */ HB_P_LINEOFFSET, 10,	/* 874 */
	HB_P_PUSHLONG, 194, 219, 243, 0,	/* 15981506 */
	HB_P_POPLOCALNEAR, 7,	/* NCOLOR */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 00065) */
/* 00056 */ HB_P_LINEOFFSET, 12,	/* 876 */
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_POPLOCALNEAR, 7,	/* NCOLOR */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00067) */
/* 00067 */ HB_P_LINEOFFSET, 20,	/* 884 */
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLOR */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00073 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MY_SETFONT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 8,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONDTOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00017) */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00025) */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 892 */
	HB_P_PUSHLOCALNEAR, 8,	/* CONDTOTA */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 9,	/* VALOR2 */
/* 00025 */ HB_P_LINEOFFSET, 5,	/* 895 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSTYLE */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00071) */
/* 00033 */ HB_P_LINEOFFSET, 6,	/* 896 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* VALOR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00058) */
/* 00045 */ HB_P_LINEOFFSET, 7,	/* 897 */
	HB_P_MESSAGE, 151, 0,	/* HFONT */
	HB_P_PUSHLOCALNEAR, 6,	/* OFONT1 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* NHFONT */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00069) */
/* 00058 */ HB_P_LINEOFFSET, 9,	/* 899 */
	HB_P_MESSAGE, 151, 0,	/* HFONT */
	HB_P_PUSHLOCALNEAR, 7,	/* OFONT2 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* NHFONT */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00071) */
/* 00071 */ HB_P_LINEOFFSET, 13,	/* 903 */
	HB_P_PUSHLOCALNEAR, 10,	/* NHFONT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00077 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZTABLA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 10,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 173, 3,	/* 941 */
	HB_P_LOCALNEARSETSTR, 18, 1, 0,	/* CPICTURE 1*/
	0, 
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 942 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 21,	/* BUF */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 23,	/* ATROZOS */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 943 */
	HB_P_PUSHLOCALNEAR, 7,	/* NOB */
	HB_P_POPSTATIC, 7, 0,	/* NOBARRA */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 944 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00052) */
	HB_P_LOCALNEARSETINT, 5, 99, 0,	/* AREA 99*/
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00052) */
/* 00052 */ HB_P_LINEOFFSET, 4,	/* 945 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00069) */
	HB_P_PUSHLOCALNEAR, 1,	/* TABLA */
	HB_P_POPLOCALNEAR, 2,	/* FRM */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00069) */
/* 00069 */ HB_P_LINEOFFSET, 5,	/* 946 */
	HB_P_PUSHLOCALNEAR, 5,	/* AREA */
	HB_P_POPSTATIC, 16, 0,	/* ELAREA */
/* 00076 */ HB_P_LINEOFFSET, 6,	/* 947 */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* FRM */
/* 00087 */ HB_P_LINEOFFSET, 7,	/* 948 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00116) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Y', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* FRM1 */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00116) */
/* 00116 */ HB_P_LINEOFFSET, 9,	/* 950 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'F', 'R', 'M', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 64, 16,	/* 4160 (abs: 04309) */
/* 00152 */ HB_P_LINEOFFSET, 10,	/* 951 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'F', 'R', 'M', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 00316) */
/* 00187 */ HB_P_LINEOFFSET, 11,	/* 952 */
	HB_P_PUSHSYMNEAR, 153,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'L', ' ', 'A', 'R', 'C', 'H', 'I', 'V', 'O', ' ', 'F', 'R', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'.', 'F', 'R', 'M', ' ', ' ', 'Q', 'U', 'E', ' ', 'S', 'E', ' ', 'V', 'A', ' ', 'A', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'R', ' ', 'P', 'A', 'R', 'A', ' ', 'L', 'A', ' ', 'A', 'D', 'I', 'C', 'I', 'O', 'N', ' ', 'Y', ' ', 'M', 'O', 'D', 'I', 'F', 'I', 'C', 'A', 'C', 'I', 'O', 'N', ' ', 'Y', 'A', ' ', 'E', 'X', 'I', 'S', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'R', 'R', 'O', 'R', 0, 
	HB_P_DOSHORT, 2,
/* 00309 */ HB_P_LINEOFFSET, 12,	/* 953 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00316) */
/* 00316 */ HB_P_LINEOFFSET, 14,	/* 955 */
	HB_P_PUSHSTR, 74, 1,	/* 330 */
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', ' ', ' ', 'x', 'p', 'r', 'u', 'e', 'b', 'a', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '3', '1', '6', '0', '6', '6', '0', '|', 'N', 'T', 'O', 'P', '=', '1', '2', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '0', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '8', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '4', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', 'x', 'i', 'n', 'i', 'v', 'z', 't', 'b', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* _C */
/* 00676 */ HB_P_LINEOFFSET, 16,	/* 957 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 107, 1,	/* 363 (abs: 01053) */
/* 00693 */ HB_P_LINEOFFSET, 17,	/* 958 */
	HB_P_PUSHSTR, 71, 1,	/* 327 */
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'V', 'i', 's', 'u', 'a', 'l', ' ', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '9', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '8', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '5', '4', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', 'I', 'N', 'I', 'V', 'Z', 'T', 'B', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* C */
	HB_P_JUMP, 122, 1,	/* 378 (abs: 01428) */
/* 01053 */ HB_P_LINEOFFSET, 19,	/* 960 */
	HB_P_PUSHSTR, 71, 1,	/* 327 */
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'V', 'i', 's', 'u', 'a', 'l', ' ', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '9', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '8', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '5', '4', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', 'I', 'N', 'I', 'V', 'Z', 'T', 'B', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* C */
/* 01428 */ HB_P_LINEOFFSET, 22,	/* 963 */
	HB_P_PUSHLOCALNEAR, 19,	/* C */
	HB_P_PUSHSTR, 79, 2,	/* 591 */
	'T', 'W', 'B', 'R', 'O', 'W', 'S', 'E', '|', 'N', 'I', 'D', '=', '1', '8', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', '1', '8', '6', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '6', '2', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '6', '7', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '7', '9', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'C', 'H', 'A', 'N', 'G', 'E', '=', '|', 'N', 'F', 'R', 'E', 'E', 'Z', 'E', '=', '0', '|', 'N', 'H', 'E', 'A', 'D', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'N', 'F', 'O', 'O', 'T', 'E', 'R', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'N', 'L', 'I', 'N', 'E', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '3', '|', 'L', 'C', 'E', 'L', 'L', 'S', 'T', 'Y', 'L', 'E', '=', 'T', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'H', 'E', 'A', 'D', '=', '0', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'H', 'E', 'A', 'D', '=', '1', '3', '1', '6', '0', '6', '6', '0', '|', 'N', 'C', 'L', 'R', 'F', 'O', 'R', 'E', 'F', 'O', 'C', 'U', 'S', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'C', 'L', 'R', 'B', 'A', 'C', 'K', 'F', 'O', 'C', 'U', 'S', '=', '6', '9', '5', '6', '0', '4', '2', '|', 'N', 'C', 'L', 'R', 'F', 'F', 'O', 'R', 'E', '=', '0', '|', 'N', 'C', 'L', 'R', 'F', 'B', 'A', 'C', 'K', '=', '1', '3', '1', '6', '0', '6', '6', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'L', 'I', 'N', 'E', 'S', 'T', 'Y', 'L', 'E', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'L', 'I', 'N', 'E', '=', '0', '|', 'L', 'O', 'N', 'L', 'Y', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'F', '|', 'L', 'D', 'R', 'A', 'W', 'H', 'E', 'A', 'D', 'E', 'R', 'S', '=', 'T', '|', 'L', 'D', 'R', 'A', 'W', 'F', 'O', 'O', 'T', 'E', 'R', 'S', '=', 'F', '|', 'C', 'D', 'B', 'F', 'C', 'O', 'N', 'F', 'I', 'G', '=', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 123,	/* 123 */
	'|', 'C', 'T', 'I', 'T', 'U', 'L', 'O', '=', '|', 'C', 'S', 'U', 'B', 'T', 'I', 'T', 'U', '=', '|', 'S', 'E', 'T', 'L', 'A', 'N', 'D', '=', '|', 'L', 'A', 'R', 'P', 'A', 'G', '=', '|', 'C', 'F', 'I', 'N', 'R', 'E', 'P', 'O', '=', '|', 'C', 'G', 'R', 'O', 'U', 'P', '=', '|', 'C', 'A', 'N', 'T', 'E', 'G', 'R', 'O', 'U', 'P', '=', '|', 'C', 'D', 'E', 'S', 'P', 'G', 'R', 'O', 'U', 'P', '=', '|', 'L', 'T', 'O', 'T', 'X', 'P', 'A', 'G', '=', 'F', '|', 'C', '_', 'S', 'E', 'T', 'A', 'R', 'R', 'A', 'Y', '=', '|', 'C', '_', 'S', 'E', 'T', 'T', 'R', 'E', 'E', '=', '|', 'C', '_', 'S', 'E', 'T', 'T', 'X', 'T', '=', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* C */
/* 02158 */ HB_P_LINEOFFSET, 23,	/* 964 */
	HB_P_PUSHSYMNEAR, 5,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'f', 'r', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 19,	/* C */
	HB_P_DOSHORT, 2,
/* 02192 */ HB_P_LINEOFFSET, 24,	/* 965 */
	HB_P_PUSHSYMNEAR, 3,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'D', 'B', 'F', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 34, 8,	/* 2082 (abs: 04307) */
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* CMCRUT */
/* 02247 */ HB_P_LINEOFFSET, 25,	/* 966 */
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
	HB_P_PUSHLOCALNEAR, 20,	/* CMCRUT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 8,
/* 02294 */ HB_P_LINEOFFSET, 26,	/* 967 */
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
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PLUS,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 02330 */ HB_P_LINEOFFSET, 27,	/* 968 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* OBJQ */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TABLA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'L', 'I', 'M', 'I', 'T', ' ', '1', 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02394 */ HB_P_LINEOFFSET, 28,	/* 969 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02404 */ HB_P_LINEOFFSET, 29,	/* 970 */
	HB_P_LOCALNEARSETINT, 12, 2, 0,	/* J 2*/
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_MESSAGE, 16, 0,	/* NFIELDCOUNT */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 144, 3,	/* 912 (abs: 03332) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* CTYPE */
	HB_P_MESSAGE, 18, 0,	/* FLDNAME */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* NAME */
/* 02445 */ HB_P_LINEOFFSET, 31,	/* 972 */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 02463) */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 02484) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'C', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ANCHO */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 02536) */
/* 02484 */ HB_P_LINEOFFSET, 32,	/* 973 */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02505) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'D', 0, 
	HB_P_LOCALNEARSETINT, 16, 8, 0,	/* ANCHO 8*/
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 02536) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'N', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_POPLOCALNEAR, 16,	/* ANCHO */
	HB_P_MESSAGE, 20, 0,	/* FLDDEC */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* DEC */
/* 02536 */ HB_P_LINEOFFSET, 36,	/* 977 */
	HB_P_PUSHSYMNEAR, 21,	/* DBAPPEND */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02543 */ HB_P_LINEOFFSET, 38,	/* 979 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* ISVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02582) */
/* 02554 */ HB_P_LINEOFFSET, 39,	/* 980 */
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'-', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_PLUS,
	HB_P_POPFIELD, 22, 0,	/* FIELDS */
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 02637) */
/* 02582 */ HB_P_LINEOFFSET, 41,	/* 982 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, 34, 0, 
	HB_P_POPFIELD, 22, 0,	/* FIELDS */
/* 02592 */ HB_P_LINEOFFSET, 42,	/* 983 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TABLA */
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
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPFIELD, 1, 0,	/* SELECT */
/* 02637 */ HB_P_LINEOFFSET, 45,	/* 986 */
	HB_P_PUSHLOCALNEAR, 16,	/* ANCHO */
	HB_P_POPFIELD, 23, 0,	/* SIZE_REPOR */
/* 02644 */ HB_P_LINEOFFSET, 46,	/* 987 */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ANCHO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHINT, 255, 0,	/* 255 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02693) */
/* 02669 */ HB_P_LINEOFFSET, 47,	/* 988 */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ANCHO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPFIELD, 26, 0,	/* COLSIZES */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02693) */
/* 02693 */ HB_P_LINEOFFSET, 49,	/* 990 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPFIELD, 27, 0,	/* HEADERS */
/* 02710 */ HB_P_LINEOFFSET, 50,	/* 991 */
	HB_P_PUSHLOCALNEAR, 25,	/* _C */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'G', 'E', 'T', '|', 'N', 'I', 'D', '=', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_ADDINT, 194, 1,	/* 450*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_ADDINT, 194, 1,	/* 450*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'|', 'N', 'L', 'E', 'F', 'T', '=', '1', '5', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* ANCHO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 199,	/* 199 */
	'|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '8', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'-', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'|', 'C', '_', 'T', 'A', 'B', 'L', 'A', '=', '|', 'C', 'S', 'W', 'B', 'L', 'A', 'N', '=', '|', 'C', 'N', 'F', 'I', 'E', '=', '|', 'C', '_', 'F', 'I', 'L', 'T', 'R', 'O', '=', '|', 'C', '_', 'A', 'Y', 'U', 'D', 'A', '=', '|', 'C', '_', 'V', 'A', 'R', 'N', 'A', 'M', 'E', 'S', 'A', 'Y', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', '|', 'C', '_', 'F', 'U', 'N', 'S', 'O', 'L', 'O', 'L', 'E', 'C', 'T', 'U', 'R', 'A', '=', '|', 'L', 'R', 'E', 'A', 'D', 'O', 'N', 'L', 'Y', '=', 'F', '|', 'L', 'P', 'A', 'S', 'S', 'W', 'O', 'R', 'D', '=', 'F', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* CPICTURE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'|', 'C', '_', 'B', 'C', 'H', 'A', 'N', 'G', 'E', '=', '|', 'L', 'L', 'C', 'E', 'N', 'T', 'E', 'R', '=', 'F', '|', 'L', 'L', 'R', 'I', 'G', 'H', 'T', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 15,	/* TIPO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03288) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 03292) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'|', 'L', 'L', 'N', 'O', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'F', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* _C */
/* 03323 */ HB_P_LINEOFFSET, 51,	/* 992 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* J 1*/
	HB_P_JUMP, 105, 252,	/* -919 (abs: 02410) */
/* 03332 */ HB_P_LINEOFFSET, 53,	/* 994 */
	HB_P_PUSHLOCALNEAR, 25,	/* _C */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'T', 'B', 'U', 'T', 'T', 'O', 'N', '|', 'N', 'I', 'D', '=', '1', '5', '8', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', '1', '5', '8', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '&', 'G', 'r', 'a', 'b', 'a', 'r', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '3', '1', '6', '0', '6', '6', '0', '|', 'N', 'T', 'O', 'P', '=', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 99,	/* 99 */
	'|', 'N', 'L', 'E', 'F', 'T', '=', '4', '7', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '8', '2', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '7', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', 'v', 'z', 'G', 'r', 'a', 'b', 'a', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 123,	/* 123 */
	',', '.', 'T', '.', ')', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* _C */
/* 03693 */ HB_P_LINEOFFSET, 55,	/* 996 */
	HB_P_LOCALNEARSETINT, 12, 2, 0,	/* J 2*/
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_MESSAGE, 16, 0,	/* NFIELDCOUNT */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 26, 2,	/* 538 (abs: 04247) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* CTYPE */
	HB_P_MESSAGE, 18, 0,	/* FLDNAME */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* NAME */
/* 03734 */ HB_P_LINEOFFSET, 57,	/* 998 */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHINT, 254, 0,	/* 254 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 03752) */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHINT, 253, 0,	/* 253 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 03773) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'C', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* ANCHO */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 03825) */
/* 03773 */ HB_P_LINEOFFSET, 58,	/* 999 */
	HB_P_PUSHLOCALNEAR, 14,	/* CTYPE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03794) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'D', 0, 
	HB_P_LOCALNEARSETINT, 16, 8, 0,	/* ANCHO 8*/
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 03825) */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* TIPO 2*/
	'N', 0, 
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_POPLOCALNEAR, 16,	/* ANCHO */
	HB_P_MESSAGE, 20, 0,	/* FLDDEC */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* DEC */
/* 03825 */ HB_P_LINEOFFSET, 63,	/* 1004 */
	HB_P_PUSHLOCALNEAR, 25,	/* _C */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_ADDINT, 250, 0,	/* 250*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_ADDINT, 250, 0,	/* 250*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '3', '1', '6', '0', '6', '6', '0', '|', 'N', 'T', 'O', 'P', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* J */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'|', 'N', 'L', 'E', 'F', 'T', '=', '1', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* NAME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 209,	/* 209 */
	'|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* _C */
/* 04238 */ HB_P_LINEOFFSET, 66,	/* 1007 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* J 1*/
	HB_P_JUMP, 223, 253,	/* -545 (abs: 03699) */
/* 04247 */ HB_P_LINEOFFSET, 67,	/* 1008 */
	HB_P_MESSAGE, 28, 0,	/* CLOSE */
	HB_P_PUSHLOCALNEAR, 11,	/* OBJQ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04257 */ HB_P_LINEOFFSET, 69,	/* 1010 */
	HB_P_PUSHSYMNEAR, 5,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* FRM1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'f', 'r', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 25,	/* _C */
	HB_P_DOSHORT, 2,
/* 04291 */ HB_P_LINEOFFSET, 70,	/* 1011 */
	HB_P_PUSHSYMNEAR, 29,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BUF */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 04307) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 04309) */
/* 04309 */ HB_P_LINEOFFSET, 73,	/* 1014 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AREA */
	HB_P_DOSHORT, 1,
/* 04318 */ HB_P_LINEOFFSET, 74,	/* 1015 */
	HB_P_PUSHSYMNEAR, 154,	/* VZUSE_ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TABLA */
	HB_P_DOSHORT, 1,
/* 04327 */ HB_P_LINEOFFSET, 76,	/* 1017 */
	HB_P_PUSHLOCALNEAR, 8,	/* ISVISTA */
	HB_P_POPSTATIC, 10, 0,	/* HAYVISTA */
/* 04334 */ HB_P_LINEOFFSET, 77,	/* 1018 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* ISVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 04406) */
/* 04345 */ HB_P_LINEOFFSET, 79,	/* 1020 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OBY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 04383) */
/* 04361 */ HB_P_LINEOFFSET, 81,	/* 1022 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CSELECT */
	HB_P_DOSHORT, 12,
	HB_P_JUMPNEAR, 23,	/* 23 (abs: 04404) */
/* 04383 */ HB_P_LINEOFFSET, 84,	/* 1025 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OBY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CSELECT */
	HB_P_DOSHORT, 12,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 04406) */
/* 04406 */ HB_P_LINEOFFSET, 88,	/* 1029 */
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_POPSTATIC, 9, 0,	/* PASAFRM */
/* 04413 */ HB_P_LINEOFFSET, 89,	/* 1030 */
	HB_P_PUSHSYMNEAR, 30,	/* VZFORMS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PUSHLOCALNEAR, 4,	/* TITI */
	HB_P_PUSHLOCALNEAR, 6,	/* BMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'W', 'S', '_', 'C', 'A', 'P', 'T', 'I', 'O', 'N', ',', 'W', 'S', '_', 'S', 'Y', 'S', 'M', 'E', 'N', 'U', ',', 'W', 'S', '_', 'T', 'H', 'I', 'C', 'K', 'F', 'R', 'A', 'M', 'E', ',', 'W', 'S', '_', 'M', 'I', 'N', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', ',', ' ', 'W', 'S', '_', 'M', 'A', 'X', 'I', 'M', 'I', 'Z', 'E', 'B', 'O', 'X', 0, 
	HB_P_DOSHORT, 5,
/* 04496 */ HB_P_LINEOFFSET, 90,	/* 1031 */
	HB_P_PUSHSYMNEAR, 154,	/* VZUSE_ */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04503 */ HB_P_LINEOFFSET, 91,	/* 1032 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BUF */
	HB_P_DOSHORT, 1,
/* 04512 */ HB_P_LINEOFFSET, 92,	/* 1033 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04517 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( INIVZTB )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 2,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 12, 4,	/* 1036 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* ODLG */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* OLBX */
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 1037 */
	HB_P_PUSHSYMNEAR, 41,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* ARECT */
/* 00051 */ HB_P_LINEOFFSET, 2,	/* 1038 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 7, 0,	/* NOBARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 106, 9,	/* 2410 (abs: 02476) */
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 1039 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* ODLG */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPLOCALNEAR, 3,	/* OBAR1 */
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 1041 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 158,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'P', 'S', 'C', 'O', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 213, 2,	/* 725 (abs: 00844) */
/* 00122 */ HB_P_LINEOFFSET, 6,	/* 1042 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'B', 'I', 'T', 'M', 'A', 'P', 92, 'N', 'U', 'E', 'V', 'O', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	1, 0,	/* number of local parameters (1) */
	3, 0,	/* number of local variables (3) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	2, 0,	/* FRM1 */
	HB_P_PUSHSYMNEAR, 161,	/* VZTBAGMO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_DOSHORT, 4,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'r', 'e', 'g', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'(', 'v', 'z', 't', 'b', 'a', 'g', 'm', 'o', '(', 'o', 'L', 'b', 'x', ',', '1', ',', 'C', 'o', 'D', 'l', 'g', ',', 'F', 'r', 'm', '1', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 00265 */ HB_P_LINEOFFSET, 7,	/* 1043 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'B', 'I', 'T', 'M', 'A', 'P', 92, 'M', 'O', 'D', 'I', 'F', 'I', 'C', 'A', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	3, 0,	/* number of local variables (3) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	2, 0,	/* FRM1 */
	HB_P_PUSHSYMNEAR, 161,	/* VZTBAGMO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_DOSHORT, 4,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'(', 'v', 'z', 't', 'b', 'a', 'g', 'm', 'o', '(', 'o', 'L', 'b', 'x', ',', '2', ',', 'C', 'o', 'D', 'l', 'g', ',', 'F', 'r', 'm', '1', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 00414 */ HB_P_LINEOFFSET, 8,	/* 1044 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'B', 'I', 'T', 'M', 'A', 'P', 92, 'B', 'O', 'R', 'R', 'A', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	HB_P_PUSHSYMNEAR, 162,	/* VZTBDELE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHSTATIC, 9, 0,	/* PASAFRM */
	HB_P_DOSHORT, 3,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'o', 'r', 'r', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'(', 'v', 'z', 't', 'b', 'd', 'e', 'l', 'e', '(', 'o', 'L', 'b', 'x', ',', 'C', 'o', 'D', 'l', 'g', ',', 'p', 'a', 's', 'a', 'F', 'r', 'm', ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 00556 */ HB_P_LINEOFFSET, 9,	/* 1045 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'B', 'I', 'T', 'M', 'A', 'P', 92, 'I', 'M', 'P', 'R', 'I', 'M', 'E', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* CODLG */
	5, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 163,	/* VZTBIMPR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'(', 'v', 'z', 't', 'b', 'i', 'm', 'p', 'r', '(', 'C', 'o', 'D', 'l', 'g', '+', 34, '_', '1', '8', '6', 34, ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 00699 */ HB_P_LINEOFFSET, 10,	/* 1046 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'B', 'I', 'T', 'M', 'A', 'P', 92, 'b', 'u', 's', 'c', 'a', 'r', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* CODLG */
	5, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 163,	/* VZTBIMPR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'(', 'v', 'z', 't', 'b', 'i', 'm', 'p', 'r', '(', 'C', 'o', 'D', 'l', 'g', '+', 34, '_', '1', '8', '6', 34, ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
	HB_P_JUMP, 25, 3,	/* 793 (abs: 01634) */
/* 00844 */ HB_P_LINEOFFSET, 13,	/* 1049 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'G', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	1, 0,	/* number of local parameters (1) */
	3, 0,	/* number of local variables (3) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	2, 0,	/* FRM1 */
	HB_P_PUSHSYMNEAR, 161,	/* VZTBAGMO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_DOSHORT, 4,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'r', 'e', 'g', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'(', 'v', 'z', 't', 'b', 'a', 'g', 'm', 'o', '(', 'o', 'L', 'b', 'x', ',', '1', ',', 'C', 'o', 'D', 'l', 'g', ',', 'F', 'r', 'm', '1', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 00974 */ HB_P_LINEOFFSET, 14,	/* 1050 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'O', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	3, 0,	/* number of local variables (3) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	2, 0,	/* FRM1 */
	HB_P_PUSHSYMNEAR, 161,	/* VZTBAGMO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_DOSHORT, 4,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'(', 'v', 'z', 't', 'b', 'a', 'g', 'm', 'o', '(', 'o', 'L', 'b', 'x', ',', '2', ',', 'C', 'o', 'D', 'l', 'g', ',', 'F', 'r', 'm', '1', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01107 */ HB_P_LINEOFFSET, 15,	/* 1051 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'E', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* OLBX */
	1, 0,	/* CODLG */
	HB_P_PUSHSYMNEAR, 162,	/* VZTBDELE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHSTATIC, 9, 0,	/* PASAFRM */
	HB_P_DOSHORT, 3,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'o', 'r', 'r', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'(', 'v', 'z', 't', 'b', 'd', 'e', 'l', 'e', '(', 'o', 'L', 'b', 'x', ',', 'C', 'o', 'D', 'l', 'g', ',', 'p', 'a', 's', 'a', 'F', 'r', 'm', ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01236 */ HB_P_LINEOFFSET, 16,	/* 1052 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'I', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* CODLG */
	5, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 163,	/* VZTBIMPR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'(', 'v', 'z', 't', 'b', 'i', 'm', 'p', 'r', '(', 'C', 'o', 'D', 'l', 'g', '+', 34, '_', '1', '8', '6', 34, ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01364 */ HB_P_LINEOFFSET, 17,	/* 1053 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'U', 'S', 'C', 'A', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* CODLG */
	5, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 164,	/* VZTBBUSCAR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'u', 's', 'c', 'a', 'r', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'(', 'v', 'z', 't', 'b', 'b', 'u', 's', 'c', 'a', 'r', '(', 'C', 'o', 'D', 'l', 'g', '+', 34, '_', '1', '8', '6', 34, ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01495 */ HB_P_LINEOFFSET, 18,	/* 1054 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'I', 'G', 'U', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* CODLG */
	5, 0,	/* OLBX */
	HB_P_PUSHSYMNEAR, 165,	/* VZSGBUSCAR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 127, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'S', 'e', 'g', 'u', 'i', 'r', ' ', 'B', 'u', 's', 'c', 'a', 'n', 'd', 'o', 0, 
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'(', 'v', 'z', 's', 'g', 'b', 'u', 's', 'c', 'a', 'r', '(', 'C', 'o', 'D', 'l', 'g', '+', 34, '_', '1', '8', '6', 34, ' ', ')', ',', 'o', 'L', 'b', 'x', ':', 'S', 'e', 't', 'F', 'o', 'c', 'u', 's', '(', ')', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01634 */ HB_P_LINEOFFSET, 22,	/* 1058 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01676 */ HB_P_LINEOFFSET, 23,	/* 1059 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01718 */ HB_P_LINEOFFSET, 24,	/* 1060 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01760 */ HB_P_LINEOFFSET, 25,	/* 1061 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01802 */ HB_P_LINEOFFSET, 26,	/* 1062 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01844 */ HB_P_LINEOFFSET, 27,	/* 1063 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01886 */ HB_P_LINEOFFSET, 28,	/* 1064 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01928 */ HB_P_LINEOFFSET, 29,	/* 1065 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 01970 */ HB_P_LINEOFFSET, 30,	/* 1066 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02012 */ HB_P_LINEOFFSET, 31,	/* 1067 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02054 */ HB_P_LINEOFFSET, 32,	/* 1068 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02096 */ HB_P_LINEOFFSET, 33,	/* 1069 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02138 */ HB_P_LINEOFFSET, 34,	/* 1070 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02180 */ HB_P_LINEOFFSET, 35,	/* 1071 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02222 */ HB_P_LINEOFFSET, 36,	/* 1072 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02264 */ HB_P_LINEOFFSET, 37,	/* 1073 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02306 */ HB_P_LINEOFFSET, 38,	/* 1074 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02348 */ HB_P_LINEOFFSET, 39,	/* 1075 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02390 */ HB_P_LINEOFFSET, 40,	/* 1076 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
/* 02432 */ HB_P_LINEOFFSET, 41,	/* 1077 */
	HB_P_MESSAGE, 159, 0,	/* NEWBAR */
	HB_P_PUSHSYMNEAR, 160,	/* TBTNBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'B', 'L', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* OBAR1 */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPLOCALNEAR, 6,	/* OBTN */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02476) */
/* 02476 */ HB_P_LINEOFFSET, 45,	/* 1081 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 4,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 243, 255,	/* -13*/
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 4,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* ARECT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 220, 255,	/* -36*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02512 */ HB_P_LINEOFFSET, 46,	/* 1082 */
	HB_P_MESSAGE, 57, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 4,	/* ODLG */
	HB_P_PUSHBLOCK, 47, 0,	/* 47 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	5, 0,	/* OLBX */
	4, 0,	/* ODLG */
	7, 0,	/* ARECT */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 243, 255,	/* -13*/
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 220, 255,	/* -36*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02569 */ HB_P_LINEOFFSET, 47,	/* 1083 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02583) */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 02602) */
/* 02583 */ HB_P_LINEOFFSET, 50,	/* 1086 */
	HB_P_PUSHSYMNEAR, 31,	/* VZVISTA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 02602 */ HB_P_LINEOFFSET, 52,	/* 1088 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02607 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZTBBUSCAR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 67, 4,	/* 1091 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OLBX */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* J 1*/
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 1094 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00062) */
	HB_P_PUSHSYMNEAR, 166,	/* VZ */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 167, 0,	/* VALORGET */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 00084) */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POPVARIABLE, 167, 0,	/* VALORGET */
/* 00084 */ HB_P_LINEOFFSET, 6,	/* 1097 */
	HB_P_PUSHSYMNEAR, 100,	/* MSGGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'u', 's', 'c', 'a', 'r', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVARREF, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSE, 210, 1,	/* 466 (abs: 00584) */
/* 00121 */ HB_P_LINEOFFSET, 7,	/* 1098 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00151) */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 167, 0,	/* VALORGET */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00151) */
/* 00151 */ HB_P_LINEOFFSET, 8,	/* 1099 */
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POPSTATIC, 17, 0,	/* COLUBUSCAR */
/* 00163 */ HB_P_LINEOFFSET, 9,	/* 1100 */
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_POPSTATIC, 18, 0,	/* DATOBUSCAR */
/* 00171 */ HB_P_LINEOFFSET, 10,	/* 1101 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 200, 0,	/* 200 (abs: 00381) */
	HB_P_PUSHSYMNEAR, 168,	/* VZRECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* REA */
	HB_P_PUSHSYMNEAR, 169,	/* VZGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00196 */ HB_P_LINEOFFSET, 11,	/* 1102 */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* OBJSQL */
/* 00205 */ HB_P_LINEOFFSET, 12,	/* 1103 */
	HB_P_PUSHSYMNEAR, 171,	/* VZEOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 00378) */
/* 00216 */ HB_P_LINEOFFSET, 15,	/* 1106 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 00316) */
/* 00233 */ HB_P_LINEOFFSET, 16,	/* 1107 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 166,	/* VZ */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00314) */
/* 00293 */ HB_P_LINEOFFSET, 17,	/* 1108 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 00378) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00314) */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 00368) */
/* 00316 */ HB_P_LINEOFFSET, 21,	/* 1112 */
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_PUSHSYMNEAR, 166,	/* VZ */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00368) */
/* 00347 */ HB_P_LINEOFFSET, 22,	/* 1113 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00378) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00368) */
/* 00368 */ HB_P_LINEOFFSET, 26,	/* 1117 */
	HB_P_PUSHSYMNEAR, 172,	/* VZSKIP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 86, 255,	/* -170 (abs: 00205) */
	HB_P_JUMP, 204, 0,	/* 204 (abs: 00582) */
/* 00381 */ HB_P_LINEOFFSET, 30,	/* 1121 */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 184, 0,	/* 184 (abs: 00582) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00431 */ HB_P_LINEOFFSET, 31,	/* 1122 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00522) */
/* 00448 */ HB_P_LINEOFFSET, 32,	/* 1123 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00520) */
/* 00504 */ HB_P_LINEOFFSET, 33,	/* 1124 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 66,	/* 66 (abs: 00582) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00520) */
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00565) */
/* 00522 */ HB_P_LINEOFFSET, 36,	/* 1127 */
	HB_P_PUSHVARIABLE, 167, 0,	/* VALORGET */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00565) */
/* 00549 */ HB_P_LINEOFFSET, 37,	/* 1128 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00582) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00565) */
/* 00565 */ HB_P_LINEOFFSET, 40,	/* 1131 */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 3,	/* J */
/* 00572 */ HB_P_LINEOFFSET, 41,	/* 1132 */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_POPSTATIC, 19, 0,	/* JBUSCAR */
	HB_P_JUMP, 58, 255,	/* -198 (abs: 00381) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00584) */
/* 00584 */ HB_P_LINEOFFSET, 46,	/* 1137 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00594 */ HB_P_LINEOFFSET, 47,	/* 1138 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00599 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZSGBUSCAR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 118, 4,	/* 1142 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OLBX */
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 1144 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 18, 0,	/* DATOBUSCAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00042) */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 1145 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00042) */
/* 00042 */ HB_P_LINEOFFSET, 5,	/* 1147 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00056) */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 00066) */
/* 00056 */ HB_P_LINEOFFSET, 7,	/* 1149 */
	HB_P_PUSHSTATIC, 19, 0,	/* JBUSCAR */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 4,	/* J */
/* 00066 */ HB_P_LINEOFFSET, 9,	/* 1151 */
	HB_P_PUSHSTATIC, 18, 0,	/* DATOBUSCAR */
	HB_P_POPLOCALNEAR, 5,	/* VALORGET */
/* 00073 */ HB_P_LINEOFFSET, 10,	/* 1152 */
	HB_P_MESSAGE, 173, 0,	/* GOTOCOL */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_PUSHSTATIC, 17, 0,	/* COLUBUSCAR */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00086 */ HB_P_LINEOFFSET, 11,	/* 1153 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 00297) */
/* 00099 */ HB_P_LINEOFFSET, 12,	/* 1154 */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OBJSQL */
/* 00108 */ HB_P_LINEOFFSET, 13,	/* 1155 */
	HB_P_PUSHSYMNEAR, 171,	/* VZEOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00125) */
	HB_P_PUSHSYMNEAR, 172,	/* VZSKIP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00125) */
/* 00125 */ HB_P_LINEOFFSET, 14,	/* 1156 */
	HB_P_PUSHSYMNEAR, 171,	/* VZEOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 161, 0,	/* 161 (abs: 00294) */
/* 00136 */ HB_P_LINEOFFSET, 15,	/* 1157 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 83,	/* 83 (abs: 00233) */
/* 00152 */ HB_P_LINEOFFSET, 16,	/* 1158 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 166,	/* VZ */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00231) */
/* 00210 */ HB_P_LINEOFFSET, 17,	/* 1159 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 67,	/* 67 (abs: 00294) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00231) */
	HB_P_JUMPNEAR, 53,	/* 53 (abs: 00284) */
/* 00233 */ HB_P_LINEOFFSET, 21,	/* 1163 */
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_PUSHSYMNEAR, 166,	/* VZ */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00284) */
/* 00263 */ HB_P_LINEOFFSET, 22,	/* 1164 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00294) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00284) */
/* 00284 */ HB_P_LINEOFFSET, 26,	/* 1168 */
	HB_P_PUSHSYMNEAR, 172,	/* VZSKIP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 90, 255,	/* -166 (abs: 00125) */
	HB_P_JUMP, 193, 0,	/* 193 (abs: 00487) */
/* 00297 */ HB_P_LINEOFFSET, 30,	/* 1172 */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 00487) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00347 */ HB_P_LINEOFFSET, 31,	/* 1173 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00435) */
/* 00363 */ HB_P_LINEOFFSET, 32,	/* 1174 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00433) */
/* 00417 */ HB_P_LINEOFFSET, 33,	/* 1175 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 00487) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00433) */
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 00477) */
/* 00435 */ HB_P_LINEOFFSET, 36,	/* 1178 */
	HB_P_PUSHLOCALNEAR, 5,	/* VALORGET */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 106, 0,	/* NCOLACT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00477) */
/* 00461 */ HB_P_LINEOFFSET, 37,	/* 1179 */
	HB_P_MESSAGE, 111, 0,	/* _NAT */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00487) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00477) */
/* 00477 */ HB_P_LINEOFFSET, 40,	/* 1182 */
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 4,	/* J */
	HB_P_JUMP, 69, 255,	/* -187 (abs: 00297) */
/* 00487 */ HB_P_LINEOFFSET, 43,	/* 1185 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00497 */ HB_P_LINEOFFSET, 44,	/* 1186 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00502 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZTBAGMO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 4,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 166, 4,	/* 1190 */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* OBJSQL */
/* 00016 */ HB_P_LINEOFFSET, 3,	/* 1193 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00060) */
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 1194 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00048) */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00057) */
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 1195 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00057) */
	HB_P_JUMP, 129, 0,	/* 129 (abs: 00186) */
/* 00060 */ HB_P_LINEOFFSET, 8,	/* 1198 */
	HB_P_MESSAGE, 113, 0,	/* NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* REA */
/* 00076 */ HB_P_LINEOFFSET, 9,	/* 1199 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00101) */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00110) */
/* 00103 */ HB_P_LINEOFFSET, 10,	/* 1200 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00110) */
/* 00110 */ HB_P_LINEOFFSET, 12,	/* 1202 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00137) */
/* 00128 */ HB_P_LINEOFFSET, 13,	/* 1203 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 41,	/* 41 (abs: 00176) */
/* 00137 */ HB_P_LINEOFFSET, 15,	/* 1205 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_MESSAGE, 18, 0,	/* FLDNAME */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00176 */ HB_P_LINEOFFSET, 18,	/* 1208 */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 174, 0,	/* OBJQ */
/* 00186 */ HB_P_LINEOFFSET, 21,	/* 1211 */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_POPSTATIC, 6, 0,	/* SWTB */
/* 00193 */ HB_P_LINEOFFSET, 22,	/* 1212 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* FRM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00248) */
/* 00209 */ HB_P_LINEOFFSET, 23,	/* 1213 */
	HB_P_PUSHSYMNEAR, 175,	/* VZFORM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* FRM1 */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00233) */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'A', 'g', 'r', 'e', 'g', 'a', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00244) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00248) */
/* 00248 */ HB_P_LINEOFFSET, 25,	/* 1215 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00309) */
/* 00260 */ HB_P_LINEOFFSET, 26,	/* 1216 */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00290) */
/* 00268 */ HB_P_LINEOFFSET, 28,	/* 1218 */
	HB_P_PUSHSYMNEAR, 176,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 00307) */
/* 00290 */ HB_P_LINEOFFSET, 30,	/* 1220 */
	HB_P_PUSHSYMNEAR, 176,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 00414) */
/* 00309 */ HB_P_LINEOFFSET, 33,	/* 1223 */
	HB_P_PUSHLOCALNEAR, 2,	/* N */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00365) */
/* 00317 */ HB_P_LINEOFFSET, 34,	/* 1224 */
	HB_P_MESSAGE, 173, 0,	/* GOTOCOL */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00328 */ HB_P_LINEOFFSET, 35,	/* 1225 */
	HB_P_PUSHSYMNEAR, 129,	/* VZCVISTA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
/* 00346 */ HB_P_LINEOFFSET, 37,	/* 1227 */
	HB_P_PUSHSYMNEAR, 105,	/* VZF2SEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 177,	/* VZFIELDGET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_ONE,
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 00414) */
/* 00365 */ HB_P_LINEOFFSET, 39,	/* 1229 */
	HB_P_PUSHSYMNEAR, 178,	/* LASTSELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00382 */ HB_P_LINEOFFSET, 40,	/* 1230 */
	HB_P_MESSAGE, 179, 0,	/* GO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* REA */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00399 */ HB_P_LINEOFFSET, 41,	/* 1231 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00414 */ HB_P_LINEOFFSET, 44,	/* 1234 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00424 */ HB_P_LINEOFFSET, 45,	/* 1235 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00429 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZTBDELE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 214, 4,	/* 1238 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* ODLG */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* OBJSQL */
/* 00025 */ HB_P_LINEOFFSET, 3,	/* 1241 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00084) */
/* 00037 */ HB_P_LINEOFFSET, 4,	/* 1242 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00057) */
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 1243 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00057) */
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 1245 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 180, 0,	/* ADBF */
	HB_P_PUSHLOCALNEAR, 5,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00077) */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00082) */
/* 00077 */ HB_P_LINEOFFSET, 9,	/* 1247 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 82,	/* 82 (abs: 00164) */
/* 00084 */ HB_P_LINEOFFSET, 12,	/* 1250 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00109) */
/* 00102 */ HB_P_LINEOFFSET, 13,	/* 1251 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00109) */
/* 00109 */ HB_P_LINEOFFSET, 15,	/* 1253 */
	HB_P_MESSAGE, 113, 0,	/* NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* REA */
/* 00125 */ HB_P_LINEOFFSET, 16,	/* 1254 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_MESSAGE, 18, 0,	/* FLDNAME */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00164 */ HB_P_LINEOFFSET, 18,	/* 1256 */
	HB_P_PUSHSYMNEAR, 181,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'e', 'a', ' ', 'E', 'l', 'i', 'm', 'i', 'n', 'a', 'r', ' ', 'e', 'l', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'e', 'g', 'u', 'n', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00306) */
/* 00214 */ HB_P_LINEOFFSET, 19,	/* 1257 */
	HB_P_PUSHSYMNEAR, 182,	/* VZDELE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00221 */ HB_P_LINEOFFSET, 22,	/* 1260 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 10, 0,	/* HAYVISTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00255) */
/* 00233 */ HB_P_LINEOFFSET, 23,	/* 1261 */
	HB_P_PUSHSYMNEAR, 176,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 00304) */
/* 00255 */ HB_P_LINEOFFSET, 26,	/* 1264 */
	HB_P_PUSHSYMNEAR, 178,	/* LASTSELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* QFRM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '8', '6', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00272 */ HB_P_LINEOFFSET, 27,	/* 1265 */
	HB_P_MESSAGE, 179, 0,	/* GO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* REA */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00289 */ HB_P_LINEOFFSET, 28,	/* 1266 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 1,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00306) */
/* 00306 */ HB_P_LINEOFFSET, 32,	/* 1270 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00311 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( XINIVZTB )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 250, 4,	/* 1274 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* ODLG */
	HB_P_PUSHSYMNEAR, 170,	/* DAMEOBJSQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OBJSQL */
/* 00025 */ HB_P_LINEOFFSET, 2,	/* 1276 */
	HB_P_PUSHSTATIC, 6, 0,	/* SWTB */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00055) */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 1277 */
	HB_P_MESSAGE, 184, 0,	/* DISABLE */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 252, 2,	/* 764 (abs: 00816) */
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 1280 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 111, 2,	/* 623 (abs: 00699) */
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 1281 */
	HB_P_MESSAGE, 185, 0,	/* CLASSNAME */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'F', 'O', 'L', 'D', 'E', 'R', ',', 'T', 'P', 'A', 'G', 'E', 'S', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSE, 83, 1,	/* 339 (abs: 00453) */
/* 00117 */ HB_P_LINEOFFSET, 8,	/* 1282 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* KPAG 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* KPAG */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 186, 0,	/* ADIALOGS */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 00450) */
/* 00149 */ HB_P_LINEOFFSET, 9,	/* 1283 */
	HB_P_MESSAGE, 186, 0,	/* ADIALOGS */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* KPAG */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* ODLG_ */
/* 00171 */ HB_P_LINEOFFSET, 10,	/* 1284 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* K 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 00441) */
/* 00195 */ HB_P_LINEOFFSET, 11,	/* 1285 */
	HB_P_MESSAGE, 185, 0,	/* CLASSNAME */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'G', 'E', 'T', ',', 'T', 'L', 'I', 'S', 'T', 'B', 'O', 'X', ',', 'T', 'C', 'H', 'E', 'C', 'K', 'B', 'O', 'X', ',', 'T', 'C', 'O', 'M', 'B', 'O', 'B', 'O', 'X', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSE, 183, 0,	/* 183 (abs: 00432) */
/* 00252 */ HB_P_LINEOFFSET, 12,	/* 1286 */
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* BLANCO */
/* 00271 */ HB_P_LINEOFFSET, 14,	/* 1288 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00316) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 98,	/* 98 (abs: 00412) */
/* 00316 */ HB_P_LINEOFFSET, 15,	/* 1289 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00366) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 00412) */
/* 00366 */ HB_P_LINEOFFSET, 16,	/* 1290 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00412) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00412) */
/* 00412 */ HB_P_LINEOFFSET, 18,	/* 1292 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 7,	/* ODLG_ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* K */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00432) */
/* 00432 */ HB_P_LINEOFFSET, 20,	/* 1294 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* K 1*/
	HB_P_JUMP, 251, 254,	/* -261 (abs: 00177) */
/* 00441 */ HB_P_LINEOFFSET, 21,	/* 1295 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* KPAG 1*/
	HB_P_JUMP, 188, 254,	/* -324 (abs: 00123) */
	HB_P_JUMP, 240, 0,	/* 240 (abs: 00690) */
/* 00453 */ HB_P_LINEOFFSET, 23,	/* 1297 */
	HB_P_MESSAGE, 185, 0,	/* CLASSNAME */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'G', 'E', 'T', ',', 'T', 'L', 'I', 'S', 'T', 'B', 'O', 'X', ',', 'T', 'C', 'H', 'E', 'C', 'K', 'B', 'O', 'X', ',', 'T', 'C', 'O', 'M', 'B', 'O', 'B', 'O', 'X', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSE, 183, 0,	/* 183 (abs: 00690) */
/* 00510 */ HB_P_LINEOFFSET, 24,	/* 1298 */
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* BLANCO */
/* 00529 */ HB_P_LINEOFFSET, 26,	/* 1300 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00574) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 98,	/* 98 (abs: 00670) */
/* 00574 */ HB_P_LINEOFFSET, 27,	/* 1301 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00624) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 00670) */
/* 00624 */ HB_P_LINEOFFSET, 28,	/* 1302 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00670) */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* BLANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00670) */
/* 00670 */ HB_P_LINEOFFSET, 30,	/* 1304 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00690) */
/* 00690 */ HB_P_LINEOFFSET, 33,	/* 1307 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* J 1*/
	HB_P_JUMP, 133, 253,	/* -635 (abs: 00061) */
/* 00699 */ HB_P_LINEOFFSET, 34,	/* 1308 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '{', ' ', '|', '|', ' ', 'x', 'v', 'a', 'l', 't', 'b', '(', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 188, 0,	/* NID */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00816 */ HB_P_LINEOFFSET, 36,	/* 1310 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_POPSTATIC, 8, 0,	/* KANTREG */
/* 00828 */ HB_P_LINEOFFSET, 37,	/* 1311 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_PUSHLOCALNEAR, 3,	/* OBJSQL */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00873) */
/* 00841 */ HB_P_LINEOFFSET, 38,	/* 1312 */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_MESSAGE, 136, 0,	/* ACONTROLS */
	HB_P_PUSHLOCALNEAR, 2,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_PUSHLOCALNEAR, 3,	/* OBJSQL */
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00873) */
/* 00873 */ HB_P_LINEOFFSET, 40,	/* 1314 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00878 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( XVALTB )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 2,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 37, 5,	/* 1317 */
	HB_P_PUSHSYMNEAR, 190,	/* _VG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CWCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* WCOD */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 1318 */
	HB_P_PUSHSYMNEAR, 191,	/* VZFIELDNAME */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 192,	/* ISQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* CAMPO */
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 1319 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* WCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00053) */
/* 00046 */ HB_P_LINEOFFSET, 3,	/* 1320 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00053) */
/* 00053 */ HB_P_LINEOFFSET, 6,	/* 1323 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* WCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00095) */
/* 00069 */ HB_P_LINEOFFSET, 7,	/* 1324 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 140,	/* DTOMY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* WCOD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHLOCALNEAR, 5,	/* CAMPO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* RESU */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00114) */
/* 00095 */ HB_P_LINEOFFSET, 9,	/* 1326 */
	HB_P_PUSHSYMNEAR, 155,	/* VZDBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* WCOD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHLOCALNEAR, 5,	/* CAMPO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* RESU */
/* 00114 */ HB_P_LINEOFFSET, 12,	/* 1329 */
	HB_P_PUSHLOCALNEAR, 4,	/* RESU */
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00161) */
/* 00120 */ HB_P_LINEOFFSET, 13,	/* 1330 */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 's', 'e', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'y', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00154 */ HB_P_LINEOFFSET, 14,	/* 1331 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00161) */
/* 00161 */ HB_P_LINEOFFSET, 16,	/* 1333 */
	HB_P_PUSHSYMNEAR, 193,	/* VZAPPEND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* WCOD */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHLOCALNEAR, 5,	/* CAMPO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00178 */ HB_P_LINEOFFSET, 24,	/* 1341 */
	HB_P_PUSHSTATIC, 8, 0,	/* KANTREG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00198) */
/* 00187 */ HB_P_LINEOFFSET, 25,	/* 1342 */
	HB_P_PUSHSYMNEAR, 194,	/* VZLOA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00198) */
/* 00198 */ HB_P_LINEOFFSET, 27,	/* 1344 */
	HB_P_PUSHSYMNEAR, 195,	/* INFOREG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FRM */
	HB_P_PUSHSYMNEAR, 168,	/* VZRECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
/* 00212 */ HB_P_LINEOFFSET, 28,	/* 1345 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00217 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SWTB )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 68, 5,	/* 1348 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00032) */
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 1349 */
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_POPSTATIC, 6, 0,	/* SWTB */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00032) */
/* 00032 */ HB_P_LINEOFFSET, 3,	/* 1351 */
	HB_P_PUSHSTATIC, 6, 0,	/* SWTB */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00039 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZTBIMPR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 76, 5,	/* 1356 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* CMD 1*/
	0, 
	HB_P_PUSHSYMNEAR, 197,	/* DAMETABLASQL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 7,	/* TABLA */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 1357 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* OLBX */
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 1358 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00090) */
/* 00052 */ HB_P_LINEOFFSET, 3,	/* 1359 */
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PUSHSYMNEAR, 198,	/* SOLOELCAMPO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 6,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00082 */ HB_P_LINEOFFSET, 4,	/* 1360 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 203,	/* -53 (abs: 00035) */
/* 00090 */ HB_P_LINEOFFSET, 5,	/* 1361 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* CMD */
/* 00112 */ HB_P_LINEOFFSET, 6,	/* 1362 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ORDERBY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 00175) */
/* 00123 */ HB_P_LINEOFFSET, 7,	/* 1363 */
	HB_P_PUSHSYMNEAR, 199,	/* QUERY2ARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* TABLA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* ACTA8 */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 00227) */
/* 00175 */ HB_P_LINEOFFSET, 9,	/* 1365 */
	HB_P_PUSHSYMNEAR, 199,	/* QUERY2ARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* CMD */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* TABLA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* ORDERBY */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* ACTA8 */
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 1367 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* TITULO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00279) */
	HB_P_MESSAGE, 200, 0,	/* _CTITULO */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	34, 'L', 'i', 's', 't', 'a', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 00299) */
	HB_P_MESSAGE, 200, 0,	/* _CTITULO */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* TITULO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00299 */ HB_P_LINEOFFSET, 14,	/* 1370 */
	HB_P_MESSAGE, 46, 0,	/* _SETLAND */
	HB_P_PUSHLOCALNEAR, 8,	/* OLBX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00311 */ HB_P_LINEOFFSET, 15,	/* 1371 */
	HB_P_PUSHSYMNEAR, 144,	/* REPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CODLG */
	HB_P_PUSHLOCALNEAR, 4,	/* ACTA8 */
	HB_P_DOSHORT, 2,
/* 00322 */ HB_P_LINEOFFSET, 16,	/* 1372 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00327 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SOLOELCAMPO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 95, 5,	/* 1375 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CMPO */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'>', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CMPO */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00029 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZPASACAMPOS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 99, 5,	/* 1379 */
	HB_P_PUSHSYMNEAR, 1,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* BUF */
/* 00013 */ HB_P_LINEOFFSET, 1,	/* 1380 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* AREAD */
	HB_P_DOSHORT, 1,
/* 00022 */ HB_P_LINEOFFSET, 2,	/* 1381 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ACAMPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 00100) */
/* 00040 */ HB_P_LINEOFFSET, 3,	/* 1382 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* BRWO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'.', 'a', 'C', 'u', 'r', 's', 'o', 'r', '.', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* ACAMPOS */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* CAMPO */
/* 00070 */ HB_P_LINEOFFSET, 4,	/* 1383 */
	HB_P_PUSHLOCALNEAR, 6,	/* CAMPO */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 7,	/* DATO */
/* 00078 */ HB_P_LINEOFFSET, 5,	/* 1384 */
	HB_P_PUSHSYMNEAR, 202,	/* VZREPL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* ACAMPOS */
	HB_P_PUSHLOCALNEAR, 5,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 7,	/* DATO */
	HB_P_DOSHORT, 2,
/* 00092 */ HB_P_LINEOFFSET, 6,	/* 1385 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 00028) */
/* 00100 */ HB_P_LINEOFFSET, 7,	/* 1386 */
	HB_P_PUSHSYMNEAR, 176,	/* _R */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* BRWD */
	HB_P_DOSHORT, 1,
/* 00109 */ HB_P_LINEOFFSET, 8,	/* 1387 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* BUF */
	HB_P_DOSHORT, 1,
/* 00118 */ HB_P_LINEOFFSET, 9,	/* 1388 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00123 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LASTSELECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 113, 5,	/* 1393 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 1394 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 1395 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00034 */ HB_P_LINEOFFSET, 3,	/* 1396 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00042 */ HB_P_LINEOFFSET, 5,	/* 1398 */
	HB_P_MESSAGE, 58, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00064 */ HB_P_LINEOFFSET, 6,	/* 1399 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 11, 0,	/* LASTSELECT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00082 */ HB_P_LINEOFFSET, 7,	/* 1400 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00097 */ HB_P_LINEOFFSET, 9,	/* 1402 */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROPOP, 11,
/* 00105 */ HB_P_LINEOFFSET, 10,	/* 1403 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00130) */
/* 00123 */ HB_P_LINEOFFSET, 11,	/* 1404 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00130) */
/* 00130 */ HB_P_LINEOFFSET, 13,	/* 1406 */
	HB_P_MESSAGE, 72, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00147 */ HB_P_LINEOFFSET, 14,	/* 1407 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00157 */ HB_P_LINEOFFSET, 15,	/* 1408 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00162 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZBARVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 4,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 132, 5,	/* 1412 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 5,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 1413 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* ODLG */
/* 00053 */ HB_P_LINEOFFSET, 2,	/* 1414 */
	HB_P_PUSHSYMNEAR, 204,	/* LIMPIO13 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* AITEMS */
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 1415 */
	HB_P_PUSHLOCALNEAR, 7,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 8,	/* CCOMBO */
/* 00077 */ HB_P_LINEOFFSET, 4,	/* 1416 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00102) */
/* 00095 */ HB_P_LINEOFFSET, 5,	/* 1417 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00102) */
/* 00102 */ HB_P_LINEOFFSET, 7,	/* 1419 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 143,	/* TFONT */
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
/* 00160 */ HB_P_LINEOFFSET, 9,	/* 1421 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 00203) */
/* 00176 */ HB_P_LINEOFFSET, 10,	/* 1422 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00203 */ HB_P_LINEOFFSET, 13,	/* 1425 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'T', 'O', 'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00248) */
/* 00216 */ HB_P_LINEOFFSET, 14,	/* 1426 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00248 */ HB_P_LINEOFFSET, 15,	/* 1427 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'O', 'T', 'T', 'O', 'M', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00298) */
/* 00264 */ HB_P_LINEOFFSET, 16,	/* 1428 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00298 */ HB_P_LINEOFFSET, 17,	/* 1429 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'E', 'F', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00344) */
/* 00312 */ HB_P_LINEOFFSET, 18,	/* 1430 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00344 */ HB_P_LINEOFFSET, 19,	/* 1431 */
	HB_P_PUSHLOCALNEAR, 4,	/* DONDE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', 'I', 'G', 'H', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00392) */
/* 00359 */ HB_P_LINEOFFSET, 20,	/* 1432 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00392 */ HB_P_LINEOFFSET, 23,	/* 1435 */
	HB_P_PUSHLOCALNEAR, 7,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 8,	/* CCOMBO */
/* 00400 */ HB_P_LINEOFFSET, 24,	/* 1436 */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 5,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* CTEXT */
/* 00417 */ HB_P_LINEOFFSET, 25,	/* 1437 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 205,	/* TSAY */
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
/* 00464 */ HB_P_LINEOFFSET, 26,	/* 1438 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 206,	/* TCOMBOBOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* CCOMBO */
	HB_P_PUSHSYMNEAR, 118,	/* PCOUNT */
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
	HB_P_PUSHSYMNEAR, 207,	/* MMGET */
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
/* 00570 */ HB_P_LINEOFFSET, 27,	/* 1439 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 117,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* CTEXT */
	HB_P_PUSHSYMNEAR, 118,	/* PCOUNT */
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
/* 00647 */ HB_P_LINEOFFSET, 28,	/* 1440 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 119,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
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
	HB_P_MESSAGE, 173, 0,	/* GOTOCOL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 112,	/* VZBUSC23 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_PUSHLOCALNEAR, 251,	/* localvar5 */
	HB_P_MESSAGE, 138, 0,	/* VARGET */
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
/* 00757 */ HB_P_LINEOFFSET, 29,	/* 1441 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 119,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 10,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
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
	HB_P_PUSHSYMNEAR, 128,	/* VZBUSC24 */
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
/* 00850 */ HB_P_LINEOFFSET, 30,	/* 1442 */
	HB_P_MESSAGE, 209, 0,	/* _BRCLICKED */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCKSHORT, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00865 */ HB_P_LINEOFFSET, 31,	/* 1443 */
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 14,	/* OFONT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00875 */ HB_P_LINEOFFSET, 32,	/* 1444 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00880 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MMGET )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 6,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 167, 5,	/* 1447 */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHLOCALNEAR, 3,	/* OCBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00033 */ HB_P_LINEOFFSET, 1,	/* 1448 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00080) */
/* 00054 */ HB_P_LINEOFFSET, 2,	/* 1449 */
	HB_P_MESSAGE, 210, 0,	/* _CPICTURE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 147, 0,	/* 147 (abs: 00224) */
/* 00080 */ HB_P_LINEOFFSET, 3,	/* 1450 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00205) */
/* 00101 */ HB_P_LINEOFFSET, 4,	/* 1451 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00156) */
/* 00120 */ HB_P_LINEOFFSET, 5,	/* 1452 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00203) */
/* 00156 */ HB_P_LINEOFFSET, 7,	/* 1454 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00224) */
/* 00205 */ HB_P_LINEOFFSET, 10,	/* 1457 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00224 */ HB_P_LINEOFFSET, 12,	/* 1459 */
	HB_P_MESSAGE, 211, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00250 */ HB_P_LINEOFFSET, 13,	/* 1460 */
	HB_P_MESSAGE, 211, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 6,	/* OBTN2 */
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00284 */ HB_P_LINEOFFSET, 14,	/* 1461 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00294 */ HB_P_LINEOFFSET, 15,	/* 1462 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OBAR1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00304 */ HB_P_LINEOFFSET, 16,	/* 1463 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00309 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LIMPIO13 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 186, 5,	/* 1466 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* ALIMPIO */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 1467 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* J 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 00123) */
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 1468 */
	HB_P_PUSHSYMNEAR, 35,	/* AT */
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
/* 00053 */ HB_P_LINEOFFSET, 3,	/* 1469 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
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
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
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
/* 00101 */ HB_P_LINEOFFSET, 5,	/* 1471 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_PUSHLOCALNEAR, 1,	/* ARRE */
	HB_P_PUSHLOCALNEAR, 3,	/* J */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00115 */ HB_P_LINEOFFSET, 7,	/* 1473 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* J 1*/
	HB_P_JUMPNEAR, 152,	/* -104 (abs: 00017) */
/* 00123 */ HB_P_LINEOFFSET, 8,	/* 1474 */
	HB_P_PUSHLOCALNEAR, 2,	/* ALIMPIO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00129 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MYVCAMPO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 198, 5,	/* 1478 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00032) */
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 1479 */
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_POPSTATIC, 12, 0,	/* MYVCAMPO */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00032) */
/* 00032 */ HB_P_LINEOFFSET, 3,	/* 1481 */
	HB_P_PUSHLOCALNEAR, 1,	/* VALO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00038 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZFILVISTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 205, 5,	/* 1485 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* OLBX */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 1486 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* ODLG */
/* 00053 */ HB_P_LINEOFFSET, 2,	/* 1487 */
	HB_P_PUSHSYMNEAR, 204,	/* LIMPIO13 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* AITEMS */
/* 00069 */ HB_P_LINEOFFSET, 3,	/* 1488 */
	HB_P_PUSHLOCALNEAR, 6,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* CCOMBO */
/* 00077 */ HB_P_LINEOFFSET, 4,	/* 1489 */
	HB_P_PUSHSYMNEAR, 41,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* ARECT */
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 1490 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00118) */
/* 00111 */ HB_P_LINEOFFSET, 6,	/* 1491 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00118) */
/* 00118 */ HB_P_LINEOFFSET, 8,	/* 1493 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
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
/* 00154 */ HB_P_LINEOFFSET, 9,	/* 1494 */
	HB_P_MESSAGE, 57, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 5,	/* ODLG */
	HB_P_PUSHBLOCK, 47, 0,	/* 47 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	4, 0,	/* OLBX */
	5, 0,	/* ODLG */
	12, 0,	/* ARECT */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 243, 255,	/* -13*/
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
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
/* 00211 */ HB_P_LINEOFFSET, 10,	/* 1495 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 143,	/* TFONT */
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
/* 00269 */ HB_P_LINEOFFSET, 11,	/* 1496 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBAR */
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
/* 00301 */ HB_P_LINEOFFSET, 12,	/* 1497 */
	HB_P_PUSHLOCALNEAR, 6,	/* AITEMS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* CCOMBO */
/* 00309 */ HB_P_LINEOFFSET, 14,	/* 1499 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00354) */
/* 00336 */ HB_P_LINEOFFSET, 15,	/* 1500 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 00432) */
/* 00354 */ HB_P_LINEOFFSET, 16,	/* 1501 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00404) */
/* 00381 */ HB_P_LINEOFFSET, 17,	/* 1502 */
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 00432) */
/* 00404 */ HB_P_LINEOFFSET, 19,	/* 1504 */
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 4,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
/* 00432 */ HB_P_LINEOFFSET, 21,	/* 1506 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 205,	/* TSAY */
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
/* 00480 */ HB_P_LINEOFFSET, 22,	/* 1507 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 206,	/* TCOMBOBOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* CCOMBO */
	HB_P_PUSHSYMNEAR, 118,	/* PCOUNT */
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
	HB_P_PUSHSYMNEAR, 214,	/* XXGET */
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
/* 00582 */ HB_P_LINEOFFSET, 23,	/* 1508 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 117,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 118,	/* PCOUNT */
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
/* 00659 */ HB_P_LINEOFFSET, 24,	/* 1509 */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 119,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 8,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
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
	HB_P_PUSHSYMNEAR, 129,	/* VZCVISTA */
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
/* 00735 */ HB_P_LINEOFFSET, 25,	/* 1510 */
	HB_P_MESSAGE, 209, 0,	/* _BRCLICKED */
	HB_P_PUSHSTATIC, 13, 0,	/* OBAR11 */
	HB_P_PUSHBLOCKSHORT, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00750 */ HB_P_LINEOFFSET, 26,	/* 1511 */
	HB_P_MESSAGE, 44, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 11,	/* OFONT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00760 */ HB_P_LINEOFFSET, 27,	/* 1512 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00765 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( XXGET )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 5,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 240, 5,	/* 1520 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00072) */
/* 00034 */ HB_P_LINEOFFSET, 1,	/* 1521 */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2,	/* 0.00, 2, 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 138, 0,	/* 138 (abs: 00207) */
/* 00072 */ HB_P_LINEOFFSET, 2,	/* 1522 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 00146) */
/* 00099 */ HB_P_LINEOFFSET, 3,	/* 1523 */
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 115,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 00207) */
/* 00146 */ HB_P_LINEOFFSET, 5,	/* 1525 */
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 15, 0,	/* CFILTEXT */
/* 00174 */ HB_P_LINEOFFSET, 6,	/* 1526 */
	HB_P_MESSAGE, 187, 0,	/* VARPUT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 114,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 2,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 1529 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 00332) */
/* 00228 */ HB_P_LINEOFFSET, 10,	/* 1530 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00283) */
/* 00247 */ HB_P_LINEOFFSET, 11,	/* 1531 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00330) */
/* 00283 */ HB_P_LINEOFFSET, 13,	/* 1533 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHSYMNEAR, 24,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 25,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 138, 0,	/* VARGET */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 00351) */
/* 00332 */ HB_P_LINEOFFSET, 16,	/* 1536 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00351 */ HB_P_LINEOFFSET, 18,	/* 1538 */
	HB_P_MESSAGE, 211, 0,	/* MOVE */
	HB_P_PUSHLOCALNEAR, 5,	/* OBTN1 */
	HB_P_ZERO,
	HB_P_MESSAGE, 208, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00377 */ HB_P_LINEOFFSET, 19,	/* 1539 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00387 */ HB_P_LINEOFFSET, 20,	/* 1540 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* OBAR1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00397 */ HB_P_LINEOFFSET, 21,	/* 1541 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00402 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZFILWHERE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 3,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 9, 6,	/* 1545 */
	HB_P_LOCALNEARSETSTR, 4, 2, 0,	/* CWHERE 2*/
	' ', 0, 
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 1546 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* FOLDER */
	HB_P_PUSHLOCALNEAR, 3,	/* PAGINA */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* OLBX */
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 1547 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
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
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 1548 */
	HB_P_MESSAGE, 92, 0,	/* AMULTI */
	HB_P_PUSHLOCALNEAR, 6,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 103, 0,	/* NAT */
	HB_P_PUSHSTATIC, 14, 0,	/* OFILCBX */
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* MCRUT */
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 1549 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCRUT */
	HB_P_MACROPUSH, 11,
	HB_P_POPLOCALNEAR, 5,	/* MCRUT */
/* 00086 */ HB_P_LINEOFFSET, 5,	/* 1550 */
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
/* 00106 */ HB_P_LINEOFFSET, 8,	/* 1553 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 00163) */
/* 00123 */ HB_P_LINEOFFSET, 9,	/* 1554 */
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
	HB_P_PUSHSYMNEAR, 140,	/* DTOMY */
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
/* 00163 */ HB_P_LINEOFFSET, 10,	/* 1555 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00215) */
/* 00180 */ HB_P_LINEOFFSET, 11,	/* 1556 */
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
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 15, 0,	/* CFILTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CWHERE */
	HB_P_JUMPNEAR, 55,	/* 55 (abs: 00268) */
/* 00215 */ HB_P_LINEOFFSET, 13,	/* 1558 */
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
/* 00268 */ HB_P_LINEOFFSET, 16,	/* 1561 */
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

HB_FUNC( VZVISTAFREE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 29, 6,	/* 1565 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* _NOLBX */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 1566 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00052) */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
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
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00059) */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OLBX */
/* 00061 */ HB_P_LINEOFFSET, 2,	/* 1567 */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 158,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'E', 'L', 'A', 'R', 'E', 'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 00105) */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 158,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'K', 'D', 'X', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 00129) */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 158,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'H', 'O', 'M', 'M', 'Y', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 00152) */
	HB_P_PUSHSYMNEAR, 14,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 158,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'T', 'H', 'O', 'K', 'Y', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00161) */
/* 00154 */ HB_P_LINEOFFSET, 3,	/* 1568 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00161) */
/* 00161 */ HB_P_LINEOFFSET, 6,	/* 1571 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00199) */
/* 00182 */ HB_P_LINEOFFSET, 7,	/* 1572 */
	HB_P_MESSAGE, 28, 0,	/* CLOSE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00199) */
/* 00199 */ HB_P_LINEOFFSET, 10,	/* 1575 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 65, 0,	/* CGROUP */
	HB_P_PUSHLOCALNEAR, 3,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00218) */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00236) */
/* 00218 */ HB_P_LINEOFFSET, 13,	/* 1578 */
	HB_P_PUSHSYMNEAR, 216,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_DOSHORT, 1,
/* 00227 */ HB_P_LINEOFFSET, 14,	/* 1579 */
	HB_P_PUSHSYMNEAR, 216,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* _NOLBX */
	HB_P_DOSHORT, 1,
/* 00236 */ HB_P_LINEOFFSET, 17,	/* 1582 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00241 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZVISTA2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 12,	/* locals, params */
	HB_P_SFRAME, 219, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 51, 6,	/* 1587 */
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 13,	/* OMYSQL */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 1588 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00053) */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
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
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* OLBX */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* ACOLTOT */
/* 00072 */ HB_P_LINEOFFSET, 2,	/* 1589 */
	HB_P_LOCALNEARSETSTR, 17, 8, 0,	/* CADBLOCK 8*/
	' ', '{', '|', '|', ' ', '{', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 20,	/* MIAFOOT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 21,	/* MIAFJUSTI */
/* 00096 */ HB_P_LINEOFFSET, 10,	/* 1597 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00122) */
/* 00112 */ HB_P_LINEOFFSET, 11,	/* 1598 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 1,	/* NOLBX */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00122) */
/* 00122 */ HB_P_LINEOFFSET, 13,	/* 1600 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* _NOLBX */
/* 00133 */ HB_P_LINEOFFSET, 14,	/* 1601 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 35,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 28,	/* CJA */
/* 00159 */ HB_P_LINEOFFSET, 16,	/* 1603 */
	HB_P_PUSHSYMNEAR, 33,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CJA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* ODLG2 */
/* 00170 */ HB_P_LINEOFFSET, 18,	/* 1605 */
	HB_P_MESSAGE, 36, 0,	/* BVALID */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 29,	/* OLDBVALID */
/* 00181 */ HB_P_LINEOFFSET, 20,	/* 1607 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* OLDBVALID */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00235) */
/* 00197 */ HB_P_LINEOFFSET, 21,	/* 1608 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	1, 0,	/* NOLBX */
	29, 0,	/* OLDBVALID */
	HB_P_PUSHSYMNEAR, 38,	/* VZVISTAFREE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_DOSHORT, 1,
	HB_P_MESSAGE, 39, 0,	/* EVAL */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00262) */
/* 00235 */ HB_P_LINEOFFSET, 23,	/* 1610 */
	HB_P_MESSAGE, 37, 0,	/* _BVALID */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* NOLBX */
	HB_P_PUSHSYMNEAR, 38,	/* VZVISTAFREE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00262 */ HB_P_LINEOFFSET, 27,	/* 1614 */
	HB_P_PUSHSYMNEAR, 40,	/* GETNUEVO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* ANUEVO1 */
/* 00273 */ HB_P_LINEOFFSET, 28,	/* 1615 */
	HB_P_PUSHSYMNEAR, 41,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* ARECT */
/* 00289 */ HB_P_LINEOFFSET, 30,	/* 1617 */
	HB_P_PUSHSYMNEAR, 43,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROSYMBOL,
	HB_P_DOSHORT, 1,
/* 00299 */ HB_P_LINEOFFSET, 31,	/* 1618 */
	HB_P_PUSHSYMNEAR, 43,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* _NOLBX */
	HB_P_MACROSYMBOL,
	HB_P_DOSHORT, 1,
/* 00309 */ HB_P_LINEOFFSET, 33,	/* 1620 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00333) */
/* 00325 */ HB_P_LINEOFFSET, 34,	/* 1621 */
	HB_P_LOCALNEARSETINT, 12, 30, 0,	/* MENOS30 30*/
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00333) */
/* 00333 */ HB_P_LINEOFFSET, 36,	/* 1623 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00350) */
	HB_P_TRUE,
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00355) */
	HB_P_PUSHLOCALNEAR, 7,	/* LSWDESC */
	HB_P_POPSTATIC, 4, 0,	/* SWDESC */
/* 00355 */ HB_P_LINEOFFSET, 40,	/* 1627 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00399) */
/* 00367 */ HB_P_LINEOFFSET, 41,	/* 1628 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00397) */
/* 00383 */ HB_P_LINEOFFSET, 42,	/* 1629 */
	HB_P_MESSAGE, 45, 0,	/* _PREWHERE */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 8,	/* PWHERE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00397) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00399) */
/* 00399 */ HB_P_LINEOFFSET, 45,	/* 1632 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 3, 0,	/* KBUFFER */
/* 00407 */ HB_P_LINEOFFSET, 46,	/* 1633 */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_POPSTATIC, 1, 0,	/* LASTVISTA */
/* 00414 */ HB_P_LINEOFFSET, 47,	/* 1634 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00435) */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00435) */
/* 00435 */ HB_P_LINEOFFSET, 48,	/* 1635 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00463) */
	HB_P_MESSAGE, 46, 0,	/* _SETLAND */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 2,	/* MODO */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00463) */
/* 00463 */ HB_P_LINEOFFSET, 49,	/* 1636 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00512) */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MIAFOOT */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MIAFJUSTI */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 00469) */
/* 00512 */ HB_P_LINEOFFSET, 50,	/* 1637 */
	HB_P_MESSAGE, 50, 0,	/* _AFOOTERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 20,	/* MIAFOOT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00524 */ HB_P_LINEOFFSET, 51,	/* 1638 */
	HB_P_MESSAGE, 51, 0,	/* _AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 21,	/* MIAFJUSTI */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00536 */ HB_P_LINEOFFSET, 53,	/* 1640 */
	HB_P_PUSHSYMNEAR, 52,	/* GETSELECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 2, 0,	/* VZSELECT */
/* 00548 */ HB_P_LINEOFFSET, 54,	/* 1641 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* NOHIDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00576) */
/* 00564 */ HB_P_LINEOFFSET, 55,	/* 1642 */
	HB_P_MESSAGE, 53, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00576) */
/* 00576 */ HB_P_LINEOFFSET, 57,	/* 1644 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NORESIZE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 00684) */
/* 00587 */ HB_P_LINEOFFSET, 58,	/* 1645 */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 12,	/* MENOS30 */
	HB_P_MINUS,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 26,	/* ARECT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00623 */ HB_P_LINEOFFSET, 59,	/* 1646 */
	HB_P_MESSAGE, 57, 0,	/* _BRESIZED */
	HB_P_PUSHLOCALNEAR, 23,	/* ODLG2 */
	HB_P_PUSHBLOCK, 49, 0,	/* 49 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	14, 0,	/* OLBX */
	23, 0,	/* ODLG2 */
	12, 0,	/* MENOS30 */
	26, 0,	/* ARECT */
	HB_P_MESSAGE, 54, 0,	/* SETSIZE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_MESSAGE, 55, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_MINUS,
	HB_P_MESSAGE, 56, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_TRUE,
	HB_P_SENDSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00684) */
/* 00684 */ HB_P_LINEOFFSET, 61,	/* 1648 */
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
	HB_P_JUMPFALSE, 139, 0,	/* 139 (abs: 00855) */
/* 00719 */ HB_P_LINEOFFSET, 63,	/* 1650 */
	HB_P_LOCALNEARSETSTR, 24, 22, 0,	/* C 22*/
	34, 'S', 'E', 'L', 'E', 'C', 'T', ' ', 34, '+', 'V', 'Z', 's', 'e', 'l', 'e', 'c', 't', '(', ')', '+', 0, 
/* 00747 */ HB_P_LINEOFFSET, 64,	/* 1651 */
	HB_P_PUSHLOCALNEAR, 24,	/* C */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	34, ' ', 'F', 'R', 'O', 'M', ' ', ' ', 34, '+', 'v', 'z', 'f', 'r', 'o', 'm', 'v', 'i', 's', 't', 'a', '(', ')', '+', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* C */
/* 00781 */ HB_P_LINEOFFSET, 65,	/* 1652 */
	HB_P_PUSHLOCALNEAR, 24,	/* C */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'v', 'z', 'w', 'h', 'e', 'r', 'e', 'v', 'i', 's', 't', 'a', '(', ')', '+', 'v', 'z', 'o', 'r', 'd', 'e', 'r', 'v', 'i', 's', 't', 'a', '(', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* C */
/* 00820 */ HB_P_LINEOFFSET, 67,	/* 1654 */
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
	HB_P_PUSHLOCALNEAR, 24,	/* C */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00855) */
/* 00855 */ HB_P_LINEOFFSET, 71,	/* 1658 */
	HB_P_MESSAGE, 58, 0,	/* _ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_MESSAGE, 10, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 11,	/* TMSQUERY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 13,	/* OMYSQL */
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00877 */ HB_P_LINEOFFSET, 72,	/* 1659 */
	HB_P_MESSAGE, 13, 0,	/* OPEN */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 60,	/* VZCSS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* VZLEESQL */
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
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00928 */ HB_P_LINEOFFSET, 73,	/* 1660 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00943 */ HB_P_LINEOFFSET, 75,	/* 1662 */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_MACROPOP, 11,
/* 00951 */ HB_P_LINEOFFSET, 78,	/* 1665 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01067) */
/* 00970 */ HB_P_LINEOFFSET, 79,	/* 1666 */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01065) */
/* 00988 */ HB_P_LINEOFFSET, 80,	/* 1667 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01058) */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01058) */
/* 01058 */ HB_P_LINEOFFSET, 81,	/* 1668 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01065) */
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 01162) */
/* 01067 */ HB_P_LINEOFFSET, 84,	/* 1671 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01162) */
/* 01085 */ HB_P_LINEOFFSET, 85,	/* 1672 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* NOMSJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01155) */
	HB_P_PUSHSYMNEAR, 63,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'o', ' ', 'h', 'a', 'y', ' ', 'd', 'a', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'e', 's', 't', 'a', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'L', 'o', ' ', 's', 'e', 'n', 't', 'i', 'm', 'o', 's', ' ', '.', '.', '.', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01155) */
/* 01155 */ HB_P_LINEOFFSET, 86,	/* 1673 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01162) */
/* 01162 */ HB_P_LINEOFFSET, 89,	/* 1676 */
	HB_P_MESSAGE, 64, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01172 */ HB_P_LINEOFFSET, 91,	/* 1678 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 65, 0,	/* CGROUP */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01213) */
/* 01189 */ HB_P_LINEOFFSET, 92,	/* 1679 */
	HB_P_PUSHSYMNEAR, 66,	/* VISTAQUIE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHLOCALNEAR, 27,	/* _NOLBX */
	HB_P_PUSHLOCALNEAR, 6,	/* SUMAENTRA */
	HB_P_PUSHLOCALNEAR, 10,	/* MANERA */
	HB_P_DOSHORT, 5,
/* 01206 */ HB_P_LINEOFFSET, 93,	/* 1680 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01213) */
/* 01213 */ HB_P_LINEOFFSET, 96,	/* 1683 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 167, 2,	/* 679 (abs: 01913) */
/* 01237 */ HB_P_LINEOFFSET, 97,	/* 1684 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 31, 2,	/* 543 (abs: 01797) */
/* 01257 */ HB_P_LINEOFFSET, 98,	/* 1685 */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01297) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 19,	/* 19 (abs: 01317) */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01350) */
/* 01319 */ HB_P_LINEOFFSET, 99,	/* 1686 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ACOLTOT */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01350) */
/* 01350 */ HB_P_LINEOFFSET, 101,	/* 1688 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* ANUEVO1 */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 155, 1,	/* 411 (abs: 01773) */
/* 01365 */ HB_P_LINEOFFSET, 103,	/* 1690 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 01635) */
/* 01394 */ HB_P_LINEOFFSET, 104,	/* 1691 */
	HB_P_MESSAGE, 17, 0,	/* FLDTYPE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01512) */
/* 01415 */ HB_P_LINEOFFSET, 105,	/* 1692 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_JUMP, 123, 0,	/* 123 (abs: 01632) */
/* 01512 */ HB_P_LINEOFFSET, 107,	/* 1694 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* VZ_999 */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 19, 0,	/* FLDLENGTH */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_MESSAGE, 20, 0,	/* FLDDEC */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_JUMP, 139, 0,	/* 139 (abs: 01771) */
/* 01635 */ HB_P_LINEOFFSET, 110,	/* 1697 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_SENDSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 01723) */
/* 01663 */ HB_P_LINEOFFSET, 111,	/* 1698 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 't', 'o', 'c', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	')', ')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 01771) */
/* 01723 */ HB_P_LINEOFFSET, 113,	/* 1700 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	':', 'a', 'C', 'u', 'r', 's', 'o', 'r', ':', 'F', 'l', 'd', 'G', 'e', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 01795) */
/* 01773 */ HB_P_LINEOFFSET, 116,	/* 1703 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHSYMNEAR, 2,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* ANUEVO1 */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 01904) */
/* 01797 */ HB_P_LINEOFFSET, 119,	/* 1706 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01854) */
/* 01823 */ HB_P_LINEOFFSET, 120,	/* 1707 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ACOLTOT */
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2,	/* 0.0, 1, 2 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01854) */
/* 01854 */ HB_P_LINEOFFSET, 122,	/* 1709 */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'v', 'z', 'b', 'i', 'e', 'n', '(', 34, 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ',', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
/* 01904 */ HB_P_LINEOFFSET, 124,	/* 1711 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMP, 77, 253,	/* -691 (abs: 01219) */
/* 01913 */ HB_P_LINEOFFSET, 125,	/* 1712 */
	HB_P_PUSHSYMNEAR, 34,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'}', '}', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* CADBLOCK */
/* 01941 */ HB_P_LINEOFFSET, 128,	/* 1715 */
	HB_P_MESSAGE, 71, 0,	/* _BLINE */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHLOCALNEAR, 17,	/* CADBLOCK */
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01955 */ HB_P_LINEOFFSET, 129,	/* 1716 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 01993) */
/* 01974 */ HB_P_LINEOFFSET, 130,	/* 1717 */
	HB_P_MESSAGE, 72, 0,	/* SETBROWSE */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 02010) */
/* 01993 */ HB_P_LINEOFFSET, 132,	/* 1719 */
	HB_P_MESSAGE, 73, 0,	/* SETARRAY */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02010 */ HB_P_LINEOFFSET, 134,	/* 1721 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 74, 0,	/* BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02033) */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 02066) */
/* 02033 */ HB_P_LINEOFFSET, 136,	/* 1723 */
	HB_P_MESSAGE, 75, 0,	/* _BKEYDOWN */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	2, 0,	/* number of local parameters (2) */
	2, 0,	/* number of local variables (2) */
	14, 0,	/* OLBX */
	23, 0,	/* ODLG2 */
	HB_P_PUSHSYMNEAR, 76,	/* VZBUSCINC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02066 */ HB_P_LINEOFFSET, 138,	/* 1725 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 77, 0,	/* BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02089) */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 02107) */
/* 02089 */ HB_P_LINEOFFSET, 140,	/* 1727 */
	HB_P_MESSAGE, 78, 0,	/* _BLDBLCLICK */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 79,	/* NADA */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02107 */ HB_P_LINEOFFSET, 143,	/* 1730 */
	HB_P_PUSHSYMNEAR, 6,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* HAYTOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 200, 1,	/* 456 (abs: 02572) */
/* 02119 */ HB_P_LINEOFFSET, 144,	/* 1731 */
	HB_P_MESSAGE, 80, 0,	/* _LDRAWFOOTERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02130 */ HB_P_LINEOFFSET, 145,	/* 1732 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* NATIVO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 184, 0,	/* 184 (abs: 02331) */
	HB_P_MESSAGE, 53, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 81, 0,	/* _NROW */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02172 */ HB_P_LINEOFFSET, 146,	/* 1733 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* MM 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* MM */
	HB_P_MESSAGE, 62, 0,	/* NROWCOUNT */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 02288) */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 22,	/* MM */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02223 */ HB_P_LINEOFFSET, 147,	/* 1734 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02280) */
/* 02241 */ HB_P_LINEOFFSET, 148,	/* 1735 */
	HB_P_PUSHLOCALNEAR, 16,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 67, 0,	/* FLDGET */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 16, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPOP,
/* 02272 */ HB_P_LINEOFFSET, 149,	/* 1736 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 207,	/* -49 (abs: 02229) */
/* 02280 */ HB_P_LINEOFFSET, 150,	/* 1737 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* MM 1*/
	HB_P_JUMPNEAR, 148,	/* -108 (abs: 02178) */
/* 02288 */ HB_P_LINEOFFSET, 151,	/* 1738 */
	HB_P_MESSAGE, 82, 0,	/* GOTO */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02304 */ HB_P_LINEOFFSET, 152,	/* 1739 */
	HB_P_MESSAGE, 15, 0,	/* LOAD */
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02319 */ HB_P_LINEOFFSET, 153,	/* 1740 */
	HB_P_MESSAGE, 64, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 02418) */
/* 02331 */ HB_P_LINEOFFSET, 155,	/* 1742 */
	HB_P_LOCALNEARSETINT, 19, 1, 0,	/* YY 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* YY */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 02418) */
/* 02354 */ HB_P_LINEOFFSET, 156,	/* 1743 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 02410) */
/* 02372 */ HB_P_LINEOFFSET, 157,	/* 1744 */
	HB_P_PUSHLOCALNEAR, 16,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_MESSAGE, 59, 0,	/* ACURSOR */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 19,	/* YY */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 16, 0,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPOP,
/* 02402 */ HB_P_LINEOFFSET, 158,	/* 1745 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 208,	/* -48 (abs: 02360) */
/* 02410 */ HB_P_LINEOFFSET, 159,	/* 1746 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* YY 1*/
	HB_P_JUMPNEAR, 177,	/* -79 (abs: 02337) */
/* 02418 */ HB_P_LINEOFFSET, 164,	/* 1751 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02473) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPOP,
/* 02453 */ HB_P_LINEOFFSET, 166,	/* 1753 */
	HB_P_FALSE,
	HB_P_MESSAGE, 84, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPOP,
/* 02465 */ HB_P_LINEOFFSET, 167,	/* 1754 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 209,	/* -47 (abs: 02424) */
/* 02473 */ HB_P_LINEOFFSET, 168,	/* 1755 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 02570) */
/* 02491 */ HB_P_LINEOFFSET, 170,	/* 1757 */
	HB_P_PUSHSYMNEAR, 85,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* ACOLTOT */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 83, 0,	/* AFOOTERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02532 */ HB_P_LINEOFFSET, 171,	/* 1758 */
	HB_P_TRUE,
	HB_P_MESSAGE, 84, 0,	/* AFJUSTIFY */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02547 */ HB_P_LINEOFFSET, 172,	/* 1759 */
	HB_P_TRUE,
	HB_P_MESSAGE, 86, 0,	/* AJUSTIFY */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 15,	/* ACOLNUM */
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYPOP,
/* 02562 */ HB_P_LINEOFFSET, 173,	/* 1760 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 167,	/* -89 (abs: 02479) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02572) */
/* 02572 */ HB_P_LINEOFFSET, 175,	/* 1762 */
	HB_P_MESSAGE, 87, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02582 */ HB_P_LINEOFFSET, 176,	/* 1763 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* NOACTIONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 121, 0,	/* 121 (abs: 02717) */
/* 02599 */ HB_P_LINEOFFSET, 178,	/* 1765 */
	HB_P_MESSAGE, 88, 0,	/* _AACTIONS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_PUSHSYMNEAR, 89,	/* ARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02626 */ HB_P_LINEOFFSET, 179,	/* 1766 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* XX 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AHEADERS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 02715) */
/* 02649 */ HB_P_LINEOFFSET, 180,	/* 1767 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'{', ' ', '|', '|', ' ', 'v', 'z', 'c', 'v', 'i', 's', 't', 'a', '(', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOLBX */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* CHR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ')', ' ', '}', ' ', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_MESSAGE, 91, 0,	/* AACTIONS */
	HB_P_PUSHLOCALNEAR, 14,	/* OLBX */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 18,	/* XX */
	HB_P_ARRAYPOP,
/* 02707 */ HB_P_LINEOFFSET, 181,	/* 1768 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* XX 1*/
	HB_P_JUMPNEAR, 175,	/* -81 (abs: 02632) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 02717) */
/* 02717 */ HB_P_LINEOFFSET, 183,	/* 1770 */
	HB_P_ONE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02722 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

static HARBOUR hb_INITSTATICS( void )
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 219, 0, 20, 0,	/* symbol (_INITSTATICS), 20 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

#line 9 "\\vclon\\mclon32\\visualgc.prg"
 
#include <hbapi.h>
#include <windows.h>
 
HB_FUNC( OUTPUTDEBUGSTRING )
{
   OutputDebugString( hb_parc( 1 ) );
}
 
#line 22 "\\vclon\\mclon32\\visualgc.prg"
 
#include <hbapi.h>
#include <windows.h>
 
HB_FUNC( ISEXERUNNING ) // ( cExeNameCaseSensitive ) --> lResult
{
   HANDLE hMutex = CreateMutex( NULL, TRUE, ( LPTSTR ) hb_parc( 1 ) );
 
   hb_retl( GetLastError() == ERROR_ALREADY_EXISTS );
 
   ReleaseMutex( hMutex );
}
 
