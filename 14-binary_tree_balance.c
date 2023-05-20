#include "binary_trees.h"

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
	if (left > right)
		return (left + 1);
	return (right + 1);
}
