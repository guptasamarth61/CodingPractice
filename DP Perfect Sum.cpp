class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i=2; i<=n; i++) dp[i]= INT_MAX;
        for (int i=2; i<=n; i++){
            for (int j=1; j*j<=i; j++){
                dp[i] = min(dp[i], 1+dp[i-j*j]);   
            }
        }
        return dp[n];
    }
};

//finding the minimum perfect squares numbers required to make a sum of n. 
// Strategy: find for all <=n, min using dp.