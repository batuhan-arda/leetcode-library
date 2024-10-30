class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) 
            return {};

        std::vector<std::vector<int>> answer;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;

            for (int k = i + 1; k < nums.size() - 2; k++) {
                if (k > i + 1 && nums[k] == nums[k - 1]) 
                    continue;

                int left = k + 1;
                int right = nums.size() - 1;

                while (left < right) {
                    long sum = (long)(nums[i]) + (long)nums[k] + (long)nums[left] + (long)nums[right];

                    if (sum == target) {
                        answer.push_back({nums[i], nums[k], nums[left], nums[right]});

                        while (left < right && nums[left] == nums[left + 1]) 
                            left++;
                        while (left < right && nums[right] == nums[right - 1]) 
                            right--;
                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return answer; 
    }
};
