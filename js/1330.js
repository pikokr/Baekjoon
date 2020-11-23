const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const s = line.split(' '), x = Number(s[0]), y = Number(s[1])

    if (x > y) console.log('>')
    else if (x<y) console.log('<')
    else console.log('==')

    rl.close()
}).on('close', () => process.exit())
