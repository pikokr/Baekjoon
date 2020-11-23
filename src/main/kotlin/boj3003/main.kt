package boj3003

fun main() {
    val l = readLine()!!.split(" ").map { it.toInt() }
    println("${1-l[0]} ${1-l[1]} ${2-l[2]} ${2-l[3]} ${2-l[4]} ${8-l[5]}")
}
