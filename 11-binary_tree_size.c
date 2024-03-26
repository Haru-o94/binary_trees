#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 *
 * @tree: pointer to the root
 * Return: size or 0 if tree is NULL or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 1;

	if (!tree)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i);
}
