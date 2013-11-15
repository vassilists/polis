
$(function() {
var addDiv = $('#addinput');
var i = $('#addinput p').size() + 1;

$('#addNew').live('click', function() {
$('<p>Product code: <input type="text" id="p_new" size="20" name="p_new_' + i +'" value="" placeholder="I am New" /> Product quantity: <input type="text" id="p_new2" size="20" name="p_new2_' + i +'" value="" placeholder="I am New" /><a href="#" id="remNew">Remove</a> </p>').appendTo(addDiv);
i++;

return false;
});

$('#remNew').live('click', function() {
if( i > 2 ) {
$(this).parents('p').remove();
i--;
}
return false;
});
});
