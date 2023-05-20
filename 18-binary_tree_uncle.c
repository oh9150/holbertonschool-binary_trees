#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree, if it has
 * @node: the node
 * Return: the uncle, or NULL if @node == NULL or if there's no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	if (node->parent)
		parent = node->parent;
	else
		return (NULL);

	if (parent->parent->left == parent)
		return (parent->parent->right);
	if (parent->parent->right == parent)
		return (parent->parent->left);

	return (NULL);
}
