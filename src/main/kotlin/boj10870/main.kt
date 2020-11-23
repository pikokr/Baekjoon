package main.kotlin.boj10870

fun fibonacci(num: Int) : Int {
    return if (num <= 1) num else fibonacci(num - 1) + fibonacci(num - 2)
}

fun main() {
    println(fibonacci(readLine()!!.toInt()))
}
