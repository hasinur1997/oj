var marks = 50;
var result;

if (marks >= 80 ) {
    result = 'GPA-5'
} else if (marks >= 70) {
    result = 'GPA-4';
} else if (marks >= 60) {
    result = 'GPA-3.5';
} else if (marks >= 50) {
    result = 'GPA-3';
} else if (marks >= 40) {
    result = 'GPA-2'
} else if (marks >= 33) {
    result = 'GPA-1';
} else if (marks < 33) {
    result = 'Sorry ! You have failed.';
}

console.log(result);
