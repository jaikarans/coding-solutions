fun isDistinct(num : Int): Boolean{
    var n = num
    val a = n%10
    n/=10
    val b = n%10
    n/=10
    val c = n%10
    n/=10
    val d = n%10
    return if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        true
    else
        false
}
fun main(args: Array<String>) {
    var num = readLine()?.toInt()!!
    var isFound = false
    while (isFound == false) {
        num = num + 1
        isFound = isDistinct(num)
    }
    print(num)
}