class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =nums[0]==1?1:0;
        int max_count =count;
        for(int i=1;i<nums.size();i++){
            if((nums[i]==nums[i-1])&&nums[i]==1){
                count++;
            }else{
                if(nums[i]==0){
                count =0;
                }else{
                    count =1;
                }
                // count =0;
            }
            max_count = max(max_count,count);
        }
        return max_count;
    }
};