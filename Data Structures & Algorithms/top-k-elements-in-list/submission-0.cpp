class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map {};
        for(auto num: nums) {
            freq_map[num] += 1;
        }
        vector<vector<int>> freq_vect (nums.size() + 1);
        for(auto& [num, frequency] : freq_map) {
            freq_vect[frequency].push_back(num);
        }
        vector<int> result;
        for(int i = nums.size(); i >= 1; --i) {
            if(!k) break;
            if(!freq_vect.empty()) {
                for(auto n : freq_vect[i]) {
                    if(k) {
                        result.push_back(n);
                        k -= 1;
                    } else break;                        
                }
            }
        }
        return result;
    }
};
