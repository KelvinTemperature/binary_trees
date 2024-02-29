#include "binary_trees.h"

/**
 * size_count - count the left and right side of a tree
 *
 * @tree: point to the node to count
 * Return: total count
 */

size_t size_count(const binary_tree_t *tree)
{
	size_t count_l;
	size_t count_r;

	count_l = tree->left ? size_count(tree->left) + 1 : 0;
	count_r = tree->right ? size_count(tree->right) + 1 : 0;

	return (count_l + count_r);
}

/**
 * binary_tree_size - measures the size of a node
 *
 * @tree: pointer to the node to measure
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = size_count(tree) + 1;
	return (count);
}
