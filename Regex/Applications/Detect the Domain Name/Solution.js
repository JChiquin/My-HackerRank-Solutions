// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function processData(input) {
    let set = new Set(input.match(/:\/\/[\w.-]+[\/? \"]/g).map(a => {
        if (a.indexOf(".") == -1)
            return null;
        else
            return a.replace(/(:\/\/|www.|ww2.|\?|\/|\")/g, "").trim()
    }).filter(a => a))
    /*for(let a of set){
        console.log(a)
    }*/
    console.log(Array.from(set).sort().join(";"));
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