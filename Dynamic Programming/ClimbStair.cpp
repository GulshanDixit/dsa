#include<vector>
using namespace std;

/// <summary>
/// It calculates the permutations of numbers where two distinct numers are involved
/// </summary>
/// <param name="total">sum of both counts</param>
/// <param name="group1">higher count of the two</param>
/// <param name="group2">lower count of the two</param>
/// <returns></returns>
float permutationsHelper(int total, int group1, int group2)
{
    //(factorials[total] / (factorials[group1] * factorials[group2]));
    if (total == group1)
    {
        return 1;
    }

    //TODO: Add assert check for comparision of group1 and group2
    float prm = total;
    int num = total;
    int dnm = group2;
    while (num > group1+1)
    {
        prm *= (num - 1);

        if (dnm > 1)
        {
            prm /= dnm;
            --dnm;
        }
        --num;
    }

    while (dnm > 1)
    {
        prm /= dnm;
        --dnm;
    }

    return prm;
}

int climbStair(int n)
{
    int max2s=0;
    int m= n;
    
    while (m >= 2)
    {
        ++max2s;
        m -= 2;
    }

    float count = 1; // all ones
    int ones = 0;
    if (m != 0)// is it odd or even
    {
        ones = 1;
    }
    
    while (max2s > 0)
    {
        if (max2s > ones)
        {
            count += permutationsHelper(max2s + ones, max2s, ones);
        }
        else
        {
            count += permutationsHelper(max2s + ones, ones, max2s);
        }
        --max2s;
        ones += 2;
    }

    
    int iCount = static_cast<int>(count);
    if (count - iCount >= 0.5f)
    {
        return iCount + 1;
    }
    else
    {
        return iCount;
    }
}

