<?php
	$include "conecta_mysql.inc";
	$db = "bdlojavirtual";
	$PicNum = $_GET["PicNum"];

			mysql_connect($host,$username,$password) or die("Impossível conectar ao banco."); 
			@mysql_select_db($db) or die("Impossível conectar ao banco."); 
			$result=mysql_query("SELECT * FROM imagem WHERE IMG_MERCADORIA=$PicNum") or die("Impossível executar a query "); 
			$row=mysql_fetch_object($result); 
			Header( "Content-type: image/jpg"); 
			echo $row->IMG_MERCADORIA; 
?>