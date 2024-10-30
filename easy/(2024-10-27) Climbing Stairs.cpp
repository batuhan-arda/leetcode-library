class Solution {
public:
    int climbStairs(int n) {
        int answer = 0;
        int a = 0;
        int b = 1;
        while (n >= 0){
            int temp = b + answer;
            a = b;
            b = answer;
            answer = temp;
            n--;
        }
        
        return answer;
    }
};
