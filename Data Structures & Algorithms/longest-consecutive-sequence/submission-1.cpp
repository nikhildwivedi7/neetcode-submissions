class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> n {};
        for(auto num: nums) {
            n.insert(num);
        }
        int maxLen {1};
        for(auto num : nums) {
            int currLen {1};
            while(n.contains(++num)) currLen += 1;
            maxLen = max(currLen, maxLen);
        }
        return maxLen;
    }
};
