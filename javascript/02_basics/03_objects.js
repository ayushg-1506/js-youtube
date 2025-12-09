// singleton
// Object.create

// object literals

const mySym = Symbol("key1")


const JsUser = {
    name: "ayush",
    "full name": "ayush gupta ",
    [mySym]: "mykey1", // to get mySum type as symbols , write it in []
    age: 18,
    location: "blr",
    email: "ayush@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "[Saturday]"]
}

// console.log(JsUser.email)
// console.log(JsUser["email"])
// console.log(JsUser["full name"]) // have to use [] as full name is written in "" in object
// console.log(JsUser[mySym]) 

JsUser.email = "hitesh@chatgpt.com"
// Object.freeze(JsUser) // using freeze changes made to obj will not change
JsUser.email = "hitesh@microsoft.com"
// console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`);// 'this' provides access to obj JsUser
}

console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());