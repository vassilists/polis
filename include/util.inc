<?php

function pageHeader($title, $loginPage = 0) {

    mysql_connect(APP_CONST_HOST, APP_CONST_USER, APP_CONST_PASS);
    mysql_select_db(APP_CONST_DB);
    mysql_query("set names utf8");

    echo "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">";
    echo "<html xmlns=\"http://www.w3.org/1999/xhtml\"><head>";
    echo "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">";
    echo "<title>Batida fashion stories</title>";
    echo "<link rel=\"stylesheet\" type=\"text/css\" href=\"contact/stylesheet.css\">";
    echo "<link rel=\"stylesheet\" type=\"text/css\" href=\"contact/stylesheet_boxes.css\">";
    echo "<link rel=\"stylesheet\" type=\"text/css\" href=\"contact/stylesheet_css_buttons.css\">";
    echo "<link rel=\"stylesheet\" type=\"text/css\" href=\"contact/stylesheet_main.css\">";
    echo "<link rel=\"stylesheet\" type=\"text/css\" href=\"contact/stylesheet_tm1.css\">";
    echo "<link rel=\"stylesheet\" type=\"text/css\" media=\"print\" href=\"contact/print_stylesheet.htm\">";
    echo "<script language=\"JavaScript\" src=\"".APP_CONST_DOCROOT."contact/sorttable.js\"></script>\n";
    echo "<script language=\"JavaScript\" src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js\"></script>\n";
    echo "<script type'text/javascript' src='//code.jquery.com/jquery-1.9.1.js'></script>";
    echo "<script type'text/javascript' src=\"".APP_CONST_DOCROOT."contact/addmore.js\"/></script>";
    echo "<script type'text/javascript' src=\"".APP_CONST_DOCROOT."contact/add.js\"/></script>";
    echo "<script type'text/javascript' src=\"".APP_CONST_DOCROOT."contact/remove2.js\"/></script>";
    echo "<script type'text/javascript' src=\"".APP_CONST_DOCROOT."contact/addremove.js\"/></script>";
    echo "</head>";
    echo "<body id=\"indexBody\" onload=\"window.refresh\">";
    echo "<div class=\"body-bg\">";
        echo "<div class=\"main-width\">";
            echo "<div id=\"header\">";
                echo "<div class=\"wrapper\">";
                    echo "<div class=\"logo\">";
                        echo "<p><a href=\"".APP_CONST_DOCROOT."contact.php\"><img src=\"image/title.png\"/></a></p>";
                    echo "</div>";
                echo "</div>";
            echo "</div>";

            echo "<div class=\"slider\">";
                echo "<div class=\"indent\">";
                    echo "<div class=\"box-main\">";
                        echo "<div class=\"slider-wrapper\">";
                            echo "<div class=\"aroundcontact\">";
                            echo "</div>";
                        echo "</div>";

                     }        
function pageFooter() {

    echo "<div id=\"footer\">";
    echo "<div class=\"main-width\">";
    echo "<div class=\"wrapper\">";
    echo "<p>Copyright © 2013 <a href=\"".APP_CONST_DOCROOT."contact.php\">Batida-fashion.gr</a>";
    echo "</p></div></div></div>";
    echo "</body>\n";
    echo "</html>\n";

    mysql_close();
}

function exec_query($query) {
//    if (APP_CONST_DEBUG && ($_SESSION["UserName"] == APP_CONST_ADMIN_USER))
    if (APP_CONST_DEBUG || isset($_GET["debug"]))
        echo "<p class=\"query\">$query</p>\n";
    if (($result = mysql_query($query)) == null)
        echo "<p class=\"error\">".mysql_error()."</p>\n";
    return ($result);
}
function menu() {
   echo "<ul class=\"menu\">\n";
   echo "<li><a href=\"submit_order.php\">Καταχώρηση Παραγγελίας</a></li>\n";
   echo "<li><a href=\"1.html\">Επισκόπηση Παραγγελίας</a></li>\n";
   echo "<li><a href=\"submit_order2.php\">Καταχώρηση Παραγγελίας 2ο </a></li>\n";
   echo "</ul>\n";
   echo "</div></div></div>";
}

function submit_my_order() {


    echo "<form id=\"quick_post\" method=\"post\"> ";
    echo "<table id=\"input_fields\">";
        echo "<tr>"; 
            echo "<td>Product kind</td><td>Color-Size</td></tr><tr>";//<td>remove</td></tr><tr>"; 
            echo "<td><input class=\"orderinput\" type=\"text\" name=\"product[]\" /></td>"; 
            //echo "<td align=\"center\"><input class=\"new_class_for\" type=\"button\" value=\"select\" name=\"bt[]\" /></td>";
            echo "<td align=\"center\"><a href=\"".APP_CONST_DOCROOT."1.html\"><img src=\"image/edit.png\"/></a></td>";
            //echo "<td align=\"center\"><a href=\"javascript:void(0);\" class=\"less\"><font color=\"blue\">Remove</font></a></td>";
            //echo "<td><input class=\"less\" type=\"button\" value=\"Remove\" name=\"remove[]\" /></td>";
            //echo "<td>lala</td>";
            echo "</tr>";
    echo "</table>";
echo "</form>";
echo "<input class=\"less\" type=\"button\" value=\"Remove2\" name=\"remove2\" />";
echo "<input class=\"more\" type=\"button\" value=\"Addmore\" name=\"addmore\" />";

     echo "</div></div></div>";
}
function ypobolh() {


    echo "lala <br/>";
    if (isset($_POST["tblSample"]))
        echo $_POST["txtRow1"];
        echo "<br/>";
        echo $_POST["txtRow2"];
        echo "<br/>";
        echo $_POST["txtRow3"];
        echo "<br/>";
     echo "</div></div></div>";
}

function submit_my_order2() {
    
echo "<form action=\"ypobolh.php\" method=\"post\">";

echo "<table border=\"1\" id=\"tblSample\">";
  echo "<tr>";
    echo "<th colspan=\"3\">Sample table</th>";
  echo "</tr>";
  echo "<tr>";
    echo "<td>1</td>";
    echo "<td><input type=\"text\" name=\"txtRow1\" id=\"txtRow1\" size=\"40\" /></td>";//onkeypress=\"keyPressTest(event, this);\" /></td>";
//$textrow = ;
    echo "<td align=\"center\"><a id=\"imag\" href=\"".APP_CONST_DOCROOT."select_color_size.php?id=".$textrow."\"><img src=\"image/edit.png\"/></a></td>";
echo  "</tr>";
echo "</table>";
echo "<p>";
echo "<input type=\"button\" value=\"Add\" onclick=\"addRowToTable();\" />";
echo "<input type=\"button\" value=\"Remove\" onclick=\"removeRowFromTable();\" />";
//echo "<input type=\"button\" value=\"Check\" onclick=\"checkOrdNo(this.form);\" />";
echo "<input type=\"submit\" value=\"Submit\" />";
echo "</p>";
echo "</form>";
    
echo "</div></div></div>";
}


