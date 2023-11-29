#include "binary_trees.h"

/**
 * binary_tree_insert_right - Code inserts a node as right-child
 *                            of another in a binary tree.
 * @parent: The pointer to the node to insert the right-child in.
 * @value: The value to be stored in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         O/W - a pointer to the new node.
 *
 * Description: If parent already has a right-child, new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bin;

	if (parent == NULL)
		return (NULL);

	bin = binary_tree_node(parent, value);
	if (bin == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bin->right = parent->right;
		parent->right->parent = bin;
	}
	parent->right = bin;

	return (bin);
}
