#include "binary_trees.h"
#define max(x, y) (((x) >= (y)) ? (x) : (y))

/**
 * binary_tree_height - gets heigth
 * @tree: tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (-1);

	if (!tree->left && !tree->right)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (1 + max(l, r));
}

/**
 * binary_tree_balance - check balance factor
 * @tree: tree
 *
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}