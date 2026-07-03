class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsLen {static_cast<int>(size(nums))};
        vector<int> leftProductArr (numsLen, 1);
        vector<int> rightProductArr (numsLen, 1);
        for(int i{1}; i < numsLen; ++i) {
            leftProductArr[i] = leftProductArr[i-1] * nums[i-1];
        }
        for(int i{numsLen - 2}; i >= 0; --i) {
            rightProductArr[i] = rightProductArr[i+1] * nums[i+1];
        }
        vector<int> result (numsLen);
        for(int i{0}; i < numsLen; ++i) {
            result[i] = leftProductArr[i] * rightProductArr[i];
        }
        return result;
    }
};
