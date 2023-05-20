#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to check
 * Return: 1 if full, 0 otherwise or if @tree == NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int children = 0;

	if (tree->left)
		children++;
	if (tree->right)
		children++;

	if (children == 1)
		return (0);
	if (binary_tree_is_full(tree->left) == 0 ||
			binary_tree_is_full(tree->right) == 0)
		return (0);

		return (1);
}
