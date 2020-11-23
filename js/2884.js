const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    const s = line.split(' ').map(r=>Number(r))

    let x = s[0], y = s[1]

    for (const i of new Array(45).keys()) {
        y -= 1
        if (y === -1) {
            y = 59
            x = x-1
        }
        if (x === -1) x = 23
    }

    console.log(x + ' ' + y)

    rl.close()

}).on('close', () => {
    process.exit()
})
