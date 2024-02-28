#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse the tree using pre-order
 *
 * @tree: pointer to root of tree
 * @func: pointer to function that calls each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	printf("%d\n", tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
