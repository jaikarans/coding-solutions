import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    reader.readLine()
    var count = 0;
    var pre = "any"
    reader.lines().let { line->
        line.spliterator().forEachRemaining { if (it.equals(pre)==false){
            count++
            pre = it
        }
        }
    }
    print(count)
}