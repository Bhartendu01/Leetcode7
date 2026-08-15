// Problem: 125. Valid Palindrome
// Runtime: 0 ms (Beats 100.00%)
// Memory: 9.9 MB (Beats 53.94%)

class Solution {
public:
    bool isPalindrome(string s) {
        int left_ptr =0;
        int right_ptr =s.size()-1;

        while(left_ptr<right_ptr){
            if(!isalnum(s[left_ptr])){
                left_ptr++;
            }else if(!isalnum(s[right_ptr])){
                right_ptr--;
            }else{
                if(tolower(s[left_ptr])!=tolower(s[right_ptr])){
                    return false;
                }
                left_ptr++;
                right_ptr--;
         }
        }
        return true;
    }
};