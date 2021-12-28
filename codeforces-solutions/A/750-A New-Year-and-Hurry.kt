fun main(){
    val (n, k)= readLine()!!.split(" ").map { it.toInt() }
    val d = 4 * 60 - k
    for (i in n downTo 0) {
        val t = 5 * i * (i + 1) / 2
        if (t <= d) {
            print(i)
            break
        }
    }

}