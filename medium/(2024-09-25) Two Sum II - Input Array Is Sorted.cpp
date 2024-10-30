class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int* ptr1 = &numbers[0];
        int* ptr2 = &numbers[numbers.size() - 1];
        int ptr1size = 0;
        int ptr2size = numbers.size() - 1;

        while (*ptr1 + *ptr2 != target){
            if(*ptr1 + *ptr2 > target){
                ptr2--;
                ptr2size--;
            }
            if(*ptr1 + *ptr2 < target){
                ptr1++;
                ptr1size++;
            }
        }
        return vector<int>{ptr1size + 1,ptr2size + 1};
    }
};
