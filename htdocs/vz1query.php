<?php
include("vzconecta.php");
error_reporting(0);
$comando=$_GET['cmd'];
$comando=ereg_replace("[\]", "", $comando);

//echo "PHP ".$comando;
$registros=mysql_query($comando,$conexion) or die("Problemas en el select".mysql_error());

if ($reg=mysql_fetch_array($registros))
{
 echo $reg[0];
}
else
{
 echo "";
}
mysql_close($conexion);
?>



