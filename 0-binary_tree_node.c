#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: the address of the node, NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (!parent)
		;
	else if (!parent->right)
		parent->right = new_node;
	else if (!parent->left)
		parent->left = new_node;
	else
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
