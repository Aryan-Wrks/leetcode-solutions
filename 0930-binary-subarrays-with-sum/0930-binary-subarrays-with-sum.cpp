class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> freq;
        freq[0] = 1;          // empty prefix (sum 0) seen once
        int sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            // how many earlier prefixes make a subarray with sum = goal?
            if (freq.count(sum - goal)) {
                count += freq[sum - goal];
            }

            freq[sum]++;      // remember this prefix sum
        }

        return count;
    }
};