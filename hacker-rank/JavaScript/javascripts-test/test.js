// var marks = 50;
// var result;

// if (marks >= 80 ) {
//     result = 'GPA-5'
// } else if (marks >= 70) {
//     result = 'GPA-4';
// } else if (marks >= 60) {
//     result = 'GPA-3.5';
// } else if (marks >= 50) {
//     result = 'GPA-3';
// } else if (marks >= 40) {
//     result = 'GPA-2'
// } else if (marks >= 33) {
//     result = 'GPA-1';
// } else if (marks < 33) {
//     result = 'Sorry ! You have failed.';
// }

// console.log(result);

/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

// function fizzBuzz(n) {
//     // Write your code here
//     for (let i = 1; i <= n; i++) {
        
//         if (i % 3 == 0 && i % 5 == 0) {
//             console.log("FizzBuzz");
//         } else if (i % 3 == 0) {
//             console.log("Fizz");
//         } else if (i % 5 == 0) {
//             console.log("Buzz");
//         } else {
//             console.log(i);
//         }
//     }

// }

// fizzBuzz(15);

// // function main() {
// //     // const n = parseInt(readLine().trim(), 10);

    
// // }

// function stripProperty(obj, prop) {
//     // write your code here
//       if (obj.hasOwnProperty(prop)) {
//         delete obj[prop];
//       }
//     return obj;
// }

// let object = {
//     foo: 2,
//     bar: 3,
//     baz: 3
// }

// // console.log(object);
// test = stripProperty(object, 'foo');

// console.log(test);

function getFixedCounter(k) {
    // write your code here
      let value = 0;
      return {
        increament: function() {
          value += k;
        },
        decreament: function() {
          value -= k;
        },
        getValue: function() {
          return value;
        }
      };
}

let test = getFixedCounter(10);

test.increament();
test.increament();
test.increament();
test.increament();
test.increament();
console.log(test.getValue());
test.decreament();
console.log(test.getValue());