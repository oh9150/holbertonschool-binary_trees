#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary using level order traversal
 * @tree: the tree
 * @func: the function to execute on each node's value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = binary_tree_height(tree), i;

	if (!tree || !func)
		return;

	for (i = 0; i <= h; i++)
		print_level(tree, i, func);
}

/**
 * print_level - goes through a level in a binary tree
 * @tree: the tree
 * @level: the level to go through
 * @func: the function to execute on each node
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 0)
	{
		func(tree->n);
		return;
	}
	print_level(tree->left, level - 1, func);
	print_level(tree->right, level - 1, func);
}

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: the tree
 * Return: the height of the tree or 0 if tree == NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
