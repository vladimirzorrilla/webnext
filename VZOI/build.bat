c:\x\bin\harbour c:\vzoi\program\DIGITAL.prg /n /ic:\x\include /oc:\VZOI\obj32\DIGITAL.c /p >resu.txt
c:\X\bin\harbour \VZOI\PROGRAM\digital  /n /ic:\X\include /p /oc:\VZOI\obj32\digital.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\digital.obj  C:\VZOI\OBJ32\digital.c

COPY C:\X\LIBMYSQL3\LIBMYSQL.DLL
del VZOI.exe
del clon32.exe
@ECHO OFF
CLS
ECHO ****************************************
ECHO *** Compilando *.rc  para generar *.res  ***
ECHO ****************************************
echo c0w32.obj + > b32.bc
echo C:\VZOI\OBJ32\clon32.obj + >> b32.bc
echo C:\VZOI\OBJ32\CLONE.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONE1.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONE2.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONE3.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONC.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONH.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CLONR.OBJ + >> b32.bc
echo c:\VZOI\OBJ32\Window.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CPS.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\RPREVIEW.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TMETAFIL.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\xVCLON.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\VISUAL.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\VISUALf.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\VISUALr.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\VISUALGC.OBJ + >> b32.bc

echo c:\VZOI\OBJ32\VZVISTA.OBJ + >> b32.bc
echo c:\VZOI\OBJ32\WBROWSE.OBJ + >> b32.bc

echo C:\VZOI\OBJ32\visualRP.obj + >> b32.bc
echo C:\VZOI\OBJ32\visualds.obj + >> b32.bc
echo C:\VZOI\OBJ32\VZSCROLL.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TDTPICKE.OBJ + >> b32.bc

echo C:\VZOI\OBJ32\IMAGE.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\SL.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\EMF.OBJ + >> b32.bc

echo C:\VZOI\OBJ32\TANIMATE.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\CONTROL.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\FOLDER.obj + >> b32.bc
echo C:\VZOI\OBJ32\ALERT.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TLISTVIE.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TRICHEDI.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TREGLA.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\SSAY.obj + >> b32.bc
echo C:\VZOI\OBJ32\DSAY.obj + >> b32.bc
echo C:\VZOI\OBJ32\BDESP.obj + >> b32.bc
echo C:\VZOI\OBJ32\P2.obj + >> b32.bc
echo C:\VZOI\OBJ32\TABS.obj + >> b32.bc
echo C:\VZOI\OBJ32\TGRAPH.obj + >> b32.bc
echo C:\VZOI\OBJ32\PRINTER.obj + >> b32.bc
echo C:\VZOI\OBJ32\FOLDER.obj + >> b32.bc
echo C:\VZOI\OBJ32\LISTBOX.obj + >> b32.bc
echo C:\VZOI\OBJ32\CHECKBOX.obj + >> b32.bc
echo C:\VZOI\OBJ32\TDOSPRN.obj + >> b32.bc
echo C:\VZOI\OBJ32\BUTTON.obj + >> b32.bc
echo C:\VZOI\OBJ32\EMF.obj + >> b32.bc
echo C:\VZOI\OBJ32\errsysw.obj + >> b32.bc
echo C:\VZOI\OBJ32\help32.obj + >> b32.bc
echo C:\VZOI\OBJ32\fivescr.obj + >> b32.bc
echo C:\VZOI\OBJ32\visualfm.obj + >> b32.bc
echo C:\VZOI\OBJ32\Multiseb.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\TFILEXLS.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\XLSERROR.OBJ + >> b32.bc
echo C:\VZOI\OBJ32\XLSFUNC.OBJ + >> b32.bc
echo C:\VZOI\obj32\xbrowse.OBJ + >> b32.bc
echo C:\VZOI\obj32\anima.OBJ + >> b32.bc
echo C:\VZOI\obj32\treeitem.OBJ + >> b32.bc
echo C:\VZOI\obj32\trees.OBJ + >> b32.bc
echo C:\VZOI\obj32\CALENDAR.OBJ + >> b32.bc
//////////      PROGRAMAS DEL SISTEMA DE VZOI /////////////////////////////////
echo C:\VZOI\obj32\DIGITAL.OBJ + >> b32.bc
/////////////////////////////////////////////////////////////////////////////////////
echo C:\VZOI\OBJ32\miTGET.obj, + >> b32.bc
echo clon32.exe, + >> b32.bc
echo clon32.map, + >> b32.bc
echo c:\X\lib\twbrw32.lib + >> b32.bc
echo c:\X\lib\XLS81.lib + >> b32.bc
echo c:\X\lib\sbuttonh.lib + >> b32.bc
echo c:\X\lib\TREE32X.lib + >> b32.bc
echo c:\X\lib\FiveH.lib + >> b32.bc
echo c:\X\lib\FiveHC.lib + >> b32.bc
echo c:\X\LIB\ZIPARCHIVE.lib + >> b32.bc
echo c:\X\LIB\ODBC32.lib + >> b32.bc
echo c:\X\lib\rtl.lib + >> b32.bc
echo c:\X\lib\vm.lib + >> b32.bc
echo c:\X\lib\gtwin.lib + >> b32.bc
echo c:\X\lib\lang.lib + >> b32.bc
echo c:\X\lib\macro.lib + >> b32.bc
echo c:\X\lib\rdd.lib + >> b32.bc
echo c:\X\lib\dbfntx.lib + >> b32.bc
echo c:\X\lib\dbfcdx.lib + >> b32.bc
echo c:\X\lib\debug.lib + >> b32.bc
echo c:\X\lib\common.lib + >> b32.bc
echo c:\X\lib\pp.lib + >> b32.bc
rem Uncomment these two lines to use Advantage RDD
echo c:\X\lib\eagle1.lib + >> b32.bc
echo c:\X\lib\libmysql.lib + >> b32.bc
echo c:\X\lib\cw32.lib + >> b32.bc
echo c:\X\lib\import32.lib, >> b32.bc
echo MANI.res+  >> b32.bc
echo S153.res+  >> b32.bc
echo clon32.res >> b32.bc
ECHO ****************************************
ECHO *** linkeamos *.obj y Generamos *.exe ***
ECHO ****************************************
c:\X\bin\ilink32 -Gn -aa -Tpe -s -x @b32.bc
RENAME CLON32.EXE VZOI.EXE
VZOI
