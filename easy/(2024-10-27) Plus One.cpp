class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryOver = 1;  
        vector<int> result;

        for (int i = digits.size() - 1; i >= 0; i--) {
            int temp = digits[i] + carryOver;
            carryOver = temp / 10; 
            result.push_back(temp % 10);  
        }

        if (carryOver > 0) {
            result.push_back(carryOver);
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
