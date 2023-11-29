#include "binary_trees.h"

/**
 * binary_tree_is_root - Code checks if node is 
 * 			 a root of a binary tree.
 * @node: The pointer to node to check.
 *
 * Return: If the node is a root - 1.
 *         O/W - 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
