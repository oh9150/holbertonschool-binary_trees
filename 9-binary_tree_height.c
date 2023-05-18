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

	return (binary_tree_height_recursive(tree, 1));
}

/**
 * binary_tree_height_recursive - recursive function to find the height
 * @tree: the tree
 * @value: the value
 * Return: the height
 */
size_t binary_tree_height_recursive(const binary_tree_t *tree, size_t value)
{
	if (!tree)
		return (value - 1);

	binary_tree_height_recursive(tree->left, value);
	binary_tree_height_recursive(tree->right, value);
}
