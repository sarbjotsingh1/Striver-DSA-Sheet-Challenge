#include<bits/stdc++.h>
using namespace std;
void solve(int node,vector<vector<int>>& adj,vector<int>& temp,vector<int>& visited){
    visited[node] = 1;
    temp.push_back(node);
    for(auto it:adj[node]){
        if(!visited[it]){
            solve(it,adj,temp,visited);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
    // Write your code here
    vector<vector<int>> adj(V);
    for(auto edge :edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    vector<vector<int>> ans;
    vector<int> visited(V,0);
    for(int i = 0;i<V;i++){
        if(!visited[i]){
            vector<int> temp;
            solve(i,adj,temp,visited);
            ans.push_back(temp);
        }
    }
    return ans;
}
