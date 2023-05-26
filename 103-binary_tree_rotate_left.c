#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: the tree
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *mid;

	if (!tree)
		return(NULL);
	if (tree->parent)
		return (NULL);

	mid = tree->right;

	tree->parent = mid;
	if (mid)
	{
		tree->right = mid->left;
		if (tree->right)
			tree->right->parent = tree;

		mid->parent = NULL;
		mid->left = tree;
	}

	return (tree->parent);
}
