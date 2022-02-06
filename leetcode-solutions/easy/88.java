class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // Time     O(n + m)
        // Space    O(m)
        
        int[] arr = new int[m];
        for (int i=0; i < m; i++) {
            arr[i] = nums1[i];
        }
        
        int a1 = 0;
        int a2 = 0;
        for (int i=0; i < n+m; i++) {
            if (a1 < arr.length && ((a2 < nums2.length && a2 < nums2.length && arr[a1] < nums2[a2]) || a2 >= nums2.length)) {
                nums1[i] = arr[a1++];
            }
            else {
                nums1[i] = nums2[a2++];
            }
        }
    }
}