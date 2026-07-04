class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(auto& str: strs) {
            int len = str.length();
            result += to_string(len) + '#' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i{}, strLen{}, start{};
        vector<string> result;
        while(i < s.length()) {
            if(s[i] == '#') {
                int strLen = stoi(s.substr(start, i - start));
                result.push_back(s.substr(i+1, strLen));
                i = i + strLen + 1;
                start = i;
                continue;
            }
            i += 1;
        }
        return result;
    }
};
