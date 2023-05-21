#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of 2 nodes in a
 * binary tree
 * @first: the first node
 * @second: the second node
 * Return: the lowest common ancestor or NULL if it wasn't found or if either
 * of the nodes == NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int depth1, depth2;

	if (!first || !second)
		return (NULL);

	depth1 = binary_tree_depth (first);
	depth2 = binary_tree_depth (second);

	if (depth1 > depth2)
		binary_trees_ancestor(first, second->parent);
	if (depth1 < depth2)
		binary_trees_ancestor(first->parent, second);
	else
	{
		if (first->parent == second->parent)
			return (first->parent);

		binary_trees_ancestor(first->parent, second->parent);
	}
	return (NULL);
}

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
