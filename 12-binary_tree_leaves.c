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
 * binary_tree_leaves - count the number of leaves in a tree
 *
 * @tree: pointer to the tree
 * Return: number of leaf nodes or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (check_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
