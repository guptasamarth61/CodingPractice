int Solution (vector<int> &A) {
    int firstptr = 0;
    int lastptr = A.size()-1;
    int maxno = 0;
    while(firstptr<lastptr){
        int diff = abs(A[firstptr]-A[lastptr]) + (lastptr-firstptr);
        if ((abs(A[firstptr+1]-A[lastptr]) + (lastptr-firstptr))-1>diff){
            firstptr++;
            maxno = abs(A[firstptr]-A[lastptr]) + (lastptr-firstptr);
            continue;
        }
        else if ((abs(A[firstptr]-A[lastptr-1]) + (lastptr-firstptr))-1>diff){
            lastptr--;
            maxno = abs(A[firstptr]-A[lastptr]) + (lastptr-firstptr);
            continue;
        }
        else{
            maxno = diff;
            firstptr++;
            lastptr--;
            continue;
        }
    }
    return maxno;
}

//wrong answer - not all figures counted

//right answer very bad approach - purely mathematical
int Solution::maxArr(vector &A) {
int highhigh=INT_MIN,lowlow=INT_MAX,highlow=INT_MIN,lowhigh=INT_MAX;
for(int i=0;i<A.size();i++){
highhigh=max(highhigh,A[i]+i);
lowlow=min(lowlow,A[i]+i);
highlow=max(highlow,A[i]-i);
lowhigh=min(lowhigh,A[i]-i);
}
int ans=INT_MIN;
ans=max(ans,abs(highhigh-lowlow);
ans=max(ans,abs(highlow-lowhigh));
return ans;
}