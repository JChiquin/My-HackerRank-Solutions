// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    let emails = new Set();
    input.replace(/([\w.]+@\w+(\.\w+)*)/g, (_, email) => {
        emails.add(email)
    });
    console.log(Array.from(emails).sort().join(";"));
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