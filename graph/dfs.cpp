// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"-> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }
}

void dfs(int node,vector<int> &vis,vector<int> adj[]){
    vis[node] = 1;
    cout<<node<<" ";
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj);
        }
    }
}

int main() {
    // Write C++ code here
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printGraph(adj,v);

   vector<int> vis(v,0);

   for(int i=0;i<v;i++){
       if(!vis[i]){
           dfs(i,vis,adj);
       }
   }

    return 0;
}
