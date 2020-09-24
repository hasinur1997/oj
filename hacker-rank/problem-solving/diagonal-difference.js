function diagonalDifference(arr) {
    let arrayLength = arr.length
    let firstDigonal = 0
    let secondDigonal = 0
    let difference;

    // first diagonal
    for (let i = 0; i < arrayLength; i++) {
        firstDigonal += arr[i][i]
    }

    // second diagonal
    let j = arrayLength - 1
    for (let i = 0; i < arrayLength; i++) {
        secondDigonal += arr[i][j];
        j--
    }

    // console.log(secondDigonal);

    difference = firstDigonal - secondDigonal;

    return Math.abs(difference)
}

let input = [
    [11, 2, 4],
    [4, 5, 6],
    [10, 8, -12]
]


// console.log(input[0][2])

let result = diagonalDifference(input);
console.log(result);

// console.log(4-19)