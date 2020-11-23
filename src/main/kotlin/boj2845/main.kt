package boj2845

fun main() {
    val (a, b) = readLine()!!.split(" ").map { it.toInt() }
    val exact = a * b
    val line = readLine()!!.split(" ").map { it.toInt() }
    repeat(5) {
        println(line[it]-exact)
    }
}