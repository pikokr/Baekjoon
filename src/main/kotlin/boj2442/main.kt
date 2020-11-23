package main.kotlin.boj2442

fun main() {
    val c = readLine()!!.toInt()
    for (i in 1..c) {
        print(" ".repeat(c-i))
        print("*".repeat(i*2-1))
        println()
    }
}