// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
var Regex_Pattern = /\w{3}\W\w{10}\W\w{3}/; //Do not delete '/'. Replace __________ with your regex. 

function processData(Test_String) {
    //Enter your code here

    console.log(!!Test_String.match(Regex_Pattern));
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function(input) {
    _input += input;
});

process.stdin.on("end", function() {
    processData(_input);
});