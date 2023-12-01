#include "binary_trees.h"

/**
 * array_to_bst - ode builds a Binary Searches Tree from given array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: A pointer to the root node of the created BST
 *         NULL if failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int num;
	bst_t *root = NULL;

	for (num = 0; num < size; num++)
		bst_insert(&root, array[num]);

	return (root);
}
