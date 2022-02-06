class Solution 
{ 
    int countWords(String s) 
    { 
				// Time 	O(n)
				// Space 	O(1)
        int ans = 0;
        int n = s.length();
        int preSep = 0; // previous seprator location.
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == ' ' || s.charAt(i) == '\\') {
                if ((i == 1 && i - preSep > 0) || (i != 0 && i - preSep > 1)){
                    ans++;
                }
                if (s.charAt(i) == '\\') preSep = i + 1;
                else preSep = i;
            }
        }
        if (n-1 - preSep > 0) ans++;
        return ans;
        
    }
} 