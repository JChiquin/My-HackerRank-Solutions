// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    let inputLines = input.split("\n");
    let words = inputLines.slice(1, +inputLines[0] + 1).join(" ");
    inputLines.slice(+inputLines[0] + 2).forEach(a => {
        let match = words.match(RegExp("\\B" + a + "\\B", "g"));
        console.log(match ? match.length : 0);
    })
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