 $(document).ready(function() {

    addmore();
});

function addmore(){
    
     $('input.more').on('click', function () {
        var $table = $('#input_fields');
        var $tr = $table.find('tr').eq(1).clone();
        $tr.appendTo($table).find('input').val('');
    });
    
    
}



