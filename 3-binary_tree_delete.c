#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: the root node
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	while (tree)
	{
		if (tree->left)
			tree = tree->left;
		else if (tree->right)
			tree = tree->right;
		else
		{
			tmp = tree->parent;
			tree = tree->parent;
			free(tmp);
		}
	}
}