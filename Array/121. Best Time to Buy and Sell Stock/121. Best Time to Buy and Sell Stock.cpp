// Problem: 121. Best Time to Buy and Sell Stock
// Runtime: 4 ms (Beats 17.90%)
// Memory: 97.4 MB (Beats 61.06%)

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