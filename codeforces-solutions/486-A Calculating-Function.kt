import java.math.BigInteger

fun main(args: Array<String>) {
    val n = readLine()?.toBigInteger()!!
    if (n % BigInteger.valueOf(2) == BigInteger.valueOf(0)) {
        print("${(n / BigInteger.valueOf(2)) * (n / BigInteger.valueOf(2) + BigInteger.valueOf(1)) - ((n / BigInteger.valueOf(2)) * (n / BigInteger.valueOf(2)))}")
    } else {
        print("${((n / BigInteger.valueOf(2)) * (n / BigInteger.valueOf(2) + BigInteger.valueOf(1))) - ((n / BigInteger.valueOf(2) + BigInteger.valueOf(1)) * (n / BigInteger.valueOf(2) + BigInteger.valueOf(1)))}")
    }
}