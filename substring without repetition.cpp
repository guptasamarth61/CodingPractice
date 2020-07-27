#include<set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n<2) return n;
        int i=0, j=1;
        unordered_set<char> st;
        st.insert(s[0]);
        int maxx = 1;
        while(i<n and j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                if(st.size()>=maxx) maxx = st.size();
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxx;
    }
};