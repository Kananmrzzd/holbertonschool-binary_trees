#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if tree is leaf
 * @node: node
 *
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
