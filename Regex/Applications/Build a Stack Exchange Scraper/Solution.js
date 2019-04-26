// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    input.match(/((summary\-)\d+|(hyperlink">)[^<]+|(relativetime">)[^<]+)/gm)
        .map(a => a.replace(/.+(ummary\-|>)/, ""))
        .forEach((a, i) => {
            process.stdout.write(a + ((i + 1) % 3 ? ";" : "\n"))
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