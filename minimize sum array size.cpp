class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum = 0, left = 0, ans = INT_MAX;
        for (int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum>=s){
                ans = min(i-left+1, ans);
                sum -= nums[left];
                left++;
            }
        }
        return (ans==INT_MAX) ? 0 : ans;
    }
};

//good question
//using two pointers approach