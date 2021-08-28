#include "PowerFunction.h"
#include <map>
using namespace std;

// working solution, interview compiler gives wrong output 
// for input: -1 2 20 
// wrong output: 9
// right outout: 1
// https://www.interviewbit.com/problems/implement-power-function/
int power(int x, int n)
{
	static map<int, int> powerDic;
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return x;
	}
	else
	{
		if (n % 2 == 0)
		{
			if (powerDic.find(n / 2) == powerDic.end())
			{
				powerDic.insert(make_pair(n / 2, power(x, n / 2)));
			}
			return powerDic[n / 2] * powerDic[n / 2];
		}
		else
		{
			if (powerDic.find(n / 2) == powerDic.end())
			{
				powerDic.insert(make_pair(n / 2, power(x, n / 2)));
			}
			if (powerDic.find((n / 2) + 1) == powerDic.end())
			{
				powerDic.insert(make_pair((n / 2) + 1, power(x, n / 2)));
			}
			return powerDic[n / 2] * powerDic[(n / 2) + 1];
		}
		return power(x, n / 2) * power(x, n / 2);
	}
}


int pow(int x, int n, int d) {

	int xPowerN = power(x, n);
	int rem = xPowerN % d;
	if (rem < 0)
	{
		return d + rem;
	}
	return rem;
}
