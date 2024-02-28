#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the tree using pre-order
 *
 * @tree: pointer to root of tree
 * @func: pointer to function that calls each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	printf("%d\n", tree->n);
}
