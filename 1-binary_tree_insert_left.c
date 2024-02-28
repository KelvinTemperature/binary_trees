#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node the left of parent node
 *
 * @parent: pointer to parent node
 * @value: value to insert to the node
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = new_node;
		tmp->parent = new_node;
		new_node->left = tmp;
	}
	parent->left = new_node;

	return (new_node);
}
