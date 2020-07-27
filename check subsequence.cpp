class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), j=0;
        if (n==0) return true;
        if(n>t.size()) return false;
        if(n==1) return (t.find(s) < t.size());
        for (int i=0; i<t.size(); i++){
            if(t[i]!=s[j]) continue;
            j++;
            if(j==n) return true;
        }
        return j==n;
    }
};

//check if s is a subsequence of t using greedy approach