<?php
$id = $_GET['id'];
$con = mysqli_connect("localhost", "root");
  mysqli_select_db($con,'sir');
$sql = "DELETE FROM user WHERE sno = $id"; 

if (mysqli_query($con, $sql)) {
    mysqli_close($con);
    header('Location: records.php'); 
    exit;
} else {
    echo "Error deleting record";
}
 mysql_close($con);
?>