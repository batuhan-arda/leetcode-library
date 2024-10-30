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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == nullptr) 
            return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* current = head;
        
        current=current->next;
        prev=prev->next;

        while(current != nullptr) {
            if(current->val == prev->val) {
                prev->next = current->next;
            }
            else
                prev=current;
            
            current=current->next;
        }

        return head;

    }
};
