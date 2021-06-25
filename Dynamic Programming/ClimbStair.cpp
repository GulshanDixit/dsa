#include<vector>
using namespace std;


int climbStair(int n)
{
    int max2s=0;
    int m= n;
    
    while (m >= 2)
    {
        ++max2s;
        m -= 2;
    }

    int count = 1; // all ones
    int ones = 0;
    if (m != 0)// is it odd or even
    {
        ones = 1;
    }
    
    vector<int> factorials(n);// store factorial to prevent recalculations
    m = 0;
    while (m < n)
    {
        if (m == 0)
        {
            factorials[m] = 1;
        }
        else
        {
            factorials[m] = factorials[m - 1] * m;
        }
        ++m;
    }

    while (max2s > 0)
    {
        count += (factorials[max2s+ones] / (factorials[max2s] * factorials[ones]));
        --max2s;
        ones += 2;
    }

    return count;
}

