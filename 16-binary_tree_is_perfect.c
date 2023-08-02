#include <stdlib.h>
#include "binary_trees.h"

/**
 * getheight - function that gets the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: int
 */

int getheight(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + getheight(tree->left) + getheight(tree->right));
}


/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect
 * @tree: pointer to the root node of the tree being checked
 *
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = getheight(tree);
	return ((height & (height + 1)) == 0);
}
