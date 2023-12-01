#include "binary_trees.h"

/**
 * tree_size - measures the sum of heights of a binary tree
 * @tree: A pointer to root node of the tree to measure the height
 *
 * Return: height or 0 if tree is NULL
 */

size_t tree_size(const binary_tree_t *tree)
{
	size_t height_t = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_t = 1 + tree_size(tree->left);

	if (tree->right)
		height_r = 1 + tree_size(tree->right);

	return (height_t + height_r);
}

/**
 * heap_to_sorted_array - Code converts a Binary Max Heap
 * to be sorted array of int
 *
 * @heap: pointer to root node of the heap to convert
 * @size: address to store size of the array
 *
 * Return: The pointer to array sorted in descending order
 */

int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int num, *a = NULL;

	if (!heap || !size)
		return (NULL);

	*size = tree_size(heap) + 1;

	a = malloc(sizeof(int) * (*size));

	if (!a)
		return (NULL);

	for (num = 0; heap; num++)
		a[num] = heap_extract(&heap);

	return (a);
}
