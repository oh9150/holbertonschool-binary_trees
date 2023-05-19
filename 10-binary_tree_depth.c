#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a given node
 * @tree: the node
 *
 * Return: the depth of the node, or 0 tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
