#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @tree: the node
 * Return: a pointer to the sibling or NULL if the node is NULL or there's no
 * sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (tree->right);
	if (node->parent->right == node)
		return (tree->left);

	return (NULL);
}
