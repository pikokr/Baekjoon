package boj5522

fun main() {
    val arr = ArrayList<Int>()
    repeat(5) {
        arr.add(readLine()!!.toInt())
    }
    println(arr.reduce { acc, cur -> acc+cur })
}