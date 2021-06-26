#include<vector>
using namespace std;

/// <summary>
/// It calculates the permutations of numbers where two distinct numers are involved
/// </summary>
/// <param name="total">sum of both counts</param>
/// <param name="group1">higher count of the two</param>
/// <param name="group2">lower count of the two</param>
/// <returns></returns>
int permutationsHelper(int total, int group1, int group2)
{
    //(factorials[total] / (factorials[group1] * factorials[group2]));
    if (total == group1)
    {
        return 1;
    }

    //TODO: Add assert check for comparision of group1 and group2
    int prm = total;
    int num = total;
    int dnm = group2;
    vector<int> whatRemains;// that which isn't a factor to current value of prm
    while (num > group1+1)
    {
        prm *= (num - 1);

        for (vector<int>::iterator itr=whatRemains.begin(); itr != whatRemains.end(); ++itr)
        {
            if (*itr != -1 && prm % *itr == 0)
            {
                prm /= *itr;
                *itr = -1;
            }
        }

        while (dnm > 1)
        {
            if (prm % dnm == 0)
            {
                prm /= dnm;
                --dnm;
            }
            else
            {
                whatRemains.push_back(dnm);
                --dnm;
                break;
            }
        }

        --num;
    }

    return prm;
}

int climbStair(int n)
{
    int max2s=0;
    int m = n;
    
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

    return count;
}

