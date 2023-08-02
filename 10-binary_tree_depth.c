#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - funstion that measures the height of a binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: int
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
