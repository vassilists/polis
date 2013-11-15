 $(document).ready(function() {

    addmore();
});

function addmore(){
    alert ("ok");
     $('input.more').on('click', function () {
        var $table = $('#input_fields');
        var $tr = $table.find('tr').eq(0).clone();
        $tr.appendTo($table).find('input').val('');
    });
    
    
}
