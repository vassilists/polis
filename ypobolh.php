<?php
require_once('./include/include.php');
pageHeader("Contact with us");
if(isset($_COOKIE['ID_my_site'])) 
 { 

 	$username = $_COOKIE['ID_my_site']; 
 	$pass = $_COOKIE['Key_my_site']; 
 	$check = mysql_query("SELECT * FROM customer WHERE id = '$username'")or die(mysql_error()); 
 	while($info = mysql_fetch_array( $check )) { 
 		if ($pass != $info['pass']) 

 			{ 			header("Location: login.php"); 

 			} 


 	else 

 			{ 

 			 
 ypobolh();

 echo "<a class=\"logout\" href=logout.php>Logout</a>"; 

 			} 

 		} 

 		} 

 else 

 
 {			 

 header("Location: login.php"); 

 } 

pageFooter();

?>
