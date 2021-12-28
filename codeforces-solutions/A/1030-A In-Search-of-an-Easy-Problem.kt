import java.io.BufferedReader
import java.io.InputStreamReader
import java.io.BufferedWriter
import java.io.OutputStreamWriter
fun main(args: Array<String>) {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val w = BufferedWriter(OutputStreamWriter(System.out))
    reader.readLine()
    val s = reader.readLine()
    if(s.contains("1"))
        print("HARD")
    else print("EASY")
    w.close()
}







 