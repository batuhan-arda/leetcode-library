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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB)
            return nullptr;

        int l1 = 0;
        ListNode* current1 = headA;
        int l2 = 0;
        ListNode* current2 = headB;

        for (l1; current1 != nullptr; l1++)
            current1 = current1->next;

        for (l2; current2 != nullptr; l2++)
            current2 = current2->next;

        if (!l1 || !l2)
            return nullptr;

        current1 = headA;
        current2 = headB;

        while (l1 != l2){
            if (l1 > l2){
                current1 = current1->next;
                l1--;
            }
            if (l2 > l1){
                current2 = current2->next;
                l2--;
            }
        }

        for (l1; l1 > 0; l1--){
            if (current1 == current2)
                return current1;
            current1 = current1->next;
            current2 = current2->next;
        }

        return nullptr;

    }
};
