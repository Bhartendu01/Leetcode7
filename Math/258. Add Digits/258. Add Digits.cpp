// Problem: 258. Add Digits
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.5 MB (Beats 98.77%)

class Solution {
public:
    int addDigits(int num) {
     if(num==0) return 0;
     return 1 + (num-1)%9;   
    }
};