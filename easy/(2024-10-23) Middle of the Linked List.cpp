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

        ListNode* dummy = head;
        int i = 1;
        for(i; head != nullptr; i++) {
            if (i % 2 == 0)
                if (dummy != nullptr) 
                        dummy = dummy->next; 
            head = head->next; 
        }

        return dummy;
    }
};
