#include "binary_trees.h"

/**
 * height - measures the height of a tree
 *
 * @tree: tree root
 * Return: height
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
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root of the tree to measure
 * Return: value or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((height(tree->left) - 1) - (height(tree->right) - 1));
}
