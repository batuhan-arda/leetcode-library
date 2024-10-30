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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return head;

        vector<int> result;
        while (head != nullptr){
            result.push_back(head->val);
            head = head->next;
        }

        ListNode* headxd = new ListNode();
        ListNode* current = headxd;
        for (int i = result.size() - 1; i > -1; i--){
            current->val = result[i];
            if (i != 0){
                current->next = new ListNode(0);
                current = current->next;
            }
        }

        return headxd;
    }
};
