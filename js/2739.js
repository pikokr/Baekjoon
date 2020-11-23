const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const n = Number(line)

    for (let i of new Array(9).keys()) {
        i += 1
        console.log(`${n} * ${i} = ${n*i}`)
    }

    rl.close()

}).on('close', () => process.exit())
