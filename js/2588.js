const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

let index = 0

let lines = []

rl.on('line', line => {
    lines.push(Number(line))
    if (index !== 1) index++
    else rl.close()
}).on('close', () => {
    const x = lines[0], y = lines[1]

    const a = Math.floor(y/100), b = Math.floor(y/10)-(a*10), c = y%10

    const outs = [
        x*c,x*b,x*a,x*y
    ]

    console.log(outs.join('\n'))

    process.exit()
})
