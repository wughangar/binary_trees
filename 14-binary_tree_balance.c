#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_height - function to calculate binary tree height
 *@tree: pointer to root node
 *
 *Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight;
	size_t rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return (lheight > rheight ? lheight + 1 : rheight + 1);
}

/**
 * binary_tree_balance - function that measure balance factor of a tree
 * @tree: pointer to the root node.
 *
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	int lheight;
	int rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	balance = rheight - lheight;

	return (balance);
}
