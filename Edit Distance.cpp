int ans = 0;

int compare(string p, string q, int i, int j, int d){
    if(i>p.size()-1 or j>q.size()-1) return 0;
    if (p[i]!=q[j]){
        if (d>0){
            ans = min(1+compare(p,q,i,j+1,d--), 1+compare(p,q,i+1,j+1,d));   
        }
        else if (d<0){
            ans = min(1+compare(p,q,i+1,j,d++), 1+compare(p,q,i+1,j+1,d));
        }
        else{
            ans = 1+compare(p,q,i+1,j+1,d);
        }
    }
}

int Solution::minDistance(string A, string B) {
    int a = A.size();
    int b = B.size();
    if (a==b) for(int i=0; i<a;i++) if (A[i]!=B[i]) ans++;
    else ans = compare(A,B,0,0,a-b);
    return ans;
}

