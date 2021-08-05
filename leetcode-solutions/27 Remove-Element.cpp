class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        vector<int>::iterator it = nums.begin();
        int size = nums.size();
        
        for(int i=1; i<=size; i++){
            for(auto it=nums.begin(); it!=nums.end(); it++){
            
                if(*it == val){
                    nums.erase(it);
                    count++;
                    break;
                }
            }
        }
        
        return size-count;
    }
};