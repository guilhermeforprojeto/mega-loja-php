<?php //Declaração dos dados do servidor $servidor="localhost" ; $usuario="root"
; $senha="usbw" ; // Conexão $conexao=m ysql_connect ($servidor, $usuario,
$senha) or die ( "Não Foi possivel Conectar ao Servidor"); mysql_select_db
( "bdlojavirtual"); ?>