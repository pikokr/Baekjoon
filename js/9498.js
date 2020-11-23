const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const n = Number(line)

    if (n >= 90) console.log('A')
    else if (n >= 80) console.log('B')
    else if (n >= 70) console.log('C')
    else if (n >= 60) console.log('D')
    else console.log('F')

    rl.close()
}).on('close', () => process.exit())
