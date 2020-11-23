package main.kotlin.boj2440

fun main() {
    val c = readLine()!!.toInt()
    for (i in c downTo 1) {
        println("*".repeat(i))
    }
}