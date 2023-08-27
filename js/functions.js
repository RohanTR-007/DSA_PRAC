// var x =1
// a()
// b()
// console.log(x)
// console.log("x",x)
function a ()
{
    var x =10;
    console.log(x)
}
{
  var y =10;
}
console.log(y)
// function b()
// {
//     var x = 90
//     console.log(x)
// }

// var x =10
// function a()
// {
//     var y =1
//     console.log(x)
// }
// a()
// console.log(window.a)
// console.log(this.x)


// --Lexical Environment
// function a()
// {
//     console.log(b) //func a can acess b 
//     var x = 90
//     c()
//     function c()
//     {
//         var r =0
//         console.log(x) //func c can acess x
//         console.log(b) //func c can acess b
//         d()
//         function d()
//         {
//             var t = 7;
//             console.log(x)
//         }
//     }
// }
// var b = 10
// // console.log(x) //x cant be accessible GEC cannot acess x
// a()

//let & const declarations are hoisted
// let & const are in temporal dead zone

// console.log(a) //reference arror
// let a
// var b = 100
// a=911
//let b = 90 // syntax error
// console.log(this.a) //global object (i.e window) cannot access a (let,const)

// const c=90;
//const k; //SyntaxError: Missing initializer in const declaration
// c = 10; // TypeError: Assignment to constant variable.

// --Block

// {
//     //compound statement
//     // bl ock groups multiple statements so it can be used as a single statement
//     var k = 10;
//     console.log(k)
// }

// if(true){
//     //if expects single statement
// };

// if(true)
// {
//     //compound statement
//     var a = 10;
//     console.log(a)
// };
// var a = 100
// const b = 10
// {
//     var a = 1; //global scope
//     let b = 2; //block scope
//     const c = 3; //block scope
// }
// console.log(a)
// console.log(b) //reference - error 
// console.log(c)

//shadowing 🔥
// in case of var , it is pointed to same  memory location
// where as const , let points to different location
// const,let (script object scope) if inside block (block scope)

// function x()
// {
//     var a = 9
//     function y()
//     {
//         console.log(a)
//     }
//     return y
// }

// z = x()
// console.log(z)


// -- Closures & setTimeout

// function x()
// {
//     for(let i=1;i<=5;++i)
//     {
//         setTimeout(() => {
//             console.log(i);
//         }, 1000);
//     }

// }
// x()
// console.log("hi")

// --- Functions expressions and first order functions

// a()
// b() // Type err ( b is not a function)

// console.log(a) // logs function a
// console.log(b) //undefined

//Function declaration || Function Statement
// function a()
// {
//     console.log("a called")
// }

// Function expression
// var b = function()
// {
//     console.log("b called")
// }

// function x(param) // function as a parameter
// {
//     console.log(param)
//     return b //returning function
// }

// console.log(x(a)) // Passing function as a argument

// The ability to use functions as params , args & as a return val is first order functions

//Anonymous functions are functions used as values
//  var c = function()
//  {
//     console.log("anonymous function")
//  }
// function() --> anonymous function
//  {
//     console.log("anonymous function")
//  }

//Named Function Expressions
// Anonymous functions with a name
// var n = function xyz()
// {
//     console.log("inside named functions")
// }
// n()
// xyz() // not defined becoz xyz is in local scope 

function outer()
{
    let i=0
    document.getElementById("myBtn").addEventListener("click", function xx() {
      console.log("click",i++);
    });
    
}

outer()


