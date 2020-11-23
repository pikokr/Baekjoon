package boj1085

fun main() {
    val (x,y, width, height) = readLine()!!.split(" ").map { it.toInt() }
    println(listOf(x,y,width-x, height-y).min())
}