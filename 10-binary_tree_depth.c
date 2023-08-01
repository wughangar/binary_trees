#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - funstion that measures the height of a binary tree
 * @tree: pointer to root node of the tree
 *
 * Return: int
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ldepth = 0;
	size_t rdepth = 0;

	if (tree == NULL)
		return (0);

	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);

	if (ldepth > rdepth)
		return (ldepth + 1);
	else
		return (rdepth + 1);
}

int main(void)
{
    binary_tree_t *root;
    size_t depth;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);
    return (0);
}
