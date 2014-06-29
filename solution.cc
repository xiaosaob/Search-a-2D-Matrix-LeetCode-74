// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
// For example,

// Consider the following matrix:

// [
//   [1,   3,  5,  7],
//   [10, 11, 16, 20],
//   [23, 30, 34, 50]
// ]
// Given target = 3, return true.

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int m = matrix.size();
        if(!m) return false;
        int n = matrix[0].size();
        if(!n) return false;
        int row = 0, col = n-1;
        while(row < m && col >= 0) {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) ++row;
            else --col;
        }
        return false;
    }
};
