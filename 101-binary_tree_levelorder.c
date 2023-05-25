#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary using level order traversal
 * @tree: the tree
 * @func: the function to execute on each node's value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

