#include "binary_trees.h"

/**
 * compare_depth - compare size in depth
 * @tree: pointer to the root
 * Return: return size
 */
int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks
 * @tree: pointer to the root node
 * Return: 0 otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = compare_depth(tree->left);
	h_right = compare_depth(tree->right);

	if ((h_left - h_right) == 0)
		return (1);

	return (0);
}
