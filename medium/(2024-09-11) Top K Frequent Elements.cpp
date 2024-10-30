class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> list;
        for (int i : nums) {
            bool found = false;
            
            for (int a = 0; a < list.size(); a++) {
                if (list[a][0] == i) {
                    list[a][1] += 1;
                    found = true;
                    break;
                }
            }
            
            if (!found) {  
                list.push_back({i, 1});
            }
        }

        sort(list.begin(), list.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1]; 
        });

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(list[i][0]); // Push the number part (not frequency)
        }

        return result;
    }

};
