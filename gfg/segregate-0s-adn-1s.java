class Solution {
    void segregate0and1(int[] arr, int n) {
        // Time     O(n)
        // Space    O(1)
        for (int left = 0, right = 0; right < n; right++){
            if (arr[right] == 0) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left+=1;
            }
        }
    }

}
