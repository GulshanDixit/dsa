#include "SearchMatrix.h"

// https://www.interviewbit.com/problems/matrix-search/
int searchMatrix(vector<vector<int> >& A, int B) {

	int start = 0, end = A.size() - 1;

	int mid = (start + end) / 2;

	// binary search in matrix
	while (start <= end)
	{
		mid = (start + end) / 2;

		if (A[mid][0] == B)
		{
			return 1;
		}
		else if (A[mid][0] > B)
		{
			end = mid - 1;
		}
		else if (A[mid][A[mid].size() - 1] < B)
		{
			start = mid + 1;
		}
		else
		{
			break;
		}
	}

	// binary search in row
	start = 0;
	end = A[mid].size() - 1;
	int row_mid = (start + end) / 2;

	while (start <= end)
	{
		row_mid = (start + end) / 2;

		if (A[mid][row_mid] == B)
		{
			return 1;
		}
		else if (A[mid][row_mid] > B)
		{
			end = row_mid - 1;
		}
		else
		{
			start = row_mid + 1;
		}
	}

	row_mid = (start + end) / 2;

	if (A[mid][row_mid] == B)
	{
		return 1;
	}

	return 0;
}