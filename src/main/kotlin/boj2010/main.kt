package boj2010

fun main() {
    val cnt = readLine()!!.toInt()
    val arr = ArrayList<Int>()
    for (i in 1..cnt) arr.add(readLine()!!.toInt())
    var res = 1
    for (i in arr) {
        res = res + i - 1
    }
    println(res)
}