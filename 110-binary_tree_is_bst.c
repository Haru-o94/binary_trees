#include "binary_trees.h"

/**
 * isBST - compare in order
 *
 * @tree: pointer to the root node in tree
 * @min: min value
 * @max: max value
 *
 * Return: 1 if success, 0 otherwise
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst - binary tree if vaild
 *
 * @tree: pointer to the root
 * Return: 1 if success, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
