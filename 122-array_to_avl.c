#include "binary_trees.h"

/**
 * array_to_avl - Code builds an AVL tree from an array
 * @array: The array to create from
 * @size: The size of the array
 *
 * Return: Pointer to the root node of the created AVL tree
 *         NULL on failure
 */

avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int num;
	avl_t *root = NULL;

	for (num = 0; num < size; num++)
		avl_insert(&root, array[num]);

	return (root);
}
