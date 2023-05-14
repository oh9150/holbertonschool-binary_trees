#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf(has no children)
 * @node: the node to check
 * Return: 1 if it's a leaf, 0 if not or @node == NULL
 */
int binary_tree_is_leaf(binary_tree_t *node)
{
	if (!node)
		return (0);
	
	if (node->left || node->right)
		return (0);

	return (1);
}
