package main.kotlin.boj1977

fun main() {
    val m = readLine()!!.toInt()
    val n = readLine()!!.toInt()
    val numbers = ArrayList<Int>()
    var i = 0
    while (i * i <= n) {
        if (i * i in m..n) {
            numbers.add(i * i)
        }
        i++
    }
    println(if (numbers.size == 0) -1 else "${numbers.reduce { acc, cur -> acc + cur }}\n${numbers[0]}")
}