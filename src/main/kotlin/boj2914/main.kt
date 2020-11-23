package boj2914

fun main() {
    val (a, i) = readLine()!!.split(" ").map { it.toInt() }
    println(a * (i - 1) + 1)
}