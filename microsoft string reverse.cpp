class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ') continue;
            else{
                string s1;
                while(s[i]!=' ' and i<s.size()){
                    s1.push_back(s[i]);
                    i++;
                }
                stk.push(s1);
            }
        }
        string ans;
        while(!stk.empty()){
            ans.append(stk.top());
            stk.pop();
            if(!stk.empty()) ans.push_back(' ');
        }
        return ans;
    }
};