class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;   // here we define the index
        int n = nums.size();
        for ( int i=n-2; i>=0; i--){   // by this loop we have to find the breakpoint 
            if ( nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        if ( ind==-1){    // if no breakpoint find, we move to the last element
            reverse(nums.begin(), nums.end());
             return;
        }
        for ( int i=n-1; i>ind; i--){  // by this we start from the last
            if (nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);  // if we get the element
                break;
            }
        }
        reverse(nums.begin() + ind+1, nums.end());
    }
};