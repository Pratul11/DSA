#include<bits/stdc++.h>
using namespace std;
void rec(int node,int end,vector<vector<int>>&g,vector<int>&vis){
    vis[node]=1;
    for(auto i:g[node]){
        if(!vis[i])
            rec(i,end,g,vis);
    }
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<vector<int>>g(n);
    for(auto i:edges){
        g[i[0]].push_back(i[1]);
        g[i[1]].push_back(i[0]);
    }
    for(int i=0;i<g.size();i++) {
        for(int j=i;j<g[i].size();j++) {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int>vis(n,0);
    rec(source,destination,g,vis);
    return vis[destination];
}
int main()
{
    int n =3,s = 0,d = 2;
    vector<vector<int>>edges = {{0,1},{1,2},{2,0}};
    cout<<validPath(n,edges,s,d);
    return 0;
}