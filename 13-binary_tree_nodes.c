#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the nodes with at least one child under a given
 * tree
 * @tree: the tree
 * Return: the ammount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right, left;

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (!tree)
		return (0);
	if (!(tree->right || tree->left))
		return (0);

	return (left + right + 1);
}
