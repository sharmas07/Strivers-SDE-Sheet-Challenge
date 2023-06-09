bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat[0].size();
    int m = mat.size();
    int low = 0;
    int high = (n*m) - 1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(mat[mid/n][mid%n] == target){
            return true;
        }
        else if (mat[mid/n][mid%n] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}