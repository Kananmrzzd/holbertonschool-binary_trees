#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves
 * @tree: tree
 *
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return ((!tree->left && !tree->right) + l + r);
}
