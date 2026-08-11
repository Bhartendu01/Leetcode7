// Problem: 724. Find Pivot Index
// Runtime: 0 ms (Beats 100.00%)
// Memory: 35.7 MB (Beats 79.78%)

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int pivot = (nums.size()-1)/2;
//         int leftsum =0;
//         int rightsum =0;
//         for(int i=0;i<pivot;i++){
//             leftsum+=
//         }
//     }
// };

//finding the pivot element -----> analyse...think....write...keep doing

class Solution{
    public:
    int pivotIndex(vector<int>& nums){
        int total_sum = 0;
        for(int num:nums){
            total_sum+=num;
        }
        int left_sum =0;
        for(int i=0;i<nums.size();i++){
        int right_sum = total_sum - left_sum - nums[i];
        //int pivot_Idx = (nums.size()-1)/2;
        if(left_sum ==right_sum){

            return i;
        }
        left_sum +=nums[i];
        }
        return -1;
    }
};