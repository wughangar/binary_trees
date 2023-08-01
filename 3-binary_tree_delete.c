#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree : pointer to root node of the tree to be deleted
 *
 * Retuen: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
