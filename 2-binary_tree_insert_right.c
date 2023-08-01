#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts node as right-child
 * @parent: pointer to node to insert in left child
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL if it fails or parent is null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(NULL, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	newnode->parent = parent;

	return (newnode);
}
