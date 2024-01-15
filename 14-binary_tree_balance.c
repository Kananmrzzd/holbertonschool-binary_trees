#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: tree size
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int leftH;
	int rightH;

	if (tree)
	{
		balance += 1;
		leftH += binary_tree_size(tree->left);
	}


	return (s);
}
