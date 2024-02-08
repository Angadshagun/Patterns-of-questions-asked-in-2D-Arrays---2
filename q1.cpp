// Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
// called perfect if every diagonal from top-left to bottom-right has the same elements.

class Solution {
    int Row;
    int Col;
    bool check(vector<vector<int>>& m, int row, int col) {
        int ele = m[row][col];
        while (row < Row && col < Col) {
            if (m[row][col] != ele)
                return 0;
            row++;
            col++;
        }
        return 1;
    }

public:
    bool isToeplitzMatrix(vector<vector<int>> & matrix) {

        Row = matrix.size();
        Col = matrix[0].size();

        int j = 0;
        for (int i = 0; i < Row - 1; i++) {
            bool ans = check(matrix, i, j);
            if (!ans)
                return 0;
        }
        int i = 0;
        for (int j = 0; j < Col - 1; j++) {
            bool ans = check(matrix, i, j);
            if (!ans)
                return 0;
        }

        return 1;
    }
};