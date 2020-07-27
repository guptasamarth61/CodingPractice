#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll N;
    cin>>N;
    ll A[N], cnt=0, ans=0, minn=1e10;
    for (ll i=0; i<N; i++) {
        cin>>A[i];
        if(A[i]<0) cnt++;
        minn = min(minn, abs(A[i]));
        ans+= abs(A[i]);
    }
    if(cnt%2 == 0)  cout<<ans;
    else cout<< ans-2*abs(minn);
    return 0;
}

// max array sum by Ai, Ai+1  * -1 any number of times
// if even then always
// if odd then except minimum all can be made positive elements