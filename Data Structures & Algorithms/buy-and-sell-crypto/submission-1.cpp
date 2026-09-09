class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0; 
        int bought = INT_MAX;  
        int maxProfit = INT_MIN;

        while (i < prices.size()) {
            bought = min(prices[i], bought);
            maxProfit = max(maxProfit, prices[i] - bought);
            i++;
            
        }

        return maxProfit;
    }
};