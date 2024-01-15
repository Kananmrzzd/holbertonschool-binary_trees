#include "monty.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int l = 0;

	if (tree)
	{
		if (tree->right)
			l += 1;
		if (tree->left)
			l += 1;
	}

	return (l);
}		
