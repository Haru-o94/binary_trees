#include "binary_trees.h"

/**
 * btl - btl level
 *
 * @tree: pointer to tree root
 * Return: integer
 */

int btl(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	h_left = btl(tree->left);
	h_right = btl(tree->right);
	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}


/**
 * bt_balance - bt balance
 *
 * @tree: pointer to tree root
 * Return: integer
 */

int bt_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (btl(tree->left) - btl(tree->right));
}

/**
 * bavl - bavl level
 *
 * @tree: pointer to tree root
 * @min: min
 * @max: max
 * Return: 1 if is AVL, 0 otherwise
 */

int bavl(const binary_tree_t *tree, int min, int max)
{
	int balance_left, balance_right, balance;

	if (tree == NULL)
		return (1);
	if (tree->n > max || tree->n < min)
		return (0);
	balance = bt_balance(tree);
	if (balance < -1 || balance > 1)
		return (0);
	balance_left = bavl(tree->left, min, tree->n - 1);
	balance_right = bavl(tree->right, tree->n + 1, max);
	if (balance_left == 1 && balance_right == 1)
		return (1);
	return (0);
}

/**
 * binary_tree_is_avl - tree avl
 * @tree: pointer to the tree root
 *
 * Return: 1 if tree is a valid AVL, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bavl(tree, INT_MIN, INT_MAX));

}
