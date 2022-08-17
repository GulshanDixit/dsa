#include "TreeNode.h"


// [1, 2, 3, null, 5, null, 4]

// [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
TreeNode* GetTreeFromInLevelOrderArray(vector<int> preOrder, int i)
{
	if (preOrder.size() == 0 || i >= preOrder.size())
	{
		return nullptr;
	}

	TreeNode* node = new TreeNode(preOrder[i]);

	if ((2 * i + 1) < preOrder.size() && preOrder[2 * i + 1] != NULL)
	{
		node->left = GetTreeFromInLevelOrderArray(preOrder, 2 * i + 1);
	}
	if ((2 * i + 2) < preOrder.size() && preOrder[2 * i + 2] != NULL)
	{
		node->right = GetTreeFromInLevelOrderArray(preOrder, 2 * i + 2);
	}

	return node;
}

void inorderTraversalWorker(TreeNode* root, vector<int>& inorder)
{
    if (root == nullptr)
    {
        return;
    }

    if (root->left != nullptr)
    {
        inorderTraversalWorker(root->left, inorder);
    }

    inorder.push_back(root->val);

    if (root->right != nullptr)
    {
        inorderTraversalWorker(root->right, inorder);
    }
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> inorder;
    inorderTraversalWorker(root, inorder);

    return inorder;
}