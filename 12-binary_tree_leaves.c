#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in binary tree
 * @tree: pointer to current node
 * Return: returns count of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	if ((!(tree->left)) && (!(tree->right)))
		return (1);
	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
