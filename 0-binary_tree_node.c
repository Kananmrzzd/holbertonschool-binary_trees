#include "binary_trees.h"

/**
 * binary_tree_node - that creates a binary tree node
 * @parent: root of tree
 * @value: value of tree node
 *
 * Return: binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Node = malloc(sizeof(binary_tree_t));

	if (Node == Null)
		return (Null);

	Node->parent = parent;
	Node->left = NULL;
	Node->right = NULL;
	Node->n = value;

	return (Node);
};
