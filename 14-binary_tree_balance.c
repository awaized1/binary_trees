#include "binary_trees.h"

/**
 * binary_tree_balance - Code measures balance factor of a binary tree.
 * @tree: The pointer to a root node of a tree to measure balance factor.
 *
 * Return: If tree is NULL - return 0, else - return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Code measures height of a binary tree.
 * @tree: The pointer to root node of tree to measure the height.
 *
 * Return: If tree is NULL, return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
