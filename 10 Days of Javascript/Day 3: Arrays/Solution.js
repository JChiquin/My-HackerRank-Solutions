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

/**
 *   Return the second largest number in the array.
 *   @param {Number[]} nums - An array of numbers.
 *   @return {Number} The second largest number in the array.
 **/
function getSecondLargest(nums) {
    var mayor = 0,
        second = 0;
    for (var a = 0; a < nums.length; a++) {
        if (nums[a] > mayor) {
            second = mayor;
            mayor = nums[a];
        } else if (nums[a] != mayor && nums[a] > second)
            second = nums[a];
    }
    return second;
}

function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);

    console.log(getSecondLargest(nums));
}