#include "binary_trees.h"

/**
 * binary_tree_sibling - sibling in tree
 * @node: pointer to the node
 * Return: pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (node == parent->left)
		return (parent->right);

	return (parent->left);
}
