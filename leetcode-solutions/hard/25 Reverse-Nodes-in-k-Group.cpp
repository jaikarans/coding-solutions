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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k==1) return head;
        
        ListNode* traverse = head;
        ListNode* tmp = head;
        vector<int> v;
        
        while(traverse!=NULL){
            
            for (int i=1; i<=k; i++){
                if (traverse==NULL){
                    return head;
                }
                else {
                    v.push_back(traverse->val);
                    traverse = traverse->next;
                }
            }
            
            while(!v.empty()){
                tmp->val = v.back();
                tmp = tmp->next;
                v.pop_back();
            }
               
        }
        return head;
        
    }
};