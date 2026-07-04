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
        int i{}, strLen{}, start{}, end{};
        vector<string> result;
        while(i < s.length()) {
            if(s[i] == '#') {
                end = i - 1;
                int strLen = 0;
                if(start == end)
                    strLen = stoi(s.substr(start, 1));
                else
                    strLen = stoi(s.substr(start, i - start));
                result.push_back(s.substr(i+1, strLen));
                start = i + strLen + 1;
                i = start;
                continue;
            }
            i += 1;
        }
        return result;
    }
};
