/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) return head;
        ListNode* second = head->next;
        ListNode* first = head;
        int firstVal = first->val;
        int i=1;
        while (second) {
            if (i%2 != 0) {
                firstVal = first->val;
                first->val = second->val;
                second->val = firstVal;
            }
            first = second;
            second = second->next;
            i++;
        }
        return head;
    }
};