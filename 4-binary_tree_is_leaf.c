#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if nofr is a leaf
 * @node: pointer to node being checked
 *
 * Return: NULL if node is empty, 1 id node is lead otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
