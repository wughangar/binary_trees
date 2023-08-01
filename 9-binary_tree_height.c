#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - funstion that measures the height of a binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
	{
		return (lheight + 1);
	}
	else
		return (rheight + 1);
}
