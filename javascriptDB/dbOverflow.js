var argument = "data.csv";// test arg


var lines = [];
var tarr = [];

$(document).ready(function() {
	$( "div" ).hide ( function (){
		$( this ).addClass( "helloClass" );
		});// end div anon


function readFile (argument) {
	// ajax method of object to read file
	$.ajax({
		type: "GET",
		url: argument,
		dataType: "text",
		success: function(data) {
			processData(data);
		}// end struct
	}); // end database ajax object
};// end read file


function processData(allText) {
	var allTextLines = allText.split(/\r\n|\n/);
	var headers = allTextLines[0].split(',');
	for (var i=1; i<allTextLines.length; i++) {
		var data = allTextLines[i].split(',');
		if (data.length == headers.length) {
			for (var j=0; j<headers.length; j++) {
				tarr.push(headers[j]+":"+data[j]);
			} // end for
				lines.push(tarr);
		} // end if
	} // end for


	alert(lines);
	console.log(lines);
} // end process data

readFile(argument); // call this as main()

});// end doc ready