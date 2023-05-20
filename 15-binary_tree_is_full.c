#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to check
 * Return: 1 if full, 0 otherwise or if @tree == NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_is_full_recursive(tree);
}
/**
 * binary_tree_is_full_recursive - recursive function to check if a binary
 * tree is full
 * @tree: the tree
 * Return: 0 if full, 1 otherwise.
 */
int binary_tree_is_full_recursive(const binary_tree_t *tree)
{
	int children = 0, left, right;

	if (!tree)
		return (1);

	if (tree->left)
		children++;
	if (tree->right)
		children++;
	if (children == 1)
		return (0);

	left = binary_tree_is_full_recursive(tree->left);
	right = binary_tree_is_full_recursive(tree->right);

	if (left == 0 || right == 0)
		return (0);

	return (1);
}
