import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

fun main(args: Array<String>) {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val writer = BufferedWriter(OutputStreamWriter(System.out))
    val (p, h) = reader.readLine()!!.split(' ').map { it.toInt() }
    var ans = 0
    var temp: Int
    reader.readLine()?.let { line ->
        line.split(" ").map { it.toInt() }.forEach {
            if(it > h)
                ans = ans+2
            else
                ans = ans+1
        }

    }
    writer.write("$ans")
    writer.flush()
   // writer.close()
}