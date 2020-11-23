package boj13277

fun main() = println(readLine()!!.split(" ").map { it.toBigInteger() }.reduce { acc, cur -> acc * cur })