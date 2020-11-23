package boj14918

fun main() = println(readLine()!!.split(" ").map { it.toBigInteger() }.reduce { acc, cur -> acc + cur })