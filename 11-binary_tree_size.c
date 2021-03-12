#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: The size of the tree. If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}

	size = 0;
	size = size + calc_size(tree, size);
	return (size);
}

/**
 * calc_size - calculates the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * @size: the size of the tree
 * Return: the size of the tree
 */

size_t calc_size(const binary_tree_t *tree, size_t size)
{
	size_t left;
	size_t right;

	left = size;
	right = size;

	if (tree == NULL)
	{
		return (0);
	}

	left = left + calc_size(tree->left, left);
	right = right + calc_size(tree->right, right);

	return (left + right + 1);
}
