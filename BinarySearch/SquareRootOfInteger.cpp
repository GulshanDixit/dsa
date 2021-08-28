#include "SquareRootOfInteger.h"
#include <math.h>


// https://www.interviewbit.com/problems/square-root-of-integer/
int sqrt(int A)
{
	if (A == 1 || A == 0)
	{
		return A;
	}
	else if (A == 2 || A == 3)
	{
		return 1;
	}

	unsigned int start = 2;
	unsigned int mid = start;
	while (mid * mid < A)
	{
		if (mid * mid == 0)
		{
			break;
		}
		start = mid;
		mid = mid * mid;
	}
	unsigned int end = mid;

	while (start <= end)
	{
		mid = (end + start) / 2;
		if (mid * mid == A)
		{
			return mid;
		}
		else if (mid * mid < A)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	mid = (start + end) / 2;
	return floor(mid);
}