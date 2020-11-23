package boj10757

fun main() = println(readLine()!!.split(" ").map { it.toBigInteger() }.reduce { acc, cur -> acc+cur })