#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j] == 2){
                q.push({{i,j},0});
                visited[i][j] = 2;
            }
        }
    }
    int drow[] = {-1,0,1,0};
    int dcol[] = {0,-1,0,1};
    int tm = 0;


    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int t  = q.front().second;
        tm = max(tm,t);
        q.pop();

        

        for(int k = 0;k<4;k++){
            int nrow = x + drow[k];
            int ncol = y + dcol[k];

            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == 1 && visited[nrow][ncol] == 0){
                q.push({{nrow,ncol},t+1});
                visited[nrow][ncol] = 2;
            }
        }
    }
    for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1 && visited[i][j]!=2)
                    return -1;
            }
        }
            return tm;

}
