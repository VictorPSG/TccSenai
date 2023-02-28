<?php
// Credenciais de acesso ao banco de dados
$servername = "www.db4free.net";
$username = "tccdosenai";
$password = "tccsenai";
$dbname = "monitorproducao";

// Cria uma conexão
$conn = mysqli_connect($servername, $username, $password, $dbname);

// Verifica a conexão
if (!$conn) {
    die("Conexão falhou: " . mysqli_connect_error());
}
echo "Conexão bem sucedida";
?>
