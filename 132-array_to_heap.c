#include "binary_trees.h"

/**
 * array_to_heap - max binary heap
 *
 * @array: pointer
 * @size: number
 * Return: pointer to the root
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array)
		return (NULL);

	root = heap_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
