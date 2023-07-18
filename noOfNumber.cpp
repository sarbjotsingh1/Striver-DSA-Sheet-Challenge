void dfs(int i,int j,vector<vector<int>>& vis,int** grid,int n,int m){
   if (i < 0 || j < 0 || i >= n || j >= m)
    return;
   if (grid[i][j] == 0 || vis[i][j])
    return;
   vis[i][j] = 1;
   dfs(i + 1, j, vis, grid, n, m);
  dfs(i, j + 1, vis, grid, n, m);
  dfs(i - 1, j, vis, grid, n, m);
  dfs(i, j - 1, vis, grid, n, m);
  dfs(i + 1, j+1, vis, grid, n, m);
  dfs(i-1, j + 1, vis, grid, n, m);
  dfs(i - 1, j-1, vis, grid, n, m);
  dfs(i+1, j - 1, vis, grid, n, m);
}
int getTotalIslands(int** arr, int n, int m){
   // Write your code here.
   vector<vector<int>> visited(n,vector<int>(m,0));
   int count = 0;
   for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
         if(!visited[i][j] && arr[i][j]){
            count++;
            dfs(i,j,visited,arr,n,m);
         }
      }
   }
   return count;
}
