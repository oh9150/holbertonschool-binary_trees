#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left of a parent node.
 * If there's already a node, it becomes the new node's left child.
 * @parent: the parent node
 * @value: the value of the new node
 * Return: the address of the new node, NULL if it failed.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->right = NULL;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->n = value;

	if (parent->left)
		parent->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
