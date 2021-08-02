import java.util.Scanner
fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    val a = reader.next()
    val b = reader.next()
    if(a.reversed().equals(b))
        print("YES")
    else 
        print("NO")
}