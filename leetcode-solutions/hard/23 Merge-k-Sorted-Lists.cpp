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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> v;
        ListNode* head;
        
        //store all values in v
        for (int i=0; i<lists.size(); i++){
            while(lists[i]!=NULL){
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        
        // if all lists are empty
        if (v.size()==0) {
            head = NULL;
            return head;
        }
        
        //short in decending
        sort(v.begin(), v.end(), greater<int>());
           
        for (int i=0; i<v.size(); i++){
            ListNode* node = new ListNode();
            node->val = v[i];
            if (i==0){
                head = node;
            }
            else{
                node->next = head;
                head = node;
            }     
        }
        
        return head;
        
    }
};