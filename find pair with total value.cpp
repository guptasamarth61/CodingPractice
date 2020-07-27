class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        unordered_map <int, int> ump;
        for (int i=0; i<time.size(); i++){
            int val = time[i]%60;
            ans += ump[(60-val)%60];
            ump[val]++;
        }
        return ans;
    }
};

//very good approach