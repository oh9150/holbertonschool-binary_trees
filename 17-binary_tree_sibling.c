#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @tree: the node
 * Return: a pointer to the sibling or NULL if the node is NULL or there's no
 * sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
	binary_tree_t *old = tree;

	if (!tree)
		return (NULL);

	if (tree->parent)
		tree = tree->parent;
	else
		return (NULL);

	if (tree->left == old)
		return (tree->left);
	if (tree->right == old)
		return (tree->right);

	return (NULL);
