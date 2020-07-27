class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m = grid[0].size();
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int n1=0;
                if (grid[i][j]) {
                    if(i>=1 and grid[i-1][j]) n1++;
                    if(i<=n-2 and grid[i+1][j]) n1++;
                    if(j>=1 and grid[i][j-1]) n1++;
                    if(j<=m-2 and grid[i][j+1]) n1++;
                    sum += (4-n1);
                }
            }
        }
        return sum;
    }
};

//Not good solution 