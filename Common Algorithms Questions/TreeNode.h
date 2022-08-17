#pragma once
#include <vector>
using namespace std;

struct TreeNode
{
	struct TreeNode* left;
	struct TreeNode* right;

	int val;

	TreeNode()
	{
		this->val = 0;
		left = nullptr;
		right = nullptr;
	}

	TreeNode(int value)
	{
		this->val = value;
		left = nullptr;
		right = nullptr;
	}
};

TreeNode* GetTreeFromInLevelOrderArray(vector<int> preOrder, int i);

vector<int> inorderTraversal(TreeNode* root);
