#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to th parent node of the node created
 * @value: value put in the node
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (struct binary_tree_s *)malloc(sizeof(struct binary_tree_s));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
