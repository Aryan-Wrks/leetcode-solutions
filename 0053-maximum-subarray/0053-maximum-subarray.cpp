class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currSum = 0;  // here i initlize from starting point index = 0
        int maxSum = INT_MIN;
        for ( int i=0; i<nums.size(); i++ ){  // iterate every index
            currSum += nums[i];
            maxSum = max(currSum, maxSum);

            if ( currSum<0 ) // here the algorithm works which say whenever we get the negative submission then initlize the current sum = 0
            currSum =  0;
        }
            return maxSum;
    }
};