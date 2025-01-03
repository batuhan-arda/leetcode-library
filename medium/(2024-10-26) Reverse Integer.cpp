class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;

            // chatgpt =D
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && pop > 7))
                return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && pop < -8)) 
                return 0;

            reverse = reverse * 10 + pop;
        }
        return reverse;
    }
};
