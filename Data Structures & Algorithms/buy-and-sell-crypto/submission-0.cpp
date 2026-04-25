class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy = prices[0];
        for(int i : prices){
            buy = min(buy, i);
            maxProfit = max(maxProfit, i - buy);
        }
        return maxProfit;
    }
};
