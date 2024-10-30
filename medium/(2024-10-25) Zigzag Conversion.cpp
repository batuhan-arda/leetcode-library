class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;  

        vector<string> rows(numRows);
        int cur = 0;
        bool swap = false;
        string zigzag;

        for (char character : s) {
            rows[cur] += character;  
            if (cur == 0 || cur == numRows - 1)
                swap = !swap;
            cur += swap ? 1 : -1;
        }

        for (string row : rows) {
            zigzag += row;
        }

        return zigzag;
    }
};
