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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;

        ListNode* newHead = new ListNode(-1);
        ListNode* current = newHead;
        for (left; left > 1; left--){
            current->next = new ListNode(head->val);
            current = current->next;
            head = head->next;
            right--;
        }

        vector<int> reversedPart;

        for (right; right > 0; right--){
            reversedPart.push_back(head->val);
            head = head->next;
        }
        std::reverse(reversedPart.begin(), reversedPart.end());

        
        for (int i : reversedPart){
            current->next = new ListNode(i);
            current = current->next;
        }

        while (head){
            current->next = new ListNode(head->val);
            current = current->next;
            head = head->next;
        }
        
        return newHead->next;
    }
};
