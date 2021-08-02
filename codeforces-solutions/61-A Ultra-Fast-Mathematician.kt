fun main(args: Array<String>) {
    val a = readLine()!!
    val b = readLine()!!
    for (i in 0..a.length-1){
        if (a[i].equals(b[i])) print("0")
        else    print("1")
    }
}