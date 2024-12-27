// leetcode 73 https://leetcode.com/problems/set-matrix-zeroes/description/

#include<bits/stdc++.h>
class Solution {
public:
// my initial approache uses two unordered set two storing two sets of row, and columns.
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith row zero
                    matrix[i][0] = 0; // signify that ith column will also be aro.

                    if (j != 0)
                        matrix[0][j] = 0; // signify that j column would be zero
                    else
                        col0 = 0; // it signify that j == 0 , so first colun
                                  // will also be zero.
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    // check for col & row:
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
// making the first row and the first column zero.
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};