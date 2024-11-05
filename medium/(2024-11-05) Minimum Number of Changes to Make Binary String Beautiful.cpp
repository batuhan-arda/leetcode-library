class Solution {
public:
    int minChanges(string s) {
        int count = 0;
        int i = 0;
        int size = s.size() - 1;
        while (i < size){
            if (s[i] != s[i + 1]) 
                count++;
            i += 2;
        }

        return count;
    }
};
