#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: the tree
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *mid;

	if (!tree)
		return (NULL);
	if (tree->parent)
		return (NULL);

	mid = tree->left;

	tree->parent = mid;
	if (mid)
	{
		tree->left = mid->right;
		if (tree->left)
			tree->left->parent = tree;

		mid->parent = NULL;
		mid->right = tree;
	}

	return (tree->parent);
}
