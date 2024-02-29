#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: pointer to the node to measure
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	count = binary_tree_depth(tree->parent) + 1;
	return (count);
}
