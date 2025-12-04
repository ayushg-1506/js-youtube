//  Primitive : Stored directly in memory as single, immutable values

//  7 types : String, Number, Boolearn, null, undefined, Symbol, BigInt

const id = Symbol("123")
const id2 = Symbol("123")
console.log(id==id2);

// Non primitive : stores as reference (pointers) in memory

// Array, Objects, Functions

const heros = ["shaktiman", "naagraj", "doga"];
let myObj = {
    name: "ayush",
    age: 18,
}

const myFunction = function(){
    console.log("Hello world");
}
console.log(heros);
console.log(myObj);
console.log(typeof heros);

/* Return type of variables in JavaScript
1) Primitive Datatypes
       Number => number
       String  => string
       Boolean  => boolean
       null  => object
       undefined  =>  undefined
       Symbol  =>  symbol
       BigInt  =>  bigint

2) Non-primitive Datatypes
       Arrays  =>  object
       Function  =>  function
       Object  =>  object */

