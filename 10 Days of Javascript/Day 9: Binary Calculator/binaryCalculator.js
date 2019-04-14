// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function escribir(e) {
    document.getElementById("res").innerHTML += e.target.innerHTML;
}

function borrar(e) {
    document.getElementById("res").innerHTML = "";
}

function accion() {
    var cadena = document.getElementById("res").innerHTML;
    var patt = /(\+|\-|\*|\/)/
    var operador = patt.exec(cadena)[0]
    var numeros = cadena.split(operador)
    var resultado = eval(parseInt(numeros[0], 2) + operador + parseInt(numeros[1], 2))
    var redondeado = Math.floor(resultado);
    var binario = (redondeado >>> 0).toString(2);
    document.getElementById("res").innerHTML = binario
}

document.getElementById("btn0").addEventListener("click", escribir)
document.getElementById("btn1").addEventListener("click", escribir)
document.getElementById("btnSum").addEventListener("click", escribir)
document.getElementById("btnSub").addEventListener("click", escribir)
document.getElementById("btnMul").addEventListener("click", escribir)
document.getElementById("btnDiv").addEventListener("click", escribir)

document.getElementById("btnClr").addEventListener("click", borrar)
document.getElementById("btnEql").addEventListener("click", accion)