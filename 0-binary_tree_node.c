#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (!parent->left)
		parent->left = new_node;

	else if (!parent->right)
		parent->right = new_node;

	else
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
