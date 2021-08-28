#include "MedianOfArray.h"


// doesn't work for 
//A : [-50, -47, -36, -35, 0, 13, 14, 16]
//B : [-31, 1, 9, 23, 30, 39]
// https://www.interviewbit.com/problems/median-of-array/
double findMedianSortedArrays(const vector<int>& A, const vector<int>& B) {

	auto getMedian = [](const int& o, const vector<int>& C) -> double
	{
		if (o == 0)
		{
			return C[o];
		}
		else if (o % 2 == 0)
		{
			return (C[o / 2] + C[o / 2 + 1]) / 2;
		}
		else
		{
			return static_cast<double>(C[o / 2 + 1]);
		}
	};


	if (A.size() == 0 && B.size() == 0)
	{
		return 0;
	}
	else if(A.size() == 0)
	{
		return getMedian(B.size() - 1, B);
	}
	else if (B.size() == 0)
	{
		return getMedian(A.size() - 1, A);
	}

	// find i such that 
	// A[0...i] < A[i+1...m]

	// j such that B[j] < A[i+1]
	// B[0...j] < B[j+1...n]

	// Left Part  :: A[0...i]    &&		B[0...j]
	// Right Part :: A[i+1...m]  &&		B[j+1...n]

	// such that Left Part < Right Part
	// while [Left Part].count == [Right Part].count (or + 1)

	// then median is 
	// if (m + n) % 2 == 0 => max from left part and min from right part's average
	// if (m + n) % 2 != 0 => 
	// if (i + j) - 1 == (m - i) + (n - j) = > max from left part 
	// else min from right part


	auto getMedianFrom = [&](const vector<int> &lesserArray, const vector<int> &greaterArray) -> double 
	{
		int m = lesserArray.size();
		int n = greaterArray.size();

		// m: 2
		// n: 5
		// median will be present in B
		if (m < n)
		{
			int o = n - m - 1;
			return getMedian(o, greaterArray);
		}
		// m: 6
		// n: 2
		else if (m > n)
		{
			int o = m - n - 1;
			return getMedian(o, lesserArray);
		}
		else
		{
			return (static_cast<double>(lesserArray[A.size() - 1] + greaterArray[0])) / 2;
		}
	};

	// if all elements in A are less than all elements in B
	if (A[A.size() - 1] < B[0])
	{
		return getMedianFrom(A, B);
	}
	// all elements in B are less than all elements in A
	else if (B[B.size() - 1] < A[0])
	{
		return getMedianFrom(B, A);
	}
	else 
	{
		int m = A.size();
		int n = B.size();

		int min = 0;
		int max = A.size() - 1;

		auto findJInBLessThan = [](const vector<int>& B, const int& val)
		{
			int min = 0;
			int max = B.size() - 1;

			int mid = min + (max - min) / 2;

			while (min <= max)
			{
				mid = min + (max - min) / 2;

				if (B[mid] == val)
				{
					return mid;
				}
				else if (B[mid] < val)
				{
					min = mid + 1;
				}
				else
				{
					max = mid - 1;
				}
			}

			if (B[mid] > val)
			{
				return mid - 1;
			}
			return mid;
		};

		int i = A.size() / 2;
		int j = findJInBLessThan(B, A[i + 1]);

		int diff = 0;
		while (i >= 0 && i < A.size() - 1)
		{
			j = findJInBLessThan(B, A[i + 1]);
			diff = (i + j + 2) - ((m - (i + 1)) + (n - (j + 1)));

			if (diff == 0 || abs(diff) == 1)
			{
				// found the balance
				break;
			}
			if (diff < 0)
			{
				i++;
			}
			else
			{
				--i;
			}
		}

		int maxFromLeft = A[0];

		if (i < A.size())
		{
			maxFromLeft = A[i];
		}
		if (j >= 0 && B[j] > maxFromLeft)
		{
			maxFromLeft = B[j];
		}

		int minFromRight = A[A.size() - 1];

		if (i + 1 < A.size())
		{
			minFromRight = A[i + 1];
		}
		if (j + 1 < B.size() && B[j + 1] < minFromRight)
		{
			minFromRight = B[j + 1];
		}

		if (diff == 0)
		{
			return static_cast<double>(maxFromLeft + minFromRight) / 2;
		}
		else
		{
			return diff > 0 ? maxFromLeft : minFromRight;
		}
	}
}