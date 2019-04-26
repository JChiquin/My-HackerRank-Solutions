// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    var reg = /\d+(?=[- ]?)/g;
    for (a of input.split("\n").slice(1)) {
        var match = a.match(reg)
        console.log(`CountryCode=${match[0]},LocalAreaCode=${match[1]},Number=${match[2]}`)
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