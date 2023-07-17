void dfs(int i,int j,vector<vector<int>>& image,vector<vector<int>>& newImage,int newColor,int initColor){
    newImage[i][j] = newColor;
    
    int dRow[] = {-1,0,1,0};
    int dCol[] = {0,1,0,-1};
    for(int k = 0;k<4;k++){
        int nRow = i + dRow[k];
        int nCol = j + dCol[k];

        if(nRow<newImage.size() && nCol < newImage[0].size() &&  nRow >= 0 && nCol >=0 && newImage[nRow][nCol] != newColor && newImage[nRow][nCol] == initColor){
            dfs(nRow,nCol,image,newImage,newColor,initColor);
        }
    }
}


vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int initColor = image[x][y];
    vector<vector<int>> newImage = image;
    dfs(x,y,image,newImage,newColor,initColor);
    return newImage;
}
