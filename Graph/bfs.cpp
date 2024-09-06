#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>bfs;
        queue<int>q;
        int vis[V] = {0};
        vis[0] = 1;
        q.push(0);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }

int main()
{
    int v = 5;
    vector<int>adj[v] = {{1,2,3},{},{4},{},{}};
    vector<int>a = bfsOfGraph(v,adj);
    for(auto it:a) {
        cout<<it<<" ";
    }
    return 0;
}