class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int leftindex = 0;
        int rightindex = nums.size() - 1;
        int middlepoint;

        while (leftindex <= rightindex) {
            middlepoint = leftindex + (rightindex - leftindex) / 2;

            if (target == nums[middlepoint]) 
                return middlepoint;
            else if (target > nums[middlepoint]) 
                leftindex = middlepoint + 1;
            else 
                rightindex = middlepoint - 1;
        }

        return leftindex; 
    }
};
