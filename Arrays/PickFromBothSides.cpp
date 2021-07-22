#include "PickFromBothSides.h"

// https://www.interviewbit.com/problems/pick-from-both-sides/
int pickFromBothSides(vector<int>& A, int B) {

    int maxSum = INT_MIN;
    for (int i = B - 1; i != A.size() - 2; --i)
    {
        if (i < 0)
        {
            i = A.size() - 1;
        }
        int j = i;
        int count = B;
        int sum = 0;
        while (count > 0)
        {
            --count;
            sum += A[j];
            --j;
            if (j < 0)
            {
                j = A.size() - 1;
            }
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    return maxSum;

}
