#include<vector>
using namespace std;

/// <summary>
/// It calculates the permutations of numbers where two distinct numers are involved
/// </summary>
/// <param name="total">sum of both counts</param>
/// <param name="group1">higher count of the two</param>
/// <param name="group2">lower count of the two</param>
/// <returns></returns>
int permutationsHelper(int group1, int group2)
{
    int total = group1 + group2;
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

//https://leetcode.com/explore/interview/card/top-interview-questions-easy/97/dynamic-programming/569/
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
    int ones = m; // is it odd or even
    int twos = max2s;

    while (twos > 0)
    {
        if (twos > ones)
        {
            count += permutationsHelper(twos, ones);
        }
        else
        {
            count += permutationsHelper(ones, twos);
        }
        --twos;
        ones += 2;
    }

    return count;
}

