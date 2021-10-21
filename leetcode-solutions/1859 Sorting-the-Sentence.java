import java.util.Vector;

class Solution {
    public String sortSentence(String s) {
        String[] a = new String[10];
        String ans = new String();
        String tmp = new String();
        int numberOfWords = 0;
        for (int i=0; i<s.length(); i++) {
            
            if (s.charAt(i) != ' ') {
                if (Character.isDigit(s.charAt(i))){
                    numberOfWords++;
                    a[Integer.parseInt(s.substring(i,i+1))] = tmp;
                    tmp = new String();
                }
                else {
                    tmp += s.substring(i,i+1);    
                }
            }
        }
        
        int i=1;
        while(i<10 && a[i] != null) {
            //System.out.println(a[i]);
            ans += a[i];
            if (i<numberOfWords)
                ans+= " ";
            i++;
        }
        return ans;
    }
}