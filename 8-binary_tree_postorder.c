#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - function using in-order traversal
 * @tree: pointer to root node
 * @func: pointer to function call for each node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
