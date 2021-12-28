fun main(args: Array<String>) {
    var s = readLine()!!
    var ss = mutableSetOf<Char>()
    for (c in s) {
        if (c == '{' || c == '}' || c == ' ' || c == ',') {
            continue
        } else {
            ss.add(c)
        }
    }
    println(ss.size)
}