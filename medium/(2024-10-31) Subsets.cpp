class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size(); // n
        long numsIncluded = 0; // big enough to store
        int subsets = pow(2,size); // 2^n
        vector<vector<int>> answer;

        for(subsets; subsets > 0; subsets--){ //nth subset
            vector<int> temp;
            for (int i = 0; i < size; i++){
                long bitmask = 1L << i; // access i'th element of our long

                // Check if the k-th bit is set
                if (numsIncluded & bitmask)
                    temp.push_back(nums[i]);
            }
            numsIncluded++; //increment nums for the next subarray
            answer.push_back(temp);
            temp.clear();
        }
        return answer;
    }
};
