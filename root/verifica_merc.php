<html>
<head> 
        <title> MEGA LOJA - Cadastro de Mercadoria
     </title> 
 <link rel="icon" href="images/icone.png" />
     
    </head>
<body>

<?php

$nome_mercadoria			= $_POST["nome_mercadoria"];
$preco_mercadoria			= $_POST["preco_mercadoria"];
$quant_mercadoria			= $_POST["quant_mercadoria"];
$tipo_mercadoria			= $_POST["tipo_mercadoria"];
$cod_mercadoria 			= $_POST["cod_mercadoria"];
$erro							= 0;

//verifica se o campo nome_mercadoria não está em branco
if (strlen($nome_mercadoria) <5){
	echo "Favor digitar seu nome  corretamente.<br>"; $erro=1;}
//Verifica se o campo preco_mercadoria esta menor que 1 mercadoria
if ($preco_mercadoria <1) {
	echo "Favor digitar o preço corretamente.<br>"; $erro=1;}
//Verificar se o campo de quant_mercadoria contem menos que 1 mercadoria
if ($quant_mercadoria <1) {
	echo "Favor digitar a quantidade de mercadoria corretamente.<br>"; $erro=1;}		
//verificar se tem ao menos 5 caractere 
if (strlen($tipo_mercadoria) <5){
	echo "Favor digitar o tipo de mercadoria corretamente.<br>"; $erro=1;}
//verificar se tem ao menos 1 caractere 
if ($cod_mercadoria <1) {
	echo "Favor digitar o codigo corretamente.<br>"; $erro=1;}
//verificar se não houve erro
if ($erro==0){	
//inclui os dados digitados nas suas variaveis do insere_merc.inc
	include "insere_merc.inc";}
	if ($erro==0){	
//mostrar os dados digitados nas suas variaveis do insere_merc.inc
	include "mostra_merc.php";}

?>



</body>
</html>	