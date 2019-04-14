// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */
function Polygon(arr) {
    this.sides = arr;
    this.perimeter = calPerimeter;
}

function calPerimeter() {
    let acum = 0;
    for (let a of this.sides)
        acum += a;
    return acum;
}


const rectangle = new Polygon([10, 20, 10, 20]);
const square = new Polygon([10, 10, 10, 10]);
const pentagon = new Polygon([10, 20, 30, 40, 43]);

console.log(rectangle.perimeter());
console.log(square.perimeter());
console.log(pentagon.perimeter());