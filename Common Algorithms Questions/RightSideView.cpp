#include "RightSideView.h"
#include <map>

/*
Input: root = [1, 2, 3, null, 5, null, 4]
Output : [1, 3, 4]

Input: root = [1,null,3]
Output: [1,3]

Input: root = []
Output: []
*/

void rightFirstTraversal(TreeNode* root, map<int, int>& levelRightNode, const int levelNumber)
{
	if (root == nullptr)
	{
		return;
	}

	if (root->right)
	{
		rightFirstTraversal(root->right, levelRightNode, levelNumber + 1);
	}

	if (levelRightNode.find(levelNumber) == levelRightNode.end())
	{
		levelRightNode.insert(make_pair(levelNumber, root->val));
	}

	if (root->left)
	{
		rightFirstTraversal(root->left, levelRightNode, levelNumber + 1);
	}
}

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Right Side View.
// https://leetcode.com/problems/binary-tree-right-side-view/description/
vector<int> rightSideView(TreeNode* root) 
{
	// r rt l
	map<int, int> levelRightNode;

	rightFirstTraversal(root, levelRightNode, 0);

	vector<int> listOfValues(levelRightNode.size());
	int i = 0;
	for (map<int,int>::iterator itr = levelRightNode.begin(); itr != levelRightNode.end(); ++itr)
	{
		listOfValues[i++] = itr->second;
	}

	return listOfValues;
}
