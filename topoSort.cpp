#include <bits/stdc++.h> 
void solve(int node,vector<vector<int>>& adj,stack<int>& st,vector<int>& visited){
    visited[node] = 1;

    for(auto& it : adj[node]){
        if(!visited[it]){
            solve(it,adj,st,visited);
        }
    }
    st.push(node);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    stack<int> st;
    vector<int> topo;

    vector<vector<int>> adj(v,vector<int>());
    for(auto edge : edges){
        adj[edge[0]].push_back(edge[1]);
    }

    vector<int> visited(v,0);
    for(int i = 0;i<v;i++){
        if(visited[i] == 0){
            solve(i,adj,st,visited);}
    }

    while(!st.empty()){
        int temp = st.top();
        topo.push_back(temp);
        st.pop();
    }
    return topo;
}
