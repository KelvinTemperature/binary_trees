#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: root of the binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
	}
	else if (tree->left != NULL)
		binary_tree_delete(tree->left);
	else if (tree->right != NULL)
		binary_tree_delete(tree->right);
}
