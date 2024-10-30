class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) 
            return false;
        
        vector<int> digits;
        while (x > 0) {
            digits.push_back(x % 10);  
            x /= 10;
        }

        int ptr1 = 0;
        int ptr2 = digits.size() - 1;
        
        while (ptr1 < ptr2) {
            if (digits[ptr1] != digits[ptr2])
                return false;
            ptr1++;
            ptr2--;
        }

        return true;
    }
};
