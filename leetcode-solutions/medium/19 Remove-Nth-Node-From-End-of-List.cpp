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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp = head;
        vector <ListNode*> v;
        while (tmp) {
            v.push_back(tmp);
            tmp = tmp->next;
        }
        if (n==v.size())
            return head->next;
        else if (n==1) {
            v[v.size()-2]->next = NULL;
        }
        else
            v[v.size()-n-1]->next = v[v.size()-n+1];
        return head;
    }
};