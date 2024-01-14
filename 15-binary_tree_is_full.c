#include "binary_trees.h"
#define xnor(a, b) (((a) && (b)) || (!(a) && !(b)))

/**
 * binary_tree_is_full - checks is tree full
 * @tree: tree
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 1, r = 1;

	if (!tree)
		return (0);

	if (tree->left)
		l = binary_tree_is_full(tree->left);

	if (tree->right)
		r = binary_tree_is_full(tree->right);

	return (xnor(tree->left, tree->right) && l && r);
}
