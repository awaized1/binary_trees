#include "binary_trees.h"

/**
 * array_to_heap - builds Max Bin Heap tree from  array
 * @array: Pointer to first element of array to be converted
 * @size: the no of element in array
 *
 * Return: Pointer to root node of created Binary Heap
 *         NULL on failure
 */

heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int num;
	heap_t *root = NULL;

	for (num = 0; num < size; num++)
		heap_insert(&root, array[num]);

	return (root);
}
