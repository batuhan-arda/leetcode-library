class Solution {
public:
    bool isValid(string s) {
        vector<char> temp;

        for (char c : s){
            if (c == '(' || c == '{' || c == '[')
                temp.push_back(c);
            else {
                if (temp.empty()) 
                    return false;
                char topelement = temp[temp.size() - 1];
                if ( (c == ')' && topelement != '(') || (c == '}' && topelement != '{') || (c == ']' && topelement != '[') )
                    return false;

                temp.pop_back();
            }
        }

        return temp.empty() ? true : false;

    }
};
