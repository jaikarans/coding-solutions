import java.util.Scanner
fun main(){
    val reader = Scanner(System.`in`)
    val n = reader.nextInt()

    val a = IntArray(n)
    for (i in 0..n-1){
        a[i]=reader.nextInt()
    }
    a.sortDescending()
    var sum =0
    var count =0
    val total = a.sum()
    for(i in 0..n-1){
        sum+=a[i]
        count++
        if(total-sum<sum)
            break
    }
    print(count)

}