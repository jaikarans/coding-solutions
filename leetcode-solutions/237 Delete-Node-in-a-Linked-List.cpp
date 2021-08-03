/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* n;
        ListNode* nn;
        n = node->next;
        std::vector<int> a;
        while (1){
            a.push_back(n->val);
            if (n->next==NULL)break;
            n = n->next;
            
        }
        for (int i=0; i<a.size(); i++){
            node->val = a[i];
            if (i==a.size()-1) break;
            node=node->next;
        }
        node->next=NULL;
    }
};