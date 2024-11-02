class Solution {
public:
    bool isCircularSentence(string sentence) {

        if (sentence[sentence.length() - 1] != sentence[0])
            return false;

        for(int i = 1; i < sentence.length() - 1; i++)
            if(sentence[i] == ' ')
                if(sentence[i - 1] != sentence[i + 1]) 
                    return false;

        return true;
    }
};
