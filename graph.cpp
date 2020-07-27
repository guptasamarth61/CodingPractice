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
    ll N, Q;
    cin>>N;
    cin>>Q;
    unordered_map< ll, vector<ll> > ump;
    for(ll i=1; i<=N; i++) ump[i] = {};
    for(ll i=1; i<=N-1; i++){
        ll a, b;
        cin>>a;
        cin>>b;
        ump[a].push_back(b);
    }
    vector< pair< ll, ll> > query;
    for(ll i=1; i<=Q; i++){
        ll a, b;
        cin>>a;
        cin>>b;
        query.push_back(make_pair(a,b));
    }
    ll coins[N];
    for(ll i=0; i<N; i++) coins[i]=0;
    for(auto k: query){
        queue <ll> q;
        while(!q.empty()) q.pop();
        int visit[N];
        for(ll i=0; i<N; i++) visit[i] = 0;
        ll node = k.first;
        ll c = k.second;
        q.push(node);
        while(!q.empty()){
            ll n = q.front();
            q.pop();
            if(visit[n-1]) continue;
            coins[n-1]+=c;
            visit[n-1] = 1;
            for(auto x: ump[n]){
                if(visit[x-1]) continue;
                q.push(x);
            }
        }
    }
    for(ll i=0; i<N; i++) cout<<coins[i]<<" ";
    return 0;
}