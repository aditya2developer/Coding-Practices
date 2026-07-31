class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int i = n-1;i>=0;i--){
            for(int buy=0;buy<2;buy++){
                if(buy==1){
                    int by = -prices[i]+dp[i+1][0];
                    int notby = dp[i+1][1];
                    dp[i][buy]=max(by,notby);
                }else{
                    int sell=prices[i]+dp[i+1][1];
                    int notsell=dp[i+1][0];
                    dp[i][buy]=max(sell,notsell);
                }
            }
        }
        return dp[0][1];

        // int profit = 0;
        // for(int i=1;i<prices.size();i++){
        //     if(prices[i-1]<prices[i]) profit+=(prices[i] - prices[i-1]);
        // }
        // return profit;
    }
};