// Common Algorithms Questions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TreeNode.h"
#include "RightSideView.h"
#include "UniqueBST.h"
using namespace std;


int main()
{
	// Right Side View
	vector<int> inLevelOrderArray{ 1, 2, 3, NULL, 5, NULL, 4 };
	TreeNode* root = GetTreeFromInLevelOrderArray(inLevelOrderArray, 0);

	for (int& i : rightSideView(root))
	{
		cout << i << " ";
	}

	cout << endl;
	// end Right Side View

	// Unique BST
	cout << numTrees(4) << endl;
	// end Unique BST
}
