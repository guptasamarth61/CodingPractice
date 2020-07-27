#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define boost ios_base ::sync_with_stdio(0); cin.tie(0);

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    
    boost;
    ll N, Q, u, v, P, C;
    cin >> N >> Q;

    vector < ll > impact(N, 0);
    vector < vector < ll > > graph(N);

    for(int i = 0; i < N-1; i++){
        cin >> u >> v;
        graph[u-1].push_back(v-1);
    }

    for(int i = 0; i < Q; i++){
        cin >> P >> C;
        impact[P-1] += C;
    }

    queue < ll > q;
    q.push(0);

    vector < bool > visited(N, false);
    visited[0] = true;

    while(!q.empty()){
        ll t = q.front();
        q.pop();

        for(auto ele : graph[t]){
            impact[ele] += impact[t];

            if(!visited[ele]){
                visited[ele] = true;
                q.push(ele);
            }
        }
    }

    for(int i = 0; i < N; i++)
        cout << impact[i] << " ";
    
    cout << endl;

    return 0;
}