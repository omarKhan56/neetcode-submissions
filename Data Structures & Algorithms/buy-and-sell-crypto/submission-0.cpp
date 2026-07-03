class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int i = 0;
        int j = 0;
        while (j < n) {
            if(prices[j] > prices[i]){
                maxprofit = max(maxprofit, prices[j] - prices[i]);
                i++;
            }
            j--;
        }
        return maxprofit;
    }
};
