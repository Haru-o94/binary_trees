#include "binary_trees.h"

/**
 * array_to_bst - binary search
 * @array: pointer to the first element
 * @size: size
 * Return: pointer to the root
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t lenght;
	bst_t *tree = NULL;

	for (lenght = 0; lenght < size; lenght++)
		bst_insert(&tree, array[lenght]);

	return (tree);
}
