del VZOI.exe
del clon32.exe
@ECHO OFF
CLS
ECHO **********************************
ECHO Generacion de Ejecutable WINRAD  A 32 BITS
ECHO **********************************

ECHO ****************************************
ECHO *** Convertir  *.prg del WINRAD a *.c  ***
ECHO ****************************************
c:\X\bin\harbour \vclon\mclon32\clonR  /n /ic:\X\include /p /oc:\VZOI\obj32\clonR.c
c:\X\bin\harbour \vclon\mclon32\clon32   /n /ic:\X\include /p /oc:\VZOI\obj32\clon32.c
c:\X\bin\harbour \vclon\mclon32\clone  /n /ic:\X\include /p /oc:\VZOI\obj32\clone.c
c:\X\bin\harbour \vclon\mclon32\clone1  /n /ic:\X\include /p /oc:\VZOI\obj32\clone1.c
c:\X\bin\harbour \vclon\mclon32\clone2  /n /ic:\X\include /p /oc:\VZOI\obj32\clone2.c
c:\X\bin\harbour \vclon\mclon32\clone3  /n /ic:\X\include /p /oc:\VZOI\obj32\clone3.c


c:\X\bin\harbour \vclon\mclon32\clonc  /n /ic:\X\include /p /oc:\VZOI\obj32\clonc.c
c:\X\bin\harbour \vclon\mclon32\clonh  /n /ic:\X\include /p /oc:\VZOI\obj32\clonh.c
c:\X\bin\harbour \vclon\mclon32\cps    /n /ic:\X\include /p /oc:\VZOI\obj32\cps.c
c:\X\bin\harbour \vclon\mclon32\xvclon  /n /ic:\X\include /p /oc:\VZOI\obj32\xvclon.c
c:\X\bin\harbour \vclon\mclon32\visual  /n /ic:\X\include /p /oc:\VZOI\obj32\visual.c
c:\X\bin\harbour \vclon\mclon32\visualr  /n /ic:\X\include /p /oc:\VZOI\obj32\visualr.c
c:\X\bin\harbour \vclon\mclon32\visualf  /n /ic:\X\include /p /oc:\VZOI\obj32\visualf.c

ECHO ****************************************
ECHO *** Compilar *.c  para generar *.obj  ***
ECHO ****************************************

c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clon32.obj C:\VZOI\OBJ32\clon32.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clone.obj  C:\VZOI\OBJ32\clone.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clone1.obj C:\VZOI\OBJ32\clone1.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clone2.obj C:\VZOI\OBJ32\clone2.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clone3.obj C:\VZOI\OBJ32\clone3.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clonc.obj  C:\VZOI\OBJ32\clonc.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clonh.obj  C:\VZOI\OBJ32\clonh.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\clonR.obj  C:\VZOI\OBJ32\clonR.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\cps.obj    C:\VZOI\OBJ32\cps.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\xvclon.obj  C:\VZOI\OBJ32\xvclon.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visual.obj  C:\VZOI\OBJ32\visual.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualr.obj  C:\VZOI\OBJ32\visualr.c
c:\X\bin\bcc32 -M -c -O2 -Ic:\X\include -tW -oC:\VZOI\OBJ32\visualf.obj  C:\VZOI\OBJ32\visualf.c
