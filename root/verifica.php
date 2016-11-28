<html>
<body>

<?php

$nome			= $_POST["nome"];
$email			= $_POST["email"];
$cidade			= $_POST["cidade"];
$estado			= $_POST["estado"];
$erro			= 0;

//verifica se o campo nome não está em branco
if (empty($nome) OR strstr($nome, ' ' )==FALSE){
	echo "Favor digitar seu nome corretamente.<br>"; $erro=1;}
//Verifica se o campo eamil está preenchido corretamente
if (strlen($email)<8 || strstr ($email, '@')==FALSE){
	echo "Favor digitar seu eamil corretamente.<br>"; $erro=1;}
//verificar se o campo cidade está em branco
if (empty($cidade)){
	echo "Favor digitar cidade.<br>"; $erro=1;}
//Verificar se o campo de estado está preenchido com 2 digitos
if (strlen($estado) !=2){
	echo "Favor digitar seu estado corretamente.<br>"; $erro=1;}		
//verificar se não houve erro
if ($erro==0){include "insere.inc";}

?>



</body>
</html>	