int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int dp[1001];
    memset(dp, INT_MAX, 1001); //doesn't work
    dp[0]=0;
    int sum = 0;
    for(int j=1; j<1001; j++){
        for(int i=0; i<B.size(); i++){
            if (B[i]<=j){
                dp[j] = min(C[i]+dp[j-B[i]], dp[j]);
            }
        }
    }
    for (auto x: A) sum+=dp[x];
    return sum;
}
//simple knapsack case