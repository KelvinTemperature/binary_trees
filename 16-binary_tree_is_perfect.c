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
 * height - gets the height of a binary tree
 *
 * @tree: pointer to root of treet
 * Return: the height of the tree
 */

int height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_is_perfect - checks if it is a perfect binary tree
 * @tree: pointer to the root of the tree
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (check_leaf(tree->left) && check_leaf(tree->right))
			return (1);

		if (check_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
