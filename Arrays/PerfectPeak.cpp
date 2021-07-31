#include "PerfectPeak.h"

// https://www.interviewbit.com/problems/perfect-peak-of-array/
int perfectPeak(vector<int>& A) {

    for (int i = 1; i < A.size() - 1; ++i)
    {
        int j = 1;

        while (true)
        {
            if (i - j < 0 && i + j >= A.size())
            {
                return 1;
            }

            if (i - j >= 0 && A[i - j] >= A[i])
            {
                break;
            }

            if (i + j < A.size() && A[i + j] <= A[i])
            {
                break;
            }

            ++j;
        }
    }
    return 0;
}
