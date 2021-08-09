class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int sLen = s.size();
        string a;
        int len = 0;
        for (int i=0; i<words.size() && len<=sLen; i++){
            len+=words[i].size();
            a+=words[i];
            if (a==s) return true;
        }
        return false;
    }
};