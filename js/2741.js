// 이것도 c++로 하겠습니다
const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

rl.on('line', line => {
    for (let i = 1; i < Number(line)+1; i++) {
        console.log(i)
    }

    rl.close()
}).on('close', () => process.exit())
