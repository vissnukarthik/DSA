#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int adj[n+1][m+1];

  for(int i=0;i<n;i++){
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][v]=1;
  }
  return 0;
}
