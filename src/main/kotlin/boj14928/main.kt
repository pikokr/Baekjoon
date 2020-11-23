// https://wellohorld.tistory.com/53

package boj14928

import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter


fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    val n = br.readLine()
    var remain: Long = 0
    for (element in n) {
        remain = (remain * 10 + (element - '0')) % 20000303
    }
    bw.write("$remain\n")
    bw.flush()
    br.close()
    bw.close()
}