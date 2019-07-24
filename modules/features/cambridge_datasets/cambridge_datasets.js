
// ***********************************************************
// -----------------------------------------------------------
// -----------------------------------------------------------
// ------------------ Cambridge Dataset JS -------------------
// -----------------------------------------------------------
// -----------------------------------------------------------
// ------ Functions are used to provide word counter and -----
// -- interactive selection of datasets within request form --
// -----------------------------------------------------------
// ***********************************************************


(function ($) {

    // Set default text for datasets selections

    var selected_default = '<p style="color:red;">Select your datasets from the list above</p>';

    $("#cambridge-datasets-dataset-currently-selected").html(selected_default);
    
    // Disable return from submitting form

    $(document).on("keypress", "#cambridge-datasets-dataset-search-input", function(event) {return event.keyCode != 13;});
    
    // Count number of words in text box 'cambridge_datasets_word_count'
    // and display in text box 'cambridge_datasets_display_count'

    $("#cambridge_datasets_word_count").on("keyup", function(event) 
    {
        var words = this.value.match(/\S+/g).length;

        if (words > 300) 
        {
            // Split the string on first 200 words and rejoin on spaces

            var trimmed = $(this).val().split(/\s+/, 200).join(" ");

            // Add a space at the end to keep new typing making new words

            $(this).val(trimmed + " ");
        }
        else 
        {
            $("#cambridge_datasets_display_count").text(words);
        }
    });      

    // On load, highlight items in dataset list and update display and internal hidden field

    if ($('#cambridge-datasets-dataset-values').length)
    {
        dataset_values = $("#cambridge-datasets-dataset-values").val().split(",");    

        if ((dataset_values.length > 1) && (dataset_values[0] != "")) 
        {
            // Highlight items

            var lis = $(".cambridge-datasets-dataset-item");
            for (var i = 0; i < dataset_values.length; i++) 
            {
                var fil = lis.filter("li:contains(" + dataset_values[i] + ")").first();
                fil.css("background-color", "#5fba7d");
                fil.attr("data-selected","true");
            }

            // Update display and internal hidden field
            
            $t = $("*[data-selected=\'true\']");
            var cs = "";
            var csval = "";
            $t.each(function (index) {
                $p    = $(this);
                $c    = $p.children();
                cs    = cs.concat(($p.html()));
                csval = csval.concat($c.eq(0).text() + ",");
                csval = csval.concat($c.eq(1).text() + ",");
            });
            csval = csval.slice(0, -1); // trim the last comma
            if (cs == '') cs = selected_default;

            $("#cambridge-datasets-dataset-currently-selected").html(cs)
            $("#cambridge-datasets-dataset-values").val(csval);    
        }
    }

    // Highlight item and update display and internal hidden field on click 

    $( ".cambridge-datasets-dataset-item" ).click(function(event) 
    {
        // Highlight item

        $thishtml = $(this);
        $state = $thishtml.attr("data-selected");
        if ($state == "false") 
        {
            $thishtml.css("background-color", "#5fba7d");
            $thishtml.attr("data-selected", "true");
        } else 
        {
            $thishtml.attr("data-selected", "false");
            $thishtml.css("background-color", "white");
        }

        // Update display and internal hidden field

        event.preventDefault();
        $t = $("*[data-selected=\'true\']");
        var cs = "";
        var csval = "";
        $t.each(function (index) 
        {
            $p    = $(this);
            $c    = $p.children();
            cs    = cs.concat(($p.html()));
            csval = csval.concat($c.eq(0).text() + ",");
            csval = csval.concat($c.eq(1).text() + ",");
        });
        csval = csval.slice(0, -1); // trim the last comma
        if (cs == '') cs = selected_default;
        
        $("#cambridge-datasets-dataset-currently-selected").html(cs)
        $("#cambridge-datasets-dataset-values").val(csval);
    });  
            
})(jQuery);

function cambridge_datasets_filter_list() 
{
    // Filter list of items
    // From https://www.w3schools.com/howto/tryit.asp?filename=tryhow_js_filter_list

    var input, filter, ul, li, a, i;

    input   = document.getElementById("cambridge-datasets-dataset-search-input");
    ul      = document.getElementById("cambridge-datasets-dataset-ul");
    filter  = input.value.toUpperCase();
    li      = ul.getElementsByTagName("li");

    for (var i = 0; i < li.length; i++) 
    {
        a = li[i];
        if (a.innerHTML.toUpperCase().indexOf(filter) > -1) 
        {
            li[i].style.display = "";
        } else 
        {
            li[i].style.display = "none";
        }
    }
}
        
    
    
    
    
    
    
