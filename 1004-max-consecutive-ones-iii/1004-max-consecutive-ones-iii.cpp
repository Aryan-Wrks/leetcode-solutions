class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) k--;      // use one flip
            if (k < 0) {                    // window invalid: slide, don't shrink
                if (nums[left] == 0) k++;   // give the flip back
                left++;
            }
        }
        return nums.size() - left;
    }
};