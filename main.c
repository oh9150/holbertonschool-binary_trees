#include "binary_trees.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	binary_tree_t *new_node;
	new_node = binary_tree_node(NULL, 3);

	if (new_node)
		printf("%p\n", new_node);
	else
		printf("Failed\n");

	return (0);
}
