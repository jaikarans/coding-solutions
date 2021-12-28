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
    public ListNode oddEvenList(ListNode head) {
        ListNode headAns = new ListNode();
        headAns.next = null;
        ListNode lastOdd = headAns;
        ListNode firstEven = null;
        ListNode lastEven = null;
        int i=1;
        while (head != null) {
            ListNode tmp = new ListNode();
            tmp.val = head.val;
            if (i%2 != 0) {
                lastOdd.next = tmp;
                lastOdd = lastOdd.next;
                lastOdd.next = firstEven;
            }
            else {
                if (lastEven == null) {
                    firstEven = tmp;
                    lastOdd.next = firstEven;
                    lastEven = tmp;
                }
                else {
                    lastEven.next = tmp;
                    lastEven = lastEven.next;
                }
            }
            head = head.next;
            i++;
        }
        return headAns.next;
    }
}