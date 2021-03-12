#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves in the tree. If tree is NULL return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
	{
		return (0);
	}

	leaves = 0;
	leaves = count_leaves(tree, leaves);

	return (leaves);
}

/**
 * count_leaves - Count leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * @leaves: number of leaves
 * Return: number of leaves
 */

size_t count_leaves(const binary_tree_t *tree, size_t leaves)
{
	size_t left;
	size_t right;

	left = leaves;
	right = leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = count_leaves(tree->left, leaves);
	right = count_leaves(tree->right, leaves);

	return (left + right);
}
