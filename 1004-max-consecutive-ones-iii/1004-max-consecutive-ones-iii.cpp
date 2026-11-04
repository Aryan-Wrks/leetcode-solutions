class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0, best = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zeros++;

            // Too many zeros: shrink window from the left
            while (zeros > k) {
                if (nums[left] == 0) zeros--;
                left++;
            }

            best = max(best, right - left + 1);
        }
        return best;
    }
};