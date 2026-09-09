class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    int low = 0;
    int high = rows * columns-1;
    while(low <= high){
        int calculate_mid = low + (high-low)/2;
        int actual_mid = matrix[calculate_mid/columns][calculate_mid%columns];
        if(actual_mid == target){
            return true;
        }
        else if (actual_mid < target){
            low = calculate_mid+1;
        }
        else {
            high = calculate_mid-1;
        }
    }
    return false;
    }
};
