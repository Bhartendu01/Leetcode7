// Problem: 189. Rotate Array
// Runtime: 12 ms (Beats 7.69%)
// Memory: 262.4 MB (Beats 60.03%)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;
        vector<int> rotated_array;
        for(int i=n-k;i<n;i++){
           rotated_array.push_back(nums[i]);
        }

        for(int i=0;i<n-k;i++){
            rotated_array.push_back(nums[i]);
        }
        nums = rotated_array;
    }
};