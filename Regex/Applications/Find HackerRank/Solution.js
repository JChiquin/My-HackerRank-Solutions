// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    var inputLines = input.split("\n");
    var answer;
    var regStart = /^hackerrank/,
        regEnd = /hackerrank$/;
    for (a of inputLines.slice(1, inputLines.length - 1)) {
        if (regStart.test(a) && regEnd.test(a))
            answer = 0;
        else if (regStart.test(a))
            answer = 1;
        else if (regEnd.test(a))
            answer = 2;
        else
            answer = -1
        console.log(answer);
    }
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