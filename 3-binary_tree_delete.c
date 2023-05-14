#include "binary_trees.h"

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
			free(tmp);
		}
	}
}
