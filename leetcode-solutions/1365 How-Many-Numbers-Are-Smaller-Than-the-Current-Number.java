import java.util.SortedMap;
import java.util.TreeMap;
import java.util.Vector;
import java.util.Arrays;
import java.util.Set;
import java.util.Map.Entry;

class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] ans = new int[nums.length];
        
        // number is Key and Vector of numbers index is Value
        SortedMap<Integer, Vector<Integer>> map = new TreeMap<Integer, Vector<Integer>>();
        
        for (int i=0; i<nums.length; i++){
            if (map.containsKey(nums[i])) {
                map.get(nums[i]).add(i);
            } else {
                Vector<Integer> v = new Vector<Integer>();
                v.add(i);
                map.put(nums[i], v);
            }
        }
        
        System.out.println(map.entrySet());
        Iterator it = map.entrySet().iterator();
        
        int count = 0;
        while (it.hasNext()) {
            Entry e = (Entry)it.next();
            Vector<Integer> vec = (Vector<Integer>) e.getValue();
            for (int i=0; i<vec.size(); i++){
                ans[vec.get(i)]  = count;
            }
            count += vec.size();
        }
        
        
        return ans;

    }
    
}