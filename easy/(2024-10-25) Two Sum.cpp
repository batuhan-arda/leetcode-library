class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  
        vector<int> answerArray;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if (target - nums[i] == nums[j] && i != j) {
                    answerArray.push_back(i);
                }
            }
        }
        return answerArray;   
    }
};
