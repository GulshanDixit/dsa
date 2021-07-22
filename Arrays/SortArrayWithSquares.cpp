#include "SortArrayWithSquares.h"

// https://www.interviewbit.com/problems/sort-array-with-squares/
vector<int> sortArrayWithSqaures(vector<int>& A) {

    vector<int> B(A.size());

    // find the last negative num
    // this is also the smallest in mag
    // next to this is the smallest positive
    int i = 0;
    while (true)
    {
        if (i < A.size() && A[i] < 0)
        {
            ++i;
        }
        else
        {
            int r = 0;
            int element;
            int p = i - 1, q = i;
            while (true)
            {
                if (p >= 0 && q < A.size())
                {
                    if (A[p] * -1 < A[q])
                    {
                        element = A[p];
                        --p;
                    }
                    else
                    {
                        element = A[q];
                        ++q;
                    }
                }
                else if (p >= 0)
                {
                    element = A[p];
                    --p;
                }
                else if (q < A.size())
                {
                    element = A[q];
                    ++q;
                }
                else {

                    break;
                }

                B[r] = element * element;

                ++r;
            }

            break;
        }

    }

    return B;

}
