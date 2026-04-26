class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mincost = prices[0];
        for(int i = 1;i<prices.size();i++){
            if(prices[i] < mincost){
                mincost = prices[i];
            }
            int profitq = prices[i] - mincost;
            profit = max(profit,profitq);
        }
        return profit;
    }
};