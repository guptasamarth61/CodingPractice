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
    int N, W, M;
    cin >> M >> N;

    vector < int > a(N), b(N);
    
    for(int i = 0; i < N; i++)
        cin >> a[i] >> b[i];

    W = M + *max_element(a.begin(), a.end());

    vector < int > dp(W+1, INF);

    dp[0] = 0;

    for(int i = 1; i <= W; i++)
        for(int j = 0; j < N; j++){
            int val = ((i - a[j] >= 0) ? dp[i - a[j]] : 0);
            val += b[j];
            dp[i] = min(dp[i], val);
        }

    int ans = INF;

    for(int i = M; i <= W; i++){
        ans = min(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}           


//Very Important
