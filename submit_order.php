<?php

require_once('include/include.php');


mysql_connect(APP_CONST_HOST, APP_CONST_USER, APP_CONST_PASS);
    mysql_select_db(APP_CONST_DB);
    mysql_query("set names utf8");
if(isset($_COOKIE['ID_my_site'])) 

 { 

 	$username = $_COOKIE['ID_my_site']; 

 	$pass = $_COOKIE['Key_my_site']; 

 	 	$check = mysql_query("SELECT * FROM customer WHERE id = '$username'")or die(mysql_error()); 

 	while($info = mysql_fetch_array( $check )) 	 

 		{ 

 


 		if ($pass != $info['pass']) 

 			{ 			header("Location: login.php"); 

 			} 

 

 	else 

 			{ 

 pageHeader("Submit Order");			
 submit_my_order();

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

