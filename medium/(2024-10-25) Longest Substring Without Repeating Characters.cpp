class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) 
            return 0;

        vector<int> lastSeen(256, -1); 
        int maxLength = 0;
        int start = 0;  

        for (int end = 0; end < s.size(); end++) {
            char currentChar = s[end];

            if (lastSeen[currentChar] >= start) {
                start = lastSeen[currentChar] + 1;
            }

            lastSeen[currentChar] = end;

            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
