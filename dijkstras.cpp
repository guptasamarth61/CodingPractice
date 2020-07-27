class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        unordered_map <int, list <pair <int, int> > > mp;
        for(int i=0; i<times.size(); i++){
            mp[times[i][0]].push_back(make_pair(times[i][1], times[i][2]));
        }
        // for(auto x: mp){
        //     cout<<x.first<<"->";
        //     for(auto y: x.second){
        //         cout<<y.first<<" "<<y.second<<"->";
        //     }
        //     cout<<endl;
        // }
        
        unordered_map<int, int> visited;
        unordered_map<int, int> dist;
        for(auto x: mp){
            visited[x.first] = 0;
            dist[x.first] = INT_MAX;
        }
        dist[K] = 0;
        priority_queue<pair<int, int> > pq;
        pq.push({0,K});
        while(!pq.empty()){
            int temp = pq.top().second;
            if(visited[temp]) continue;
            visited[temp]=1;
            pq.pop();
            for(auto x: mp[temp]){
                int node = x.first;
                int d = x.second;
                if(dist[node]>dist[temp]+d){
                    dist[node] = dist[temp] + d;
                    pq.push({-dist[node], node});
                }
            }
        }
        int maxx = INT_MIN;
        for(auto x:dist) {
            if(x.second==INT_MIN) return -1;
            maxx = max(maxx, x.second);
        } 
        return maxx;
    }
};