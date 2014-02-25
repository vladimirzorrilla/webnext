<?php
include("vzconecta.php");
$campo=trim($_GET['qcampo']);
$nwcod=trim($_GET['qvalecod']);
$tabla=trim($_GET['qtabla']);

echo "insert into ".$tabla." (".$campo.") values ('".$nwcod."')";

mysql_query("insert into ".$tabla." (".$campo.") values ('".$nwcod."')" , $conexion) or die("Problemas en el select".mysql_error());

//echo "select ROW_ID from ".$tabla." where ".$campo."='".$nwcod."'";

   $registros=mysql_query("select ROW_ID from ".$tabla." where ".$campo."='".$nwcod."'" ,$conexion ) or die("Problemas en el select:".mysql_error());
   if ($reg=mysql_fetch_array($registros))
   {
    echo $reg['ROW_ID'];
   }
   else
   {
    echo "HORROR NO SE PUDO AGREGAR EL REGISTRO EL DATO ES MAS GRANDE QUE EL CAMPO";
   }
mysql_close($conexion);
?>



