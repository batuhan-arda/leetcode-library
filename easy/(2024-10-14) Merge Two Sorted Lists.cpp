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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> array;
        while (list1 != nullptr || list2 != nullptr){
            if (list1 != nullptr && (list2 == nullptr || list1->val <= list2->val)) {
                 array.push_back(list1->val);
                 list1 = list1->next;
             } 
             else if (list2 != nullptr) {
                 array.push_back(list2->val);
                 list2 = list2->next;
             }
            
        }

        if (array.empty()) return nullptr; 

        ListNode* newHead = new ListNode(*array.data()); 
        ListNode* current = newHead; 

        for (int i = 1; i < array.size(); ++i) {
            current->next = new ListNode(array[i]); 
            current = current->next; 
        }

        return newHead;
    }
};
