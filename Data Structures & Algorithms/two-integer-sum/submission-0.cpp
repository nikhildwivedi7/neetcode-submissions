class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u {};
        for(int i{}; i < nums.size(); ++i) {
            if(u.find(target - nums[i]) != u.end())
                return {u[target-nums[i]], i};
            u[nums[i]] = i;
        }
    }
};
