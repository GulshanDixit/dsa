#include "MinCharToPalindrome.h"

/// <summary>
/// Insert at either ends
/// </summary>
/// <param name="A"></param>
/// <param name="fromStart"></param>
/// <param name="fromEnd"></param>
/// <returns></returns>
int minCharactersHelper(string A, int fromStart, int fromEnd)
{
	if (fromStart >= fromEnd)
	{
		return 0;
	}

	while (fromStart < fromEnd)
	{
		if (A[fromStart] != A[fromEnd])
		{
			int leftIncrement = minCharactersHelper(A, fromStart + 1, fromEnd) + 1;
			int rightIncrement = minCharactersHelper(A, fromStart, fromEnd -1) + 1;

			return leftIncrement < rightIncrement ? leftIncrement : rightIncrement;
		}

		fromStart++;
		fromEnd--;
	}

	return 0;
}


// working but time complexity fails
int maxLengthPalindromeFromBegining(string A, int fromStart, int fromEnd)
{
	if (fromStart >= fromEnd)
	{
		return 0;
	}

	int lengthOfSegment = fromEnd - fromStart;
	while (fromStart < fromEnd)
	{
		if (A[fromStart] != A[fromEnd])
		{
			if (fromStart == 0)
			{
				return maxLengthPalindromeFromBegining(A, 0, fromEnd-1);
			}
			else
			{
				return maxLengthPalindromeFromBegining(A, 0, fromEnd);
			}
		}

		fromStart++;
		fromEnd--;
	}

	return lengthOfSegment;
}

int minCharactersHelperInsertAtBegining(string A)
{
	return A.length() - maxLengthPalindromeFromBegining(A, 0, A.length() - 1) - 1;
}

int minCharactersToMakePalindrome(string A)
{
	//return minCharactersHelper(A, 0, A.length()-1);
	return minCharactersHelperInsertAtBegining(A);
}
