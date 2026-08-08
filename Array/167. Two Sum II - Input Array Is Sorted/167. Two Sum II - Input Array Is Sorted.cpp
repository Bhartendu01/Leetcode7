// Problem: 167. Two Sum II - Input Array Is Sorted
// Runtime: 0 ms (Beats 100.00%)
// Memory: 19.5 MB (Beats 65.57%)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int size = numbers.size();
//         for(int i=0;i<numbers.size();i++){
//             for(int j=i+1;j<numbers.size();j++){
//                 if(numbers[i]== target-numbers[j]){
//                     return {i+1,j+1};
//                 }
//             }
//         }
//         return {};
//     }
// };

class Solution{
    public:
    vector<int> twoSum(vector<int>& numbers, int target){
       int left =0;
       int right = numbers.size()-1;
       while(left<right){
        int sum = numbers[left] + numbers[right];
        if(sum== target){
            return {left+1,right+1};
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
       }
       return {};
    }
};