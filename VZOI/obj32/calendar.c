/*
 * xHarbour Compiler, build 82.0 (SimpLex)
 * Generated C source code from </educar/PROGRAM/calendar.prg>
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "/educar/PROGRAM/calendar.prg"

HB_FUNC( VZCALENDARIO );
HB_FUNC( VZCALENDAR );
HB_FUNC( RMMDT );
HB_FUNC_STATIC( INI_ODLGDT );
HB_FUNC_STATIC( AJUSTA );
HB_FUNC_STATIC( VALDIA );
HB_FUNC_STATIC( MESANO );
HB_FUNC( _CONFDATA );
HB_FUNC( _VERKEY );
HB_FUNC_STATIC( MYPAINT );
HB_FUNC( SETLAYEREDWINDOWATTRIBUTES );
HB_FUNC( VZCMONTH );
HB_FUNC( ANUAL );
HB_FUNC( TPICKDATE );
HB_FUNC_STATIC( TPICKDATE_NEW );
HB_FUNC_STATIC( TPICKDATE_REDEFINE );
HB_FUNC_STATIC( TPICKDATE_INITIATE );
HB_FUNC_STATIC( TPICKDATE_PAINT );
HB_FUNC_STATIC( TPICKDATE_DESTROY );
HB_FUNC_STATIC( TPICKDATE_LBUTTONDOWN );
HB_FUNC_STATIC( TPICKDATE_LBUTTONUP );
HB_FUNC_STATIC( TPICKDATE_MOUSEMOVE );
HB_FUNC( REGIONDATE );

static HARBOUR hb_INITSTATICS( void );

extern HB_FUNC( FILE );
extern HB_FUNC( RCLIPPER );
extern HB_FUNC( ALLTRIM );
extern HB_FUNC( H );
extern HB_FUNC( MEMOWRIT );
extern HB_FUNC( VZFORMS );
extern HB_FUNC( DAMEOBJ );
extern HB_FUNC( __MVPUBLIC );
extern HB_FUNC( SET );
extern HB_FUNC( __SETCENTURY );
extern HB_FUNC( DATE );
extern HB_FUNC( CTOD );
extern HB_FUNC( STRZERO );
extern HB_FUNC( MONTH );
extern HB_FUNC( YEAR );
extern HB_FUNC( TFONT );
extern HB_FUNC( DTOC );
extern HB_FUNC( STR );
extern HB_FUNC( CLIENTTOSCREEN );
extern HB_FUNC( GETCOORS );
extern HB_FUNC( GETDESKTOPWINDOW );
extern HB_FUNC( DOW );
extern HB_FUNC( DAY );
extern HB_FUNC( CREATEPEN );
extern HB_FUNC( SELECTOBJECT );
extern HB_FUNC( ARC );
extern HB_FUNC( DELETEOBJECT );
extern HB_FUNC( NRGB );
extern HB_FUNC( MOVETO );
extern HB_FUNC( LINETO );
extern HB_FUNC( SETWINDOWLONG );
extern HB_FUNC( NOR );
extern HB_FUNC( GETWINDOWLONG );
extern HB_FUNC( VALTYPE );
extern HB_FUNC( LOADLIBRARY );
extern HB_FUNC( ABS );
extern HB_FUNC( GETPROCADDRESS );
extern HB_FUNC( EMPTY );
extern HB_FUNC( CALLDLL );
extern HB_FUNC( FREELIBRARY );
extern HB_FUNC( MSGALERT );
extern HB_FUNC( LTRIM );
extern HB_FUNC( CCCMES );
extern HB_FUNC( HBCLASS );
extern HB_FUNC( __CLS_PARAM );
extern HB_FUNC( __CLSINST );
extern HB_FUNC( PCOUNT );
extern HB_FUNC( HB_APARAMS );
extern HB_FUNC( GETWNDDEFAULT );
extern HB_FUNC( TBRUSH );
extern HB_FUNC( TBUTTON );
extern HB_FUNC( FILLRECT );
extern HB_FUNC( GETCLIENTRECT );
extern HB_FUNC( GETTEXTWIDTH );
extern HB_FUNC( SUBSTR );
extern HB_FUNC( SEMANA );
extern HB_FUNC( MIN );
extern HB_FUNC( MAX );
extern HB_FUNC( INT );
extern HB_FUNC( ERRORSYS );
extern HB_FUNC( TCONTROL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 5

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CALENDAR )
{ "VZCALENDARIO", HB_FS_PUBLIC | HB_FS_FIRST, HB_FUNCNAME( VZCALENDARIO ), (PHB_DYNS) 1 },
{ "FILE", HB_FS_PUBLIC, HB_FUNCNAME( FILE ), NULL },
{ "RCLIPPER", HB_FS_PUBLIC, HB_FUNCNAME( RCLIPPER ), NULL },
{ "ALLTRIM", HB_FS_PUBLIC, HB_FUNCNAME( ALLTRIM ), NULL },
{ "H", HB_FS_PUBLIC, HB_FUNCNAME( H ), NULL },
{ "MEMOWRIT", HB_FS_PUBLIC, HB_FUNCNAME( MEMOWRIT ), NULL },
{ "VZFORMS", HB_FS_PUBLIC, HB_FUNCNAME( VZFORMS ), NULL },
{ "VZCALENDAR", HB_FS_PUBLIC, HB_FUNCNAME( VZCALENDAR ), (PHB_DYNS) 1 },
{ "DAMEOBJ", HB_FS_PUBLIC, HB_FUNCNAME( DAMEOBJ ), NULL },
{ "OSD1", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD2", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD3", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD4", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD5", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD6", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD7", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD8", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD9", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD10", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__MVPUBLIC", HB_FS_PUBLIC, HB_FUNCNAME( __MVPUBLIC ), NULL },
{ "OSD11", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD12", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD13", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD14", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD15", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD16", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD17", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD18", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD19", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD20", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD21", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD22", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD23", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD24", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD25", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD26", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD27", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD28", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD29", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD30", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OSD31", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SET", HB_FS_PUBLIC, HB_FUNCNAME( SET ), NULL },
{ "__SETCENTURY", HB_FS_PUBLIC, HB_FUNCNAME( __SETCENTURY ), NULL },
{ "DATE", HB_FS_PUBLIC, HB_FUNCNAME( DATE ), NULL },
{ "DDTA2", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "RMMDT", HB_FS_PUBLIC, HB_FUNCNAME( RMMDT ), (PHB_DYNS) 1 },
{ "CTOD", HB_FS_PUBLIC, HB_FUNCNAME( CTOD ), NULL },
{ "STRZERO", HB_FS_PUBLIC, HB_FUNCNAME( STRZERO ), NULL },
{ "MONTH", HB_FS_PUBLIC, HB_FUNCNAME( MONTH ), NULL },
{ "YEAR", HB_FS_PUBLIC, HB_FUNCNAME( YEAR ), NULL },
{ "NEW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TFONT", HB_FS_PUBLIC, HB_FUNCNAME( TFONT ), NULL },
{ "_BPAINTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MYPAINT", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( MYPAINT ), (PHB_DYNS) 1 },
{ "INI_ODLGDT", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( INI_ODLGDT ), (PHB_DYNS) 1 },
{ "SETTEXT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETFOCUS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DTOC", HB_FS_PUBLIC, HB_FUNCNAME( DTOC ), NULL },
{ "STR", HB_FS_PUBLIC, HB_FUNCNAME( STR ), NULL },
{ "_LWANTCLICK", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BLBUTTONUP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "AJUSTA", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( AJUSTA ), (PHB_DYNS) 1 },
{ "CLIENTTOSCREEN", HB_FS_PUBLIC, HB_FUNCNAME( CLIENTTOSCREEN ), NULL },
{ "HWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETCOORS", HB_FS_PUBLIC, HB_FUNCNAME( GETCOORS ), NULL },
{ "GETDESKTOPWINDOW", HB_FS_PUBLIC, HB_FUNCNAME( GETDESKTOPWINDOW ), NULL },
{ "DOW", HB_FS_PUBLIC, HB_FUNCNAME( DOW ), NULL },
{ "VALDIA", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( VALDIA ), (PHB_DYNS) 1 },
{ "SETCOLOR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DAY", HB_FS_PUBLIC, HB_FUNCNAME( DAY ), NULL },
{ "SETFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NTOP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NLEFT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SHOW", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HIDE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MESANO", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( MESANO ), (PHB_DYNS) 1 },
{ "_CONFDATA", HB_FS_PUBLIC, HB_FUNCNAME( _CONFDATA ), (PHB_DYNS) 1 },
{ "CCAPTION", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_VERKEY", HB_FS_PUBLIC, HB_FUNCNAME( _VERKEY ), (PHB_DYNS) 1 },
{ "GETDC", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "CREATEPEN", HB_FS_PUBLIC, HB_FUNCNAME( CREATEPEN ), NULL },
{ "SELECTOBJECT", HB_FS_PUBLIC, HB_FUNCNAME( SELECTOBJECT ), NULL },
{ "HDC", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HOLDPEN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ARC", HB_FS_PUBLIC, HB_FUNCNAME( ARC ), NULL },
{ "DELETEOBJECT", HB_FS_PUBLIC, HB_FUNCNAME( DELETEOBJECT ), NULL },
{ "NRGB", HB_FS_PUBLIC, HB_FUNCNAME( NRGB ), NULL },
{ "MOVETO", HB_FS_PUBLIC, HB_FUNCNAME( MOVETO ), NULL },
{ "LINETO", HB_FS_PUBLIC, HB_FUNCNAME( LINETO ), NULL },
{ "RELEASEDC", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REFRESH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SETWINDOWLONG", HB_FS_PUBLIC, HB_FUNCNAME( SETWINDOWLONG ), NULL },
{ "NOR", HB_FS_PUBLIC, HB_FUNCNAME( NOR ), NULL },
{ "GETWINDOWLONG", HB_FS_PUBLIC, HB_FUNCNAME( GETWINDOWLONG ), NULL },
{ "SETLAYEREDWINDOWATTRIBUTES", HB_FS_PUBLIC, HB_FUNCNAME( SETLAYEREDWINDOWATTRIBUTES ), (PHB_DYNS) 1 },
{ "VALTYPE", HB_FS_PUBLIC, HB_FUNCNAME( VALTYPE ), NULL },
{ "LOADLIBRARY", HB_FS_PUBLIC, HB_FUNCNAME( LOADLIBRARY ), NULL },
{ "ABS", HB_FS_PUBLIC, HB_FUNCNAME( ABS ), NULL },
{ "GETPROCADDRESS", HB_FS_PUBLIC, HB_FUNCNAME( GETPROCADDRESS ), NULL },
{ "EMPTY", HB_FS_PUBLIC, HB_FUNCNAME( EMPTY ), NULL },
{ "CALLDLL", HB_FS_PUBLIC, HB_FUNCNAME( CALLDLL ), NULL },
{ "FREELIBRARY", HB_FS_PUBLIC, HB_FUNCNAME( FREELIBRARY ), NULL },
{ "MSGALERT", HB_FS_PUBLIC, HB_FUNCNAME( MSGALERT ), NULL },
{ "LTRIM", HB_FS_PUBLIC, HB_FUNCNAME( LTRIM ), NULL },
{ "VZCMONTH", HB_FS_PUBLIC, HB_FUNCNAME( VZCMONTH ), (PHB_DYNS) 1 },
{ "CCCMES", HB_FS_PUBLIC, HB_FUNCNAME( CCCMES ), NULL },
{ "ANUAL", HB_FS_PUBLIC, HB_FUNCNAME( ANUAL ), (PHB_DYNS) 1 },
{ "TPICKDATE", HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE ), (PHB_DYNS) 1 },
{ "NWIDTH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NHEIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_BSELECT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "SAY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HBCLASS", HB_FS_PUBLIC, HB_FUNCNAME( HBCLASS ), NULL },
{ "__CLS_PARAM", HB_FS_PUBLIC, HB_FUNCNAME( __CLS_PARAM ), NULL },
{ "ADDMULTIDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMULTICLSDATA", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDMETHOD", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TPICKDATE_NEW", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_NEW ), (PHB_DYNS) 1 },
{ "TPICKDATE_REDEFINE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_REDEFINE ), (PHB_DYNS) 1 },
{ "TPICKDATE_INITIATE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_INITIATE ), (PHB_DYNS) 1 },
{ "TPICKDATE_PAINT", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_PAINT ), (PHB_DYNS) 1 },
{ "ADDINLINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BEGINPAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "PAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ENDPAINT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TPICKDATE_DESTROY", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_DESTROY ), (PHB_DYNS) 1 },
{ "TPICKDATE_LBUTTONDOWN", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_LBUTTONDOWN ), (PHB_DYNS) 1 },
{ "TPICKDATE_LBUTTONUP", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_LBUTTONUP ), (PHB_DYNS) 1 },
{ "_NYEAR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NYEAR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TPICKDATE_MOUSEMOVE", HB_FS_STATIC | HB_FS_PUBLIC, HB_FUNCNAME( TPICKDATE_MOUSEMOVE ), (PHB_DYNS) 1 },
{ "CREATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HCLASS", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "__CLSINST", HB_FS_PUBLIC, HB_FUNCNAME( __CLSINST ), NULL },
{ "PCOUNT", HB_FS_PUBLIC, HB_FUNCNAME( PCOUNT ), NULL },
{ "CONSTRUCTORCALL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HB_APARAMS", HB_FS_PUBLIC, HB_FUNCNAME( HB_APARAMS ), NULL },
{ "GETWNDDEFAULT", HB_FS_PUBLIC, HB_FUNCNAME( GETWNDDEFAULT ), NULL },
{ "_LMOVE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NTOPSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NLEFTSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NBOTTOM", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NRIGHT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OWND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_DSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_DEND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_DTEMP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NCLRTEXT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NCLRPANE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NSTYLE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OBRUSHSUNDAY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TBRUSH", HB_FS_PUBLIC, HB_FUNCNAME( TBRUSH ), NULL },
{ "_OBRUSHSELECTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_OFONTHEADER", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REGISTER", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ADDCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TBUTTON", HB_FS_PUBLIC, HB_FUNCNAME( TBUTTON ), NULL },
{ "PREVIOUSYEAR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NEXTYEAR", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DEFCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "_NID", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "INITIATE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "TCONTROL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, HB_FUNCNAME( TCONTROL ), NULL },
{ "FILLRECT", HB_FS_PUBLIC, HB_FUNCNAME( FILLRECT ), NULL },
{ "GETCLIENTRECT", HB_FS_PUBLIC, HB_FUNCNAME( GETCLIENTRECT ), NULL },
{ "NTOPSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "NLEFTSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "GETTEXTWIDTH", HB_FS_PUBLIC, HB_FUNCNAME( GETTEXTWIDTH ), NULL },
{ "HFONT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "HBRUSH", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OBRUSHSUNDAY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LINE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "REGIONDATE", HB_FS_PUBLIC, HB_FUNCNAME( REGIONDATE ), (PHB_DYNS) 1 },
{ "SUBSTR", HB_FS_PUBLIC, HB_FUNCNAME( SUBSTR ), NULL },
{ "SEMANA", HB_FS_PUBLIC, HB_FUNCNAME( SEMANA ), NULL },
{ "OFONTHEADER", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BPAINTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "EVAL", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MIN", HB_FS_PUBLIC, HB_FUNCNAME( MIN ), NULL },
{ "DSTART", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DEND", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MAX", HB_FS_PUBLIC, HB_FUNCNAME( MAX ), NULL },
{ "END", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "OBRUSHSELECTED", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DESTROY", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "INT", HB_FS_PUBLIC, HB_FUNCNAME( INT ), NULL },
{ "LBUTTONDOWN", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BSELECT", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LBUTTONUP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "LMOVE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "DTEMP", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "BCHANGE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "MOUSEMOVE", HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE, NULL, NULL },
{ "ERRORSYS", HB_FS_PUBLIC, HB_FUNCNAME( ERRORSYS ), NULL },
{ "(_INITSTATICS)", HB_FS_INIT | HB_FS_EXIT, hb_INITSTATICS, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CALENDAR )

#if defined(HB_STATIC_STARTUP)
   #pragma startup hb_vm_SymbolInit_CALENDAR
#elif defined(_MSC_VER)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CALENDAR = hb_vm_SymbolInit_CALENDAR;
   #pragma data_seg()
#elif ! defined(__GNUC__)
   #pragma startup hb_vm_SymbolInit_CALENDAR
#endif

HB_FUNC( VZCALENDARIO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 25, 0,	/* 25 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* T 1*/
	0, 
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 26 */
	HB_P_PUSHSYMNEAR, 1,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'f', 'r', 'm', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 55, 57,	/* 14647 (abs: 14696) */
/* 00052 */ HB_P_LINEOFFSET, 2,	/* 27 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 72, 1,	/* 328 */
	'T', 'D', 'I', 'A', 'L', 'O', 'G', '|', 'N', 'I', 'D', '=', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'F', 'o', 'r', 'm', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'F', 'o', 'r', 'm', ' ', 'D', 'e', 's', 'i', 'g', 'n', 'e', 'r', ' ', ' ', 'C', 'A', 'L', 'E', 'N', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '5', '6', '2', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '9', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'B', 'I', 'N', 'I', 'T', '=', 'v', 'z', 'c', 'a', 'l', 'e', 'n', 'd', 'a', 'r', '(', 39, 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	39, ',', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'_', '1', '1', '2', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 00419 */ HB_P_LINEOFFSET, 3,	/* 28 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 143, 1,	/* 399 */
	'T', 'S', 'B', 'U', 'T', 'T', 'O', 'N', '|', 'N', 'I', 'D', '=', '1', '0', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'B', 't', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '<', '<', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '4', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '0', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '(', ' ', 'M', 'e', 's', 'A', 'n', 'o', '(', '-', '1', ')', ',', ' ', 'A', 'j', 'u', 's', 't', 'a', '(', ')', ' ', ')', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'T', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'I', 'T', 'M', 'A', 'P', '=', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'R', 'U', 'S', 'H', '=', '|', 'C', 'B', 'O', 'R', 'D', 'E', 'R', '=', '|', 'L', 'W', '9', '7', '=', 'F', '|', 'L', 'T', 'R', 'A', 'N', 'S', 'P', 'A', 'R', 'E', 'N', 'T', '=', 'F', '|', 'L', 'A', 'D', 'J', 'U', 'S', 'T', '=', 'F', '|', 'N', 'C', 'A', 'P', 'T', 'P', 'O', 'S', '=', '5', '|', 'L', 'O', 'P', 'A', 'Q', 'U', 'E', '=', 'F', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 00834 */ HB_P_LINEOFFSET, 4,	/* 29 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 73, 1,	/* 329 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '2', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'F', 'e', 'b', 'r', 'e', 'r', 'o', ' ', 'd', 'e', ' ', '2', '0', '0', '9', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '3', '9', '5', '9', '1', '6', '8', '|', 'N', 'T', 'O', 'P', '=', '8', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '7', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '1', '4', '3', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 01179 */ HB_P_LINEOFFSET, 5,	/* 30 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 142, 1,	/* 398 */
	'T', 'S', 'B', 'U', 'T', 'T', 'O', 'N', '|', 'N', 'I', 'D', '=', '1', '0', '3', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'B', 't', '3', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '>', '>', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '3', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '5', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '2', '2', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '(', ' ', 'M', 'e', 's', 'A', 'n', 'o', '(', '1', ')', ',', ' ', 'A', 'j', 'u', 's', 't', 'a', '(', ')', ')', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'T', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'I', 'T', 'M', 'A', 'P', '=', '|', 'C', 'R', 'U', 'T', 'A', 'B', 'R', 'U', 'S', 'H', '=', '|', 'C', 'B', 'O', 'R', 'D', 'E', 'R', '=', '|', 'L', 'W', '9', '7', '=', 'F', '|', 'L', 'T', 'R', 'A', 'N', 'S', 'P', 'A', 'R', 'E', 'N', 'T', '=', 'F', '|', 'L', 'A', 'D', 'J', 'U', 'S', 'T', '=', 'F', '|', 'N', 'C', 'A', 'P', 'T', 'P', 'O', 'S', '=', '5', '|', 'L', 'O', 'P', 'A', 'Q', 'U', 'E', '=', 'F', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 01593 */ HB_P_LINEOFFSET, 6,	/* 31 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '4', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '4', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'D', 'O', 'M', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 01924 */ HB_P_LINEOFFSET, 7,	/* 32 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '5', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '5', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'L', 'U', 'N', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 02255 */ HB_P_LINEOFFSET, 8,	/* 33 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '6', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'M', 'A', 'R', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '8', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 02586 */ HB_P_LINEOFFSET, 9,	/* 34 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '7', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '7', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'M', 'I', 'E', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '2', '6', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 02918 */ HB_P_LINEOFFSET, 10,	/* 35 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '8', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '8', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'J', 'U', 'E', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '6', '4', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 03250 */ HB_P_LINEOFFSET, 11,	/* 36 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '9', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '9', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'V', 'I', 'E', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '0', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 03582 */ HB_P_LINEOFFSET, 12,	/* 37 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 61, 1,	/* 317 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '1', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '0', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', 'S', 'A', 'B', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '5', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '4', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '3', '8', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '5', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 03915 */ HB_P_LINEOFFSET, 13,	/* 38 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '1', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '2', '5', '5', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 04246 */ HB_P_LINEOFFSET, 14,	/* 39 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '8', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '2', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '8', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '2', '5', '5', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 04578 */ HB_P_LINEOFFSET, 15,	/* 40 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 57, 1,	/* 313 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '9', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '3', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '8', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '2', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 04907 */ HB_P_LINEOFFSET, 16,	/* 41 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 61, 1,	/* 317 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '2', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '4', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '2', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '2', '5', '5', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 05240 */ HB_P_LINEOFFSET, 17,	/* 42 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 61, 1,	/* 317 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '5', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '5', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '5', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '2', '5', '5', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 05573 */ HB_P_LINEOFFSET, 18,	/* 43 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 57, 1,	/* 313 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '6', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '2', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 05902 */ HB_P_LINEOFFSET, 19,	/* 44 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 57, 1,	/* 313 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '3', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '7', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '3', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 06231 */ HB_P_LINEOFFSET, 20,	/* 45 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 58, 1,	/* 314 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '4', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '8', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '4', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '3', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 06561 */ HB_P_LINEOFFSET, 21,	/* 46 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 58, 1,	/* 314 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '5', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '1', '9', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '5', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 06891 */ HB_P_LINEOFFSET, 22,	/* 47 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 58, 1,	/* 314 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '0', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '6', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 07221 */ HB_P_LINEOFFSET, 23,	/* 48 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 58, 1,	/* 314 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '7', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '7', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '9', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 07551 */ HB_P_LINEOFFSET, 24,	/* 49 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 58, 1,	/* 314 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '9', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '2', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '0', '9', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 07881 */ HB_P_LINEOFFSET, 25,	/* 50 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '3', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '0', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 08212 */ HB_P_LINEOFFSET, 26,	/* 51 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '4', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '1', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '3', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 08544 */ HB_P_LINEOFFSET, 27,	/* 52 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '2', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '5', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '2', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 08876 */ HB_P_LINEOFFSET, 28,	/* 53 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '3', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '6', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '3', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 09208 */ HB_P_LINEOFFSET, 29,	/* 54 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '4', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '7', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '4', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '1', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 09540 */ HB_P_LINEOFFSET, 30,	/* 55 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '8', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '6', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 09871 */ HB_P_LINEOFFSET, 31,	/* 56 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '7', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '2', '9', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '7', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 10202 */ HB_P_LINEOFFSET, 32,	/* 57 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '8', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '0', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '8', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '3', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 10534 */ HB_P_LINEOFFSET, 33,	/* 58 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '1', '9', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '1', '9', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 10866 */ HB_P_LINEOFFSET, 34,	/* 59 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '2', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '0', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 11198 */ HB_P_LINEOFFSET, 35,	/* 60 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '3', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '1', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '4', '0', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 11530 */ HB_P_LINEOFFSET, 36,	/* 61 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '3', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '4', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '3', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 11861 */ HB_P_LINEOFFSET, 37,	/* 62 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 59, 1,	/* 315 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '4', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '5', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '4', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '9', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 12192 */ HB_P_LINEOFFSET, 38,	/* 63 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '5', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '6', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '5', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '3', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 12524 */ HB_P_LINEOFFSET, 39,	/* 64 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '6', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '7', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '6', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '1', '7', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 12856 */ HB_P_LINEOFFSET, 40,	/* 65 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '7', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '8', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '7', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '1', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 13188 */ HB_P_LINEOFFSET, 41,	/* 66 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 60, 1,	/* 316 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '2', '8', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '3', '9', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '2', '8', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '6', '5', '|', 'N', 'L', 'E', 'F', 'T', '=', '2', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 13520 */ HB_P_LINEOFFSET, 42,	/* 67 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 57, 1,	/* 313 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '3', '0', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '4', '0', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '8', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '5', '0', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 13849 */ HB_P_LINEOFFSET, 43,	/* 68 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 57, 1,	/* 313 */
	'T', 'S', 'A', 'Y', '|', 'N', 'I', 'D', '=', '3', '1', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'S', 'a', 'y', '4', '1', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '1', '8', '6', '|', 'N', 'L', 'E', 'F', 'T', '=', '8', '8', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '6', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 14178 */ HB_P_LINEOFFSET, 44,	/* 69 */
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_PUSHSTR, 205, 1,	/* 461 */
	'T', 'G', 'E', 'T', '|', 'N', 'I', 'D', '=', '1', '1', '2', '|', 'C', 'V', 'A', 'R', 'N', 'A', 'M', 'E', '=', 'o', 'G', 'e', 't', '1', '1', '2', '|', 'C', 'C', 'A', 'P', 'T', 'I', 'O', 'N', '=', '|', 'N', 'C', 'L', 'R', 'T', 'E', 'X', 'T', '=', '0', '|', 'N', 'C', 'L', 'R', 'P', 'A', 'N', 'E', '=', '1', '6', '7', '7', '7', '2', '1', '5', '|', 'N', 'T', 'O', 'P', '=', '2', '3', '7', '|', 'N', 'L', 'E', 'F', 'T', '=', '8', '4', '|', 'N', 'W', 'I', 'D', 'T', 'H', '=', '1', '2', '0', '|', 'N', 'H', 'E', 'I', 'G', 'H', 'T', '=', '1', '8', '|', 'C', 'T', 'O', 'O', 'L', 'T', 'I', 'P', '=', '|', 'C', '_', 'B', 'V', 'A', 'L', 'I', 'D', '=', '|', 'C', '_', 'B', 'K', 'E', 'Y', 'D', 'O', 'W', 'N', '=', '|', 'C', '_', 'B', 'L', 'D', 'B', 'L', 'C', 'L', 'I', 'C', 'K', '=', '|', 'C', '_', 'B', 'L', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'R', 'C', 'L', 'I', 'C', 'K', 'E', 'D', '=', '|', 'C', '_', 'B', 'M', 'M', 'O', 'V', 'E', 'D', '=', '|', 'C', '_', 'B', 'G', 'O', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'L', 'O', 'S', 'T', 'F', 'O', 'C', 'U', 'S', '=', '|', 'C', '_', 'B', 'D', 'R', 'A', 'G', 'B', 'E', 'G', 'I', 'N', '=', '|', 'C', '_', 'B', 'D', 'R', 'O', 'P', 'O', 'V', 'E', 'R', '=', '|', 'C', 'A', 'F', 'O', 'N', 'T', 'S', '=', '|', 'L', 'C', 'A', 'N', 'C', 'E', 'L', '=', 'F', '|', 'N', 'I', 'D', 'F', 'O', 'L', 'D', 'E', 'R', '=', '0', '|', 'N', 'P', 'A', 'G', 'I', 'N', 'A', '=', '0', '|', 'C', '_', 'C', 'A', 'M', 'P', 'O', '=', '|', 'C', '_', 'T', 'A', 'B', 'L', 'A', '=', '|', 'C', 'S', 'W', 'B', 'L', 'A', 'N', '=', '|', 'C', 'N', 'F', 'I', 'E', '=', '|', 'C', '_', 'F', 'I', 'L', 'T', 'R', 'O', '=', '|', 'C', '_', 'A', 'Y', 'U', 'D', 'A', '=', '|', 'C', '_', 'V', 'A', 'R', 'N', 'A', 'M', 'E', 'S', 'A', 'Y', '=', '|', 'C', '_', 'C', 'A', 'R', 'G', 'A', 'R', '=', '|', 'C', '_', 'F', 'U', 'N', 'S', 'O', 'L', 'O', 'L', 'E', 'C', 'T', 'U', 'R', 'A', '=', '|', 'L', 'R', 'E', 'A', 'D', 'O', 'N', 'L', 'Y', '=', 'F', '|', 'L', 'P', 'A', 'S', 'S', 'W', 'O', 'R', 'D', '=', 'F', '|', 'C', 'P', 'I', 'C', 'T', 'U', 'R', 'E', '=', '|', 'C', '_', 'B', 'C', 'H', 'A', 'N', 'G', 'E', '=', '|', 'L', 'L', 'C', 'E', 'N', 'T', 'E', 'R', '=', 'F', '|', 'L', 'L', 'R', 'I', 'G', 'H', 'T', '=', 'F', '|', 'L', 'L', 'N', 'O', 'B', 'O', 'R', 'D', 'E', 'R', '=', 'F', 0, 
	HB_P_PUSHSYMNEAR, 4,	/* H */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* T */
/* 14655 */ HB_P_LINEOFFSET, 45,	/* 70 */
	HB_P_PUSHSYMNEAR, 5,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* RCLIPPER */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'O', 'R', 'M', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'f', 'r', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* T */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 14696) */
/* 14696 */ HB_P_LINEOFFSET, 47,	/* 72 */
	HB_P_PUSHSYMNEAR, 6,	/* VZFORMS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHLOCALNEAR, 2,	/* TITI */
	HB_P_DOSHORT, 2,
/* 14707 */ HB_P_LINEOFFSET, 48,	/* 73 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 14712 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZCALENDAR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 77, 0,	/* 77 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOMGET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* OGET */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 78 */
	HB_P_PUSHSYMNEAR, 19,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* OSD1 */
	HB_P_PUSHSYMNEAR, 10,	/* OSD2 */
	HB_P_PUSHSYMNEAR, 11,	/* OSD3 */
	HB_P_PUSHSYMNEAR, 12,	/* OSD4 */
	HB_P_PUSHSYMNEAR, 13,	/* OSD5 */
	HB_P_PUSHSYMNEAR, 14,	/* OSD6 */
	HB_P_PUSHSYMNEAR, 15,	/* OSD7 */
	HB_P_PUSHSYMNEAR, 16,	/* OSD8 */
	HB_P_PUSHSYMNEAR, 17,	/* OSD9 */
	HB_P_PUSHSYMNEAR, 18,	/* OSD10 */
	HB_P_DOSHORT, 10,
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 79 */
	HB_P_PUSHSYMNEAR, 19,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* OSD11 */
	HB_P_PUSHSYMNEAR, 21,	/* OSD12 */
	HB_P_PUSHSYMNEAR, 22,	/* OSD13 */
	HB_P_PUSHSYMNEAR, 23,	/* OSD14 */
	HB_P_PUSHSYMNEAR, 24,	/* OSD15 */
	HB_P_PUSHSYMNEAR, 25,	/* OSD16 */
	HB_P_PUSHSYMNEAR, 26,	/* OSD17 */
	HB_P_PUSHSYMNEAR, 27,	/* OSD18 */
	HB_P_PUSHSYMNEAR, 28,	/* OSD19 */
	HB_P_PUSHSYMNEAR, 29,	/* OSD20 */
	HB_P_DOSHORT, 10,
/* 00072 */ HB_P_LINEOFFSET, 3,	/* 80 */
	HB_P_PUSHSYMNEAR, 19,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* OSD21 */
	HB_P_PUSHSYMNEAR, 31,	/* OSD22 */
	HB_P_PUSHSYMNEAR, 32,	/* OSD23 */
	HB_P_PUSHSYMNEAR, 33,	/* OSD24 */
	HB_P_PUSHSYMNEAR, 34,	/* OSD25 */
	HB_P_PUSHSYMNEAR, 35,	/* OSD26 */
	HB_P_PUSHSYMNEAR, 36,	/* OSD27 */
	HB_P_PUSHSYMNEAR, 37,	/* OSD28 */
	HB_P_PUSHSYMNEAR, 38,	/* OSD29 */
	HB_P_PUSHSYMNEAR, 39,	/* OSD30 */
	HB_P_DOSHORT, 10,
/* 00099 */ HB_P_LINEOFFSET, 4,	/* 81 */
	HB_P_PUSHSYMNEAR, 19,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* OSD31 */
	HB_P_DOSHORT, 1,
/* 00108 */ HB_P_LINEOFFSET, 6,	/* 83 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 9, 0,	/* ODLGDT */
/* 00120 */ HB_P_LINEOFFSET, 7,	/* 84 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 42,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00149) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00160) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 00162 */ HB_P_LINEOFFSET, 8,	/* 85 */
	HB_P_PUSHSYMNEAR, 42,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00174 */ HB_P_LINEOFFSET, 9,	/* 86 */
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 44, 0,	/* DDTA2 */
/* 00184 */ HB_P_LINEOFFSET, 10,	/* 87 */
	HB_P_PUSHSYMNEAR, 45,	/* RMMDT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHLOCALNEAR, 4,	/* OGET */
	HB_P_PUSHMEMVARREF, 44, 0,	/* DDTA2 */
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 00199 */ HB_P_LINEOFFSET, 11,	/* 88 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00204 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( RMMDT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 4,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 92, 0,	/* 92 */
	HB_P_PUSHLOCALNEAR, 4,	/* _LTRANSP */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00018) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00020) */
	HB_P_PUSHLOCALNEAR, 4,	/* _LTRANSP */
	HB_P_POPLOCALNEAR, 4,	/* _LTRANSP */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* OSD1 */
/* 00038 */ HB_P_LINEOFFSET, 3,	/* 95 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '2', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* OSD2 */
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 96 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '3', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 11, 0,	/* OSD3 */
/* 00074 */ HB_P_LINEOFFSET, 5,	/* 97 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '4', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* OSD4 */
/* 00092 */ HB_P_LINEOFFSET, 6,	/* 98 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '5', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* OSD5 */
/* 00110 */ HB_P_LINEOFFSET, 7,	/* 99 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '6', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 14, 0,	/* OSD6 */
/* 00128 */ HB_P_LINEOFFSET, 8,	/* 100 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '7', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 15, 0,	/* OSD7 */
/* 00146 */ HB_P_LINEOFFSET, 9,	/* 101 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '8', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 16, 0,	/* OSD8 */
/* 00164 */ HB_P_LINEOFFSET, 10,	/* 102 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'_', '9', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 17, 0,	/* OSD9 */
/* 00182 */ HB_P_LINEOFFSET, 11,	/* 103 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 18, 0,	/* OSD10 */
/* 00201 */ HB_P_LINEOFFSET, 12,	/* 104 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 20, 0,	/* OSD11 */
/* 00220 */ HB_P_LINEOFFSET, 13,	/* 105 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '2', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 21, 0,	/* OSD12 */
/* 00239 */ HB_P_LINEOFFSET, 14,	/* 106 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '3', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 22, 0,	/* OSD13 */
/* 00258 */ HB_P_LINEOFFSET, 15,	/* 107 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '4', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 23, 0,	/* OSD14 */
/* 00277 */ HB_P_LINEOFFSET, 16,	/* 108 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '5', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 24, 0,	/* OSD15 */
/* 00296 */ HB_P_LINEOFFSET, 17,	/* 109 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '6', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 25, 0,	/* OSD16 */
/* 00315 */ HB_P_LINEOFFSET, 18,	/* 110 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '7', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* OSD17 */
/* 00334 */ HB_P_LINEOFFSET, 19,	/* 111 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '8', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 27, 0,	/* OSD18 */
/* 00353 */ HB_P_LINEOFFSET, 20,	/* 112 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '1', '9', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 28, 0,	/* OSD19 */
/* 00372 */ HB_P_LINEOFFSET, 21,	/* 113 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 29, 0,	/* OSD20 */
/* 00391 */ HB_P_LINEOFFSET, 22,	/* 114 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 30, 0,	/* OSD21 */
/* 00410 */ HB_P_LINEOFFSET, 23,	/* 115 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '2', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 31, 0,	/* OSD22 */
/* 00429 */ HB_P_LINEOFFSET, 24,	/* 116 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '3', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* OSD23 */
/* 00448 */ HB_P_LINEOFFSET, 25,	/* 117 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '4', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 33, 0,	/* OSD24 */
/* 00467 */ HB_P_LINEOFFSET, 26,	/* 118 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '5', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* OSD25 */
/* 00486 */ HB_P_LINEOFFSET, 27,	/* 119 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '6', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* OSD26 */
/* 00505 */ HB_P_LINEOFFSET, 28,	/* 120 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '7', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 36, 0,	/* OSD27 */
/* 00524 */ HB_P_LINEOFFSET, 29,	/* 121 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '8', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 37, 0,	/* OSD28 */
/* 00543 */ HB_P_LINEOFFSET, 30,	/* 122 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '2', '9', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 38, 0,	/* OSD29 */
/* 00562 */ HB_P_LINEOFFSET, 31,	/* 123 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '3', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 39, 0,	/* OSD30 */
/* 00581 */ HB_P_LINEOFFSET, 32,	/* 124 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'_', '3', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 40, 0,	/* OSD31 */
/* 00600 */ HB_P_LINEOFFSET, 34,	/* 126 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '0', '2', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 10, 0,	/* OSAY2 */
/* 00620 */ HB_P_LINEOFFSET, 36,	/* 128 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 11, 0,	/* OBUT1 */
/* 00640 */ HB_P_LINEOFFSET, 37,	/* 129 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', '1', '0', '3', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 12, 0,	/* OBUT2 */
/* 00660 */ HB_P_LINEOFFSET, 40,	/* 132 */
	HB_P_PUSHLOCALNEAR, 4,	/* _LTRANSP */
	HB_P_POPSTATIC, 4, 0,	/* LTRANSP */
/* 00667 */ HB_P_LINEOFFSET, 41,	/* 133 */
	HB_P_PUSHLOCALNEAR, 3,	/* DD */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00693) */
/* 00682 */ HB_P_LINEOFFSET, 42,	/* 134 */
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* DD */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00693) */
/* 00693 */ HB_P_LINEOFFSET, 44,	/* 136 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 42,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00722) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00733) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 00735 */ HB_P_LINEOFFSET, 45,	/* 137 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '/', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* DD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* DD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 21, 0,	/* DDATA */
/* 00786 */ HB_P_LINEOFFSET, 46,	/* 138 */
	HB_P_FALSE,
	HB_P_POPSTATIC, 7, 0,	/* LCONF */
/* 00792 */ HB_P_LINEOFFSET, 47,	/* 139 */
	HB_P_PUSHLOCALNEAR, 3,	/* DD */
	HB_P_POPSTATIC, 8, 0,	/* DATECONF */
/* 00799 */ HB_P_LINEOFFSET, 49,	/* 141 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'u', 'r', 'i', 'e', 'r', ' ', 'N', 'e', 'w', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 243,	/* -13 */
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
	HB_P_POPSTATIC, 1, 0,	/* OFONT1 */
/* 00845 */ HB_P_LINEOFFSET, 50,	/* 142 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'u', 'r', 'i', 'e', 'r', ' ', 'N', 'e', 'w', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 241,	/* -15 */
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
	HB_P_POPSTATIC, 2, 0,	/* OFONT2 */
/* 00891 */ HB_P_LINEOFFSET, 51,	/* 143 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'u', 'r', 'i', 'e', 'r', ' ', 'N', 'e', 'w', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 243,	/* -13 */
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
	HB_P_POPSTATIC, 3, 0,	/* OFONT3 */
/* 00937 */ HB_P_LINEOFFSET, 55,	/* 147 */
	HB_P_MESSAGE, 52, 0,	/* _BPAINTED */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_PUSHBLOCK, 13, 0,	/* 13 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 53,	/* MYPAINT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00961 */ HB_P_LINEOFFSET, 56,	/* 148 */
	HB_P_PUSHSYMNEAR, 54,	/* INI_ODLGDT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* OGET */
	HB_P_PUSHLOCALNEAR, 1,	/* NOMFORM */
	HB_P_DOSHORT, 2,
/* 00972 */ HB_P_LINEOFFSET, 58,	/* 150 */
	HB_P_PUSHSTATIC, 7, 0,	/* LCONF */
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01010) */
/* 00979 */ HB_P_LINEOFFSET, 59,	/* 151 */
	HB_P_PUSHSTATIC, 8, 0,	/* DATECONF */
	HB_P_POPLOCALNEAR, 3,	/* DD */
/* 00986 */ HB_P_LINEOFFSET, 60,	/* 152 */
	HB_P_MESSAGE, 55, 0,	/* SETTEXT */
	HB_P_PUSHLOCALNEAR, 2,	/* OGET */
	HB_P_PUSHLOCALNEAR, 3,	/* DD */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00998 */ HB_P_LINEOFFSET, 61,	/* 153 */
	HB_P_MESSAGE, 56, 0,	/* SETFOCUS */
	HB_P_PUSHLOCALNEAR, 2,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01010) */
/* 01010 */ HB_P_LINEOFFSET, 64,	/* 156 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01015 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( INI_ODLGDT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 160, 0,	/* 160 */
	HB_P_LOCALNEARSETINT, 6, 90, 0,	/* NLIN 90*/
	HB_P_LOCALNEARSETINT, 7, 10, 0,	/* NCOL 10*/
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* X 1*/
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 161 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_POPLOCALNEAR, 9,	/* APOS */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 162 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'H', 'o', 'y', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* CHOJE */
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 166 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 112,	/* 112 (abs: 00178) */
/* 00068 */ HB_P_LINEOFFSET, 7,	/* 167 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'S', 'D', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* COBJ */
/* 00091 */ HB_P_LINEOFFSET, 8,	/* 168 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NOMFORM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* OBJ */
/* 00120 */ HB_P_LINEOFFSET, 9,	/* 169 */
	HB_P_MESSAGE, 59, 0,	/* _LWANTCLICK */
	HB_P_PUSHLOCALNEAR, 4,	/* OBJ */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00131 */ HB_P_LINEOFFSET, 10,	/* 170 */
	HB_P_MESSAGE, 60, 0,	/* _BLBUTTONUP */
	HB_P_PUSHLOCALNEAR, 4,	/* OBJ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'{', '|', '|', ' ', '_', 'C', 'o', 'n', 'f', 'D', 'a', 't', 'a', '(', 0, 
	HB_P_PUSHLOCALNEAR, 5,	/* COBJ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	')', ' ', '}', 0, 
	HB_P_PLUS,
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00170 */ HB_P_LINEOFFSET, 11,	/* 171 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 141,	/* -115 (abs: 00061) */
/* 00178 */ HB_P_LINEOFFSET, 19,	/* 179 */
	HB_P_PUSHSYMNEAR, 61,	/* AJUSTA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00185 */ HB_P_LINEOFFSET, 21,	/* 181 */
	HB_P_PUSHSYMNEAR, 62,	/* CLIENTTOSCREEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 1,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* APOS */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* APOS */
/* 00203 */ HB_P_LINEOFFSET, 22,	/* 182 */
	HB_P_PUSHSYMNEAR, 64,	/* GETCOORS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* GETDESKTOPWINDOW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* ARES */
/* 00217 */ HB_P_LINEOFFSET, 24,	/* 184 */
	HB_P_PUSHLOCALNEAR, 9,	/* APOS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ADDINT, 54, 1,	/* 310*/
	HB_P_PUSHLOCALNEAR, 11,	/* ARES */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 00251) */
/* 00234 */ HB_P_LINEOFFSET, 25,	/* 185 */
	HB_P_PUSHLOCALNEAR, 11,	/* ARES */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ADDINT, 202, 254,	/* -310*/
	HB_P_PUSHLOCALREF, 9, 0,	/* APOS */
	HB_P_ONE,
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00251) */
/* 00251 */ HB_P_LINEOFFSET, 27,	/* 187 */
	HB_P_PUSHLOCALNEAR, 9,	/* APOS */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ADDINT, 33, 1,	/* 289*/
	HB_P_PUSHLOCALNEAR, 11,	/* ARES */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00287) */
/* 00269 */ HB_P_LINEOFFSET, 28,	/* 188 */
	HB_P_PUSHLOCALNEAR, 11,	/* ARES */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_ADDINT, 223, 254,	/* -289*/
	HB_P_PUSHLOCALREF, 9, 0,	/* APOS */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00287) */
/* 00287 */ HB_P_LINEOFFSET, 33,	/* 193 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00292 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( AJUSTA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 197, 0,	/* 197 */
	HB_P_LOCALNEARSETINT, 3, 90, 0,	/* NLIN 90*/
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* X */
/* 00023 */ HB_P_LINEOFFSET, 2,	/* 199 */
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_MULT,
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_POPLOCALNEAR, 4,	/* NCOL */
/* 00044 */ HB_P_LINEOFFSET, 4,	/* 201 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 22, 1,	/* 278 (abs: 00333) */
/* 00058 */ HB_P_LINEOFFSET, 5,	/* 202 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'S', 'D', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* COBJ */
/* 00081 */ HB_P_LINEOFFSET, 7,	/* 204 */
	HB_P_PUSHSYMNEAR, 67,	/* VALDIA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 180, 0,	/* 180 (abs: 00270) */
/* 00093 */ HB_P_LINEOFFSET, 8,	/* 205 */
	HB_P_PUSHLOCALNEAR, 5,	/* X */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00123) */
/* 00101 */ HB_P_LINEOFFSET, 9,	/* 206 */
	HB_P_MESSAGE, 68, 0,	/* SETCOLOR */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHINT, 255, 0,	/* 255 */
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00141) */
/* 00123 */ HB_P_LINEOFFSET, 11,	/* 208 */
	HB_P_MESSAGE, 68, 0,	/* SETCOLOR */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_ZERO,
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00141 */ HB_P_LINEOFFSET, 13,	/* 210 */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHSYMNEAR, 69,	/* DAY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 8, 0,	/* DATECONF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00192) */
/* 00156 */ HB_P_LINEOFFSET, 14,	/* 211 */
	HB_P_MESSAGE, 70, 0,	/* SETFONT */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHSTATIC, 2, 0,	/* OFONT2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00171 */ HB_P_LINEOFFSET, 15,	/* 212 */
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_POPSTATIC, 5, 0,	/* NX */
	HB_P_PUSHLOCALNEAR, 3,	/* NLIN */
	HB_P_POPSTATIC, 6, 0,	/* NY */
/* 00183 */ HB_P_LINEOFFSET, 16,	/* 213 */
	HB_P_PUSHSYMNEAR, 53,	/* MYPAINT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00207) */
/* 00192 */ HB_P_LINEOFFSET, 18,	/* 215 */
	HB_P_MESSAGE, 70, 0,	/* SETFONT */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHSTATIC, 1, 0,	/* OFONT1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 20,	/* 217 */
	HB_P_MESSAGE, 71, 0,	/* _NTOP */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHLOCALNEAR, 3,	/* NLIN */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00221 */ HB_P_LINEOFFSET, 21,	/* 218 */
	HB_P_MESSAGE, 72, 0,	/* _NLEFT */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHLOCALNEAR, 4,	/* NCOL */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00235 */ HB_P_LINEOFFSET, 22,	/* 219 */
	HB_P_MESSAGE, 73, 0,	/* SHOW */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00247 */ HB_P_LINEOFFSET, 23,	/* 220 */
	HB_P_MESSAGE, 55, 0,	/* SETTEXT */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00282) */
/* 00270 */ HB_P_LINEOFFSET, 25,	/* 222 */
	HB_P_MESSAGE, 74, 0,	/* HIDE */
	HB_P_PUSHLOCALNEAR, 2,	/* COBJ */
	HB_P_MACROPUSH, 11,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00282 */ HB_P_LINEOFFSET, 27,	/* 224 */
	HB_P_LOCALNEARADDINT, 4, 40, 0,	/* NCOL 40*/
/* 00288 */ HB_P_LINEOFFSET, 28,	/* 225 */
	HB_P_PUSHLOCALNEAR, 5,	/* X */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 5,	/* X */
/* 00295 */ HB_P_LINEOFFSET, 29,	/* 226 */
	HB_P_PUSHLOCALNEAR, 5,	/* X */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00324) */
/* 00304 */ HB_P_LINEOFFSET, 30,	/* 227 */
	HB_P_LOCALNEARSETINT, 4, 10, 0,	/* NCOL 10*/
/* 00310 */ HB_P_LINEOFFSET, 31,	/* 228 */
	HB_P_LOCALNEARADDINT, 3, 25, 0,	/* NLIN 25*/
/* 00316 */ HB_P_LINEOFFSET, 32,	/* 229 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* X 1*/
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00324) */
/* 00324 */ HB_P_LINEOFFSET, 34,	/* 231 */
	HB_P_LOCALNEARADDINT, 1, 1, 0,	/* I 1*/
	HB_P_JUMP, 232, 254,	/* -280 (abs: 00050) */
/* 00333 */ HB_P_LINEOFFSET, 36,	/* 233 */
	HB_P_MESSAGE, 55, 0,	/* SETTEXT */
	HB_P_PUSHSTATIC, 10, 0,	/* OSAY2 */
	HB_P_PUSHSTATIC, 22, 0,	/* AMESES */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00380 */ HB_P_LINEOFFSET, 38,	/* 235 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00385 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( VALDIA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 240, 0,	/* 240 */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 00076) */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 241 */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00038) */
/* 00031 */ HB_P_LINEOFFSET, 2,	/* 242 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00038) */
/* 00038 */ HB_P_LINEOFFSET, 4,	/* 244 */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00062) */
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_MODULUS,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00071) */
/* 00064 */ HB_P_LINEOFFSET, 5,	/* 245 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00074) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 00162) */
/* 00076 */ HB_P_LINEOFFSET, 13,	/* 253 */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00104) */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00119) */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00134) */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 00157) */
/* 00136 */ HB_P_LINEOFFSET, 15,	/* 255 */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00152) */
/* 00145 */ HB_P_LINEOFFSET, 16,	/* 256 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00155) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00162) */
/* 00157 */ HB_P_LINEOFFSET, 22,	/* 262 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00162 */ HB_P_LINEOFFSET, 25,	/* 265 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00167 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MESANO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* NMES */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* NANO */
/* 00031 */ HB_P_LINEOFFSET, 3,	/* 272 */
	HB_P_PUSHLOCALNEAR, 1,	/* N */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00074) */
/* 00039 */ HB_P_LINEOFFSET, 4,	/* 273 */
	HB_P_PUSHLOCALNEAR, 2,	/* NMES */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00059) */
/* 00048 */ HB_P_LINEOFFSET, 5,	/* 274 */
	HB_P_PUSHLOCALNEAR, 2,	/* NMES */
	HB_P_PUSHLOCALNEAR, 1,	/* N */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* NMES */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00072) */
/* 00059 */ HB_P_LINEOFFSET, 7,	/* 276 */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NMES 1*/
/* 00065 */ HB_P_LINEOFFSET, 8,	/* 277 */
	HB_P_PUSHLOCALNEAR, 3,	/* NANO */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 3,	/* NANO */
	HB_P_JUMPNEAR, 32,	/* 32 (abs: 00104) */
/* 00074 */ HB_P_LINEOFFSET, 11,	/* 280 */
	HB_P_PUSHLOCALNEAR, 2,	/* NMES */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00091) */
/* 00082 */ HB_P_LINEOFFSET, 12,	/* 281 */
	HB_P_PUSHLOCALNEAR, 2,	/* NMES */
	HB_P_DEC,
	HB_P_POPLOCALNEAR, 2,	/* NMES */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00104) */
/* 00091 */ HB_P_LINEOFFSET, 14,	/* 283 */
	HB_P_LOCALNEARSETINT, 2, 12, 0,	/* NMES 12*/
/* 00097 */ HB_P_LINEOFFSET, 15,	/* 284 */
	HB_P_PUSHLOCALNEAR, 3,	/* NANO */
	HB_P_DEC,
	HB_P_POPLOCALNEAR, 3,	/* NANO */
/* 00104 */ HB_P_LINEOFFSET, 18,	/* 287 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '/', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NMES */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NANO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 21, 0,	/* DDATA */
/* 00145 */ HB_P_LINEOFFSET, 19,	/* 288 */
	HB_P_PUSHSYMNEAR, 61,	/* AJUSTA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00152 */ HB_P_LINEOFFSET, 21,	/* 290 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00157 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( _CONFDATA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 77, 0,	/* CCAPTION */
	HB_P_PUSHLOCALNEAR, 1,	/* OOBJ */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 8, 0,	/* DATECONF */
/* 00066 */ HB_P_LINEOFFSET, 1,	/* 297 */
	HB_P_TRUE,
	HB_P_POPSTATIC, 7, 0,	/* LCONF */
/* 00072 */ HB_P_LINEOFFSET, 4,	/* 300 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00077 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( _VERKEY )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00031) */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 75,	/* MESANO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 307 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00031) */
/* 00031 */ HB_P_LINEOFFSET, 4,	/* 309 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00056) */
/* 00040 */ HB_P_LINEOFFSET, 5,	/* 310 */
	HB_P_PUSHSYMNEAR, 75,	/* MESANO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_DOSHORT, 1,
/* 00049 */ HB_P_LINEOFFSET, 6,	/* 311 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00056) */
/* 00056 */ HB_P_LINEOFFSET, 8,	/* 313 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00091) */
/* 00065 */ HB_P_LINEOFFSET, 9,	/* 314 */
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_PUSHINT, 109, 1,	/* 365 */
	HB_P_MINUS,
	HB_P_POPSTATIC, 21, 0,	/* DDATA */
/* 00077 */ HB_P_LINEOFFSET, 10,	/* 315 */
	HB_P_PUSHSYMNEAR, 61,	/* AJUSTA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00084 */ HB_P_LINEOFFSET, 11,	/* 316 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00091) */
/* 00091 */ HB_P_LINEOFFSET, 13,	/* 318 */
	HB_P_PUSHLOCALNEAR, 1,	/* NKEY */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00126) */
/* 00100 */ HB_P_LINEOFFSET, 14,	/* 319 */
	HB_P_PUSHSTATIC, 21, 0,	/* DDATA */
	HB_P_PUSHINT, 109, 1,	/* 365 */
	HB_P_PLUS,
	HB_P_POPSTATIC, 21, 0,	/* DDATA */
/* 00112 */ HB_P_LINEOFFSET, 15,	/* 320 */
	HB_P_PUSHSYMNEAR, 61,	/* AJUSTA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00119 */ HB_P_LINEOFFSET, 16,	/* 321 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00126) */
/* 00126 */ HB_P_LINEOFFSET, 19,	/* 324 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00131 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MYPAINT )
{
   static const BYTE pcode[] =
   {
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
/* 00003 */ HB_P_BASELINE, 77, 1,	/* 333 */
	HB_P_MESSAGE, 79, 0,	/* GETDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00015 */ HB_P_LINEOFFSET, 2,	/* 335 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00033 */ HB_P_LINEOFFSET, 3,	/* 336 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 337 */
	HB_P_PUSHSYMNEAR, 84,	/* ARC */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 23, 0,	/* NXOLD */
	HB_P_ADDINT, 251, 255,	/* -5*/
	HB_P_PUSHSTATIC, 24, 0,	/* NYOLD */
	HB_P_ADDINT, 251, 255,	/* -5*/
	HB_P_PUSHSTATIC, 23, 0,	/* NXOLD */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTATIC, 24, 0,	/* NYOLD */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 5,
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 338 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00111 */ HB_P_LINEOFFSET, 6,	/* 339 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00121 */ HB_P_LINEOFFSET, 8,	/* 341 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLONG, 0, 0, 255, 0,	/* 16711680 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00139 */ HB_P_LINEOFFSET, 9,	/* 342 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00160 */ HB_P_LINEOFFSET, 10,	/* 343 */
	HB_P_PUSHSYMNEAR, 84,	/* ARC */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 5, 0,	/* NX */
	HB_P_ADDINT, 251, 255,	/* -5*/
	HB_P_PUSHSTATIC, 6, 0,	/* NY */
	HB_P_ADDINT, 251, 255,	/* -5*/
	HB_P_PUSHSTATIC, 5, 0,	/* NX */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTATIC, 6, 0,	/* NY */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 5,
/* 00199 */ HB_P_LINEOFFSET, 11,	/* 344 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00217 */ HB_P_LINEOFFSET, 12,	/* 345 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00227 */ HB_P_LINEOFFSET, 14,	/* 347 */
	HB_P_ZERO,
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00233 */ HB_P_LINEOFFSET, 15,	/* 348 */
	HB_P_ZERO,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 142, 0,	/* 142 (abs: 00387) */
/* 00248 */ HB_P_LINEOFFSET, 16,	/* 349 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_MULT,
	HB_P_ADDINT, 100, 0,	/* 100*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00277 */ HB_P_LINEOFFSET, 17,	/* 350 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00298 */ HB_P_LINEOFFSET, 18,	/* 351 */
	HB_P_PUSHSYMNEAR, 87,	/* MOVETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00317 */ HB_P_LINEOFFSET, 19,	/* 352 */
	HB_P_PUSHSYMNEAR, 88,	/* LINETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHINT, 33, 1,	/* 289 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00338 */ HB_P_LINEOFFSET, 20,	/* 353 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00356 */ HB_P_LINEOFFSET, 21,	/* 354 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00366 */ HB_P_LINEOFFSET, 22,	/* 355 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_INC,
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00375 */ HB_P_LINEOFFSET, 23,	/* 356 */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_INC,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_JUMP, 111, 255,	/* -145 (abs: 00239) */
/* 00387 */ HB_P_LINEOFFSET, 24,	/* 357 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_FORTEST,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 00545) */
/* 00404 */ HB_P_LINEOFFSET, 25,	/* 358 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_MULT,
	HB_P_ADDINT, 100, 0,	/* 100*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00433 */ HB_P_LINEOFFSET, 26,	/* 359 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00454 */ HB_P_LINEOFFSET, 27,	/* 360 */
	HB_P_PUSHSYMNEAR, 87,	/* MOVETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00473 */ HB_P_LINEOFFSET, 28,	/* 361 */
	HB_P_PUSHSYMNEAR, 88,	/* LINETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHINT, 33, 1,	/* 289 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00494 */ HB_P_LINEOFFSET, 29,	/* 362 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00512 */ HB_P_LINEOFFSET, 30,	/* 363 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00522 */ HB_P_LINEOFFSET, 31,	/* 364 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_INC,
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00531 */ HB_P_LINEOFFSET, 32,	/* 365 */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_PLUS,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_JUMP, 108, 255,	/* -148 (abs: 00394) */
/* 00545 */ HB_P_LINEOFFSET, 34,	/* 367 */
	HB_P_PUSHINT, 232, 0,	/* 232 */
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00553 */ HB_P_LINEOFFSET, 35,	/* 368 */
	HB_P_ZERO,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 142, 0,	/* 142 (abs: 00707) */
/* 00568 */ HB_P_LINEOFFSET, 36,	/* 369 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_MULT,
	HB_P_ADDINT, 70, 0,	/* 70*/
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00597 */ HB_P_LINEOFFSET, 37,	/* 370 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00618 */ HB_P_LINEOFFSET, 38,	/* 371 */
	HB_P_PUSHSYMNEAR, 87,	/* MOVETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00637 */ HB_P_LINEOFFSET, 39,	/* 372 */
	HB_P_PUSHSYMNEAR, 88,	/* LINETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHINT, 33, 1,	/* 289 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00658 */ HB_P_LINEOFFSET, 40,	/* 373 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00676 */ HB_P_LINEOFFSET, 41,	/* 374 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00686 */ HB_P_LINEOFFSET, 42,	/* 375 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_INC,
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00695 */ HB_P_LINEOFFSET, 43,	/* 376 */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_INC,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_JUMP, 111, 255,	/* -145 (abs: 00559) */
/* 00707 */ HB_P_LINEOFFSET, 44,	/* 377 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_FORTEST,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 00865) */
/* 00724 */ HB_P_LINEOFFSET, 45,	/* 378 */
	HB_P_PUSHSYMNEAR, 80,	/* CREATEPEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_MULT,
	HB_P_ADDINT, 70, 0,	/* 70*/
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPSTATIC, 25, 0,	/* HPEN */
/* 00753 */ HB_P_LINEOFFSET, 46,	/* 379 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 83, 0,	/* HOLDPEN */
/* 00774 */ HB_P_LINEOFFSET, 47,	/* 380 */
	HB_P_PUSHSYMNEAR, 87,	/* MOVETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00793 */ HB_P_LINEOFFSET, 48,	/* 381 */
	HB_P_PUSHSYMNEAR, 88,	/* LINETO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHINT, 33, 1,	/* 289 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_DOSHORT, 3,
/* 00814 */ HB_P_LINEOFFSET, 49,	/* 382 */
	HB_P_PUSHSYMNEAR, 81,	/* SELECTOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHVARIABLE, 83, 0,	/* HOLDPEN */
	HB_P_DOSHORT, 2,
/* 00832 */ HB_P_LINEOFFSET, 50,	/* 383 */
	HB_P_PUSHSYMNEAR, 85,	/* DELETEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 25, 0,	/* HPEN */
	HB_P_DOSHORT, 1,
/* 00842 */ HB_P_LINEOFFSET, 51,	/* 384 */
	HB_P_PUSHSTATIC, 27, 0,	/* NLIN */
	HB_P_INC,
	HB_P_POPSTATIC, 27, 0,	/* NLIN */
/* 00851 */ HB_P_LINEOFFSET, 52,	/* 385 */
	HB_P_PUSHSTATIC, 26, 0,	/* I */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_PLUS,
	HB_P_POPSTATIC, 26, 0,	/* I */
	HB_P_JUMP, 108, 255,	/* -148 (abs: 00714) */
/* 00865 */ HB_P_LINEOFFSET, 54,	/* 387 */
	HB_P_MESSAGE, 89, 0,	/* RELEASEDC */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00876 */ HB_P_LINEOFFSET, 55,	/* 388 */
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHSTATIC, 11, 0,	/* OBUT1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00887 */ HB_P_LINEOFFSET, 56,	/* 389 */
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHSTATIC, 12, 0,	/* OBUT2 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00898 */ HB_P_LINEOFFSET, 59,	/* 392 */
	HB_P_PUSHSTATIC, 5, 0,	/* NX */
	HB_P_POPSTATIC, 23, 0,	/* NXOLD */
/* 00906 */ HB_P_LINEOFFSET, 60,	/* 393 */
	HB_P_PUSHSTATIC, 6, 0,	/* NY */
	HB_P_POPSTATIC, 24, 0,	/* NYOLD */
/* 00914 */ HB_P_LINEOFFSET, 62,	/* 395 */
	HB_P_PUSHSTATIC, 4, 0,	/* LTRANSP */
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00986) */
/* 00921 */ HB_P_LINEOFFSET, 66,	/* 399 */
	HB_P_PUSHSYMNEAR, 91,	/* SETWINDOWLONG */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 236,	/* -20 */
	HB_P_PUSHSYMNEAR, 92,	/* NOR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* GETWINDOWLONG */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 236,	/* -20 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLONG, 0, 0, 8, 0,	/* 524288 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 3,
/* 00963 */ HB_P_LINEOFFSET, 69,	/* 402 */
	HB_P_PUSHSYMNEAR, 94,	/* SETLAYEREDWINDOWATTRIBUTES */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHSTATIC, 9, 0,	/* ODLGDT */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 28, 0,	/* NFACTOR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00986) */
/* 00986 */ HB_P_LINEOFFSET, 73,	/* 406 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00991 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SETLAYEREDWINDOWATTRIBUTES )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 4,	/* locals, params */
	HB_P_PUSHSYMNEAR, 95,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'u', 's', 'e', 'r', '3', '2', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00043) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'u', 's', 'e', 'r', '3', '2', '.', 'D', 'L', 'L', 0, 
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00061) */
	HB_P_PUSHSYMNEAR, 96,	/* LOADLIBRARY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'u', 's', 'e', 'r', '3', '2', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* HDLL */
	HB_P_PUSHSYMNEAR, 97,	/* ABS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* HDLL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 176, 0,	/* 176 (abs: 00249) */
	HB_P_PUSHSYMNEAR, 98,	/* GETPROCADDRESS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* HDLL */
	HB_P_PUSHSYMNEAR, 99,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'e', 't', 'L', 'a', 'y', 'e', 'r', 'e', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00150) */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'e', 't', 'L', 'a', 'y', 'e', 'r', 'e', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0, 
	HB_P_JUMPNEAR, 31,	/* 31 (abs: 00179) */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'e', 't', 'L', 'a', 'y', 'e', 'r', 'e', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0, 
	HB_P_TRUE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 7,	/* CFARPROC */
	HB_P_PUSHSYMNEAR, 100,	/* CALLDLL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CFARPROC */
	HB_P_PUSHLOCALNEAR, 1,	/* HWND */
	HB_P_PUSHLOCALNEAR, 2,	/* CRKEY */
	HB_P_PUSHLOCALNEAR, 3,	/* BALPHA */
	HB_P_PUSHLOCALNEAR, 4,	/* DWFLAGS */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* URESULT */
	HB_P_PUSHSYMNEAR, 95,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'u', 's', 'e', 'r', '3', '2', '.', 'D', 'L', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00239) */
	HB_P_PUSHNIL,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00246) */
	HB_P_PUSHSYMNEAR, 101,	/* FREELIBRARY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* HDLL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 62,	/* 62 (abs: 00309) */
	HB_P_PUSHSYMNEAR, 102,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'E', 'r', 'r', 'o', 'r', ' ', 'c', 'o', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 103,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* HDLL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'l', 'o', 'a', 'd', 'i', 'n', 'g', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'u', 's', 'e', 'r', '3', '2', '.', 'D', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* URESULT */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00313 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VZCMONTH )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 105,	/* CCCMES */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VALORDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00020 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ANUAL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 8,	/* DAMEOBJ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'N', 'U', 'A', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OWND */
/* 00021 */ HB_P_LINEOFFSET, 2,	/* 430 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 42,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00050) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00061) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 00063 */ HB_P_LINEOFFSET, 6,	/* 434 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 107,	/* TPICKDATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_MESSAGE, 108, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHLONG, 255, 255, 255, 0,	/* 16777215 */
	HB_P_SENDSHORT, 8,
	HB_P_POPLOCALNEAR, 2,	/* OPICKDATE */
/* 00102 */ HB_P_LINEOFFSET, 9,	/* 437 */
	HB_P_MESSAGE, 110, 0,	/* _BSELECT */
	HB_P_PUSHLOCALNEAR, 2,	/* OPICKDATE */
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 102,	/* MSGALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00127 */ HB_P_LINEOFFSET, 12,	/* 440 */
	HB_P_MESSAGE, 52, 0,	/* _BPAINTED */
	HB_P_PUSHLOCALNEAR, 2,	/* OPICKDATE */
	HB_P_PUSHBLOCK, 48, 0,	/* 48 */
	3, 0,	/* number of local parameters (3) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPICKDATE */
	HB_P_MESSAGE, 111, 0,	/* SAY */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* codeblockvar3 */
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'd', 'a', 'y', 's', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_SENDSHORT, 8,
	HB_P_ENDBLOCK,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00185 */ HB_P_LINEOFFSET, 18,	/* 446 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00190 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TPICKDATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 250, 2,	/* 762 (abs: 00777) */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 112,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'P', 'i', 'c', 'k', 'D', 'a', 't', 'e', 0, 
	HB_P_PUSHSYMNEAR, 113,	/* __CLS_PARAM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 29, 0,	/* S_OCLASS */
/* 00059 */ HB_P_BASELINE, 200, 1,	/* 456 */
	HB_P_MESSAGE, 114, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'S', 't', 'a', 'r', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'E', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'd', 'T', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'l', 'M', 'o', 'v', 'e', 0, 
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00112 */ HB_P_LINEOFFSET, 1,	/* 457 */
	HB_P_MESSAGE, 114, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'Y', 'e', 'a', 'r', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00140 */ HB_P_LINEOFFSET, 2,	/* 458 */
	HB_P_MESSAGE, 114, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'o', 'B', 'r', 'u', 's', 'h', 'S', 'u', 'n', 'd', 'a', 'y', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'o', 'B', 'r', 'u', 's', 'h', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'o', 'F', 'o', 'n', 't', 'H', 'e', 'a', 'd', 'e', 'r', 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00206 */ HB_P_LINEOFFSET, 3,	/* 459 */
	HB_P_MESSAGE, 114, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'n', 'L', 'e', 'f', 't', 'S', 't', 'a', 'r', 't', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'n', 'T', 'o', 'p', 'S', 't', 'a', 'r', 't', 0, 
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00251 */ HB_P_LINEOFFSET, 4,	/* 460 */
	HB_P_MESSAGE, 114, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'b', 'S', 'e', 'l', 'e', 'c', 't', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00281 */ HB_P_LINEOFFSET, 6,	/* 462 */
	HB_P_MESSAGE, 115, 0,	/* ADDMULTICLSDATA */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
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
/* 00326 */ HB_P_LINEOFFSET, 8,	/* 464 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 117,	/* TPICKDATE_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00349 */ HB_P_LINEOFFSET, 9,	/* 465 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'R', 'e', 'd', 'e', 'f', 'i', 'n', 'e', 0, 
	HB_P_PUSHSYMNEAR, 118,	/* TPICKDATE_REDEFINE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00377 */ HB_P_LINEOFFSET, 10,	/* 466 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'I', 'n', 'i', 't', 'i', 'a', 't', 'e', 0, 
	HB_P_PUSHSYMNEAR, 119,	/* TPICKDATE_INITIATE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00405 */ HB_P_LINEOFFSET, 11,	/* 467 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'a', 'i', 'n', 't', 0, 
	HB_P_PUSHSYMNEAR, 120,	/* TPICKDATE_PAINT */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00430 */ HB_P_LINEOFFSET, 12,	/* 468 */
	HB_P_MESSAGE, 121, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'D', 'i', 's', 'p', 'l', 'a', 'y', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 122, 0,	/* BEGINPAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 123, 0,	/* PAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 124, 0,	/* ENDPAINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_ZERO,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00487 */ HB_P_LINEOFFSET, 13,	/* 469 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'D', 'e', 's', 't', 'r', 'o', 'y', 0, 
	HB_P_PUSHSYMNEAR, 125,	/* TPICKDATE_DESTROY */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00514 */ HB_P_LINEOFFSET, 14,	/* 470 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'L', 'B', 'u', 't', 't', 'o', 'n', 'D', 'o', 'w', 'n', 0, 
	HB_P_PUSHSYMNEAR, 126,	/* TPICKDATE_LBUTTONDOWN */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00545 */ HB_P_LINEOFFSET, 15,	/* 471 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'L', 'B', 'u', 't', 't', 'o', 'n', 'U', 'p', 0, 
	HB_P_PUSHSYMNEAR, 127,	/* TPICKDATE_LBUTTONUP */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00574 */ HB_P_LINEOFFSET, 16,	/* 472 */
	HB_P_MESSAGE, 121, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'Y', 'e', 'a', 'r', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 128, 0,	/* _NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_DEC,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00634 */ HB_P_LINEOFFSET, 17,	/* 473 */
	HB_P_MESSAGE, 121, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'e', 'x', 't', 'Y', 'e', 'a', 'r', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 128, 0,	/* _NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_INC,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00690 */ HB_P_LINEOFFSET, 18,	/* 474 */
	HB_P_MESSAGE, 121, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'r', 'a', 's', 'e', 'B', 'k', 'G', 'n', 'd', 0, 
	HB_P_PUSHBLOCK, 9, 0,	/* 9 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_ZERO,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00726 */ HB_P_LINEOFFSET, 19,	/* 475 */
	HB_P_MESSAGE, 116, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0, 
	HB_P_PUSHSYMNEAR, 130,	/* TPICKDATE_MOUSEMOVE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00755 */ HB_P_LINEOFFSET, 21,	/* 477 */
	HB_P_MESSAGE, 131, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 132, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_CLASSSETMODULE,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00777) */
	HB_P_PUSHSYMNEAR, 133,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 132, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 134,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 00819) */
	HB_P_MESSAGE, 135, 0,	/* CONSTRUCTORCALL */
	HB_P_PUSHSTATIC, 29, 0,	/* S_OCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 136,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00819) */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00823 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 8,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 9,	/* SELF */
/* 00006 */ HB_P_BASELINE, 232, 1,	/* 488 */
	HB_P_PUSHLOCALNEAR, 3,	/* NWIDTH */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00020) */
	HB_P_PUSHINT, 32, 3,	/* 800 */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00022) */
	HB_P_PUSHLOCALNEAR, 3,	/* NWIDTH */
	HB_P_POPLOCALNEAR, 3,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 4,	/* NHEIGHT */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00035) */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00037) */
	HB_P_PUSHLOCALNEAR, 4,	/* NHEIGHT */
	HB_P_POPLOCALNEAR, 4,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 2,	/* NLEFT */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00048) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00050) */
	HB_P_PUSHLOCALNEAR, 2,	/* NLEFT */
	HB_P_POPLOCALNEAR, 2,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 1,	/* NTOP */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00061) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00063) */
	HB_P_PUSHLOCALNEAR, 1,	/* NTOP */
	HB_P_POPLOCALNEAR, 1,	/* NTOP */
	HB_P_PUSHLOCALNEAR, 6,	/* NYEAR */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00083) */
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00085) */
	HB_P_PUSHLOCALNEAR, 6,	/* NYEAR */
	HB_P_POPLOCALNEAR, 6,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00100) */
	HB_P_PUSHSYMNEAR, 137,	/* GETWNDDEFAULT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00102) */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_POPLOCALNEAR, 5,	/* OWND */
	HB_P_MESSAGE, 138, 0,	/* _LMOVE */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00113 */ HB_P_LINEOFFSET, 3,	/* 491 */
	HB_P_MESSAGE, 139, 0,	/* _NTOPSTART */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00125 */ HB_P_LINEOFFSET, 4,	/* 492 */
	HB_P_MESSAGE, 140, 0,	/* _NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00138 */ HB_P_LINEOFFSET, 6,	/* 494 */
	HB_P_MESSAGE, 71, 0,	/* _NTOP */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* NTOP */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00150 */ HB_P_LINEOFFSET, 7,	/* 495 */
	HB_P_MESSAGE, 72, 0,	/* _NLEFT */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* NLEFT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00162 */ HB_P_LINEOFFSET, 8,	/* 496 */
	HB_P_MESSAGE, 141, 0,	/* _NBOTTOM */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* NTOP */
	HB_P_PUSHLOCALNEAR, 4,	/* NHEIGHT */
	HB_P_PLUS,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00180 */ HB_P_LINEOFFSET, 9,	/* 497 */
	HB_P_MESSAGE, 142, 0,	/* _NRIGHT */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 3,	/* NWIDTH */
	HB_P_PLUS,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00198 */ HB_P_LINEOFFSET, 10,	/* 498 */
	HB_P_MESSAGE, 128, 0,	/* _NYEAR */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00218 */ HB_P_LINEOFFSET, 11,	/* 499 */
	HB_P_MESSAGE, 143, 0,	/* _OWND */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00230 */ HB_P_LINEOFFSET, 13,	/* 501 */
	HB_P_MESSAGE, 144, 0,	/* _DSTART */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 145, 0,	/* _DEND */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 146, 0,	/* _DTEMP */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00259 */ HB_P_LINEOFFSET, 15,	/* 503 */
	HB_P_MESSAGE, 147, 0,	/* _NCLRTEXT */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 7,	/* NCLRFORE */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00271 */ HB_P_LINEOFFSET, 16,	/* 504 */
	HB_P_MESSAGE, 148, 0,	/* _NCLRPANE */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHLOCALNEAR, 8,	/* NCLRBACK */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00283 */ HB_P_LINEOFFSET, 17,	/* 505 */
	HB_P_MESSAGE, 149, 0,	/* _NSTYLE */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHSYMNEAR, 92,	/* NOR */
	HB_P_PUSHNIL,
	HB_P_PUSHLONG, 0, 0, 0, 64,	/* 1073741824 */
	HB_P_PUSHLONG, 0, 0, 0, 16,	/* 268435456 */
	HB_P_PUSHLONG, 0, 0, 1, 0,	/* 65536 */
	HB_P_PUSHLONG, 0, 0, 128, 0,	/* 8388608 */
	HB_P_PUSHLONG, 0, 0, 0, 2,	/* 33554432 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00323 */ HB_P_LINEOFFSET, 19,	/* 507 */
	HB_P_MESSAGE, 150, 0,	/* _OBRUSHSUNDAY */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBRUSH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 183, 0,	/* 183 */
	HB_P_PUSHINT, 249, 0,	/* 249 */
	HB_P_PUSHINT, 185, 0,	/* 185 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 4,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00360 */ HB_P_LINEOFFSET, 20,	/* 508 */
	HB_P_MESSAGE, 152, 0,	/* _OBRUSHSELECTED */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBRUSH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 240, 0,	/* 240 */
	HB_P_PUSHINT, 232, 0,	/* 232 */
	HB_P_PUSHINT, 188, 0,	/* 188 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 4,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00397 */ HB_P_LINEOFFSET, 22,	/* 510 */
	HB_P_MESSAGE, 153, 0,	/* _OFONT */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'h', 'o', 'm', 'a', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 244,	/* -12 */
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
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00443 */ HB_P_LINEOFFSET, 23,	/* 511 */
	HB_P_MESSAGE, 154, 0,	/* _OFONTHEADER */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'h', 'o', 'm', 'a', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 244,	/* -12 */
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
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00489 */ HB_P_LINEOFFSET, 29,	/* 517 */
	HB_P_MESSAGE, 155, 0,	/* REGISTER */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00499 */ HB_P_LINEOFFSET, 31,	/* 519 */
	HB_P_PUSHSYMNEAR, 99,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 00687) */
/* 00517 */ HB_P_LINEOFFSET, 32,	/* 520 */
	HB_P_MESSAGE, 131, 0,	/* CREATE */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00527 */ HB_P_LINEOFFSET, 33,	/* 521 */
	HB_P_MESSAGE, 156, 0,	/* ADDCONTROL */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00539 */ HB_P_LINEOFFSET, 34,	/* 522 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 205, 204, 204, 204, 204, 204, 16, 64, 1, 1,	/* 4.2, 1, 1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'<', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	9, 0,	/* SELF */
	5, 0,	/* OWND */
	HB_P_MESSAGE, 158, 0,	/* PREVIOUSYEAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 20,	/* 20 */
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
/* 00612 */ HB_P_LINEOFFSET, 35,	/* 523 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 205, 204, 204, 204, 204, 204, 16, 64, 1, 1,	/* 4.2, 1, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'>', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	9, 0,	/* SELF */
	5, 0,	/* OWND */
	HB_P_MESSAGE, 159, 0,	/* NEXTYEAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 20,	/* 20 */
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
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00699) */
/* 00687 */ HB_P_LINEOFFSET, 37,	/* 525 */
	HB_P_MESSAGE, 160, 0,	/* DEFCONTROL */
	HB_P_PUSHLOCALNEAR, 5,	/* OWND */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00699 */ HB_P_LINEOFFSET, 40,	/* 528 */
	HB_P_PUSHLOCALNEAR, 9,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00705 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_REDEFINE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 3,	/* SELF */
/* 00006 */ HB_P_BASELINE, 22, 2,	/* 534 */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00022) */
	HB_P_PUSHSYMNEAR, 137,	/* GETWNDDEFAULT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00024) */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_POPLOCALNEAR, 2,	/* OWND */
	HB_P_MESSAGE, 161, 0,	/* _NID */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* NID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00036 */ HB_P_LINEOFFSET, 3,	/* 537 */
	HB_P_MESSAGE, 143, 0,	/* _OWND */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00048 */ HB_P_LINEOFFSET, 4,	/* 538 */
	HB_P_MESSAGE, 138, 0,	/* _LMOVE */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00059 */ HB_P_LINEOFFSET, 5,	/* 539 */
	HB_P_MESSAGE, 139, 0,	/* _NTOPSTART */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00071 */ HB_P_LINEOFFSET, 6,	/* 540 */
	HB_P_MESSAGE, 140, 0,	/* _NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00084 */ HB_P_LINEOFFSET, 7,	/* 541 */
	HB_P_MESSAGE, 144, 0,	/* _DSTART */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 145, 0,	/* _DEND */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 146, 0,	/* _DTEMP */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00113 */ HB_P_LINEOFFSET, 8,	/* 542 */
	HB_P_MESSAGE, 128, 0,	/* _NYEAR */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00133 */ HB_P_LINEOFFSET, 10,	/* 544 */
	HB_P_MESSAGE, 150, 0,	/* _OBRUSHSUNDAY */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBRUSH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 183, 0,	/* 183 */
	HB_P_PUSHINT, 249, 0,	/* 249 */
	HB_P_PUSHINT, 185, 0,	/* 185 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 4,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00170 */ HB_P_LINEOFFSET, 11,	/* 545 */
	HB_P_MESSAGE, 152, 0,	/* _OBRUSHSELECTED */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBRUSH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 86,	/* NRGB */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 240, 0,	/* 240 */
	HB_P_PUSHINT, 232, 0,	/* 232 */
	HB_P_PUSHINT, 188, 0,	/* 188 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 4,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 13,	/* 547 */
	HB_P_MESSAGE, 153, 0,	/* _OFONT */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'h', 'o', 'm', 'a', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 244,	/* -12 */
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
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00253 */ HB_P_LINEOFFSET, 14,	/* 548 */
	HB_P_MESSAGE, 154, 0,	/* _OFONTHEADER */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 51,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'h', 'o', 'm', 'a', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 244,	/* -12 */
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
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00299 */ HB_P_LINEOFFSET, 16,	/* 550 */
	HB_P_MESSAGE, 68, 0,	/* SETCOLOR */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00311 */ HB_P_LINEOFFSET, 18,	/* 552 */
	HB_P_MESSAGE, 155, 0,	/* REGISTER */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00321 */ HB_P_LINEOFFSET, 20,	/* 554 */
	HB_P_MESSAGE, 160, 0,	/* DEFCONTROL */
	HB_P_PUSHLOCALNEAR, 2,	/* OWND */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00333 */ HB_P_LINEOFFSET, 22,	/* 556 */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00339 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_INITIATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 50, 2,	/* 562 */
	HB_P_MESSAGE, 162, 0,	/* INITIATE */
	HB_P_MESSAGE, 163, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* HDLG */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 564 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 205, 204, 204, 204, 204, 204, 16, 64, 1, 1,	/* 4.2, 1, 1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'<', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* SELF */
	HB_P_MESSAGE, 158, 0,	/* PREVIOUSYEAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 20,	/* 20 */
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
/* 00087 */ HB_P_LINEOFFSET, 3,	/* 565 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 157,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHDOUBLE, 205, 204, 204, 204, 204, 204, 16, 64, 1, 1,	/* 4.2, 1, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'>', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* SELF */
	HB_P_MESSAGE, 159, 0,	/* NEXTYEAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 20,	/* 20 */
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
/* 00150 */ HB_P_LINEOFFSET, 5,	/* 567 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00155 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_PAINT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 63, 2,	/* 575 */
	HB_P_MESSAGE, 82, 0,	/* HDC */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* HDC */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 576 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* NMONTH 0*/
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* NLEFTCOL 0*/
/* 00028 */ HB_P_LINEOFFSET, 3,	/* 578 */
	HB_P_MESSAGE, 50, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 151,	/* TBRUSH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'O', 'R', 'L', 'A', 'N', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 4,
	HB_P_POPLOCALNEAR, 12,	/* OBRUSH */
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 581 */
	HB_P_PUSHSYMNEAR, 164,	/* FILLRECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_PUSHSYMNEAR, 165,	/* GETCLIENTRECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 63, 0,	/* HWND */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 12,	/* OBRUSH */
	HB_P_DOSHORT, 3,
/* 00078 */ HB_P_LINEOFFSET, 8,	/* 583 */
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 8,	/* NROWSTEP */
/* 00100 */ HB_P_LINEOFFSET, 14,	/* 589 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'0', '1', '/', '0', '1', '/', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* DDATE */
/* 00133 */ HB_P_LINEOFFSET, 15,	/* 590 */
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* DDATE */
/* 00150 */ HB_P_LINEOFFSET, 17,	/* 592 */
	HB_P_MESSAGE, 108, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DIVIDE,
	HB_P_POPLOCALNEAR, 7,	/* NCOLSTEP */
/* 00172 */ HB_P_LINEOFFSET, 26,	/* 601 */
	HB_P_MESSAGE, 111, 0,	/* SAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_PLUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_PUSHSYMNEAR, 169,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_MESSAGE, 170, 0,	/* HFONT */
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_SENDSHORT, 8,
	HB_P_POP,
/* 00286 */ HB_P_LINEOFFSET, 29,	/* 604 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* N 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FORTEST,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00373) */
/* 00301 */ HB_P_LINEOFFSET, 31,	/* 606 */
	HB_P_PUSHSYMNEAR, 164,	/* FILLRECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_ZERO,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_MESSAGE, 171, 0,	/* HBRUSH */
	HB_P_MESSAGE, 172, 0,	/* OBRUSHSUNDAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 3,
/* 00365 */ HB_P_LINEOFFSET, 32,	/* 607 */
	HB_P_LOCALNEARADDINT, 5, 7, 0,	/* N 7*/
	HB_P_JUMPNEAR, 177,	/* -79 (abs: 00292) */
/* 00373 */ HB_P_LINEOFFSET, 34,	/* 609 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* NMONTH 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 146, 0,	/* 146 (abs: 00530) */
/* 00387 */ HB_P_LINEOFFSET, 35,	/* 610 */
	HB_P_MESSAGE, 173, 0,	/* LINE */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_MESSAGE, 108, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00434 */ HB_P_LINEOFFSET, 36,	/* 611 */
	HB_P_MESSAGE, 111, 0,	/* SAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_PLUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSYMNEAR, 104,	/* VZCMONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 174,	/* REGIONDATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* YEAR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_SENDSHORT, 8,
	HB_P_POP,
/* 00521 */ HB_P_LINEOFFSET, 37,	/* 612 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* NMONTH 1*/
	HB_P_JUMP, 108, 255,	/* -148 (abs: 00379) */
/* 00530 */ HB_P_LINEOFFSET, 57,	/* 632 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* N 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 179, 0,	/* 179 (abs: 00720) */
/* 00544 */ HB_P_LINEOFFSET, 58,	/* 633 */
	HB_P_MESSAGE, 173, 0,	/* LINE */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_ZERO,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00591 */ HB_P_LINEOFFSET, 59,	/* 634 */
	HB_P_PUSHSYMNEAR, 175,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 176,	/* SEMANA */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPLOCALNEAR, 6,	/* DDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* CDAY */
/* 00619 */ HB_P_LINEOFFSET, 63,	/* 638 */
	HB_P_MESSAGE, 111, 0,	/* SAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 217, 63, 1, 1,	/* 0.4, 1, 1 */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 169,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_PUSHLOCALNEAR, 3,	/* CDAY */
	HB_P_MESSAGE, 170, 0,	/* HFONT */
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CDAY */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_SENDSHORT, 8,
	HB_P_POP,
/* 00711 */ HB_P_LINEOFFSET, 64,	/* 639 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* N 1*/
	HB_P_JUMP, 75, 255,	/* -181 (abs: 00536) */
/* 00720 */ HB_P_LINEOFFSET, 67,	/* 642 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* NMONTH 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 00927) */
/* 00734 */ HB_P_LINEOFFSET, 68,	/* 643 */
	HB_P_PUSHSYMNEAR, 174,	/* REGIONDATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* DDATE */
/* 00759 */ HB_P_LINEOFFSET, 69,	/* 644 */
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* NDAY */
/* 00770 */ HB_P_LINEOFFSET, 71,	/* 646 */
	HB_P_PUSHSYMNEAR, 48,	/* MONTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 00918) */
/* 00785 */ HB_P_LINEOFFSET, 72,	/* 647 */
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* DAY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* CDAY */
/* 00806 */ HB_P_LINEOFFSET, 75,	/* 650 */
	HB_P_MESSAGE, 111, 0,	/* SAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 10,	/* NMONTH */
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 8,	/* NROWSTEP */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 217, 63, 1, 1,	/* 0.4, 1, 1 */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHLOCALNEAR, 4,	/* NDAY */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPLOCALNEAR, 4,	/* NDAY */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* NCOLSTEP */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 169,	/* GETTEXTWIDTH */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_PUSHLOCALNEAR, 3,	/* CDAY */
	HB_P_MESSAGE, 170, 0,	/* HFONT */
	HB_P_MESSAGE, 168, 0,	/* OFONT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CDAY */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_MESSAGE, 177, 0,	/* OFONTHEADER */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_SENDSHORT, 8,
	HB_P_POP,
/* 00908 */ HB_P_LINEOFFSET, 76,	/* 651 */
	HB_P_PUSHLOCALNEAR, 6,	/* DDATE */
	HB_P_INC,
	HB_P_POPLOCALNEAR, 6,	/* DDATE */
	HB_P_JUMP, 111, 255,	/* -145 (abs: 00770) */
/* 00918 */ HB_P_LINEOFFSET, 78,	/* 653 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* NMONTH 1*/
	HB_P_JUMP, 58, 255,	/* -198 (abs: 00726) */
/* 00927 */ HB_P_LINEOFFSET, 80,	/* 655 */
	HB_P_PUSHSYMNEAR, 95,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 178, 0,	/* BPAINTED */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01007) */
/* 00948 */ HB_P_LINEOFFSET, 81,	/* 656 */
	HB_P_MESSAGE, 179, 0,	/* EVAL */
	HB_P_MESSAGE, 178, 0,	/* BPAINTED */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* HDC */
	HB_P_PUSHSYMNEAR, 180,	/* MIN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 183,	/* MAX */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 01007) */
/* 01007 */ HB_P_LINEOFFSET, 86,	/* 661 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01012 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_DESTROY )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 155, 2,	/* 667 */
	HB_P_MESSAGE, 184, 0,	/* END */
	HB_P_MESSAGE, 172, 0,	/* OBRUSHSUNDAY */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 668 */
	HB_P_MESSAGE, 184, 0,	/* END */
	HB_P_MESSAGE, 185, 0,	/* OBRUSHSELECTED */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00037 */ HB_P_LINEOFFSET, 2,	/* 669 */
	HB_P_MESSAGE, 184, 0,	/* END */
	HB_P_MESSAGE, 177, 0,	/* OFONTHEADER */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00052 */ HB_P_LINEOFFSET, 4,	/* 671 */
	HB_P_MESSAGE, 186, 0,	/* DESTROY */
	HB_P_MESSAGE, 163, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00068 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_LBUTTONDOWN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 165, 2,	/* 677 */
	HB_P_PUSHSYMNEAR, 187,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NROW */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DIVIDE,
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NMONTH */
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 679 */
	HB_P_PUSHSYMNEAR, 187,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NCOL */
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_MESSAGE, 108, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DIVIDE,
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 174,	/* REGIONDATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 6,	/* NDAY */
/* 00113 */ HB_P_LINEOFFSET, 4,	/* 681 */
	HB_P_PUSHLOCALNEAR, 6,	/* NDAY */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00127) */
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_AND,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 00218) */
/* 00129 */ HB_P_LINEOFFSET, 5,	/* 682 */
	HB_P_MESSAGE, 144, 0,	/* _DSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NDAY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00194 */ HB_P_LINEOFFSET, 6,	/* 683 */
	HB_P_MESSAGE, 138, 0,	/* _LMOVE */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00205 */ HB_P_LINEOFFSET, 7,	/* 684 */
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00218) */
/* 00218 */ HB_P_LINEOFFSET, 10,	/* 687 */
	HB_P_MESSAGE, 188, 0,	/* LBUTTONDOWN */
	HB_P_MESSAGE, 163, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* NROW */
	HB_P_PUSHLOCALNEAR, 2,	/* NCOL */
	HB_P_PUSHLOCALNEAR, 3,	/* NKEYFLAGS */
	HB_P_SENDSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00240 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_LBUTTONUP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 181, 2,	/* 693 */
	HB_P_PUSHSYMNEAR, 95,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 189, 0,	/* BSELECT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 00085) */
/* 00028 */ HB_P_LINEOFFSET, 1,	/* 694 */
	HB_P_MESSAGE, 179, 0,	/* EVAL */
	HB_P_MESSAGE, 189, 0,	/* BSELECT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 180,	/* MIN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 183,	/* MAX */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00085) */
/* 00085 */ HB_P_LINEOFFSET, 4,	/* 697 */
	HB_P_MESSAGE, 138, 0,	/* _LMOVE */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00096 */ HB_P_LINEOFFSET, 6,	/* 699 */
	HB_P_MESSAGE, 190, 0,	/* LBUTTONUP */
	HB_P_MESSAGE, 163, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* NROW */
	HB_P_PUSHLOCALNEAR, 2,	/* NCOL */
	HB_P_PUSHLOCALNEAR, 3,	/* NKEYFLAGS */
	HB_P_SENDSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00118 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( TPICKDATE_MOUSEMOVE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 193, 2,	/* 705 */
	HB_P_PUSHSYMNEAR, 187,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NROW */
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_MESSAGE, 109, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 166, 0,	/* NTOPSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DIVIDE,
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NMONTH */
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 707 */
	HB_P_PUSHSYMNEAR, 187,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NCOL */
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_MESSAGE, 108, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 167, 0,	/* NLEFTSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DIVIDE,
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 66,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 174,	/* REGIONDATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 6,	/* NDAY */
/* 00113 */ HB_P_LINEOFFSET, 5,	/* 710 */
	HB_P_MESSAGE, 191, 0,	/* LMOVE */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00130) */
	HB_P_PUSHLOCALNEAR, 6,	/* NDAY */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_AND,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00138) */
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_AND,
	HB_P_JUMPFALSE, 206, 0,	/* 206 (abs: 00344) */
/* 00141 */ HB_P_LINEOFFSET, 6,	/* 711 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* NDAY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NMONTH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 129, 0,	/* NYEAR */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* DEND */
/* 00200 */ HB_P_LINEOFFSET, 8,	/* 713 */
	HB_P_PUSHSYMNEAR, 99,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* DEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00224) */
	HB_P_PUSHLOCALNEAR, 7,	/* DEND */
	HB_P_MESSAGE, 192, 0,	/* DTEMP */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_NOTEQUAL,
	HB_P_AND,
	HB_P_JUMPFALSE, 118, 0,	/* 118 (abs: 00342) */
/* 00227 */ HB_P_LINEOFFSET, 9,	/* 714 */
	HB_P_MESSAGE, 146, 0,	/* _DTEMP */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHLOCALNEAR, 7,	/* DEND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00239 */ HB_P_LINEOFFSET, 10,	/* 715 */
	HB_P_MESSAGE, 145, 0,	/* _DEND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_PUSHLOCALNEAR, 7,	/* DEND */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00251 */ HB_P_LINEOFFSET, 11,	/* 716 */
	HB_P_MESSAGE, 90, 0,	/* REFRESH */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00262 */ HB_P_LINEOFFSET, 12,	/* 717 */
	HB_P_PUSHSYMNEAR, 95,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 193, 0,	/* BCHANGE */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 00340) */
/* 00283 */ HB_P_LINEOFFSET, 13,	/* 718 */
	HB_P_MESSAGE, 179, 0,	/* EVAL */
	HB_P_MESSAGE, 193, 0,	/* BCHANGE */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSYMNEAR, 180,	/* MIN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 183,	/* MAX */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 181, 0,	/* DSTART */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 182, 0,	/* DEND */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00340) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00342) */
	HB_P_JUMPNEAR, 2,	/* 2 (abs: 00344) */
/* 00344 */ HB_P_LINEOFFSET, 18,	/* 723 */
	HB_P_MESSAGE, 194, 0,	/* MOUSEMOVE */
	HB_P_MESSAGE, 163, 0,	/* TCONTROL */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* NROW */
	HB_P_PUSHLOCALNEAR, 2,	/* NCOL */
	HB_P_PUSHLOCALNEAR, 3,	/* NKEYFLAGS */
	HB_P_SENDSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00366 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( REGIONDATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 217, 2,	/* 729 */
	HB_P_PUSHSYMNEAR, 46,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '/', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NMONTH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* CYEAR */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00040 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

static HARBOUR hb_INITSTATICS( void )
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 196, 0, 29, 0,	/* symbol (_INITSTATICS), 29 statics */
	HB_P_SFRAME, 196, 0,	/* symbol (_INITSTATICS) */
	HB_P_FALSE,
	HB_P_POPSTATIC, 4, 0,	/* LTRANSP */
	HB_P_PUSHBYTE, 156,	/* -100 */
	HB_P_POPSTATIC, 5, 0,	/* NX */
	HB_P_PUSHBYTE, 156,	/* -100 */
	HB_P_POPSTATIC, 6, 0,	/* NY */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', 'e', 'b', 'r', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'M', 'a', 'r', 'z', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'b', 'r', 'i', 'l', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'M', 'a', 'y', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'J', 'u', 'n', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'J', 'u', 'l', 'i', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'A', 'g', 'o', 's', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'e', 't', 'i', 'e', 'm', 'b', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'O', 'c', 't', 'u', 'b', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', 'v', 'i', 'e', 'm', 'b', 'r', 'e', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'i', 'c', 'i', 'e', 'm', 'b', 'r', 'e', 0, 
	HB_P_ARRAYGEN, 12, 0,	/* 12 */
	HB_P_POPSTATIC, 22, 0,	/* AMESES */
	HB_P_PUSHBYTE, 156,	/* -100 */
	HB_P_POPSTATIC, 23, 0,	/* NXOLD */
	HB_P_PUSHBYTE, 156,	/* -100 */
	HB_P_POPSTATIC, 24, 0,	/* NYOLD */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_POPSTATIC, 28, 0,	/* NFACTOR */
	HB_P_ENDPROC
/* 00157 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

