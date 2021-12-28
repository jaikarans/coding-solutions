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
    ListNode* rotateRight(ListNode* head, int k) {
        vector <ListNode*> v;
        ListNode* tmp = head;
        ListNode* headNext;
        while (tmp) {
            v.push_back(tmp);
            tmp = tmp->next;
        }
        
        if (v.size() == 0 || k%v.size() == 0)
            return head;
        else {
            // making tmp as new head which is Kth node of linked list
            tmp = v[v.size()-k%v.size()];
            // making left node's([K-1]th) next pointer NULL because it will be last node.
            v[v.size()-k%v.size()-1]->next = NULL;
            // pointing last Node to head;
            v[v.size()-1]->next = head;
            
            return tmp;
        }
    }
};