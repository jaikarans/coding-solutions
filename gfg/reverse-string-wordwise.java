class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        // code here
        StringBuilder sb = new StringBuilder(S);
        int j = S.length()-1;
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i) != '.') {
                st.push(S.charAt(i));
            }
            if (S.charAt(i) == '.' || i == S.length()-1) {
                while(!st.empty()) {
                    sb.setCharAt(j--, st.pop());
                }
                if (S.charAt(i) == '.') {
                    sb.setCharAt(j--, '.');
                }
            }
            
        }
        return sb.toString();
    } 

}