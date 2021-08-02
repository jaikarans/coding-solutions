import java.util.Scanner
fun main(){

    val reader = Scanner(System.`in`)
    var n = reader.nextInt()
    var a = IntArray(n+1)

    for(i in 1..n){
        a[i] = reader.nextInt()
    }
    val b = IntArray(n+14)
    for(i in a){
        b.set(i,a.indexOf(i))
    }
    for(i in 1..n){
        print("${b[i]} ")
    }
}