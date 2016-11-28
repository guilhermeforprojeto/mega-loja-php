<?php
  require("conecta.php");
   
  $id_imagem = $_GET[‘codigo’];
  $querySelecionaPorCodigo = "SELECT codigo, imagem FROM tabela_imagens WHERE codigo = $id_imagem";
  $resultado = mysql_query($querySelecionaPorCodigo);
  $imagem = mysql_fetch_object($resultado);
  Header( "Content-type: image/gif");
  echo $imagem->imagem;