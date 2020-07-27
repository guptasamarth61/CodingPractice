void Solution::merge(vector<int> &A, vector<int> &B) {
    int a = A.size();
    int b = B.size();
    if (A[a-1]<B[0]){
        for(int i=0; i<b; i++) A.push_back(B[i]);
        exit;
    }
    else if (A[0]>=B[b-1]){
        for(int i=0; i<a; i++) B.push_back(A[i]);
        A.clear();
        exit;
    }
    int i=0, j=0;
    vector<int> C;
    while(i<a and j<b){
        if(A[i]<=B[j] and i<a){
            C.push_back(A[i]);
            i++;
        }
        else if(A[i]>B[j] and j<b) {
            C.push_back(B[j]);
            j++;
        }
    }
    if(i==a){
        while(j<b){
            C.push_back(B[j]);
            j++;
        } 
    }
    else{
        while(i<a){
            C.push_back(A[i]);
            i++;
        }
    }
    A.clear();
    A=C;
}

//easy 