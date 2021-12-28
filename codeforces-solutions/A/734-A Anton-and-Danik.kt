import java.util.Scanner
fun String.occurrencesOf(c : Char): Int{
    var count = 0;
    for (i in this){
        if (i == c)
            count++
    }
    return count
}
fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    val n = reader.nextInt()
    val s = reader.next()
    if(s.occurrencesOf('A') > s.length-s.occurrencesOf('A'))
        print("Anton")
    else if(s.occurrencesOf('A') == s.length-s.occurrencesOf('A'))
        print("Friendship")
    else
        print("Danik")
}