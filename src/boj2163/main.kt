package boj2163

fun main() {
    val (n,m) = readLine()!!.split(" ").map { it.toInt() }
    println((n-1)+n*(m-1))
}