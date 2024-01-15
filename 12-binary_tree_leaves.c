#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: tree size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l = 0;

	if (tree)
	{
		if (tree->right && tree->left)
			l += 1;

		binary_tree_leaves(tree->right);
		binary_tree_leaves(tree->left);
	}

	return (l);
}		
