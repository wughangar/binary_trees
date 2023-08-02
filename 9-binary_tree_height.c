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
	int lheight, rheight, height = 0;

	if (tree == NULL)
		return (0);

	lheight = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rheight = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	height += (lheight > rheight ? lheight : rheight);

	return (height);
}
