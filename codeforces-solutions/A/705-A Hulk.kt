import java.io.BufferedReader
import java.io.InputStreamReader
fun main(args: Array<String>) {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val n = reader.readLine()?.toInt()!!
    val hate = "I hate"
    val that = " that "
    val love = "I love"
    val it = " it"
    if (n==1){
        print("$hate$it")
        return
    }
    for (i in 1..n){
        if(i%2!=0) {
            print("$hate")
            if(i!=n)print("$that")
        }
        else {
            print("$love")
            if(i!=n)print("$that")
        }

    }
    print("$it")


}




 