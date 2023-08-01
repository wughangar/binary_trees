#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node as left-child
 * @parent: pointer to node to insert in left child
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL if it fails or parent is null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
