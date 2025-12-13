// const tinderUser = new Object()
const tinderUser = {}

tinderUser.id = "123abc"
tinderUser.name = "Sammy"
tinderUser.isLoggedIn = false

// console.log(tinderUser);

const regularUser = {
    email: "some@gmail.com",
    fullname: {
        userfullname: {
            firstname: "ayush",
            lastname: "gupta"
        }
    }
}

// console.log(regularUser.fullname.userfullname.firstname);

const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}
const obj4 = {5: "a", 6: "b"}

// const obj3 = { obj1, obj2 } // obj in obj
// const obj3 = Object.assign({}, obj1, obj2, obj4)

const obj3 = {...obj1, ...obj2}
// console.log(obj3);


const users = [ // arr of obj
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    },
]

users[1].email
// console.log(tinderUser);

// console.log(Object.keys(tinderUser)); // keys in form of arr
// console.log(Object.values(tinderUser));
// console.log(Object.entries(tinderUser)); pair of key and value in form of arr

// console.log(tinderUser.hasOwnProperty('isLoggedIn')); 


const course = {
    coursename: "js in hindi",
    price: "999",
    courseInstructor: "ayush"
}

// course.courseInstructor

const {courseInstructor: instructor} = course // de structure obj for easy use

// console.log(courseInstructor);
console.log(instructor);

// {                                              // json
//     "name": "hitesh",
//     "coursename": "js in hindi",
//     "price": "free"
// }

[                                                // json in arr
    {},
    {},
    {}
]