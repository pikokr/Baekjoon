package boj3046

fun main() {
    val (r1, s) = readLine()!!.split(" ").map { it.toInt() }
    println(s * 2 - r1)
}