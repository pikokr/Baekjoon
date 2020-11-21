const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const n = Number(line)
    let res = n

    for (const i of new Array(n-1).keys()) {
        res += i+1
    }

    console.log(res)

    rl.close()
}).on('close', () => process.exit())
