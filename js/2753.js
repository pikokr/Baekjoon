const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const n = Number(line)

    if (n%4===0&&(n%100!==0||n%400===0)) console.log(1)
    else console.log(0)

    rl.close()
}).on('close', () => process.exit())
