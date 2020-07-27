int dp[501][501];
int maximum(vector<int>A, int i, int j){
    if (j-i<=1) return max(A[i],A[j]);
    if(dp[i][j]!=-1) return dp[i][j];
    int left = A[i]+min(maximum(A, i+2, j),maximum(A, i+1, j-1));
    int right = A[j]+min(maximum(A, i+1, j-1),maximum(A, i, j-2));
    return dp[i][j]=max(left, right);
}

int Solution::maxcoin(vector<int> &A) {
    memset(dp,-1,sizeof(dp));
    return maximum(A, 0, A.size()-1);
}


//very good question