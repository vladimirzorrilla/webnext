<?php
header("Expires: Mon, 26 Jul 1997 05:00:00 GMT");
header("Last-Modified: " . gmdate("D, d M Y H:i:s") . " GMT");
header("Cache-Control: no-store, no-cache, must-revalidate");
header("Cache-Control: post-check=0, pre-check=0", false);
header("Pragma: no-cache");
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta http-equiv="Cache-Control" content="no-cache">
<meta HTTP-EQUIV="Expires" CONTENT="Tue, 01 Jan 1980 1:00:00 GMT">
<meta HTTP-EQUIV="Pragma" CONTENT="no-cache">
<meta charset="utf-8">
<title>css</title>
<script language="javascript" src="jquery-1.3.2.min.js"></script>
<script src="jquery.min.js" type="text/javascript"></script>
<script src="jquery.maskedinput.js" type="text/javascript"></script>
<script language="javascript" src="vz.js"></script>
<script language="javascript" src="vzstd.js"></script>
<style type="text/css">
<!--
body,td,th,tr,input,SELECT,p{
	font-family: Verdana, Arial, Helvetica, sans-serif;
	font-size: 10px;
}
a {
	font-family: Verdana, Arial, Helvetica, sans-serif;
}
#combo{
	font-family: Tahoma, Verdana, Arial;
	font-size: 11px;
	color: #707070;
    background-color:transparent;
	border-width:0;
}
-->
</style>
<script type="text/javascript">
jQuery(function($){
   $("input.fecha").mask("99/99/9999");
});
function aladerecha(obj){
obj.style.textAlign="right"
obj.style.backgroundColor="#ffffff"
}
function alaizquierda(obj){
obj.style.textAlign="left"
obj.style.backgroundColor="#ffff00"
}
kcolu=3;
kfila=13;
swtab2=0;
navestado=1;
swadd="NO";
objfoco="hola";
campos="cselector,cpropiedad,cvalor";
<?php
  echo "codcss='".$_GET["codcss"]."';";
?>
</script>
<script type="text/javascript" src="calendar.js"></script>
<script type="text/javascript" src="calendar-setup.js"></script>
<script type="text/javascript" src="calendar-es.js"></script>
<style type="text/css"> @import url("calendar-win2k-cold-1.css"); </style>
</head>
<body onLoad="ponfocus()">
<div style="position:absolute; top:0px; left:0px;">
                <div align="right">
                 selector.class   o   #id ----
                 <a href="javascript:agregareg()">
                  <img src="add.gif" name="G" width="20" height="20" border="0"></a>
                 <a href="javascript:tecla120('css')">
                  <img src="delete.gif" name="e" width="20" height="20" border="0"></a>
                 <a href="javascript:grabartodo('fo3')" >
                  <img src="B.PNG" name="B" width="90" height="20" border="0"></a>
                </div>

<div id="pp2" style="overflow:scroll;height:250px;width:360">
           <form id="fo3" name="fo3" action="xyz.phpl" onsubmit="return false">
<input type="hidden" name="tabla" id="tabla" value="css" />
           <table width="100%" border="1" class="sortable" id="vztabla" style="table-layout:fixed;border-collapse: collapse;background-color: #ffffff;border: 1px solid #cccccc;">
            <tbody id="cali">
<?php
           error_reporting(0);
           function cambiaf_a_normal($fecha){
              	ereg( "([0-9]{2,4})-([0-9]{1,2})-([0-9]{1,2})", $fecha, $mifecha);
              	$lafecha=$mifecha[3]."/".$mifecha[2]."/".$mifecha[1];
              	return $lafecha;
           }

function llenacss($qn,$valor)
{
$txt="";
   if ($qn==1)
   {
    $miarray = array("opacity","color","background-color","background-image","background-repeat","background-attachment","background-position","font-family","font-size","font-weight","text-indent","text-align","text-decoration","letter-spacing","text-transform","margin-top","margin-right","margin-bottom","margin-left","border-width","border-style","border-color","float");
   }else{
    $miarray = array("    ","link","active","hover","visited");
   }

  for($mi = 0; $mi < count($miarray); $mi++)
  {
   echo $miarray[$mi];
   if ($valor==$miarray[$mi])
    {
    $txt=$txt."<OPTION value='".$miarray[$mi]."' selected >".$miarray[$mi]."</OPTION>";
    }else{
    $txt=$txt."<OPTION value='".$miarray[$mi]."' >".$miarray[$mi]."</OPTION>";
    }
  }
return $txt;
}

include("vzconecta.php");

require_once 'PHPPaging.lib.php';
$paging = new PHPPaging($conexion);


$q="select row_id,selector,propiedad,valor,codigo from css WHERE css='".$_GET["codcss"]."'  ORDER BY selector";
//echo $q;
$paging->agregarConsulta($q);
$paging->porPagina(156);
$paging->ejecutar();

$ktab=0;
while ($reg = $paging->fetchResultado())
{
echo "<tr id=\"BORRA".$reg[0]."\"  height=\"22\">";

echo "<td width=\"40px\" >";
echo "<input type=\"text\" tabindex=\"".$ktab."\" name=\"cselector___".$reg[0]."\" id=\"cselector___".$reg[0]."\" MAXLENGTH=30 SIZE=30 value=\"".$reg["selector"]."\" STYLE=\"border:0\" onkeyup=\"return tabular(event,this)\" onblur=\"return blurcell(this)\" onfocus=\"return focuscell(this,0)\" onClick=\"return cliccell(this)\" />";
$ktab=$ktab+1;
echo "</td>";

echo "<td width=\"70px\" >";
          echo"    <select tabindex=\"".$ktab."\" name=\"csubclase___".$reg[0]."\" id=\"csubclase___".$reg[0]."\" value=\"".$reg["subclase"]."\" STYLE=\"border:0\" onkeyup=\"return tabular(event,this)\" onblur=\"return blurcell(this)\" onfocus=\"return focuscell(this,0)\" onClick=\"return cliccell(this)\" >";
          echo llenacss(2,$reg["subclase"]);
          echo"    </select>";
$ktab=$ktab+1;
echo "</td>";

echo "<td width=\"170px\" >";
          echo"    <select tabindex=\"".$ktab."\" name=\"cpropiedad___".$reg[0]."\" id=\"cpropiedad___".$reg[0]."\" value=\"".$reg["propiedad"]."\" STYLE=\"border:0\" onkeyup=\"return tabular(event,this)\" onblur=\"return blurcell(this)\" onfocus=\"return focuscell(this,0)\" onClick=\"return cliccell(this)\" onchange=\"escoje(this)\" >";
          echo llenacss(1,$reg["propiedad"]);
          echo"    </select>";
          $ktab=$ktab+1;
echo "</td>";

echo "<td width=\"200px\" >";
echo "<input type=\"text\" tabindex=\"".$ktab."\" name=\"cvalor___".$reg[0]."\" id=\"cvalor___".$reg[0]."\" MAXLENGTH=30 SIZE=30 value=\"".$reg["valor"]."\" STYLE=\"border:0\" onkeyup=\"return tabular(event,this)\" onblur=\"return blurcell(this)\" onfocus=\"return focuscell(this,0)\" onClick=\"return cliccell(this)\" />";
$ktab=$ktab+1;
echo "</td>";

echo "<td width=\"200px\" >";
echo "<input type=\"text\" tabindex=\"".$ktab."\" name=\"ccodigo___".$reg[0]."\" id=\"ccodigo___".$reg[0]."\" MAXLENGTH=4300 SIZE=30 value=\"".$reg["codigo"]."\" STYLE=\"border:0\" onkeyup=\"return tabular(event,this)\" onblur=\"return blurcell(this)\" onfocus=\"return focuscell(this,0)\" onClick=\"return cliccell(this)\" />";
$ktab=$ktab+1;
echo "</td>";

echo "</tr>";
}
mysql_close($conexion);
echo "</tbody>";
echo "</table>";
echo "</form>";
echo "</div>";
echo "<div class='navigation'>".$paging->fetchNavegacion()."</div>";
?>
</div>

</body>
<script type="text/javascript">
function agregareg()
{
var aleatorio = Math.random();

cadena="INSERT INTO css (css) VALUES ('"+codcss+"')";

$.ajaxSetup({async:false});
$.get("vzexecute.php", { acc : cadena , numale : aleatorio });
   grabartodo('fo3')
   location.reload();
}

function escoje(obj)
{
info=""
switch (obj.value) {
   	case "color":
   	  info="Aqua Black Blue Fuchsia Gray Green Lime Maroon Navy Olive Purple Red Silver Teal White Yellow"
      	 break
   	case "background-color":
   	  info="Aqua Black Blue Fuchsia Gray Green Lime Maroon Navy Olive Purple Red Silver Teal White Yellow"
      	 break
   	case "background-image":
   	  info='url("butterfly.gif")'
      	 break
   	case "background-no-repeat":
   	  info="repeat-x repeat-y repeat no-repeat"
      	 break
   	case "background-attachment":
   	  info="scroll fixed"
      	 break
   	case "background-position":
   	  info="right bottom center left top"
      	 break
   	case "font-family":
   	  info="Arial, verdana, sans-serif"
      	 break
   	case "font-weight":
   	  info="bold italic underline"
      	 break
   	case "text-indent":
   	  info="30px"
      	 break
   	case "text-align":
   	  info="right left center justify"
      	 break
   	case "text-decoration":
   	  info="underline overline line-through"
      	 break
   	case "letter-spacing":
   	  info="6px"
      	 break
   	case "text-transform":
   	  info="capitalize uppercase lowercase none"
      	 break
   	case "border-width":
   	  info="1px"
      	 break
   	case "border-style":
   	  info="dotted outset dashed solid"
      	 break
   	case "float":
   	  info="left right none"
      	 break
   	case "opacity":
   	  info="50 mitad transparencia"
      	 break

}

 vzrepl("valor",info )

}

</script>
</html>

