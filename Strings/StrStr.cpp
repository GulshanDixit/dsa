#include "StrStr.h"

// https://www.interviewbit.com/problems/implement-strstr/
int strStr(const string A, const string B) {

    if (B.length() == 0)
    {
        return 0;
    }
    if (A.length() == 0)
    {
        return -1;
    }

    int i = 0;
    while (i < A.length())
    {
        int j = 0;
        while (j < B.length())
        {
            if (A[i] != B[j])
            {
                break;
            }
            ++j;
            ++i;
        }

        if (j == B.length())
        {
            return i - B.length();
        }
        else
        {
            i -= j;
        }

        ++i;
    }

    return -1;
}