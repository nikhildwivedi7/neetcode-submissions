class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> frequencies ( 26 );
        for(int i{0}; i < s.length(); ++i) {
            frequencies[s[i] - 'a'] += 1;
        }
        for(int i{0}; i < t.length(); ++i) {
            frequencies[t[i] - 'a'] -= 1;
        }
        for(auto f : frequencies) {
            if(f != 0)
                return false;
        }
        return true;
    }
};
