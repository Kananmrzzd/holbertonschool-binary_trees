#include "binary_trees.h"

/**
 * binary_tree_size - the size of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}

	return (s);
}
