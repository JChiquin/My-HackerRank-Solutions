// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    input.replace(/<a href="([^"]+)"[^>]*>(?:<\w+>)*([^<]*)/g, (_, link, name) => {
        console.log(link.trim() + "," + name.trim());
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