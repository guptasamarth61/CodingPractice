#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++) cin>>a[i];
        cin>>k;
        sort(a, a+n);
        int i=0, j=n-1, ans=0;
        while(i<=j and a[i]<k){
            if (a[j]>k-a[i]) {
                j--;
                continue;
            }
            if (a[j]<k-a[i]){
                i++;
                continue;
            }
            while (a[j]==k-a[i] and i<=j){
                ans++;
                j--;                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
// find the number of occurences such that the sum of 2 numbers is k in an array of n numbers
//giving wrong answer in 1 test case
