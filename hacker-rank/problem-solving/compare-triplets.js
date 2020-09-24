let a = [17, 28, 30]
let b = [99, 16, 8]



function compareTriplets(a, b) {
    let length = a.length;
    let al = 0, bob = 0;

    for (let i = 0; i < length; i++) {
        if (a[i] > b[i]) {
            al++
        }

        if (a[i] < b[i]) {
            bob++
        }

    }

    return [al, bob]

}

let result = compareTriplets(a, b);

console.log(result);

