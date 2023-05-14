#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a binary tree's node is a root
 * @node: the node to check
 *
 * Return: 1 if it's a root, 0 otherwise or if @node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (1);
	return (0);
}
