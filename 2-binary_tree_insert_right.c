#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a leaf at the right of a parent node.
 * If there's already a node, it becomes the new node's right child.
 * @parent: the parent node
 * @value: the value of the new node
 * Return: the address of the new node, NULL if it failed.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	if (parent->right)
		(parent->right)->parent = new_node;
	new_node->right = parent->right;
	parent->right = new_node;

	return (new_node);
}
