#include "RestoreIpAddress.h"
#include <string>

// https://www.interviewbit.com/problems/valid-ip-addresses/
vector<string> restoreIpAddresses(string A)
{
    vector<int> nums(A.length());
    for (int i = 0; i < A.length(); ++i)
    {
        nums[i] = A[i] - '0';
    }

    // find largest valid part first
    vector<string> ipAddresses;

    if (A.size() > 12 || A.size() < 4)
    {
        return ipAddresses;
    }

    // check if number is [0,255] return num
    auto getNum = [&](const int& start, const int& end) 
    {
        int num = -1;
        if (end - start == 2)
        {
            if (nums[start] <= 2)
            {
                num = nums[start];
            }
            else
            {
                return -1;
            }
            if (nums[start + 1] <= 5)
            {
                num = num * 10 + nums[start + 1];
            }
            else
            {
                return -1;
            }
            if (nums[end] <= 5)
            {
                num = num * 10 + nums[end];
            }
            else
            {
                return -1;
            }
        }
        else if (end - start == 1)
        {
            num = nums[start];
            num = num * 10 + nums[end];
        }
        /*else*/ if (end - start == 0)
        {
            num = nums[start];
        }
        else if(nums[start] == 0)
        {
            // num can't be prefix with 0
            return -1;
        }
        return num;
    };

    // 1.1.1.1
    int segmentLength = 3;//nums.size() / 4;
    for (int i = 2; i >= 0; --i)
    {
        int j = i + segmentLength;

        // 
        int firstSegment = getNum(0, i);
        if ( firstSegment == -1)
        {
            continue;
        }

        while (j > i)
        {
            int secondSegment = getNum(i+1, j);
            if (secondSegment == -1)
            {
                --j;
                continue;
            }

            int k = j + segmentLength;
            while (k > j)
            {
                if (k < nums.size() - 1)
                {
                    int thirdSegment = getNum(j + 1, k);
                    int fourthSegment = getNum(k + 1, nums.size() - 1);
                    if (thirdSegment == -1)
                    {
                        --k;
                        continue;
                    }
                    else if (fourthSegment == -1)
                    {
                        // might cause trouble
                        break;
                    }

                    ipAddresses.push_back(to_string(firstSegment) + "." + to_string(secondSegment)
                        + "." + to_string(thirdSegment) + "." + to_string(fourthSegment));
                }
                --k;
            }
            --j;
        }
    }

    return ipAddresses;
}
