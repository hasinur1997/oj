function staircase(n) {
    for (let i = 0; i < n; i++) {
        // console.log(i)
        var maxSpace = n - (i + 1);
        
        var lineSpace = 'a';
        var test = 0;

        for (let space = maxSpace; space >= maxSpace; space-- ) {
            test = test + 1;
        }

        console.log(test);

        // for (let j = 0; j < i; j++) {
        //     process.stdout.write("#")
        // }
        // process.stdout.write("\n");
    }
}

staircase(6);