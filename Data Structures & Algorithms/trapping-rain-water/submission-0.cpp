class Solution {
public:
    int trap(vector<int>& height) {
    int result = 0;
    int n = height.size();

    vector<int> maxLeft(n, 0);
    vector<int> maxRight(n, 0);

    for (int i = 1; i < n; ++i)
        maxLeft[i] = max(maxLeft[i - 1], height[i - 1]);

    for (int i = n - 2; i >= 0; --i)
        maxRight[i] = max(maxRight[i + 1], height[i + 1]);

    for (int i = 0; i < n; ++i) {
        int currWater = min(maxLeft[i], maxRight[i]) - height[i];

        if (currWater > 0)
            result += currWater;
    }

    return result;
}
};
