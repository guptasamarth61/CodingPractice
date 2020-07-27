#include<stdio.h>
#include<queue>
#include<vector>

int main(){
    int N;
    cin>>N;
    char graph[N][N];
    for(int i=0; i<N; i++) for (int j=0; j<N; j++) cin>>graph[i][j];
    int visited[N][N];
    int dist[N][N];
    int srx, sry, dtx, dty;
    for(int i=0; i<N; i++) for(int j=0; j<N; j++) {
        if(graph[i][j]=='S') srx = i, sry = j;
        if(graph[i][j]=='E') dtx = i, dty = j;
    }
    int dx = {-1, 0, 1, 0};
    int dy = {0, 1, 0, -1};
    queue<pair<int,int> >q;
    q.push(make_pair(srx, sry));
    dist[srx][sry] = 0;
    visited[srx][sry]=1;
    while(!q.empty()){
        int nodex = q.top().first;
        int nodey = q.top().second;
        q.pop();
        for(int i=0; i<dx.size(); i++){
            if(isValid(nodex+dx[i], nodey+dy[i], visited)){
                q.push(make_pair(nodex-1, nodey));
                dist[nodex+dx[i]][nodey+dy[i]] = 1 + dist[nodex][nodey];
                visited[nodex+dx[i]][nodey+dy[i]] = 1;
            }
            if(visited[dtx][dty]==1) break;
        }
    }
    return dist[dtx][dty];
}
bool isValid(int x, int y, vector<int> visited){
    if(x>visited.size() or x<0 or y<0 or y>visited.size()) return false;
    else if(visited[x][y]==1) return false;
    return true;
}