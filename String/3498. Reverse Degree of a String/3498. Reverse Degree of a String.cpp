// Problem: 3498. Reverse Degree of a String
// Runtime: 1 ms (Beats 24.25%)
// Memory: 9.8 MB (Beats 15.78%)

class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        for(int i=0;i<s.length();i++){
            int reversePosition = 26 - (s[i] - 'a');
            sum += reversePosition * (i + 1); 
        }
        return sum;
    }
};