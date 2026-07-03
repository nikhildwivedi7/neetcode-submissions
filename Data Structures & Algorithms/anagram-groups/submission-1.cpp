class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups {};
        for( const auto& word : strs) {
            string key { word };
            sort(key.begin(), key.end()); 
            groups[key].push_back(word);
        } // MISTAKE # 1: Need to make a copy of the word, we can't use a reference because we want to store the original
        vector<vector<string>> result;
        for(const auto& group: groups) {
            result.push_back(group.second);
        }
        return result;
    }
};
