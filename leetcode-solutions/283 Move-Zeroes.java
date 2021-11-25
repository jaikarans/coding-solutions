class Solution {
    public void moveZeroes(int[] nums) {
        // Time complexity O(n);
        // Space Complexity O(1);
        int count = 0;
        for (int i=0; i<nums.length; i++) {
            if (nums[i] != 0){
                nums[count] = nums[i];
                if (i != count) nums[i] = 0;
                count++;
            }
            else {
                nums[i] = 0;
            }
        }
    }
}