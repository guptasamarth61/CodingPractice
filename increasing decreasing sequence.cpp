int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    if (n==0) return 0;
    int inc[n];
    int dec[n];
    for(int i=0; i<n; i++){
        inc[i]=1;
        dec[i]=1;
    }
    for (int i=1; i<n; i++){
        for (int j=i-1; j>=0;j--){
            if (A[j]<A[i]) inc[i] = max(1+inc[j], inc[i]);
        }
    }
    for (int i=n-2; i>=0; i--){
        for (int j=i+1; j<n; j++){
            if (A[j]<A[i]) dec[i]=max(1+dec[j], dec[i]);
        }
    }
    int maxx = 0;
    for (int i=0; i<n; i++) maxx = max(maxx, inc[i]+dec[i]);
    return maxx-1;
}

// finding the longest sequence that is first increasing and then decreasing.