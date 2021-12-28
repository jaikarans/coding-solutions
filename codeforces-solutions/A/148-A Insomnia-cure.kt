class main2 {

}
fun main(){
    val k = readInt()
    val l = readInt()
    val m = readInt()
    val n = readInt()
    val d = readInt()
    if (k==1 || l==1 || m==1 || n==1){
        print(d)
        return
    }
    var count = 0
    for (i in 2..d){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0 ) count++
    }
    print(count)
}

private fun readInt() = readLine()!!.toInt()