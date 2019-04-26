// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    inputLines = input.split("\n");
    var regex = /^\([-+]?(90(\.0+)?|([1-8]\d|[1-9])(\.\d+)?)\,\s[+-]?(1([0-7]\d(\.\d+)?|80(\.0+)?)|([1-9]\d|[1-9])(\.\d+)?)\)$/;
    for (a of inputLines.slice(1))
        console.log(regex.test(a) ? "Valid" : "Invalid");
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