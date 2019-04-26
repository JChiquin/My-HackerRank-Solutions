// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    let ipv4 = /^((2(5[0-5]|[0-4]\d)|1\d{2}|[1-9]?\d)\.){3}(2(5[0-5]|[1-4]\d)|1\d{2}|[1-9]?\d)$/,
        ipv6 = /^([0-9a-f]{1,4}:){7}[0-9a-f]{1,4}$/;
    console.log(input.split("\n").slice(1).map(a => ipv4.test(a) ? "IPv4" : ipv6.test(a) ? "IPv6" : "Neither").join("\n"));
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