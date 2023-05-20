#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree, if it has
 * @node: the node
 * Return: the uncle, or NULL if @node == NULL or if there's no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);
	node = node->parent;
	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
