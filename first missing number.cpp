int Solution::firstMissingPositive(vector<int> &A) {
    int i=1;
    sort(A.begin(), A.end());
    for (int j=0; j<A.size(); j++){
        if (A[j]<1) continue;
        else if (A[j]==i){
            i++;
            continue;
        }
        return i;
    }
}

//hard problem  - I did it in O(nlogn) without extra space.
// to do it in O(n) with constant extra space we need to mimic a set into an array that is quite difficult.