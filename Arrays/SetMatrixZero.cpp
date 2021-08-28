#include "SetMatrixZero.h"

// https://www.interviewbit.com/problems/set-matrix-zeros/
void setZeroes(vector<vector<int> >& A) {

    // 1 1 1 0 1 1
    // 1 1 1 1 1 1
    // 1 1 0 1 1 1
    // 1 1 1 1 1 1

    vector<int> rowsWithZero(A.size(), -1);
    vector<int> columnWithZero(A[0].size(), -1);

    int ri, ci;
    ri = ci = -1;

    // iterate to find all '0' in matrix 
    // corresponding to the rows and columns
    for (int i = 0; i < A.size(); ++i)
    {
        for (int j = 0; j < A[0].size(); ++j)
        {
            if (A[i][j] == 0)
            {
                rowsWithZero[i] = 0;
                columnWithZero[j] = 0;
            }
        }
    }

    for (int i = 0; i < A.size(); ++i)
    {
        if (rowsWithZero[i] != -1)
        {
            for (int j = 0; j < A[0].size(); ++j)
            {
                A[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < A[0].size(); ++i)
    {
        if (columnWithZero[i] != -1)
        {
            for (int j = 0; j < A.size(); ++j)
            {
                A[j][i] = 0;
            }
        }
    }
}
