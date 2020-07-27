int Solution::solve(vector<vector<int> > &A) {
    int r = A.size(), c = A[0].size();
    int maxx = 1;
    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            if(A[i][j]) 
            {
                A[i][j] = 1+ min(min(A[i-1][j], A[i-1][j-1]), A[i][j-1]);
                maxx = max(maxx, A[i][j]);
            }
        }
    }
    return maxx*maxx;
}

//very good question. important thing is to find the minimum on all three sides