class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector <int> dp(n);
        int maxx = 101;
        for(int i=0; i<n; i++){
            dp[i] = 0;
            if(T[i]>=maxx) continue;
            for(int j=i; j<n; j++){
                if(T[j]>T[i]) {
                    dp[i] = j-i;
                    break;
                }
            }
            if(dp[i] == 0) maxx = T[i];
        }
        return dp;
    }
};

// another good solution is using stack