// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
document.getElementById("btn5").addEventListener("click", function() {
    var numeros = [
        document.getElementById("btn4").innerHTML,
        document.getElementById("btn1").innerHTML,
        document.getElementById("btn2").innerHTML,
        document.getElementById("btn7").innerHTML,
        document.getElementById("btn3").innerHTML,
        document.getElementById("btn8").innerHTML,
        document.getElementById("btn9").innerHTML,
        document.getElementById("btn6").innerHTML,
    ]
    for (var i = 1, j = 0; i < 10; i++) {
        if (i == 5)
            continue;
        document.getElementById("btn" + i).innerHTML = numeros[j++];
    }
});