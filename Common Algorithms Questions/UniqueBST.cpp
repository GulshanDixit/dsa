#include "UniqueBST.h"
#include<map>

// https://leetcode.com/problems/unique-binary-search-trees/description/
int numTreesWorker(int n, map<int, int>& numTreesPerCount)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else if (n > 0)
    {
        if (numTreesPerCount.find(n) != numTreesPerCount.end())
        {
            return numTreesPerCount[n];
        }
        else
        {
            int m{ n };
            int count{ 0 };

            while (m > 0)
            {
                count += numTreesWorker(m - 1, numTreesPerCount) * numTreesWorker(n - m, numTreesPerCount);
                --m;
            }

            numTreesPerCount[n] = count;

            return count;
        }
    }

    return 1;// n==0
}

int numTrees(int n) {
    map<int, int> numTreesPerCount;

    return numTreesWorker(n, numTreesPerCount);
}