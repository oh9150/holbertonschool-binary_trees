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
