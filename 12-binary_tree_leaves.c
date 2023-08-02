#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts leaves in binary tree
 * @tree: pointer to root node
 *
 * Return: int
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;
	size_t lcount, rcount = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	rcount = binary_tree_leaves(tree->right);
	lcount = binary_tree_leaves(tree->left);
	sum = rcount + lcount;

	return (sum);
}
