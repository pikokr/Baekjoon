package boj2475

fun main() = println(readLine()!!.split(" ").map { it.toInt() }.map { it * it }.reduce { acc, cur -> acc + cur } % 10)