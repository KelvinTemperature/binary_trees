#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of the node
 *
 * @node: pointer to the node to find
 * Return: pointer to sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
