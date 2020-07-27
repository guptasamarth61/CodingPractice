class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>=n) k = k%n; 
        if(k==0) exit;
        vector<int> t;
        for(int i=n-1; i>=n-k; i--){
            t.push_back(nums[i]);
            nums.pop_back();
        }
        reverse(t.begin(), t.end());
        for(auto x: nums) t.push_back(x);
        nums.clear();
        for(auto x: t) nums.push_back(x);
    }
};

//easy problem only thing to think about is what happens if k is smaller than n;