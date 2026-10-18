class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int n = nums[i];
            // a negative n swaps the roles of max and min
            if (n < 0) swap(curMax, curMin);

            curMax = max(n, curMax * n);
            curMin = min(n, curMin * n);

            result = max(result, curMax);
        }
        return result;
    }
};