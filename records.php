<!DOCTYPE html>
<html>
<head>
<style>
#rec {
  font-family: "Trebuchet MS", Arial, Helvetica, sans-serif;
  border-collapse: collapse;
  width: 100%;
}

#rec td, #rec th {
  border: 1px solid #ddd;
  padding: 8px;
}

#rec tr:nth-child(even){background-color: #f2f2f2;}

#rec tr:hover {background-color: #ddd;}

#rec th {
  padding-top: 12px;
  padding-bottom: 12px;
  text-align: left;
  background-color: #4CAF50;
  color: white;
}
</style>
 <title>Your Fans</title>
</head>
<body>
 <table id="rec">
 <tr>
  <th>Sno</th> 
  <th>Username</th> 
  <th>Message</th>
  <th>Delete</th>
 </tr>
 <?php
$con = mysqli_connect("localhost", "root");
  mysqli_select_db($con,'sir');
  if ($con->connect_error) {
   die("Connection failed: " . $conn->connect_error);
  } 
  $sql = "SELECT sno, username, message FROM user";
  $result = $con->query($sql);
  if ($result->num_rows > 0) {
   // output data of each row
   while($row = $result->fetch_assoc()) {
   echo "<tr>";
       echo "<td>".$row["sno"]."</td>";
       echo "<td>".$row["username"]."</td>";
       echo "<td>".$row["message"]."</td>";
       echo "<td><a href='delete.php?id=".$row["sno"]."'>Delete</a></td>";
       echo "</tr>";
}
echo "</table>";
} else { echo "0 results"; }
$con->close();
?>
</table>
</body>
</html>