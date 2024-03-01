#include "binary_trees.h"

/**
 * check_node - checks if a node is a parent
 *
 * @tree: node to check
 * Return: 0 or 1
 */

size_t check_node(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree && (tree->left || tree->right))
		count = 1;

	return (count);
}

/**
 * binary_tree_nodes - counts the nodes that are parent
 *
 * @tree: pointer to the tree
 * Return: number of nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (check_node(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
