#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts node with altleast one child
 * @tree: pointer to root node
 *
 * Return: int
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnodes;
	size_t rnodes;

	if (tree == NULL)
		return (0);

	lnodes = binary_tree_nodes(tree->left);
	rnodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + lnodes + rnodes);

	return (lnodes + rnodes);
}
