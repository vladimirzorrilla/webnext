<?php
include("vzconecta.php");
mysql_query("UPDATE ".$_GET['tabla']." SET ".$_GET['campo']."='".$_GET['valor']."' WHERE row_id=".$_GET['registro'] , $conexion) or die("Problemas en el select".mysql_error());
mysql_close($conexion);
?>



