 $(document).ready(function() {

    addmore2();
});

function addmore2(){
    
     $('input.more').on('click', function () {
        var $table = $('#input_fields');
        var $tr = $table.find('tr').eq(1).clone();
        $tr.appendTo($table).find('input').val('');
    });
    
    
}
