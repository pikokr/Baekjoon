package boj1271

fun main() {
    val (a,b) = readLine()!!.split(" ").map { it.toBigInteger() }
    println(a/b)
    println(a%b)
}