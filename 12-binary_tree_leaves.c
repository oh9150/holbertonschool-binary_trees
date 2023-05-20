#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the ammount of leaves (nodes with no children) under a given tree
 * @tree: the tree
 * Return: the ammount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!(tree->right || tree->left))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
