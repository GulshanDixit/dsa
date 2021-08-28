#include "SearchInsert.h"

// https://www.interviewbit.com/problems/sorted-insert-position/
int SearchInsert(vector<int>& A, int B)
{
    int start = 0, end = A.size() - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (A[mid] == B)
        {
            return mid;
        }
        else if (A[mid] > B)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (A[mid] > B)
    {
        return mid;
    }
    return mid + 1;

}