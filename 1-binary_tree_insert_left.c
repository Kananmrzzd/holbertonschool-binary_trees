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
	if (!parent)
		return (NULL);

	parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
