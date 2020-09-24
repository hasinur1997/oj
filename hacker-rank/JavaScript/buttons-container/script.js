var buttonContainer = document.createElement('div')
buttonContainer.id = 'btns'

document.body.appendChild(buttonContainer)

for (let i = 1; i <= 9; i++) {
    buttonContainer.appendChild(makeButton(i));
}


function makeButton(n) {
    let button = document.createElement('button')
    button.id = 'btn' + n
    button.innerHTML = n

    return button
}