class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        vector<int> stack;

        for (string s : tokens) {
            int result = 0;
            if ( isdigit(s[0]) || isdigit(s[1]) ) 
                stack.push_back( stoi(s) );
            else {

                int a = stack[stack.size() - 1];
                int b = stack[stack.size() - 2];
                
                if (s == "/") 
                    result = b / a;
                
                else if (s == "*") 
                    result = b * a;
                
                else if (s == "+") 
                    result = b + a;
                
                else if (s == "-") 
                    result = b - a;
                
                stack.pop_back(); 
                stack.pop_back(); 
                stack.push_back(result); 
            }
        }
        return stack[0]; 
    }
};
