#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.

    vector<vector<pair<int,int>>> adj(vertices);
    for(auto edge : vec){
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    } 

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(vertices,INT_MAX);
    dist[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto it : adj[node]){
            int v = it.first;
            int w = it.second;
            if(dis + w < dist[v]){
                dist[v] = dis + w;
                pq.push({dis + w, v});
            }
        }
    }
    return dist;


}
