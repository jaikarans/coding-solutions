/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int bad = 0;
        int l = 1;
        int r = n;
        int pi;
        
        while (r >= l) {
            pi = l + (r-l)/2;
            if (isBadVersion(pi) == true) {
                bad = pi;
                r = pi-1;    
            }
            else {
                l = pi + 1;
            }
        }
        
        return bad;
    }
}