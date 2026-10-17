class Solution {
public:
    int reversePairs(vector<int>& nums) {
        vector<int> tmp(nums.size());
        return mergeSort(nums, tmp, 0, (int)nums.size() - 1);
    }

private:
    int mergeSort(vector<int>& nums, vector<int>& tmp, int lo, int hi) {
        if (lo >= hi) return 0;
        int mid = lo + (hi - lo) / 2;
        int count = mergeSort(nums, tmp, lo, mid) + mergeSort(nums, tmp, mid + 1, hi);

        // Count reverse pairs across the two sorted halves
        int j = mid + 1;
        for (int i = lo; i <= mid; i++) {
            while (j <= hi && (long long)nums[i] > 2LL * nums[j]) j++;
            count += j - (mid + 1);
        }

        // Standard merge
        int i = lo, k = lo;
        j = mid + 1;
        while (i <= mid && j <= hi) {
            if (nums[i] <= nums[j]) tmp[k++] = nums[i++];
            else tmp[k++] = nums[j++];
        }
        while (i <= mid) tmp[k++] = nums[i++];
        while (j <= hi) tmp[k++] = nums[j++];
        for (int p = lo; p <= hi; p++) nums[p] = tmp[p];

        return count;
    }
};