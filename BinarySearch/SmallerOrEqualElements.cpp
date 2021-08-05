#include<vector>
using namespace std;

// https://www.interviewbit.com/problems/smaller-or-equal-elements/
int SmallerOrEqual(vector<int> &A, int B)
{
    if (A.size() > 0 && A[0] > B)
    {
        return 0;
    }
    else if (A.size() > 0 && A[A.size() - 1] < B)
    {
        return A.size();
    }

    int start = 0, end = A.size() - 1;
    int mid=0;
    while (start <= end)
    {
        mid = (end + start) / 2;

        if (A[mid] == B)
        {
            while (A[mid] == B)
            {
                ++mid;
            }
            return mid;
        }
        else if (A[mid] > B)
        {
            end = mid - 1;
        }
        else if (A[mid] < B)
        {
            start = mid + 1;
        }
    }

    if (A[mid] > B)
    {
        return mid;
    }
    else
    {
        return mid + 1;
    }

}