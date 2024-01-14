#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts to right
 * @parent: parent
 * @value: value of new node
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (parent->right);
}
