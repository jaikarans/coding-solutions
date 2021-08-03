class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::string s = std::bitset<32>(n).to_string();
        int count =0;
        for (int i=0; i<32; i++){
            if (s[i]=='1') count++;
        }
        return count;
    }
};