<?php
$n=$_POST['username'];
$a=$_POST['age'];
$b=$_POST['gender'];
$c=$_POST['email'];
$d=$_POST['pass'];
$e=$_POST['message'];
$con=mysqli_connect('localhost','root');
mysqli_select_db($con,'sir');
$sql = "INSERT INTO user (username, age, email, password, message) values('$n', '$a', '$c', '$d','$e')";
$status=mysqli_query($con, $sql);
mysqli_close($con);
?>
<!DOCTYPE html>
<head>
<title> Verification </title>
</head>
<body>
<p><?php 
        if($status==1)
              echo "Registered";
        else
              echo "Failed";
  ?>
</p>
<a href="index.php">Home</a><br>
</body>
</html>