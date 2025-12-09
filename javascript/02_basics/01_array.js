
const myArr = [0, 1, 2, 3, 4, 5]
const myHeors = ["shaktiman", "naagraj"]

const myArr2 = new Array(1, 2, 3, 4)
// console.log(myArr[1]);

// Array methods

// myArr.push(6) //push add the element in () to back of the array
// myArr.push(7)
// myArr.pop()  // deletes the last element of arr

// myArr.unshift(9) // add the element in () to the starting of the arr(it has to shift the whole arr by its size so it is less optimal)
// myArr.shift() // del the 1st element of the arr

// console.log(myArr.includes(9));
// console.log(myArr.indexOf(3));

// const newArr = myArr.join() // converts the arr into string

// console.log(myArr);
// console.log( newArr);


// slice, splice

console.log("A ", myArr);

const myn1 = myArr.slice(1, 3)

console.log("slice:",myArr.slice(1, 3)); // return the part of arr from start to end(exclusive)
// console.log("B ", myArr);


const myn2 = myArr.splice(1, 3) // del the part of arr from start to end(inclusive)
console.log("splice:",myn2);
console.log("C ", myArr);