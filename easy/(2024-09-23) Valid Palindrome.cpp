class Solution {
public:
    bool isPalindrome(string s) {
        switch(s.size()){
            case 0:
                return true;
            case 1:
                return true;
            
        }
        char* ptr1 = &s[0];
        char* ptr2 = &s[s.size() - 1];

        for (int i = 0; i < s.size() / 2; i++){
            while(!isalnum(*ptr1)){
                if( ptr1 > &s[s.size() - 1])
                    return true;
                ptr1++;

            }
            while(!isalnum(*ptr2)){
                if( ptr2 < &s[0])
                    return true;
                ptr2--;
                
            }
            
            if(tolower(*ptr1) == tolower(*ptr2)){
                ptr1++;
                ptr2--;
                continue;
            }
            return false;
        }

        return true;    
    }
};
