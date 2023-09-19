// utility function

function sanitize (str) {
    return str.replace(/\D/g,'').replace(/(\r\n|\n|\r)/gm, "");
}

function printTable (str) {
    let result = [];
    let row = 0
    let col = 0
    for (let i = 0; i < str.length; i++) {

        result.push(str[i])
        result.push(' ')
        col++

        if (col % 9 === 0) {
            console.log(result.join(''))
            result = []

            row++
            if (row === 3 || row === 6) {
                console.log("------+-------+------")
            }
            continue;
        }

        if (col % 3 === 0) {
            result.push('|')
            result.push(' ')
        }
    }
}

module.exports = {
    sanitize,
    printTable,
}