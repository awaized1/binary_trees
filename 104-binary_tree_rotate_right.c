#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Code performs right-rotation on a binary tree
 * @tree: a pointer to root node of tree to check
 *
 * Return: Pointer to the new root node of the tree once rotated
 *         NULL if failure
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);
	temp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		temp->left = tree->right;
		tree->right->parent = temp;
	}
	else
		temp->left = NULL;
	temp->parent = tree;
	tree->right = temp;
	if (parent)
		parent->left = tree;
	tree->parent = parent;
	return (tree);
}
