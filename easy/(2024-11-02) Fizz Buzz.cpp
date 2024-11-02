class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i = 1; i < n + 1; i++){
            int mod3 = i % 3;
            int mod5 = i % 5;

            int caseValue = (mod3 == 0 ? 1 : 0) + (mod5 == 0 ? 2 : 0); 

            switch (caseValue) {
                case 3: 
                    answer.push_back("FizzBuzz");
                    break;
                case 1: 
                    answer.push_back("Fizz");
                    break;
                case 2: 
                    answer.push_back("Buzz");
                    break;
                default: 
                    answer.push_back(to_string(i));
                    break;
            }
        }

        return answer;
    }
};
