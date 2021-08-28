#include "Palindrom.h"

// https://www.interviewbit.com/problems/palindrome-string/
int isPalindrome(string A)
{
    int start, end;
    start = 0;
    end = A.size() - 1;

    while (start <= end)
    {
        if (!isalpha(A[start]) && !isdigit(A[start]))
        {
            ++start;
            continue;
        }
        if (!isalpha(A[end]) && !isdigit(A[end]))
        {
            --end;
            continue;
        }
        if (tolower(A[start]) != tolower(A[end]))
        {
            return 0;
        }
        
        ++start;
        --end;
    }

    return 1;
}
