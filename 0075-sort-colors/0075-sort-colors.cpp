class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;   // here we initilize the starting point
        while (mid<=high){
            if (nums[mid]==0){     // starting from 0
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if ( nums[mid]==1 ){    // here mid is equal to 1
                mid ++;
            }
            else {
                swap(nums[mid], nums[high]);     // else there is sorted arrangement 
                high--;
            }
        }
        
    }
};