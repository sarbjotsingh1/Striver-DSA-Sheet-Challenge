bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();

    int low = 0, high = m*n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;
        int idx = mat[mid/m][mid%m];

        if(target == idx)
            return true;
        else if(target < idx)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
