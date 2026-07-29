class Solution {
public:

    vector<int>dp = vector<int>(31,-1);
    int fib(int n) {
        if(n==0||n==1) return dp[n]=n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fib(n-1)+fib(n-2);
        // return fib(n-1)+fib(n-2);
        // int first = 0, second = 1;
        // int res = 0;
        // for(int i = 2;i<=n;i++){
        //     res = first+second;
        //     first = second;
        //     second = res;
        // }
        // return res;
    }
};