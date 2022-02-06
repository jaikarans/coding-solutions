class Solution {
    public String[] findRelativeRanks(int[] score) {
        // Time     O(nlogn)
        // Space    O(n)
        String[] ranklist = new String[score.length];
        PriorityQueue<ArrayList<Integer> > p = new PriorityQueue<>(new ArrayComparator());
        for (int i=0; i < score.length; i++) {
            ArrayList<Integer> a = new ArrayList<>();
            a.add(score[i]);
            a.add(1,i);
            p.add(a);
        }
        
        int i = 1;
        while (!p.isEmpty()) {
            ArrayList<Integer> a = p.poll();
            if (i==1) {
                ranklist[a.get(1)] = "Gold Medal";
                i++;
            } else if (i==2) {
                ranklist[a.get(1)] = "Silver Medal";
                i++;
            } else if (i==3) {
                ranklist[a.get(1)] = "Bronze Medal";
                i++;
            } else {
                ranklist[a.get(1)] = Integer.toString(i++);
            }
        }
        
        return ranklist;
        
    }
}
public class ArrayComparator implements Comparator<ArrayList<Integer>> {
    @Override
    public int compare(ArrayList a1, ArrayList a2) {
        if ((int)a1.get(0) < (int)a2.get(0)) {
            return 1;
        }
        return -1;
    }
}