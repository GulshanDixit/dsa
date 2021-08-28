// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include "SmallerOrEqualElements.h"
#include "SearchMatrix.h"
#include "SquareRootOfInteger.h"
#include "PowerFunction.h"
#include "MedianOfArray.h"
using namespace std;


/// <summary>
/// Returns matrix from string
/// Assumes: "[...] [...] [...]"
/// </summary>
/// <param name="matrixStr">Matrix String</param>
/// <returns></returns>
vector<vector<int>> getMatrix(string matrixStr)
{
	vector<vector<int>> matrix;
	vector<int>* row = nullptr;
	string str{ "" };

	auto getNum = [&]() {
		int num=0;
		for (char& c : str)
		{
			num = num * 10 + (c - '0');
		}
		return num;
	};

	auto checkAndPush = [&]() {
		if (str.size() > 0)
		{
			row->push_back(getNum());
			str = "";
		}
	};

	for (const char& c : matrixStr)
	{
		switch (c)
		{
		case '[':
			row = new vector<int>();
			break;
		case ']':
			checkAndPush();
			matrix.push_back(*row);
			break;
		default:
			if (isdigit(c))
			{
				str += c;
			}
			else 
			{
				checkAndPush();
			}
			break;
		}
	}

	return matrix;
}


int main()
{
	// Smaller Or Equal Elements
	//vector<int> A{ 1, 3, 4, 4, 6 };
	//cout << SmallerOrEqual(A, 4);
	// soee

	// Matrix Search
	//vector<vector<int>> matrix = { {3, 3, 11, 12, 14},
	//								{16, 17, 30, 34, 35},
	//								{45, 48, 49, 50, 52},
	//								{56, 59, 63, 63, 65 },
	//								{67, 71, 72, 73, 79},
	//								{80, 84, 85, 85, 88 },
	//								{88, 91, 92, 93, 94} 
	//							}; // 94
	//string matrixStr{ " [1, 4, 5, 5, 6, 14, 14, 16, 19] 		[22, 24, 28, 33, 35, 37, 38, 40, 41] 	[45, 50, 52, 55, 56, 56, 57, 60, 60]  [63, 64, 66, 68, 68, 71, 78, 78, 79] 	[84, 89, 90, 91, 93, 94, 94, 97, 98]"};
	//vector<vector<int>> matrix = getMatrix(matrixStr);

	//vector<vector<int>> matrix = { {1, 4, 5, 5, 6, 14, 14, 16, 19 }, 
	//	{22, 24, 28, 33, 35, 37, 38, 40, 41}, 
	//	{ 45, 50, 52, 55, 56, 56, 57, 60, 60 }, 
	//	{ 63, 64, 66, 68, 68, 71, 78, 78, 79 }, 
	//	{ 84, 89, 90, 91, 93, 94, 94, 97, 98 } }; // 68


	//vector<vector<int>> matrix = { {1, 2, 2, 3, 4, 4, 6, 7, 8},	
	//	{10, 18, 19, 22, 22, 24, 27, 27, 27}, 
	//	{28, 28, 29, 29, 29, 32, 34, 35, 36} }; //1

	//cout << searchMatrix(matrix, 1);
	// ms

	// square root of integer
	//for (int i = 0; i < 126; ++i)
	//{
	//	cout << sqrt(i) << " is sqrt of " << i;
	//	cout << endl;
	//}
	//cout << sqrt(930675566) << endl;
	//cout << sqrt(2147483647) << endl;
	// sroi

	// power
	//cout << pow(-1,2,20) << endl;
	//cout << pow(0,0,1) << endl;
	//pow

	// median sorted array
	//vector<int> A{1, 4, 5, 9, 10, 12};
	//vector<int> B{6, 11, 13, 15, 19};
	//vector<int> A{1, 5, 9, 10, 12, 16, 24, 33};
	//vector<int> B{6, 11, 13, 15, 19}; // 12
	//vector<int> A{ 1, 4, 6, 8, 10 };
	//vector<int> B{ 11, 12, 13, 14 , 19 }; // 10.5
	//vector<int> A{20};
	//vector<int> B{};
	vector<int> A{ -50, -47, -36, -35, 0, 13, 14, 16 };
	vector<int> B{ -31, 1, 9, 23, 30, 39 }; // 5
	cout << findMedianSortedArrays(A, B);
	// msa end

}

