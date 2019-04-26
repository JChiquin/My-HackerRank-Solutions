// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    console.log(input.split("\n").slice(1).map(a => /^[a-z]{0,3}\d{2,8}[A-Z]{3,}/.test(a) ? "VALID" : "INVALID").join("\n"))
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