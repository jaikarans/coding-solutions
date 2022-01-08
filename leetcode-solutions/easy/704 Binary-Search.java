class Solution {
    public int search(int[] nums, int target) {
        int l = 0;
        int r = nums.length-1;
        int p ;
        
        while(r >= l) {
            p = l + (r-l)/2;
            //System.out.println(l + " " + r + " " + p);
            if (nums[p] == target) {
                return p;
            }
            else if (nums[p] < target) {
                l = p + 1;
            }
            else {
                r = p - 1;
            }
            
        }
        
        return -1;
    }
}