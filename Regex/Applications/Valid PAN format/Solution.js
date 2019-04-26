// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    /*var reg = /^[A-Z]{5}\d{4}[A-Z]$/;
    for(a of input.split("\n").slice(1))
        console.log(reg.test(a)?"YES":"NO");*/
    input.split("\n").slice(1).forEach(a => console.log(/^[A-Z]{5}\d{4}[A-Z]$/.test(a) ? "YES" : "NO"))
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