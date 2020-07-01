int Solution::lis(const vector<int> &A) {
    int n = A.size();
    if (n==1) return 1;
    if (n==0) return 0;
    int dp[n];
    for (int i=0; i<n; i++) dp[i] = 1;
    int maxx = -1;
    for (int i=1; i<n; i++){
        for (int j=i-1; j>=0; j--){
            if (A[j]<A[i]) dp[i] = max(dp[i], dp[j]+1);
        }
        maxx = max(maxx, dp[i]);
    }
    return maxx;
}

// Find the maximum increasing subarray of each position. Continue to find for the next by searching in the previous n index. Complexity - O(n2)
//application of lis in different type of sorting - BITS Contest 10-3 