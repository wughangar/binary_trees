#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function to calculate the size of a tree
 * @tree: pointer to root node
 *
 * Return: int
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	size = 1 + lsize + rsize;

	return (size);
}
