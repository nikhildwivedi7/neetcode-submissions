class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> frequencies ( 26 );
        for(auto ch : s) frequencies[ch - 'a'] += 1;
        for(auto ch : t) frequencies[ch - 'a'] -= 1;
        for(auto f : frequencies) {
            if(f != 0)
                return false;
        }
        return true;
    }
};
