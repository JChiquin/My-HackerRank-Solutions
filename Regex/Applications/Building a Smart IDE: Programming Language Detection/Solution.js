// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    console.log(/(java|static|system)/ig.test(input) ? "Java" : /(#include|int main)/ig.test(input) ? "C" : "Python");
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