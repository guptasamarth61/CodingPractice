#include<bits/stdc++.h>
using namespace std;
int jump(vector<int> A){
    int n = A.size();
    int dp[n];
    memset(dp, INT_MAX, sizeof(dp));
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j++){
            if(A[j]>=(i-j)){
                dp[i] = min(1+dp[j], dp[i]);
            }
        }
    }
    return dp[n-1];
}