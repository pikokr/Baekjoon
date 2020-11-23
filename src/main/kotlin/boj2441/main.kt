package main.kotlin.boj2441

fun main() {
    val c = readLine()!!.toInt()
    for (i in c downTo 1) {
        print(" ".repeat(c-i))
        println("*".repeat(i))
    }
}