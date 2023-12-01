#include "binary_trees.h"

/**
 * bst_insert - Code inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: A pointer to the created node
 *         NULL on failure
 */

bst_t *bst_insert(
bst_t **tree, int value)
{
	bst_t *tmp = *tree;
	bst_t *second = NULL;
	bst_t *new = binary_tree_node(NULL, value);

	if (*tree == NULL)
		*tree = new;

	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}

	return (new);
}

/**
 * avl_insert - Code inserts a value in an AVL Tree
 * @tree: Double pointer to the root node of the AVL tree
 * @value: value to insert
 *
 * Return: pointer to the created node
 *         NULL if failure
 */

avl_t *avl_insert(avl_t **tree, int value)
{
	int bal = 0;
	avl_t *node = bst_insert(tree, value);

	bal = binary_tree_balance(*tree);

	if (bal > 1 && value < node->left->n)
		return (binary_tree_rotate_right(node));
	if (bal < -1 && value > node->right->n)
		return (binary_tree_rotate_left(node));
	if (bal > 1 && value > node->left->n)
	{
		node->left = binary_tree_rotate_left(node->left);
		return (binary_tree_rotate_right(node));
	}
	if (bal < -1 && value < node->right->n)
	{
		node->right = binary_tree_rotate_right(node->right);
		return (binary_tree_rotate_left(node));
	}

	return (node);
}
