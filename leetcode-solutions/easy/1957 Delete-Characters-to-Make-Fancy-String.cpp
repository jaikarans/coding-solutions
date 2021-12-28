class Solution {
public:
    string makeFancyString(string s) {
        string r;
        int count = 0;
        for (int i=0; i<s.size(); i++){
            count = 0;
            for (int j=i+1; j<=i+2; j++){
                if (i>s.size()-3) break;
                if (s[i]==s[j]) count++;
            }
           if (count != 2) r+=s[i];
        }
        return r;
    }
};