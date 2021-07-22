#include "MinNumOfLights.h"

//https://www.interviewbit.com/problems/minimum-lights-to-activate/
int MinNumOfLights(vector<int>& A, int B) {
    if (B > A.size())
    {
        return 1;
    }

    int count = 0;
    int j = 0;
    for (int i = B - 1; i < A.size(); )
    {
        j = i;

        // if can be lit light it and move next
        if (A[i] == 1)
        {
            if (i + 2 * B - 1 >= A.size())
            {
                i += B;
            }
            else
            {
                i += 2 * B - 1;
            }
            ++count;
            continue;
        }

        // check before this
        while (j >= i - B + 1)
        {
            --j;
            if (A[j] == 1)
            {
                // increment the itr
                if (i + 2 * B - 1 >= A.size())
                {
                    i += B;
                }
                else
                {
                    i += 2 * B - 1;
                }
                j = i;
                ++count;
                break;
            }
        }

        if (j < i - B + 1)
        {
            return -1;
        }

    }

    return count;

}
