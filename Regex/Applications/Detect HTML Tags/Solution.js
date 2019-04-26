// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    var inputLines = input.split('\n');
    var result = [];
    var n = inputLines[0];
    var regex = /<\s*\w+/g;
    for (a of inputLines.slice(1)) {
        var match = a.match(regex);
        if (match)
            for (b of match)
                if (!result.includes(b))
                    result.push(b);
    }
    result.sort()
    var size = result.length;
    for (var i = 0; i < size; i++)
        process.stdout.write(/\w+/.exec(result[i]) + (i == size - 1 ? "" : ";"));
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