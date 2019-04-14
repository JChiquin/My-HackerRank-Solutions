// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    const PI = Math.PI;
    let r = +(readLine());
    console.log(PI * Math.pow(r, 2));
    console.log(PI * r * 2);
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.

    // Print the area of the circle:

    // Print the perimeter of the circle:

    try {
        // Attempt to redefine the value of constant variable PI
        PI = 0;
        // Attempt to print the value of PI
        console.log(PI);
    } catch (error) {
        console.error("You correctly declared 'PI' as a constant.");
    }
}