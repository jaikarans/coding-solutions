import java.util.Scanner
fun main(){
    val reader = Scanner(System.`in`)
    val n: Int = reader.nextInt();
    if (n%2==0 && n!=2)
        print("YES")
    else 
        print("NO")
        
    
}