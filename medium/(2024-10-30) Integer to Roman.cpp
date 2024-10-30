class Solution {
public:
    string intToRoman(int num) {
        vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> i = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string answer;
        for (int a = 0; a < i.size(); a++){
            while (num >= i[a]){
                num -= i[a];
                answer.append(s[a]);
            } 
        }
        return answer;
    }
};
