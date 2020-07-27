class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size()-1;
        for(int i= last; i>=0; i--){
            if(nums[i]>=last-i){
                last = i;
            }
        }
        return last==0;
    }
};

//very good greedy approach.