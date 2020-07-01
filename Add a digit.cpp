vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    for (int i = A.size()-1; i>=0; i--){
        int sum = A[i]+carry;
        A[i] = sum%10;
        carry = sum/10;
    }
    if (carry==1) A.insert(A.begin(),1);
    while(A[0]==0) A.erase(A.begin());
    return A;
}
