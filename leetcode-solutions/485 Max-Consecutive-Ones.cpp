class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0;
        int start = nums[0]==0 ? 1 : 0;
        
        if (nums.size()==1 && nums[0]==0) return 0;
        

        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0 || i==nums.size()-1) {
                ans = ans> i-start ? ans : i - start; 
                if (i==nums.size()-1 && nums[i] == 1) i++;
                ans = ans> i-start ? ans : i - start;
                start = i+1;
                
                cout << start << " " <<  ans  << " ";

            } 
        }
            
        return ans;
    }
};