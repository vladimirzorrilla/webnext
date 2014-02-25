function imphtm()
{
var aleatorio = Math.random();
cri=document.getElementById("crifil").value;
filcri=document.getElementById("filtrame").value;
qmostrar=document.getElementById("mostrar").value;
pord=document.getElementById("pordentro").checked;
tablah=document.getElementById("vzmenu").style.height;
tabla="menu";
codrepo="vzmenu";
paginacion=150;
restosql="ORDER BY 1";
if (filcri!="")
{
     if (pord==true)
     {
           restosql=" WHERE "+cri+" LIKE '%"+filcri+"%' ORDER BY "+cri;
     }else{
           restosql=" WHERE "+cri+" LIKE '"+filcri+"%' ORDER BY "+cri;
     }
}
if (qmostrar!="TODO")
{
 restosql=restosql+" LIMIT "+qmostrar;
}
showquery="NO";
$.ajaxSetup({async:false});
 codrepo="vzmenu";
 eonkeyup="";
 eonblur="";
 eonclick="";
  $.get("vzgrid.php", {  p1 : 100 , p2 : 102 , tablaheight : tablah ,eonblur : eonblur , eonkeyup : eonkeyup , eonclick : eonclick , numale : aleatorio , usuario : codusu , codrepo : codrepo , tabla : tabla  ,  restosql : restosql , showquery : showquery , paginacion : paginacion },
  function(data){
   document.getElementById("vzmenu").innerHTML=alltrim(data)
  });
  ponfocusfo3();
  vzhidefichacli();
}




function imppdf()
{
var aleatorio = Math.random();
cri=document.getElementById("crifil").value;
filcri=document.getElementById("filtrame").value;
qmostrar=document.getElementById("mostrar").value;
pord=document.getElementById("pordentro").checked;


 tabla="menu";
 codrepo="vzmenu";
 paginacion=18; // max de filas por pagina
 anchotabla=100;// no se  usa de momento es a4 siempre
 titrepo="LISTA DE MENUS";

restosql="ORDER BY 1";
if (filcri!="")
{
     if (pord==true)
     {
           restosql=" WHERE "+cri+" LIKE '%"+filcri+"%' ORDER BY "+cri;
     }else{
           restosql=" WHERE "+cri+" LIKE '"+filcri+"%' ORDER BY "+cri;
     }
}
if (qmostrar!="TODO")
{
 restosql=restosql+" LIMIT "+qmostrar;
}


 n1group=999;  //999 no hay quiebre comienza en 0
 titgroup="";
 n2group="";

 alert(titrepo);

 window.open("vzreportpdf.php?tabla="+tabla+"&codrepo="+codrepo+"&paginacion="+paginacion+"&anchotabla="+anchotabla+"&titrepo="+titrepo+"&restosql="+restosql+"&n1group="+n1group+"&titgroup="+titgroup+"&n2group="+n2group,"ventana2","width=905,height=415,scrollbars=YES,resizable=YES");

}




