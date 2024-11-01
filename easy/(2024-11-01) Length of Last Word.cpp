class Solution {
public:
    int lengthOfLastWord(std::string s) {
        string answer = "";
        for (int i = s.length() - 1; i > -1; i--) {
            if (s[i] == ' ' && !answer.empty())
                break;
            if (isalnum(s[i]))
                answer.push_back(s[i]);
        }
        
        reverse(answer.begin(), answer.end()); 

        return answer.length(); 
    }
};
