// Problem: 1. Two Sum
// Runtime: 35 ms (Beats 36.26%)
// Memory: 14.2 MB (Beats 63.56%)

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