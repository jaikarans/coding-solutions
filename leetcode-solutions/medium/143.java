/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public void reorderList(ListNode head) {
        int n = -1;
        ListNode h = head;
        HashMap<Integer, ListNode> map = new HashMap<>();
        while(h != null) {
            n++;
            map.put(n, h);
            h = h.next;
        }
        if (n == 0) return;
        int i=0; int j=n;
        for (i=0, j=n; i<n; i++, n--) {
            map.get(n-1).next = map.get(n).next;
            map.get(n).next = map.get(i).next;
            map.get(i).next = map.get(n);
        }
        
    }
}