#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Code checks if node is a leaf of binary tree.
 * @node: The pointer to node to check.
 *
 * Return: If the node is a leaf - 1.
 *         O/W - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
