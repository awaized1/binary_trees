#include "binary_trees.h"

/**
 * binary_tree_insert_left - Code inserts node as left-child of
 *                           of another in a binary tree.
 * @parent: he pointer to node that insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         Otherwise - The pointer to new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
