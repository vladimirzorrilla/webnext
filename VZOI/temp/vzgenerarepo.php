<?php
include("vzconecta.php");
$codusu=$_GET['usuario'];
$codrepo=$_GET['codrepo'];
$coltabla=$_GET['coltabla'];
$latabla=$_GET['latabla'];
$qmenu=$_GET['qmenu'];
$qsmenu=$_GET['qsmenu'];
$qes=$_GET['qes'];


$nomform=$_GET['codrepo'];
/// agregar en el menu
//echo "insert into menu ( ns_menu,cod_usu,titm,n_menu,titulo,capa,filephp,ancho,altura,miselect) values ( 1,'".$codusu."','".$nomform."',".$qmenu.",'".$nomform."','".$nomform."','vzform',920  ,543   ,'".$nomform."')";
mysql_query("insert into menu ( ns_menu,cod_usu,titm,n_menu,titulo,capa,filephp,ancho,altura,miselect) values ( ".$qsmenu.",'".$codusu."','".$nomform."',".$qmenu.",'".$nomform."','".$nomform."','vzform',920  ,543   ,'".$nomform."')" , $conexion) or die("Problemas en el select".mysql_error());
$code1="";
$code1=$code1.'function imphtm()\r\n';
$code1=$code1.'{\r\n';
$code1=$code1.'var aleatorio = Math.random();\r\n';
$code1=$code1.'tablah=document.getElementById("'.$codrepo.'").style.height;\r\n';
$code1=$code1.'tabla="'.$latabla.'";\r\n';
$code1=$code1.'codrepo="'.$codrepo.'";\r\n';
$code1=$code1.'paginacion=150;\r\n';
$code1=$code1.'restosql="ORDER BY 1";\r\n';
$code1=$code1.'showquery="NO";\r\n';



if ($qes==1)
{
$code1=$code1.'anchotabla=120;\r\n';
$code1=$code1.'titrepo="'.$latabla.'";\r\n';
$code1=$code1.'n1group=999;\r\n';
$code1=$code1.'titgroup="";\r\n';
$code1=$code1.'n2group="";\r\n';
  $code1=$code1.$nomform.'.location.href="vzrepoxls.php?usuario="+codusu+"&tabla="+tabla+"&codrepo="+codrepo+"&paginacion="+paginacion+"&anchotabla="+anchotabla+"&titrepo="+titrepo+"&restosql="+restosql+"&n1group="+n1group+"&titgroup="+titgroup+"&n2group="+n2group+"&showquery="+showquery;\r\n';
}else{

  $code1=$code1."$.ajaxSetup({async:false});\r\n";
  $code1=$code1.' codrepo="'.$nomform.'";\r\n';
  $code1=$code1.' eonkeyup=""; \r\n';
  $code1=$code1.' eonblur=""; \r\n';
  $code1=$code1.' eonclick=""; \r\n';

  $code1=$code1.'  $.get("vzgrid.php", {  tablaheight : tablah ,eonblur : eonblur , eonkeyup : eonkeyup , eonclick : eonclick , numale : aleatorio , usuario : codusu , codrepo : codrepo , tabla : tabla  ,  restosql : restosql , showquery : showquery , paginacion : paginacion },  \r\n';
  $code1=$code1."  function(data){ \r\n";
  $code1=$code1.'   document.getElementById("'.$nomform.'").innerHTML=alltrim(data) \r\n';



  $code1=$code1."  });\r\n";
}

     if ($qes==3)
     {
       $code1=$code1.'  ponfocusfo3();\r\n';
       $code1=$code1.'  vzhidefichacli();\r\n';
     }


$code1=$code1.'}\r\n';
$code2="";
$code3="";
$code4="";

if ($qes==2)
{
 $code5="";
 $code5=$code5.'function agregareg()';
 $code5=$code5.'{';
 $code5=$code5.'var aleatorio = Math.random();';
 $code5=$code5.'cadena="INSERT INTO '.$latabla.' () VALUES ()";';
 $code5=$code5.'$.ajaxSetup({async:false});';
 $code5=$code5.'$.get("vzexecute.php", { acc : cadena , numale : aleatorio });';
 $code5=$code5.'grabartodo("fo3");';
 $code5=$code5.'location.reload();';
 $code5=$code5.'}';
}else{
 $code5="";
}


$code6="";
$code7="";
$code8="";


/// agregar en los formularios
$fode1=utf8_decode(html_entity_decode("imphtm()"));
$fode2=utf8_decode(html_entity_decode("imppdf()"));
$code1=utf8_decode(html_entity_decode($code1));
//$code2=utf8_decode(html_entity_decode($code2));
 //      codform tipo ntop nleft nwidth nheight nmaxlength tfont    cfont  nfontsize   ccampo    ctext        onclick  codeclick
$l1="'".$nomform."','B',8 , 628   ,100  , 22    ,  0       , NULL ,  NULL   ,NULL    ,'fil'    ,'Consultar'   ,'".$fode1."','".$code1."')";
$l2="'".$nomform."','B',8 , 748   ,100  , 22    ,  0       , NULL ,  NULL   ,NULL    ,'Imprime','Imprimir'    ,'".$fode2."','".$code2."')";
$l3="'".$nomform."','L',16, 300  ,380  , 36    ,  50      ,'B'   ,'Verdana',   24   ,'Labelt' ,'".$latabla."',''        ,'')";


if ($qes==1)
{
 $l4="'".$nomform."','F',66, 26   ,850  , 420   ,  0       , NULL ,  NULL   ,NULL    ,'".$nomform."'     ,' '           ,''        ,'')";
}else{
 $l4="'".$nomform."','G',66, 26   ,850  , 420   ,  0       , NULL ,  NULL   ,NULL    ,'".$nomform."'     ,' '           ,''        ,'')";

        if ($qes==3)
         {
            $fode5=utf8_decode(html_entity_decode('mostrarVentanaVacia("fichacli")'));
            $fode6=utf8_decode(html_entity_decode('mostrarVentana("fichacli")'));
         }else{
             $fode5=utf8_decode(html_entity_decode("agregareg()"));
             $fode6=utf8_decode(html_entity_decode("editareg()"));
         }

 $codigu='tecla120("'.$latabla.'")';
 $fode7=utf8_decode(html_entity_decode($codigu));
 $fode8=utf8_decode(html_entity_decode('grabartodo("fo3")'));
 $l5="'a1.PNG','".$nomform."','I',191,792   ,140   , 78    ,  0       , NULL  ,  NULL   ,NULL    ,'btnagrega'    ,'a.PNG'   ,'".$fode5."','".$code5."')";

  if ($qes==3)
  {
    $l6="'m1.PNG','".$nomform."','I',277,792,140   , 78    ,  0       , NULL  ,  NULL   ,NULL    ,'btnedita'    ,'m.PNG'   ,'".$fode6."','".$code6."')";
  }

 $l7="'e1.PNG','".$nomform."','I',364,792   ,140   , 78    ,  0       , NULL  ,  NULL   ,NULL    ,'btnelimina'    ,'e.PNG'   ,'".$fode7."','".$code7."')";
 $l8="'B1.PNG','".$nomform."','I',454,792   ,140   , 78   ,  0       , NULL  ,  NULL   ,NULL    ,'btngraba'    ,'B.PNG'   ,'".$fode8."','".$code8."')";

 $lconsu="'c1.PNG','".$nomform."','I',19,792   ,140   , 78    ,  0       , NULL  ,  NULL   ,NULL    ,'btnconsulta'    ,'c.PNG'   ,'imphtm()','')";
 $limpri="'i1.PNG','".$nomform."','I',105,792   ,140   , 78   ,  0       , NULL  ,  NULL   ,NULL    ,'btnimprime'    ,'i.PNG'   ,'imppdf()','')";

}

$c1="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onclick,codeclick) values(";
//echo $c1.$l1;

if ($qes==1)
{
mysql_query($c1.$l1,$conexion) or die("Problemas en el select".mysql_error());
mysql_query($c1.$l2,$conexion) or die("Problemas en el select".mysql_error());
mysql_query($c1.$l3,$conexion) or die("Problemas en el select".mysql_error());
}





mysql_query($c1.$l4,$conexion) or die("Problemas en el select".mysql_error());


if ($qes>1)
{
$c11="insert into formularios(ctabla,codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onclick,codeclick) values(";

mysql_query($c11.$l5,$conexion) or die("Problemas en el select".mysql_error());

 if ($qes==3)
  {
  mysql_query($c11.$l6,$conexion) or die("Problemas en el select".mysql_error());
  }


mysql_query($c11.$l7,$conexion) or die("Problemas en el select".mysql_error());
mysql_query($c11.$l8,$conexion) or die("Problemas en el select".mysql_error());

mysql_query($c11.$lconsu,$conexion) or die("Problemas en el select".mysql_error());
mysql_query($c11.$limpri,$conexion) or die("Problemas en el select".mysql_error());

}

// ficha de datos en ventana superpuesta
if ($qes==3)
{
 $cficha="insert into formularios(ctabla,codform       ,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo      ,ctext,onclick,codeclick,padre     ,tabindex,nex2,nex1) values(";
 // capa div ventana
 $lficha1=" '' ,'".$nomform."','D' ,90 ,25  ,400   , 200   ,  2       , NULL, NULL,NULL     ,'fichacli'  ,' '  ,''     ,''       ,'fichacli',99      , ' '  ,'fo7')";
 // cabecera
 $lficha2="'cabcaja.PNG' ,'".$nomform."','D' ,89  ,22 ,35,  33 ,  3       , NULL, NULL,NULL     ,'cabecera'  ,' '  ,''     ,''       ,'fichacli',100     , ' ' ,'fichacli')";
  //$foncli=utf8_decode(html_entity_decode('grabartodo("fo3")'));

 $scodx=utf8_decode(html_entity_decode('vzhidefichacli()'));
 $lficha3="'exit2.PNG','".$nomform."','I' ,99  ,393  ,50    ,  23   ,  ''       , NULL, NULL,NULL     ,'cierra'    ,'exit21.PNG'  ,'".$scodx."','','fichacli',111,'','')";
  //aca me quedo


$cadcamp="";
$result = mysql_query("select * from ".$latabla,$conexion) or die("Problemas en el select".mysql_error());
$kcampos=mysql_num_fields($result);

for ($i = 1; $i <$kcampos ; $i++)
{
   $ccamp=mysql_field_name($result, $i);
   $cadcamp=$cadcamp.$ccamp." ";
}


 $lficha4="'".$cadcamp."','".$nomform."','C' ,6  ,3    ,140   , 18    , 18       , 'Bold', 'Verdana' ,12 ,'crifil'  ,'".$cadcamp."' ,''     ,''       ,'', ''     , ' '  ,'')";

 $lficha5=" '' ,'".$nomform."','T' ,6  ,158  ,275  , 22    , 26       , 'Bold', 'Verdana' ,12 ,'filtrame'  ,' '  ,''     ,''       ,'', ''     , ' '  ,'')";
 $lficha6=" '' ,'".$nomform."','L' ,6  ,436  ,71   , 18    , 18       , 'Bold', 'Verdana' ,12 ,'mostra'  ,'Mostrar'  ,''     ,''       ,'', ''     , ' '  ,'')";


 $lficha7=" '' ,'".$nomform."','C' ,6  ,517  ,80   , 18    , 18       , 'Bold', 'Verdana' ,12 ,'mostrar'  ,'50 100 150 200 TODO'  ,''     ,''       ,'',  ''    , ' '  ,'')";

 $lficha8=" '' ,'".$nomform."','X' ,7  ,610    , 50   , 18   , 26       , 'Bold', 'Verdana' ,12 ,'pordentro'  ,' '  ,''     ,''       ,'',  ''    , ' '  ,'')";

 //  echo "1  -------------".$cficha.$lficha1;
 mysql_query($cficha.$lficha1,$conexion) or die("Problemas en el select".mysql_error());

 //  echo "2  -------------".$cficha.$lficha2;
 mysql_query($cficha.$lficha2,$conexion) or die("Problemas en el select".mysql_error());

 //  echo "3  -------------".$cficha.$lficha3;
 mysql_query($cficha.$lficha3,$conexion) or die("Problemas en el select".mysql_error());



echo $cficha.$lficha4 ;


 mysql_query($cficha.$lficha4,$conexion) or die("Problemas en el select".mysql_error());
 mysql_query($cficha.$lficha5,$conexion) or die("Problemas en el select".mysql_error());
 mysql_query($cficha.$lficha6,$conexion) or die("Problemas en el select".mysql_error());
 mysql_query($cficha.$lficha7,$conexion) or die("Problemas en el select".mysql_error());
 mysql_query($cficha.$lficha8,$conexion) or die("Problemas en el select".mysql_error());

 }

// agregar en reportes
$result = mysql_query("select * from ".$latabla,$conexion) or die("Problemas en el select".mysql_error());

$kcampos=mysql_num_fields($result);

if( $coltabla<$kcampos )
{
 $kcampos=$coltabla;
}


//////////////////////    ACA       ESTOY    ARMANDO LAS CADENAS
$kntop=105;
$ktabindex=101;
/////////////////////
//echo "178 antes de entrar al navegador";

$c1="insert into reportes (cod_usu   ,cod   ,header1     ,headpdf      ,xsele      ,size ,sizer ,cod_repo      ,nototaliza,mostrar,alinear,field_type   ,maxlen) values(";
for ($i = 1; $i <$kcampos ; $i++)
 {

   $ccamp=mysql_field_name($result, $i);
   $tcamp=mysql_field_type($result, $i);
   if ($tcamp=="string")
   {
    $tcamp="c";
   }

   if ($tcamp=="int" or $tcamp=="decimal" or $tcamp=="real" )
   {
    $tcamp="n";
   }

   if ($tcamp=="date")
   {
    $tcamp="d";
   }


   //$ncamp=mysql_field_len($result,$ccamp); // solo funciona en la web
   $ncamp=100;
   $l1="'".$codusu."',".$i.",'".$ccamp."','".$ccamp."','".$ccamp."',".$ncamp.",".$ncamp.",'".$codrepo."','N'       ,'S'    ,'LEFT' ,'".$tcamp."',".$ncamp.")";
 // echo "187----------------".$c1.$l1;
   mysql_query($c1.$l1,$conexion) or die("Problemas en el select".mysql_error());

    if ($i==1)
    {
       $ccamp2=mysql_field_name($result, 2);
       $solo1=utf8_decode(html_entity_decode('ValidarCodigo(event,this,"'.$tcamp.$ccamp2.'","'.$latabla.'","'.$ccamp.'")'));
       $tcamp1=$tcamp;
       $ccamp1=$ccamp;
    }
    else
    {
      $solo1="";
    }

     $zc1="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onkeyup,padre,tabindex) values(";
      //      codform    ,tipo,   ntop , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onkeyup   , padre   ,tabindex
     $zl0="'".$nomform."','L' ,".$kntop.",502 ,100    ,  22   ,  50      , NULL ,  NULL  ,NULL       ,'Text".$ccamp."','".$ccamp."' ,  ''         ,'fichacli',".$ktabindex.")";
         $ktabindex++;
     $zl1="'".$nomform."','T' ,".$kntop.",608   ,100  ,  22    ,  50      , NULL ,  NULL   ,NULL    ,'".$tcamp.$ccamp."','    ' ,'".$solo1."','fichacli',".$ktabindex.")";
         $kntop=$kntop+22;
         $ktabindex++;

    if ($qes!=1)
    {

       if ($i<=20)
       {
         //echo "205 -------------".$zc1.$zl0;
         mysql_query($zc1.$zl0,$conexion) or die("Problemas en el select".mysql_error());

         //echo "208 -------------".$zc1.$zl1;

         mysql_query($zc1.$zl1,$conexion) or die("Problemas en el select".mysql_error());
       }

    }

 }
     // boton grabar
     $zcb="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onclick,padre,tabindex) values(";
      //      codform    ,tipo,   ntop , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onclick  , padre   ,tabindex
     $sgraba=utf8_decode(html_entity_decode('GrabarVentana("'.$latabla.'","'.$tcamp1.$ccamp1.'","fichacli")'));
     $zlb="'".$nomform."','B' ,".$kntop.",608 ,100    ,  30   ,   0      , NULL ,  NULL  ,NULL       ,'grabar'        , 'Grabar'    ,'".$sgraba."','fichacli',".$ktabindex.")";


   //  echo "243 -------------".$zcb.$zlb;


      mysql_query($zcb.$zlb,$conexion) or die("Problemas en el select".mysql_error());


    $recorre=mysql_query("select ROW_ID,onclick,onkeyup from formularios WHERE codform='".$nomform."'",$conexion ) or die("Problemas en el select:".mysql_error());

    while ($recorr=mysql_fetch_array($recorre))
    {

       if ($recorr["onclick"]!="")
       {
         error_reporting(0);
         $nwonclick=ereg_replace('"', "'", $recorr["onclick"] );
         $cadenatu='UPDATE formularios SET onclick="'.$nwonclick.'" where ROW_ID='.$recorr["ROW_ID"] ;
        // echo $cadenatu;
         mysql_query($cadenatu,$conexion) or die("Problemas en el select".mysql_error());
       }
       if ($recorr["onkeyup"]!="")
       {
         error_reporting(0);
         $nwonclick=ereg_replace('"', "'", $recorr["onkeyup"] );
         $cadenatu='UPDATE formularios SET onkeyup="'.$nwonclick.'" where ROW_ID='.$recorr["ROW_ID"] ;
         //echo $cadenatu;
         mysql_query($cadenatu,$conexion) or die("Problemas en el select".mysql_error());
       }

    }

    // echo "termino el proceso -------------";

mysql_close($conexion);

?>






