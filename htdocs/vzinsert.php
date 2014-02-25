<?php
include("vzconecta.php");
$cmd="INSERT INTO ".$_GET['tabla']." (".$_GET['cadcampos'].") VALUES(".$_GET['cadvalues'].")";
echo $cmd;
mysql_query($cmd,$conexion) or die("Problemas en el select".mysql_error());
mysql_close($conexion);
?>




