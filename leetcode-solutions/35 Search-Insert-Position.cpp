class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = n/2;
        int rp, lp,pp=pivot;
        lp=0;
        rp = n;
        if (target==0){
            return 0;
        }
        if (nums[0]>target) return 0;
        while(1){
            if (nums[pivot]==target) break;
            //got left
            else if (nums[pivot]>target) {
                rp = pivot;
                pp = pivot;
                pivot = lp + (pivot - lp)/2;
                if (pp==pivot) break;
                
            }
            else {
                lp = pivot;
                pp = pivot;
                //if (rp-pivot==1)rp++;
                pivot=pivot + (rp-pivot)/2;
                if (pp==pivot) break;
                
            }
        }
        if (nums[pivot]==target) return pivot;
        else if (nums[pivot]>target) return pivot-1;
        else return pivot+1;
        
    }
};