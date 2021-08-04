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
    ListNode* middleNode(ListNode* head) {
        ListNode* a = head;
        int count = 0;
        int i;
        while(true){
            count++;
            
            if (a->next==NULL) break;
            a = a->next;    
        }
        
        i=count/2+1;
        count=0;
        while(true){
            count++;
            
            if(count==i){
                return head;
            }
            head = head->next;
        }

    }
};