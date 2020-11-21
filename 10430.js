const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const s = line.split(' ')
    const A = Number(s[0])
    const B = Number(s[1])
    const C = Number(s[2])

    console.log((A+B)%C)
    console.log(((A%C)+(B%C))%C)
    console.log((A*B)%C)
    console.log(((A%C)*(B%C))%C)

    rl.close()
}).on('close', () => process.exit())
