#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks is a binary tree is perfect
 * @tree: the tree
 * Return: 1 if perfect, 0 otherwise or if @tree == NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
		return (1);
	return (0);
}

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

/**
 * binary_tree_balance - finds the balance of a binary tree
 * @tree: the tree
 * Return: the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	if (!tree->parent)
		return (left - right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
