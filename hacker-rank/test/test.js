var n = 100;

for (let i = 1; i <= n; i++) {
    let elements = []

    for (let j = 1; j <= i; j++) {
        if ((i % j == 0 && j == 3) || (i % j == 0 && j == 5)) {
            elements.push(j)
        }
    }

    
    if (elements.indexOf(3) != -1 && elements.indexOf(5) != -1) {
        console.log('FizzBuzz')
    } else if (elements.indexOf(3) != -1) {
        console.log('Fizz')
    } else if (elements.indexOf(5) != -1) {
        console.log("Buzz");
    } else {
        console.log(i);
    }
}