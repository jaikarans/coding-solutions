class Solution {
    public int search(int[] nums, int target) {.
        int l,h;
        int p;
        l = 0;
        h = nums.length-1;
        p = nums.length/2;
        
        while ( l <= h ) {
            if (nums[p] == target)
                return p;
            else if (nums[p] > target) {
                h = p-1;
                p = (h-l)/2;
            }
            else {
                l = p+1;
                p = l+((h-l)/2);
            }
        }
        return -1;
    }
}