int Solution::maxProfit(const vector<int> &A) {
    int n=A.size();
    int dp[n];
    for(int i=0; i<n; i++) dp[i]=-1e8;
    dp[n-1] = -A[n-1];
    for(int i=n-2; i>=0; i--){
        for(int j=i+1; j<n; j++){
            dp[i] = max(dp[i], A[j]-A[i]);
            for(int k=j+1; k<n; k++){
                dp[i] = max(dp[i], A[j]-A[i]+dp[k]);    
            }
        }
    }
    for(int i=0; i<n; i++) cout<<dp[i]<<" ";
    return dp[0];
}

//can buy and sell any number of times.