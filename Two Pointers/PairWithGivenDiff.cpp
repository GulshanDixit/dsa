#include "PairWithGivenDiff.h"

// https://www.interviewbit.com/problems/pair-with-given-difference/
int pairWithGivenDiff(vector<int>& A, int B) {

    sort(A.begin(), A.end());

    int start = 0, end = A.size() - 1;

    while (start < end)
    {
        int diff = A[end] - A[start];
        if (diff == B)
        {
            return 1;
        }
        else if (diff < B)
        {
            --end;
        }
        else if (diff > B)
        {
            ++start;
        }
    }

    return 0;

}