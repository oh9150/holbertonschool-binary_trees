#include "binary_trees.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	binary_tree_t *new_node;
	new_node = binary_tree_node(NULL, 3);
	new_node->left = binary_tree_node(new_node, 4);
	new_node->right = binary_tree_node(new_node, 5);

	printf("%d, %d, %d\n", new_node->n, (new_node->left)->n, (new_node->right)->n);

	return (0);
}
