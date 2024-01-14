#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts to left
 * @parent: parent
 * @value: value of new node
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;

	return (parent->left);
}
