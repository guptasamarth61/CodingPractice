class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
        int r = A.size();
        if(r==0) return;
        int c = A[0].size();
        queue <pair<int, int>> q;
        for (int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if (A[i][j]==0) 
                    q.push(make_pair(i,j));
            }
        }
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int k=0; k<c; k++) 
                A[k][j] = 0;
            for (int m=0; m<r; m++) 
                A[i][m] = 0;
        }
    }
};