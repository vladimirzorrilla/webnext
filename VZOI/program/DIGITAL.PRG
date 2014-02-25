/// OBJECT INSPECTOR DE FORMULARIOS WEB PARA REPORTES

FUNC VZOI
vzForm("MNUI","ADMINISTRAR PROYECTO")
RETU .T.

FUNC VZOIFORM
sele A
 VZUSE_("FORMULARIOS")
 VZDBSEEK({"XX"},{"CODFORM"},,,"TABINDEX",,,,,, )
 vzForm("POLFO","OBJECT FORMULARIOS")

RETU .T.

FUNC VZOIREPO
sele A
 VZUSE_("REPORTES")
 VZDBSEEK({"XX"},{"COD_REPO"},,,"COD",,,,,, )
 vzForm("POLRE","OBJECT INSPECTOR REPORTES")
RETU .T.

func filsimple
Local cod:=_vg("polre_14")
 VZDBSEEK({cod},{"COD_REPO"},,,"COD",,,,,, )
_r("polre_1",,,1)
RETU .T.


FUNC AGRESGM
Local cod:=_vg("polre_14")
vzappend({cod},{"COD_REPO"})
_r("polre_1",,,1)
_F("polre_1")

RETU .T.


FUNC ELIMSGM
VZDELE()
_r("polre_1")
RETU .T.



FUNC LLENACODREPO
Local j,arepo:={},oSql
vz2Query(@oSql,"SELECT distinct cod_repo FROM REPORTES")
For j=1 to oSql:nRowCount
  oSql:Goto(j) ; oSql:Load(j)
  aadd(arepo,oSql:cod_repo)
next j
RETU arepo


FUNC LLENACODFORM
Local j,arepo:={},oSql
vz2Query(@oSql,"SELECT distinct codform FROM FORMULARIOS")
For j=1 to oSql:nRowCount
  oSql:Goto(j) ; oSql:Load(j)
  aadd(arepo,oSql:codform)
next j
RETU arepo


////////////////////////////

func filsimplefo
Local cod:=_vg("polfo_14")
 VZDBSEEK({cod},{"CODFORM"},,,"TABINDEX",,,,,, )
_r("polfo_13",,,1)
RETU .T.


FUNC AGRESGMfo
Local cod:=_vg("polfo_14")
vzappend({cod},{"CODFORM"})
_r("polfo_1",,,1)
_F("polfo_1")

RETU .T.


FUNC ELIMSGMfo
VZDELE()
_r("polfo_1")
RETU .T.



FUNC SINCRONIZACION
Local fila
Local archivok:=memoread("C:\CON2010\CPSk.SQL")
Local archivodele:=memoread("C:\CON2010\CPSdele.SQL")
Local archivo:=memoread("C:\CON2010\CPS.SQL"),n,salir:=.f.,kk:=1

_t("MNUI_7",archivodele)
       vzexecute(archivodele)

     while .t.
       if (n:=AT(CHR(13)+CHR(10),archivo))>0
         fila:=subs(archivo,1,n-1)
         kk++
        archivo=subs(archivo,n+2 )
       else
         fila:=archivo
         salir:=.t.
       endif
       _t("MNUI",ltrim(str(kk))+"  de  "+archivok)

       _t("MNUI_6",fila)
       Memory(-1)
       SysRefresh()
       vzexecute(fila)
       if salir
         exit
       endif
     Enddo

msgalert("Termino la sincronizacion")
retu .t.




