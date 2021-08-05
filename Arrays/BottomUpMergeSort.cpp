#include "BottomUpMergeSort.h"


void Merge(vector<int>& A, int start, int mid, int end)
{
	vector<int> temp(end - start + 1);

	int i = start;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= end)
	{
		if (A[i] < A[j])
		{
			temp[k] = A[i];
			++i;
		}
		else
		{
			temp[k] = A[j];
			++j;
		}
		++k;
	}

	// while elements in left are remaining
	while (i <= mid)
	{
		temp[k] = A[i];
		++k;
		++i;
	}
	
	// while elements in right are remaining
	while (j <= end)
	{
		temp[k] = A[j];
		++k;
		++j;
	}
}

void MergeSortBottomUp(vector<int> &A, int size)
{
	for (int i = 0; i < A.size(); i += size + size)
	{
		Merge(A, i, i + size - 1, i + size + size - 1);
	}

}