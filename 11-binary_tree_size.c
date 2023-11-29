#include "binary_trees.h"

/**
 * binary_tree_size - Code measures size of binary tree.
 * @tree: The pointer to root node of tree to measure the size of.
 *
 * Return: Size of tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t big = 0;

	if (tree)
	{
		big += 1;
		big += binary_tree_size(tree->left);
		big += binary_tree_size(tree->right);
	}
	return (big);
}
