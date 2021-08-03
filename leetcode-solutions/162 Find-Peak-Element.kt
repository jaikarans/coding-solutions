class Solution {
    fun findPeakElement(nums: IntArray): Int {
        if (nums.size == 1)
            return 0
        else{
            for (i in 0..nums.size-1){
            if (i==0){
                if(nums[i]>nums[i+1]){
                    
                    return 0
                }
            }
            else if(i==nums.size-1){
                if(nums[i]>nums[i-1]){
                    //print(nums.size-1)
                    return nums.size-1
                }
            }
            else{
            if (nums[i] > nums[i-1] && nums[i] > nums[i+1]){
               // print("$i")
                return i
            }
        }
        }
        }
        return 0
    }
    
}