class Solution {
public:
    string compressedString(string word) {
        string answer = "";
        int currentstreak = 1;
        char currentchar = word[0];
        
        for (int i = 1; i < word.size(); i++) {
            if (word[i] == currentchar) {
                currentstreak++;
                
                if (currentstreak == 9) {
                    answer += to_string(currentstreak) + currentchar;
                    currentstreak = 0;
                    currentchar = word[i + 1];
                }
                continue;
            }
            
            answer += to_string(currentstreak) + currentchar;
                
            currentchar = word[i];
            currentstreak = 1;
            
        }
        
        if (currentstreak > 0) 
            answer += to_string(currentstreak) + currentchar;
        
        return answer;
    }
};
