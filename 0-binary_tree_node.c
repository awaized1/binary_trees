#include "binary_trees.h"

/**
 * binary_tree_node - Code creates binary tree node.
 * @parent: The pointer to the parent of the node to create.
 * @value: The value to put in the node.
 *
 * Return: If an error occurs - NULL.
 *         O/W - The pointer to a new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bin;

	bin = malloc(sizeof(binary_tree_t));
	if (bin == NULL)
		return (NULL);

	bin->n = value;
	bin->parent = parent;
	bin->left = NULL;
	bin->right = NULL;

	return (bin);
}
