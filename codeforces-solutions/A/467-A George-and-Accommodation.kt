import java.util.Scanner
fun main(args: Array<String>) {
    var n = readLine()?.toInt()!!
    val reader = Scanner(System.`in`)
    val p = IntArray(n)
    val q = IntArray(n)
    var count=0
    for(i in 0..n-1){
        p[i] = reader.nextInt()
        q[i] = reader.nextInt()
        if(q[i]-p[i] >= 2)
            count++
    }
    print(count)
}