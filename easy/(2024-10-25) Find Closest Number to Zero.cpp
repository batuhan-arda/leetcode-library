class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];

        int lowest = INT_MAX; //lol
        bool isNegativeAndTwoSolution = false;
        for (int i : nums){
            if (i == 0)
                return 0;
            int diff = abs(i) - abs(lowest);
            if (diff == 0){
                if ((i < 0 && lowest > 0) || (i > 0 && lowest < 0)) 
                    isNegativeAndTwoSolution = (i > 0); 
            }
            else if (diff <0){
                lowest = i;
                isNegativeAndTwoSolution = false;
            }
        }

        return isNegativeAndTwoSolution ? lowest * -1 : lowest;
    }
};
