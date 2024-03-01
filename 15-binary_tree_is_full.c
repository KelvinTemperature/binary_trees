#include "binary_trees.h"

/**
 * check_leaf - checks if a node is a leaf
 *
 * @tree: pointer to a node
 * Return: 1 0r 0
 */

size_t check_leaf(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree && !(tree->left) && !(tree->right))
		count = 1;

	return (count);
}

/**
 * check_full - checks if a node is full
 *
 * @node: node to check
 * Return: 0 or 1
 */

int check_full(const binary_tree_t *node)
{
	int full = 0;

	if (node && node->left && node->right)
		full = 1;

	return (full);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of thr tree
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (check_leaf(tree))
		return (1);

	if (check_full(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
