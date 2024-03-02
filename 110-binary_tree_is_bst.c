#include "binary_trees.h"

int is_subtree_lesser(const binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (0);

	if (tree->n <= value
		&& is_subtree_lesser(tree->left, value)
		&& is_subtree_lesser(tree->right, value))
		return (1);
	else
		return (0);
}

int is_subtree_greater(const binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (0);

        if (tree->n > value
		&& is_subtree_greater(tree->left, value)
		&& is_subtree_greater(tree->right, value))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_bst - checks if a bin-tree is a valid bst
 *
 * @tree: pointer at the root of the tree
 * Return: 1 or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (is_subtree_lesser(tree->left, tree->n)
	    && is_subtree_greater(tree->right, tree->n)
	    && binary_tree_is_bst(tree->left)
	    && binary_tree_is_bst(tree->right))
		return (1);
	else
		return (0);
}
