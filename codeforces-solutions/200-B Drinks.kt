fun main(args: Array<String>) {
    val a = readLine()?.toDouble()!!
    var sum = 0.0
    readLine()?.let { line->
        line.split(" ").map { it.toDouble() }.forEach { sum+=it }
    }
    print(sum.div(a))
}