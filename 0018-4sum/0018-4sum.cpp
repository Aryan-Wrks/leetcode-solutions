class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;

        int n = nums.size();

        // Step 1: Sort
        sort(nums.begin(), nums.end());

        // Step 2: Choose first number
        for (int i = 0; i < n - 3; i++) {

            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Step 3: Choose second number
            for (int j = i + 1; j < n - 2; j++) {

                // Skip duplicates
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                // Step 4: Two pointers
                int left = j + 1;
                int right = n - 1;

                while (left < right) {

                    long long sum =
                        (long long)nums[i] +
                        nums[j] +
                        nums[left] +
                        nums[right];

                    // We found 4 numbers
                    if (sum == target) {

                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });

                        // Skip duplicates
                        while (left < right &&
                               nums[left] == nums[left + 1])
                            left++;

                        while (left < right &&
                               nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }

                    // Sum is small → need bigger number
                    else if (sum < target) {
                        left++;
                    }

                    // Sum is big → need smaller number
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};