class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int i = 0;
        int maxprofit = 0;

        for(int j = 1; j<n; j++){

            maxprofit = max(maxprofit , prices[j]-prices[i]);

            if(prices[j] < prices[i]) i = j;

        }
        return maxprofit;


    }
};