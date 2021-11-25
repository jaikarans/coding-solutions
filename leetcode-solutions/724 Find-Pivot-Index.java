class Solution {
    public int pivotIndex(int[] nums) {
        int ans;
        int sum = 0;
        int leftSum = 0;
        for (int n : nums) {
            sum+=n;
        }
        
        for (int i=0; i<nums.length; i++) {
            sum-=nums[i];
            if (leftSum == sum) return i;
            leftSum+=nums[i];
        }
        
        return -1;
    }
}