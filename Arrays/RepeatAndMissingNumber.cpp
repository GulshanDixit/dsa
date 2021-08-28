#include "RepeatAndMissingNumber.h"

// https://www.interviewbit.com/problems/repeat-and-missing-number-array/
vector<int> repeatedNumber(const vector<int>& A) {

    vector<int> repeatAndMissingNum(2);

    vector<int> aux(A.size() + 1, 0);

    int sum = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (aux[A[i]] == 1)
        {
            repeatAndMissingNum[0] = A[i];
        }
        aux[A[i]] = 1;
        sum += A[i];
    }

    repeatAndMissingNum[1] = (int)(A.size() * (A.size() + 1) / 2) - (sum - repeatAndMissingNum[0]);

    return repeatAndMissingNum;
}
