#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes in the tree. If tree is NULL return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
	{
		return (0);
	}

	nodes = 0;
	nodes = count_nodes(tree, nodes);

	return (nodes);
}

/**
 * count_nodes - count nodes in a tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * @nodes: number of nodes in the tree
 * Return: number of nodes in the tree
 */

size_t count_nodes(const binary_tree_t *tree, size_t nodes)
{
	size_t left;
	size_t right;

	left = nodes;
	right = nodes;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL || tree->right != NULL)
	{
		nodes = nodes + 1;
	}

	left = left + count_nodes(tree->left, left);
	right = right + count_nodes(tree->right, right);

	return (nodes + left + right);
}
