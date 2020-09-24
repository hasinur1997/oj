var res = document.createElement('div')

res.id = 'res'

document.body.appendChild(res)

var btns = document.createElement('div')
btns.id = 'btns'

document.body.appendChild(btns)

var ids = [ 
    { btn0: '0'},
    { btn1: 1},
    { btnClr: 'C' },
    { btnEql: '=' },
    { btnSum: '+' },
    { btnSub: '-' },
    { btnMul: '*' },
    { btnDiv: '/' }
]


ids.forEach(item => {
    let id = Object.keys(item)[0]
    let value = item[id]
    let button = document.createElement('button')
    button.id = id
    button.innerHTML = value
    btns.appendChild(button)

})

var buttons = document.getElementsByTagName("button");

for (let button of buttons) {
    button.onclick = function (e) {
        var cal = false
        var btn = e.target || e.srcElement
        var action = document.getElementById(btn.id).innerHTML
        var res = document.getElementById('res')

        switch (action) {
            case '0':
            case '1':
            case '+':
            case '-':
            case '*':
            case '/':
                res.innerHTML += action
                break;
            case 'C':
                res.innerHTML = ''
                break
            case '=':
                var expr = res.innerHTML
                var nums = /(\d+)/g
                expr = expr.replace(nums, function (match) {
                    return parseInt(match, 2)
                })

                res.innerHTML = eval(expr).toString(2)
                cal = true
                break
            
        }
    }
}
