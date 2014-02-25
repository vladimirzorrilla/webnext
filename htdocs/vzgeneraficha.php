<?php
include("vzconecta.php");
$coltabla=$_GET['coltabla'];
$latabla=$_GET['latabla'];
$nomform=$_GET['codrepo'];

// ficha de datos

 $cficha="insert into formularios(ctabla,codform       ,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo      ,ctext,onclick,codeclick,padre     ,tabindex,nex2,nex1) values(";
 // capa div ventana

$cadcamp="";
$result = mysql_query("select * from ".$latabla,$conexion) or die("Problemas en el select".mysql_error());
$kcampos=mysql_num_fields($result);

for ($i = 1; $i <$kcampos ; $i++)
{
   $ccamp=mysql_field_name($result, $i);
   $cadcamp=$cadcamp.$ccamp." ";
}


// agregar en reportes
$result = mysql_query("select * from ".$latabla,$conexion) or die("Problemas en el select".mysql_error());

$kcampos=mysql_num_fields($result);

//if( $coltabla<$kcampos )
//{
// $kcampos=$coltabla;
//}


//////////////////////    ACA       ESTOY    ARMANDO LAS CADENAS
$kntop=68;
$ktabindex=101;
/////////////////////
//echo "178 antes de entrar al navegador";

    $zcdiv33="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onfocus       ,ccargar  ,tabindex,nex1) values(";
     $zcdiv1="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onkeyup       ,padre    ,tabindex,nex1) values(";
      //         codform    ,tipo,   ntop , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo   , ctext,   onkeyup   , padre   ,tabindex
     $zcdiv3="'".$nomform."','O' ,12      ,19    ,100    ,  22   ,   50     , NULL ,  NULL  ,NULL       ,'BODY'     ,'BODY',  'inicia()' ,'panel3.png'   ,".$ktabindex.",'      ')";
     $zcdiv2="'".$nomform."','D' ,0       ,0     ,100    ,  22   ,   50     , NULL ,  NULL  ,NULL       ,'cbza'     ,''    ,  ''         ,'cbza'   ,".$ktabindex.",'focbza')";

 mysql_query($zcdiv33.$zcdiv3,$conexion) or die("Problemas en el select".mysql_error());
 mysql_query($zcdiv1.$zcdiv2,$conexion) or die("Problemas en el select".mysql_error());


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


    // truena
   $ncamp=mysql_field_len($result,$i); // solo funciona en la web
   $ncamp2=$ncamp*10;

    if ($i==1)
    {
       $ccamp2=mysql_field_name($result, 2);
       $solo1=utf8_decode(html_entity_decode('validadupli(this,"'.$tcamp.$ccamp.'","'.$tcamp.$ccamp2.'")'));
       $tcamp1=$tcamp;
       $ccamp1=$ccamp;
    }
    else
    {
      $solo1="";
    }

     $zc1="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onblur,padre,tabindex,codephp) values(";
      //      codform    ,tipo,   ntop , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onkeyup   , padre   ,tabindex
     $zl0="'".$nomform."','L' ,".$kntop.",32  ,100       ,  22    ,  50      , NULL ,  NULL  ,NULL       ,'Text".$ccamp."','".$ccamp."' ,  ''         ,'cbza',".$ktabindex.",'')";
         $ktabindex++;
      //      codform    ,tipo,   ntop   ,nleft, nwidth   ,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onkeyup   , padre   ,tabindex
     $zl1="'".$nomform."','T' ,".$kntop.",127  ,'.$ncamp2.',  22   ,'.$ncamp.', NULL ,  NULL  ,NULL       ,'".$tcamp.$ccamp."','    ' ,'".$solo1."','cbza',".$ktabindex.",'".$ccamp."')";
         $kntop=$kntop+22;
         $ktabindex++;
    mysql_query($zc1.$zl0,$conexion) or die("Problemas en el select".mysql_error());
    mysql_query($zc1.$zl1,$conexion) or die("Problemas en el select".mysql_error());
 }
     // boton grabar
     $zcb="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onclick,padre,tabindex) values(";
      //      codform    ,tipo,   ntop   , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onclick  , padre   ,tabindex
     $sgraba=utf8_decode(html_entity_decode('grababc()'));
     $zlb="'".$nomform."','B' ,".$kntop.",40    ,100    ,  30   ,   0      , NULL ,  NULL  ,NULL       ,'grabar'        , 'Grabar'    ,'".$sgraba."','cbza',".$ktabindex.")";
      mysql_query($zcb.$zlb,$conexion) or die("Problemas en el select".mysql_error());

     // boton cancela
     $zcb="insert into formularios(codform,tipo,ntop,nleft,nwidth,nheight,nmaxlength,tfont,cfont,nfontsize,ccampo,ctext,onclick,padre,tabindex) values(";
      //      codform    ,tipo,   ntop , nleft, nwidth,nheight,nmaxlength, tfont,  cfont ,nfontsize  ,  ccampo        , ctext       ,   onclick  , padre   ,tabindex
     $sgraba=utf8_decode(html_entity_decode('cancelabc()'));
     $zlb="'".$nomform."','B' ,".$kntop.",165 ,100    ,  30   ,   0      , NULL ,  NULL  ,NULL       ,'cancela'        , 'Cancelar'    ,'".$sgraba."','cbza',".$ktabindex.")";
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






