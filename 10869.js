const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const s = line.split(' ')
    const a = Number(s[0])
    const b = Number(s[1])
    console.log(a+b)
    console.log(a-b)
    console.log(a*b)
    console.log(a/b)
    console.log(a%b)

    rl.close()
}).on('close', () => process.exit())
