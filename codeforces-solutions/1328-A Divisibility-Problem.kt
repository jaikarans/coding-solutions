fun main() {
    val t = readLine()!!.toInt()
    repeat(t){
        val (a, b) = readLine()!!.split(" ").map { it.toInt() }
        if (a%b==0) println(0)
        else
            println(b-a%b)
        }
}