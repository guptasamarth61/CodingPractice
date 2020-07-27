class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> stk;
        if(num.size()==0) return "0";
        stk.push(num[0]-'0');
        for(int i=1; i<num.size(); i++){
            int n = num[i]-'0';
            if(n<=stk.top() and k!=0 and !stk.empty()){
                stk.pop();
                k--;
            }
            stk.push(n);
        }
        while(k!=0){
            stk.pop();
            k--;
        }
        string ans;
        while(stk.top()==0 and !stk.empty()) stk.pop();
        if(stk.empty()) return "0";
        else {
            while(!stk.empty()){
                char c = stk.top();
                ans.push_back(c);
                stk.pop();                
            }
        }
        return ans;        
    }
};

//very good approach - remove digits if right side is small :D