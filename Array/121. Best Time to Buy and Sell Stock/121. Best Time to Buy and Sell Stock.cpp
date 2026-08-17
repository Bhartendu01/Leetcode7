// Problem: 121. Best Time to Buy and Sell Stock
// Runtime: 1 ms (Beats 35.41%)
// Memory: 97.2 MB (Beats 99.52%)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int maxProfit=0;

        for(int i=0;i<prices.size();i++)
        {
            minPrice = min(minPrice,prices[i]);
            int profit = prices[i]-minPrice;
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }
};