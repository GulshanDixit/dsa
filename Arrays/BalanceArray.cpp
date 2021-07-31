#include "BalanceArray.h"

// https://www.interviewbit.com/problems/balance-array/
// bucket category verified answer
int balanceArray(vector<int>& A)
{
    // based on the current index divide in two
    int fe, fo;
    int be, bo;
    fe = be = fo = bo = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (i % 2 == 0)
        {
            fe += A[i];
        }
        else
        {
            fo += A[i];
        }
    }

    int count = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (i % 2 == 0)
        {
            fe -= A[i];
            if (i - 1 > 0)
            {
                bo += A[i - 1];
            }
        }
        else
        {
            fo -= A[i];
            if (i - 1 >= 0)
            {
                be += A[i - 1];
            }
        }

        if (bo + fe == be + fo)
        {
            ++count;
        }
    }

    return count;
}
