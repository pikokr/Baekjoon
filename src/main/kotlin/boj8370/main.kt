package boj8370

fun main() {
    val (a,b,c,d) = readLine()!!.split(" ").map { it.toInt() }
    println(a*b+c*d)
}