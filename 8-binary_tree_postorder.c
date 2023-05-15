#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal
 * @tree: the tree to traverse
 * @func: the function to call on each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
