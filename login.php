<?php

require_once('./include/include.php');


mysql_connect(APP_CONST_HOST, APP_CONST_USER, APP_CONST_PASS);
mysql_select_db(APP_CONST_DB);
mysql_query("set names utf8");

if(isset($_COOKIE['ID_my_site']))
 { 
 	$username = $_COOKIE['ID_my_site']; 
 	$pass = $_COOKIE['Key_my_site'];
 	$check = mysql_query("SELECT * FROM customer WHERE id = '$username'")or die(mysql_error());
 	while($info = mysql_fetch_array( $check )){
            if ($pass != $info['pass']) {}
            else{header("Location: menu.php");}
	}
 }
 if (isset($_POST['submit'])) { 
 	if(!$_POST['username'] | !$_POST['pass']) {die('You did not fill in a required field.');}
 	$check = mysql_query("SELECT * FROM customer WHERE id = '".$_POST['username']."'")or die(mysql_error());
        $check2 = mysql_num_rows($check);
        if ($check2 == 0) {die('That user does not exist in our database. <a href=login.php>Click Here to login again</a>');}

    while($info = mysql_fetch_array( $check )) {
        $_POST['pass'] = stripslashes($_POST['pass']);
 	$_POST['pass'] = ($_POST['pass']);
 	if ($_POST['pass'] != $info['pass']) {
 		die('Incorrect password, please try again. <a href=login.php>Click Here to login again</a>');
 	}
 	 else { 
             $hour = time() + 3600; 
             setcookie(ID_my_site, $_POST['username'], $hour); 
             setcookie(Key_my_site, $_POST['pass'], $hour);	 
             header("Location: menu.php"); 
        } 

    } 

 } 
 else 

{	 
 pageHeader("Sign in Seller-Customer");
?>
<form class="login" action="<?php echo $_SERVER['PHP_SELF']?>" method="post"> 

 <table border="0"> 

 <tr><td colspan=2><h1>Sign in Seller-Customer</h1></td></tr> 

 <tr><td>Username:</td><td> 

 <input type="text" name="username" maxlength="40"> 

 </td></tr> 

 <tr><td>Password:</td><td> 

 <input type="password" name="pass" maxlength="50"> 

 </td></tr> 

 <tr><td colspan="2" align="right"> 

 <input type="submit" name="submit" value="Login"> 

 </td></tr> 

 </table> 

 </form> 

<?php
}
echo "</p></div></div></div>";
pageFooter();
?>