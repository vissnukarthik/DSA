#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] ,  int v,int v ){
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void printGraph(vector<int> adj[],int v) {
  for(int i=0;i<v;i++){
    cout<<i<<"->";
    for(auto x: adj[v])
      cout<<x<<" ";
  }
}
int main(){
  int v;
  cin>v;

  vector<int> adj[v];
  addEdge(adj,1,1);
  addEdge(adj,0,1);

}
