

class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int ans = 0;
        int n = grid.length;
        int[] maxColumn = new int[n];
        int[] maxRow = new int[n];
        for (int i=0; i<n; i++) {
            int max = 0;
            for (int j=0; j<n; j++) {
                if (grid[j][i] > max) {
                    max = grid[j][i];
                }
            }
            maxColumn[i] = max;
        }
        
        for (int i=0; i<n; i++) {
            int max = 0;
            for (int j=0; j<n; j++) {
                if (grid[i][j] > max) {
                    max = grid[i][j];
                }
            }
            maxRow[i] = max;
        }
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (maxRow[i] > maxColumn[j])
                    ans+=(maxColumn[j]-grid[i][j]);
                else
                    ans+=(maxRow[i]-grid[i][j]);
            }
        }
        return ans;
        
        
    }
}