#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: the tree
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return(NULL);

	if (tree->parent)
		return (NULL);

	tree->parent = tree->right;

	/* setting the bottom node*/
	if (tree->right)
	{
		tree->parent->parent = NULL;
		tree->right = tree->right->left;
		if (tree->right->left)
			tree->right->left->parent = tree;
	}

	return (tree->parent);
}
