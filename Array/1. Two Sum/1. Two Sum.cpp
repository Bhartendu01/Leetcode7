// Problem: 1. Two Sum
// Runtime: 33 ms (Beats 37.07%)
// Memory: 14.1 MB (Beats 74.37%)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//        for(int i=0;i<nums.size();i++){
//         for(int j =i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==target){
//                 return {i,j};
//             }
//         }
//        } 
//        return {};
//     }
// };

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        int size = nums.size();
        for(int i=0;i<size;i++){
            for(int j =i+1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};