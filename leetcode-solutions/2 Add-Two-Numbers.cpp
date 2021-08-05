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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* tmp;
        ListNode* tail = head;
        int val1, val2;
        int carry = 0;
        while (l1!=NULL || l2!=NULL) {
            
            if(l1!=NULL){
                val1 = l1->val;
                l1 = l1->next;
            }
            else {
                val1 = 0;
            }
            
            if(l2!=NULL){
                val2 = l2->val;
                l2 = l2->next;
            }
            else {
                val2 = 0;
            }
            
            tmp = new ListNode();
            tmp->val = (val1 + val2 + carry)%10;
            carry = (val1 + val2 + carry)/10;
            
            tail->next = tmp;
            tail = tail->next;
            
            
        }
        if(carry>0){
            tmp = new ListNode();
            tmp->val = carry;
            tail->next = tmp;
            tail = tail->next;
        }
        
        
        return head->next;
    }
};