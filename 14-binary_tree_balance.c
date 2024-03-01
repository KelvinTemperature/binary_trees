#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root of the tree to measure
 * Return: value or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	height_r = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (height_l - height_r);
}
