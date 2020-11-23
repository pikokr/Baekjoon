package boj5554

fun main() {
    val a = readLine()!!.toInt()
    val b = readLine()!!.toInt()
    val c = readLine()!!.toInt()
    val d = readLine()!!.toInt()
    val s = a+b+c+d
    println(s/60)
    println(s%60)
}