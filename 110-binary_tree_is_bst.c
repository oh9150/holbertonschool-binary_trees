#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a binary search tree
 * @tree: the tree
 * Return: 1 if @tree is a binary search tree, 0 otherwise or if tree == NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_is_bst(tree->left);
	if (tree->right)
		right = binary_tree_is_bst(tree->right);

	if (tree->right && (left != 0) && (right != 0))
	{
		if (!tree->left)
			return (0);
		if (tree->left->n < tree->right->n)
			return (1);
	}
	return (0);
}
