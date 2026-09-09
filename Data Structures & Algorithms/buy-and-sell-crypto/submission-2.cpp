class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bought = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            bought = min(bought, price);
            maxProfit = max(maxProfit, price - bought);
        }

        return maxProfit;
    }
};