fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val p = readInt()
    val q = readInt()
    val yes = "I become the guy."
    val no = "Oh, my keyboard!"
    if (n==1 && (p.contains(1) || q.contains(1))) print(yes)
    else if ((p+q).size == n) print(yes)
    else print(no)
}

private fun readInt() = readLine()!!.split(" ").map(String:: toInt).drop(1).toSet()