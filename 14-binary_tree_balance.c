#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor of the tree. If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int diff;

	if (tree == NULL)
	{
		return (0);
	}

	diff = 0;
	diff = calc_diff(tree, tree, diff);
	return (diff);
}

/**
 * calc_diff - calculates the difference between left and right branches
 * @root: Root node of the tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * @diff: Difference between the left and right branches
 * Return: Difference between the left and right branches
 */

int calc_diff(const binary_tree_t *root, const binary_tree_t *tree, int diff)
{
	int right;
	int left;

	right = diff;
	left = diff;

	if (tree == NULL)
	{
		return (0);
	}

	left = left + calc_diff(root, tree->left, left);
	right = right + calc_diff(root, tree->right, right);

	if (root == tree)
	{
		return (left - right);
	}
	if (right > left)
	{
		return (right + 1);
	}
	return (left + 1);
}
