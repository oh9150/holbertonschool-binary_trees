#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a given node
 * @tree: the node
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
