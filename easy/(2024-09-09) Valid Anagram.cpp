class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_length = s.length();
        int t_length = t.length();
        if (s_length != t_length)
            return false;
        std::vector<int> svector;
        std::vector<int> tvector;

        //convert for s and t
        for(int a = s_length - 1; a > -1; a--){
            svector.push_back(int(s[a]));
            tvector.push_back(int(t[a]));
        }

        std::sort(svector.begin(), svector.end() );
        std::sort(tvector.begin(), tvector.end() );

        for(int a = s_length - 1; a > -1; a--){
            if(svector[a] != tvector[a])
                return false;
        }
    return true;

    }
};
