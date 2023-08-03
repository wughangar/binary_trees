#include <stdlib.h>
#include "binary_trees.h"

/**
 * is_ancestor - function to check if node is an ancestor of another node
 * @root: pointer to root node
 * @node: pointer to node
 *
 * Return: int
 */

int is_ancestor(const binary_tree_t *root, const binary_tree_t *node)
{
	if (root == NULL)
		return (0);
	if (root == node)
		return (1);

	return (is_ancestor(root->left, node) || is_ancestor(root->right, node));
}

/**
 * binary_trees_ancestor - fucntion that finds the lca of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lca
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;

	while (ancestor)
	{
		if (is_ancestor(ancestor, second))
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}
