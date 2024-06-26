#include "binary_trees.h"

/**
 * binary_tree_leaves - leave of binary tree
 *
 * @tree: If tree is NULL, the function must return 0
 * Return: null or tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	count_leaves += binary_tree_leaves(tree->left);
	count_leaves += binary_tree_leaves(tree->right);

	return (count_leaves);
}
