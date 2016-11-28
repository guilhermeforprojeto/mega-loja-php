<!-- Latest compiled and minified CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">

<!-- Optional theme -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">

<!-- Latest compiled and minified JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>


<html>
<head> 
        <title> MEGA LOJA
     </title>
    </head>
<body>


<nav class="navbar navbar-default">
  <div class="container-fluid">
    <div class="navbar-header">
      <a class="navbar-brand" href="index.php">
        <img alt="Brand" src="images/logo_loja.jpg" widht="40" height="30">
      </a>
    </div>
  </div>
</nav>





<div class="container">
      <div class="row">
          <div class="col-md-12">
              <div class="main-text hidden-xs">
                  <div class="col-md-12 text-center">
                      
                      
              </div>
          </div>
      </div>
  </div>
  <div id="push">
  </div>





</body>
 <!-- Imagem do  <div class="container"> -->    
   <img width="1130" height="258p"  src="images/logo_loja.png">




			<?php
						include "conecta_mysql.inc";


						$nome_mercadoria			= $_POST["nome_mercadoria"];
						$preco_mercadoria			= $_POST["preco_mercadoria"];
						$quant_mercadoria			= $_POST["quant_mercadoria"];
						$tipo_mercadoria			= $_POST["tipo_mercadoria"];
						$cod_mercadoria				= $_POST["cod_mercadoria"];
						$sql = "INSERT INTO mercadoria VALUES";
						$sql .= "('$nome_mercadoria','$preco_mercadoria','$quant_mercadoria','$tipo_mercadoria','$cod_mercadoria')";
						$resultado = mysql_query($sql);

						mysql_close($conexao);
			?>


<div class="jumbotron" >
	<h1>Mercadoria Cadastrada!</h1>
		
	<p>Sua mercadoria foi cadastrada e logo estará disponivel...</p>
		
	
	<p><a class="btn btn-primary btn-lg" href="cadastro_merc.html" role="button">Cadastrar Outra Mercadoria</a></p>	 	
	<p><a class="btn btn-primary btn-lg" href="index.php" role="group" >Voltar para Pagina Inicial</a></p>
	



<style type="text/css">


               
              .main-text
              {
                  text-shadow:#fff 5px -1px 5px, #fff -1px 1px 2px, #fff 1px 1px 2px, #fff 1px -1px 1px;
                  position: absolute;
                  top: 10px;
                  width: 96.66666666666666%;
                  color: #000;
              }
              .btn-min-block
              {
                  min-width: 170px;
                  line-height: 26px;
              }
              .btn-clear
              {
                  color: #000;
                  background-color: transparent;
                  border-color: #000;
                  margin-right: 15px;
              }
              .btn-clear:hover
              {
                  color: #fff;
                  background-color: #000;
              }

              </style>






<!-- jQuery (necessary for Bootstrap's JavaScript plugins) -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
    <!-- Include all compiled plugins (below), or include individual files as needed -->
    <script src="js/bootstrap.min.js"></script>