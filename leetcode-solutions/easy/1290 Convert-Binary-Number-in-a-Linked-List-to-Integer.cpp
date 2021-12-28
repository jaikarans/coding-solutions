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
    int getDecimalValue(ListNode* head) {
        string s = "";
        while (head != NULL){
            if (head->val == 0){
                s+='0';
            }else {
                s+='1';
            }
            head = head->next;  
        }
        bitset<30> bits(s);
        return bits.to_ulong();
    }
};