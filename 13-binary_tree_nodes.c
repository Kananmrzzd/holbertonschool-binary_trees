#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (tree && (tree->right || tree->left))
	{
		cnt += 1;
		cnt += binary_tree_nodes(tree->left);
		cnt += binary_tree_nodes(tree->right);
	}

	return (cnt);
}
