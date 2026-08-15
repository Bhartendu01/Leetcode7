// Problem: 344. Reverse String
// Runtime: 0 ms (Beats 100.00%)
// Memory: 27.3 MB (Beats 16.08%)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0;
        int right = s.size()-1;

        while(left<right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};