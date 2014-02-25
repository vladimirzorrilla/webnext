del VZOI32.exe
del clon32.exe
@ECHO OFF
CLS
ECHO **********************************
ECHO Generacion de Ejecutable WINRAD  A 32 BITS
ECHO **********************************

ECHO ****************************************
ECHO *** Convertir  *.prg del WINRAD a *.c  ***
ECHO ****************************************
c:\X\bin\harbour \VZOI\PROGRAM\SAD  /n /ic:\X\include /p /oc:\VZOI\obj32\SAD.c
c:\X\bin\harbour \VZOI\PROGRAM\proforma  /n /ic:\X\include /p /oc:\VZOI\obj32\proforma.c


c:\X\bin\harbour \vclon\mclon32\visual  /n /ic:\X\include /p /oc:\VZOI\obj32\visual.c
c:\X\bin\harbour \vclon\mclon32\visualr  /n /ic:\X\include /p /oc:\VZOI\obj32\visualr.c
c:\X\bin\harbour \vclon\mclon32\visualrP  /n /ic:\X\include /p /oc:\VZOI\obj32\visualrP.c


c:\X\bin\harbour \vclon\mclon32\visualf  /n /ic:\X\include /p /oc:\VZOI\obj32\visualf.c
c:\X\bin\harbour \vclon\mclon32\visualgc  /n /ic:\X\include /p /oc:\VZOI\obj32\visualgc.c
c:\X\bin\harbour \vclon\mclon32\visualFM  /n /ic:\X\include /p /oc:\VZOI\obj32\visualFM.c
c:\X\bin\harbour \vclon\mclon32\visualDS  /n /ic:\X\include /p /oc:\VZOI\obj32\visualDS.c
c:\X\bin\harbour \vclon\mclon32\FIVESCR  /n /ic:\X\include /p /oc:\VZOI\obj32\FIVESCR.c

rem c:\X\bin\harbour \vclon\VZLL\TDTPICKE  /n /ic:\X\include /p /oc:\VZOI\obj32\TDTPICKE.c
rem c:\X\bin\harbour \vclon\VZLL\TANIMATE  /n /ic:\X\include /p /oc:\VZOI\obj32\TANIMATE.c
rem c:\X\bin\harbour \vclon\VZLL\TLISTVIE  /n /ic:\X\include /p /oc:\VZOI\obj32\TLISTVIE.c
rem c:\X\bin\harbour \vclon\VZLL\TRICHEDI  /n /ic:\X\include /p /oc:\VZOI\obj32\TRICHEDI.c
c:\X\bin\harbour \vclon\VZLL\TREGLA  /n /ic:\X\include /p /oc:\VZOI\obj32\TREGLA.C
c:\X\bin\harbour \vclon\VZLL\printer /n /ic:\X\include /p /oc:\VZOI\obj32\printer.C

c:\X\bin\harbour \vclon\VZLL\BUTTON /n /ic:\X\include /p /oc:\VZOI\obj32\BUTTON.C


ECHO ****************************************
ECHO *** Compilar *.c  para generar *.obj  ***
ECHO ****************************************

c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\SAD.obj  C:\VZOI\OBJ32\SAD.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\proforma.obj  C:\VZOI\OBJ32\proforma.c


c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visual.obj  C:\VZOI\OBJ32\visual.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualGC.obj  C:\VZOI\OBJ32\visualGC.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualrP.obj  C:\VZOI\OBJ32\visualrP.c

c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualr.obj  C:\VZOI\OBJ32\visualr.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualf.obj  C:\VZOI\OBJ32\visualf.c

c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualfM.obj  C:\VZOI\OBJ32\visualfM.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualDS.obj  C:\VZOI\OBJ32\visualDS.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\fIVESCR.obj  C:\VZOI\OBJ32\fIVESCR.c

rem c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TDTPICKE.obj  C:\VZOI\OBJ32\TDTPICKE.c
rem c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TANIMATE.obj  C:\VZOI\OBJ32\TANIMATE.c
rem c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TLISTVIE.obj  C:\VZOI\OBJ32\TLISTVIE.c
rem c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TRICHEDI.obj  C:\VZOI\OBJ32\TRICHEDI.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TREGLA.obj  C:\VZOI\OBJ32\TREGLA.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\printer.obj  C:\VZOI\OBJ32\printer.c

c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\TGET.obj  C:\VZOI\OBJ32\TGET.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\BUTTON.obj  C:\VZOI\OBJ32\BUTTON.c
