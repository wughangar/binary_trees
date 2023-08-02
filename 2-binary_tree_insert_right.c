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
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	newnode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
