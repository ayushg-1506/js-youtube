// STACK (primitive)

let name1 = "ayush"
let name2 = name1
name2 = "gupta" // here , a copy of name1 is assinged to name2 . that's why name1 doesn't changes while changing name2

console.log(name1); 
console.log(name2); 

// HEAP (non- primitive)

let obj1 = {name: "ayush" , age : 18 }
let obj2 = obj1
obj2.name = "gupta"// here , obj2 has been assinged the original data of obj1 that's why changing obj2 affects obj1

console.log(obj1);
console.log(obj2);

