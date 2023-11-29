#include "binary_trees.h"

/**
 * binary_tree_leaves - Code counts leaves in a binary tree.
 * @tree: The pointer to root node of the tree to count the leaves of.
 *
 * Return: The no of leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no = 0;

	if (tree)
	{
		no += (!tree->left && !tree->right) ? 1 : 0;
		no += binary_tree_leaves(tree->left);
		no += binary_tree_leaves(tree->right);
	}
	return (no);
}
