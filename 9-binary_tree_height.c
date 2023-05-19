#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: the tree
 * Return: the height of the tree or 0 if tree == NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_recursive(tree));
}

/**
 * binary_tree_height_recursive - recursive function to find the height
 * @tree: the tree
 * @height: the current height
 * @max_height: the max height
 * Return: the height
 */
size_t binary_tree_height_recursive(const binary_tree_t *tree)
{
	size_t left, right;
	if (!tree)
		return (0);

	left = binary_tree_height_recursive(tree->left);
	right = binary_tree_height_recursive(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
